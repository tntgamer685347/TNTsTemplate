#pragma once
#include "../GameDefines.hpp"


inline bool validUObject(const UObject* obj)
{
	return obj && !(obj->ObjectFlags & RF_BadObjectFlags);
}

inline bool sameId(const FUniqueNetId& left, const FUniqueNetId& right)
{
	return (left.EpicAccountId == right.EpicAccountId) && (left.Uid == right.Uid);
}


// ###############################################################################################
// #################################    Unreflected UE3 Stuff    #################################
// ###############################################################################################

typedef float         FLOAT;
typedef uint8_t       BYTE;     // 8-bit  unsigned.
typedef int32_t       INT;      // 32-bit signed.
typedef uint32_t      UINT;     // 32-bit unsigned.
typedef UINT          UBOOL;    // Boolean 0 (false) or 1 (true).
typedef unsigned long BITFIELD; // For bitfields.
typedef double        DOUBLE;   // 64-bit IEEE double.

class UObject;
class UStruct;
class UFunction;

/*
    Node    - Function to be exectued
    Object  - Calling object (context in which the function will be executed)
    Code    - Offset in script array of function which gets executed (ProcessInternal calls Stack.Step until end of function)
    Locals  - Params of the function which gets executed
*/
struct FFrame
{
	BYTE     padding0[0x10]; // 0x0008 <-- 8 byte offset bc vtable ptr occupies first 8 bytes
	UStruct* Node;           // 0x0018
	UObject* Object;         // 0x0020
	BYTE*    Code;           // 0x0028
	BYTE*    Locals;         // 0x0030
	INT      LineNum;        // 0x0038
	BYTE     padding1[0x4];  // 0x003C
	FFrame*  PreviousFrame;  // 0x0040

	virtual void func0();
	virtual void func1();
	virtual void func2(); // just returns a value (1 asm instruction)
	virtual void func3(); // just returns a value (1 asm instruction)
}; // Size: 0x0048

#define RESULT_DECL void* const Result

using tCallFunction    = void (*)(UObject*, FFrame&, void* const, UFunction*); 
using tProcessInternal = void (*)(UObject*, FFrame&, void* const);
using tProcessEvent    = void (*)(UObject*, UFunction*, void*, void*); // Calling object, Function, Struct ptr with params, Unused result


// TLinkedList:
// https://github.com/CodeRedModding/UnrealEngine3/blob/7bf53e29f620b0d4ca5c9bd063a2d2dbcee732fe/Development/Src/Core/Inc/List.h#L18
template <class ElementType> class TLinkedList
{
public:
	/**
	 * Used to iterate over the elements of a linked list.
	 */
	class TIterator
	{
	private:
		// private class for safe bool conversion
		struct PrivateBooleanHelper
		{
			INT Value;
		};

	public:
		TIterator(TLinkedList* FirstLink) : CurrentLink(FirstLink) {}

		/**
		 * Advances the iterator to the next element.
		 */
		void Next()
		{
			checkSlow(CurrentLink);
			CurrentLink = CurrentLink->NextLink;
		}

		TIterator& operator++()
		{
			Next();
			return *this;
		}

		TIterator operator++(int)
		{
			TIterator Tmp(*this);
			Next();
			return Tmp;
		}

		/** conversion to "bool" returning TRUE if the iterator is valid. */
		typedef bool PrivateBooleanType;
		operator PrivateBooleanType() const { return CurrentLink != NULL ? &PrivateBooleanHelper::Value : NULL; }
		bool operator!() const { return !operator PrivateBooleanType(); }

		// Accessors.
		ElementType& operator->() const
		{
			checkSlow(CurrentLink);
			return CurrentLink->Element;
		}
		ElementType& operator*() const
		{
			checkSlow(CurrentLink);
			return CurrentLink->Element;
		}

	private:
		TLinkedList* CurrentLink;
	};

	// Constructors.
	TLinkedList() : NextLink(NULL), PrevLink(NULL) {}
	TLinkedList(const ElementType& InElement) : Element(InElement), NextLink(NULL), PrevLink(NULL) {}

	/**
	 * Removes this element from the list in constant time.
	 *
	 * This function is safe to call even if the element is not linked.
	 */
	void Unlink()
	{
		if (NextLink)
		{
			NextLink->PrevLink = PrevLink;
		}
		if (PrevLink)
		{
			*PrevLink = NextLink;
		}
		// Make it safe to call Unlink again.
		NextLink = NULL;
		PrevLink = NULL;
	}

	/**
	 * Adds this element to a list, before the given element.
	 *
	 * @param Before	The link to insert this element before.
	 */
	void Link(TLinkedList*& Before)
	{
		if (Before)
		{
			Before->PrevLink = &NextLink;
		}
		NextLink = Before;
		PrevLink = &Before;
		Before   = this;
	}

	/**
	 * Returns whether element is currently linked.
	 *
	 * @return TRUE if currently linked, FALSE othwerise
	 */
	bool IsLinked() { return PrevLink != NULL; }

	// Accessors.
	ElementType&       operator->() { return Element; }
	const ElementType& operator->() const { return Element; }
	ElementType&       operator*() { return Element; }
	const ElementType& operator*() const { return Element; }
	TLinkedList*       Next() { return NextLink; }

private:
	ElementType   Element;
	TLinkedList*  NextLink;
	TLinkedList** PrevLink;
};

// FMipBiasFade:
// https://github.com/CodeRedModding/UnrealEngine3/blob/7bf53e29f620b0d4ca5c9bd063a2d2dbcee732fe/Development/Src/Engine/Inc/UnRenderUtils.h#L611
struct FMipBiasFade
{
	FLOAT TotalMipCount;      // Number of mip - levels in the texture.
	FLOAT MipCountDelta;      // Number of mip-levels to fade (negative if fading out / decreasing the mipcount).
	FLOAT StartTime;          // Timestamp when the fade was started.
	FLOAT MipCountFadingRate; // Number of seconds to interpolate through all MipCountDelta (inverted).
	FLOAT BiasOffset;         // Difference between total texture mipcount and the starting mipcount for the fade.
};

// EShaderFrequency:
// https://github.com/CodeRedModding/UnrealEngine3/blob/7bf53e29f620b0d4ca5c9bd063a2d2dbcee732fe/Development/Src/Engine/Inc/ShaderCompiler.h#L9
enum EShaderFrequency
{
	SF_Vertex         = 0,
	SF_Hull           = 1,
	SF_Domain         = 2,
	SF_Pixel          = 3,
	SF_Geometry       = 4,
	SF_Compute        = 5,
	SF_NumFrequencies = 6,
};

// forward declarations to make it compile (make sure to include "d3d11.h" before this file if you plan on using these
// types)
class FD3D11DynamicRHI;
class ID3D11ShaderResourceView;
class ID3D11RenderTargetView;
class ID3D11DepthStencilView;
class ID3D11Texture2D;

// FD3D11Texture2D:
// https://github.com/CodeRedModding/UnrealEngine3/blob/7bf53e29f620b0d4ca5c9bd063a2d2dbcee732fe/Development/Src/D3D11Drv/Inc/D3D11Resources.h#L327
struct FD3D11Texture2D
{
	ID3D11ShaderResourceView* View;
	ID3D11ShaderResourceView* ViewLinear;
	ID3D11RenderTargetView*   RenderTargetView;
	ID3D11DepthStencilView*   DepthStencilView;
	TArray<INT>               BoundShaderResourceSlots[SF_NumFrequencies];
	const UINT                SizeX;
	const UINT                SizeY;
	const UINT                SizeZ;
	const UINT                NumMips;
	EPixelFormat              Format;
	FD3D11DynamicRHI*         D3DRHI;
	INT                       MemorySize;
	ID3D11Texture2D*          Resource;
	const BITFIELD            bCubemap : 1;
	UINT                      Flags;

	FORCEINLINE ID3D11ShaderResourceView* GetShaderResourceView() { return View; }
	virtual void                          DummyForVptr() {}
}; // Size: 0x00C0

// FRenderResource:
// https://github.com/CodeRedModding/UnrealEngine3/blob/main/Development/Src/Engine/Inc/RenderResource.h#L9
struct FRenderResource
{
	TLinkedList<FRenderResource*>* ResourceLink; // was previously a TLinkedList class (not pointer) before RL update v2.54 (7/29/25)
	BITFIELD                       bInitialized : 1;

	virtual ~FRenderResource() {}
};

// FTexture:
// https://github.com/CodeRedModding/UnrealEngine3/blob/main/Development/Src/Engine/Inc/RenderResource.h#L127
struct FTexture : public FRenderResource
{
	FD3D11Texture2D* TextureRHI;       // The texture's RHI resource.
	void*            SamplerStateRHI;  // The sampler state to use for the texture.
	mutable DOUBLE   LastRenderTime;   // The last time the texture has been bound
	FMipBiasFade     MipBiasFade;      // Base values for fading in/out mip-levels.
	UBOOL            bGreyScaleFormat; // TRUE if the texture is in a greyscale texture format.

	/**
	 * TRUE if the texture is in the same gamma space as the intended rendertarget (e.g. screenshots).
	 * The texture will have sRGB==FALSE and bIgnoreGammaConversions==TRUE, causing a non-sRGB texture lookup
	 * and no gamma-correction in the shader.
	 */
	UBOOL bIgnoreGammaConversions;
};

// As a member of UTexture:
// https://github.com/CodeRedModding/UnrealEngine3/blob/main/Development/Src/Engine/Inc/EngineTextureClasses.h#L380
//
// FTextureResource:
// https://github.com/CodeRedModding/UnrealEngine3/blob/main/Development/Src/Engine/Inc/UnTex.h#L33
struct FTextureResource : public FTexture
{
	FRenderCommandFence ReleaseFence; // 0x0050
}; // Size: 0x0058

