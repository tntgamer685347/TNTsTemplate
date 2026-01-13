/*
#############################################################################################
# Rocket League SDK (RLSDK) Season 20 (v2.61)
# Generated with CodeRedGenerator v1.1.5 on 11/05/2025 07:11PM
# ========================================================================================= #
# File: Core_structs.hpp
# ========================================================================================= #
# Psyonix Build ID: 251020.62592.500294
# Build Date: Oct 20 2025 19:02:19
# ========================================================================================= #
# Credits: ItsBranK, TheFeckless, SSLow
# Links: www.github.com/CodeRedModding/CodeRed-Generator, discord.gg/d5ahhQmJbJ
#############################################################################################
*/
#pragma once

#ifdef _MSC_VER
#pragma pack(push, 0x1)
#endif

/*
# ========================================================================================= #
# Structs
# ========================================================================================= #
*/

// ScriptStruct Core.Object.Rotator
// Size: 0x000C
struct FRotator
{
	int32_t                                            Pitch;                                         // 0x0000 (0x0004) [0x0000000000000001] (CPF_Edit)    
	int32_t                                            Yaw;                                           // 0x0004 (0x0004) [0x0000000000000001] (CPF_Edit)    
	int32_t                                            Roll;                                          // 0x0008 (0x0004) [0x0000000000000001] (CPF_Edit)    
};

// ScriptStruct Core.Object.Vector
// Size: 0x000C
struct FVector
{
	float                                              X;                                             // 0x0000 (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              Y;                                             // 0x0004 (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              Z;                                             // 0x0008 (0x0004) [0x0000000000000001] (CPF_Edit)    
};

// ScriptStruct Core.Object.Plane
// 0x0004 (0x000C - 0x0010)
struct FPlane : FVector
{
	float                                              W;                                             // 0x000C (0x0004) [0x0000000000000001] (CPF_Edit)    
};

// ScriptStruct Core.Object.Guid
// Size: 0x0010
struct FGuid
{
	int32_t                                            A;                                             // 0x0000 (0x0004) [0x0000000000000000]               
	int32_t                                            B;                                             // 0x0004 (0x0004) [0x0000000000000000]               
	int32_t                                            C;                                             // 0x0008 (0x0004) [0x0000000000000000]               
	int32_t                                            D;                                             // 0x000C (0x0004) [0x0000000000000000]               
};

// ScriptStruct Core.Object.Array_Mirror
// Size: 0x0010
struct FArray_Mirror
{
	struct FPointer                                    Data;                                          // 0x0000 (0x0008) [0x0000000000001002] (CPF_Const | CPF_Native)
	int32_t                                            ArrayNum;                                      // 0x0008 (0x0004) [0x0000000000001002] (CPF_Const | CPF_Native)
	int32_t                                            ArrayMax;                                      // 0x000C (0x0004) [0x0000000000001002] (CPF_Const | CPF_Native)
};

// ScriptStruct Core.Object.InlinePointerArray_Mirror
// Size: 0x0018
struct FInlinePointerArray_Mirror
{
	struct FPointer                                    InlineData;                                    // 0x0000 (0x0008) [0x0000000000000002] (CPF_Const)   
	struct FArray_Mirror                               SecondaryData;                                 // 0x0008 (0x0010) [0x0000000000000002] (CPF_Const)   
};

// ScriptStruct Core.Object.LinearColor
// Size: 0x0010
struct FLinearColor
{
	float                                              R;                                             // 0x0000 (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              G;                                             // 0x0004 (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              B;                                             // 0x0008 (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              A;                                             // 0x000C (0x0004) [0x0000000000000001] (CPF_Edit)    
};

// ScriptStruct Core.Object.Color
// Size: 0x0004
struct FColor
{
	uint8_t                                            B;                                             // 0x0000 (0x0001) [0x0000000000000001] (CPF_Edit)    
	uint8_t                                            G;                                             // 0x0001 (0x0001) [0x0000000000000001] (CPF_Edit)    
	uint8_t                                            R;                                             // 0x0002 (0x0001) [0x0000000000000001] (CPF_Edit)    
	uint8_t                                            A;                                             // 0x0003 (0x0001) [0x0000000000000001] (CPF_Edit)    
};

// ScriptStruct Core.Object.Vector2D
// Size: 0x0008
struct FVector2D
{
	float                                              X;                                             // 0x0000 (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              Y;                                             // 0x0004 (0x0004) [0x0000000000000001] (CPF_Edit)    
};

// ScriptStruct Core.Object.Vector4
// Size: 0x0010
struct FVector4
{
	float                                              X;                                             // 0x0000 (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              Y;                                             // 0x0004 (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              Z;                                             // 0x0008 (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              W;                                             // 0x000C (0x0004) [0x0000000000000001] (CPF_Edit)    
};

// ScriptStruct Core.Object.InterpCurvePointVector2D
// Size: 0x0030 (0x002D PropertySize + 0x0003 padding to satisfy MinAlignment of 4)
struct FInterpCurvePointVector2D
{
	float                                              InVal;                                         // 0x0000 (0x0004) [0x0000000000000001] (CPF_Edit)    
	struct FVector2D                                   OutVal;                                        // 0x0004 (0x0008) [0x0000000000000001] (CPF_Edit)    
	struct FVector2D                                   ArriveTangent;                                 // 0x000C (0x0008) [0x0000000000000001] (CPF_Edit)    
	struct FVector2D                                   LeaveTangent;                                  // 0x0014 (0x0008) [0x0000000000000001] (CPF_Edit)    
	struct FVector2D                                   ArriveWeight;                                  // 0x001C (0x0008) [0x0000000000000001] (CPF_Edit)    
	struct FVector2D                                   LeaveWeight;                                   // 0x0024 (0x0008) [0x0000000000000001] (CPF_Edit)    
	uint8_t                                            InterpMode;                                    // 0x002C (0x0001) [0x0000000000000001] (CPF_Edit)    
	uint8_t                                          MinAlignmentPadding[0x3];                      // 0x002D (0x0003) PADDING FOR MINALIGNMENT
};

// ScriptStruct Core.Object.InterpCurveVector2D
// Size: 0x0018 (0x0011 PropertySize + 0x0007 padding to satisfy MinAlignment of 8)
struct FInterpCurveVector2D
{
	class TArray<struct FInterpCurvePointVector2D>     Points;                                        // 0x0000 (0x0010) [0x0000000000400001] (CPF_Edit | CPF_NeedCtorLink)
	uint8_t                                            InterpMethod;                                  // 0x0010 (0x0001) [0x0000000000000000]               
	uint8_t                                          MinAlignmentPadding[0x7];                      // 0x0011 (0x0007) PADDING FOR MINALIGNMENT
};

// ScriptStruct Core.Object.InterpCurvePointFloat
// Size: 0x001C (0x0019 PropertySize + 0x0003 padding to satisfy MinAlignment of 4)
struct FInterpCurvePointFloat
{
	float                                              InVal;                                         // 0x0000 (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              OutVal;                                        // 0x0004 (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              ArriveTangent;                                 // 0x0008 (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              LeaveTangent;                                  // 0x000C (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              ArriveWeight;                                  // 0x0010 (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              LeaveWeight;                                   // 0x0014 (0x0004) [0x0000000000000001] (CPF_Edit)    
	uint8_t                                            InterpMode;                                    // 0x0018 (0x0001) [0x0000000000000001] (CPF_Edit)    
	uint8_t                                          MinAlignmentPadding[0x3];                      // 0x0019 (0x0003) PADDING FOR MINALIGNMENT
};

// ScriptStruct Core.Object.InterpCurveFloat
// Size: 0x0018 (0x0011 PropertySize + 0x0007 padding to satisfy MinAlignment of 8)
struct FInterpCurveFloat
{
	class TArray<struct FInterpCurvePointFloat>        Points;                                        // 0x0000 (0x0010) [0x0000000000400001] (CPF_Edit | CPF_NeedCtorLink)
	uint8_t                                            InterpMethod;                                  // 0x0010 (0x0001) [0x0000000000000000]               
	uint8_t                                          MinAlignmentPadding[0x7];                      // 0x0011 (0x0007) PADDING FOR MINALIGNMENT
};

// ScriptStruct Core.Object.Cylinder
// Size: 0x0008
struct FCylinder
{
	float                                              Radius;                                        // 0x0000 (0x0004) [0x0000000000000000]               
	float                                              Height;                                        // 0x0004 (0x0004) [0x0000000000000000]               
};

// ScriptStruct Core.Object.InterpCurvePointVector
// Size: 0x0044 (0x0041 PropertySize + 0x0003 padding to satisfy MinAlignment of 4)
struct FInterpCurvePointVector
{
	float                                              InVal;                                         // 0x0000 (0x0004) [0x0000000000000001] (CPF_Edit)    
	struct FVector                                     OutVal;                                        // 0x0004 (0x000C) [0x0000000000000001] (CPF_Edit)    
	struct FVector                                     ArriveTangent;                                 // 0x0010 (0x000C) [0x0000000000000001] (CPF_Edit)    
	struct FVector                                     LeaveTangent;                                  // 0x001C (0x000C) [0x0000000000000001] (CPF_Edit)    
	struct FVector                                     ArriveWeight;                                  // 0x0028 (0x000C) [0x0000000000000001] (CPF_Edit)    
	struct FVector                                     LeaveWeight;                                   // 0x0034 (0x000C) [0x0000000000000001] (CPF_Edit)    
	uint8_t                                            InterpMode;                                    // 0x0040 (0x0001) [0x0000000000000001] (CPF_Edit)    
	uint8_t                                          MinAlignmentPadding[0x3];                      // 0x0041 (0x0003) PADDING FOR MINALIGNMENT
};

// ScriptStruct Core.Object.InterpCurveVector
// Size: 0x0018 (0x0011 PropertySize + 0x0007 padding to satisfy MinAlignment of 8)
struct FInterpCurveVector
{
	class TArray<struct FInterpCurvePointVector>       Points;                                        // 0x0000 (0x0010) [0x0000000000400001] (CPF_Edit | CPF_NeedCtorLink)
	uint8_t                                            InterpMethod;                                  // 0x0010 (0x0001) [0x0000000000000000]               
	uint8_t                                          MinAlignmentPadding[0x7];                      // 0x0011 (0x0007) PADDING FOR MINALIGNMENT
};

// ScriptStruct Core.Object.Quat
// Size: 0x0010
struct FQuat
{
	float                                              X;                                             // 0x0000 (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              Y;                                             // 0x0004 (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              Z;                                             // 0x0008 (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              W;                                             // 0x000C (0x0004) [0x0000000000000001] (CPF_Edit)    
};

// ScriptStruct Core.Object.Matrix
// Size: 0x0040
struct FMatrix
{
	struct FPlane                                      XPlane;                                        // 0x0000 (0x0010) [0x0000000000000001] (CPF_Edit)    
	struct FPlane                                      YPlane;                                        // 0x0010 (0x0010) [0x0000000000000001] (CPF_Edit)    
	struct FPlane                                      ZPlane;                                        // 0x0020 (0x0010) [0x0000000000000001] (CPF_Edit)    
	struct FPlane                                      WPlane;                                        // 0x0030 (0x0010) [0x0000000000000001] (CPF_Edit)    
};

// ScriptStruct Core.Object.BoxSphereBounds
// Size: 0x001C
struct FBoxSphereBounds
{
	struct FVector                                     Origin;                                        // 0x0000 (0x000C) [0x0000000000000001] (CPF_Edit)    
	struct FVector                                     BoxExtent;                                     // 0x000C (0x000C) [0x0000000000000001] (CPF_Edit)    
	float                                              SphereRadius;                                  // 0x0018 (0x0004) [0x0000000000000001] (CPF_Edit)    
};

// ScriptStruct Core.Object.TwoVectors
// Size: 0x0018
struct FTwoVectors
{
	struct FVector                                     v1;                                            // 0x0000 (0x000C) [0x0000000000000001] (CPF_Edit)    
	struct FVector                                     v2;                                            // 0x000C (0x000C) [0x0000000000000001] (CPF_Edit)    
};

// ScriptStruct Core.Object.TAlphaBlend
// Size: 0x0018 (0x0015 PropertySize + 0x0003 padding to satisfy MinAlignment of 4)
struct FTAlphaBlend
{
	float                                              AlphaIn;                                       // 0x0000 (0x0004) [0x0000000000000002] (CPF_Const)   
	float                                              AlphaOut;                                      // 0x0004 (0x0004) [0x0000000000000002] (CPF_Const)   
	float                                              AlphaTarget;                                   // 0x0008 (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              BlendTime;                                     // 0x000C (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              BlendTimeToGo;                                 // 0x0010 (0x0004) [0x0000000000000002] (CPF_Const)   
	uint8_t                                            BlendType;                                     // 0x0014 (0x0001) [0x0000000000000001] (CPF_Edit)    
	uint8_t                                          MinAlignmentPadding[0x3];                      // 0x0015 (0x0003) PADDING FOR MINALIGNMENT
};

// ScriptStruct Core.Object.BoneAtom
// Size: 0x0020
struct FBoneAtom
{
	struct FQuat                                       Rotation;                                      // 0x0000 (0x0010) [0x0000000000000000]               
	struct FVector                                     Translation;                                   // 0x0010 (0x000C) [0x0000000000000000]               
	float                                              Scale;                                         // 0x001C (0x0004) [0x0000000000000000]               
};

// ScriptStruct Core.Object.OctreeElementId
// Size: 0x0010 (0x000C PropertySize + 0x0004 padding to satisfy MinAlignment of 8)
struct FOctreeElementId
{
	struct FPointer                                    Node;                                          // 0x0000 (0x0008) [0x0000000000001002] (CPF_Const | CPF_Native)
	int32_t                                            ElementIndex;                                  // 0x0008 (0x0004) [0x0000000000001002] (CPF_Const | CPF_Native)
	uint8_t                                          MinAlignmentPadding[0x4];                      // 0x000C (0x0004) PADDING FOR MINALIGNMENT
};

// ScriptStruct Core.Object.RenderCommandFence
// Size: 0x0004
struct FRenderCommandFence
{
	int32_t                                            NumPendingFences;                              // 0x0000 (0x0004) [0x0000000000001002] (CPF_Const | CPF_Native)
};

// ScriptStruct Core.Object.RawDistribution
// Size: 0x0020
struct FRawDistribution
{
	uint8_t                                            Type;                                          // 0x0000 (0x0001) [0x0000000000000000]               
	uint8_t                                            Op;                                            // 0x0001 (0x0001) [0x0000000000000000]               
	uint8_t                                            LookupTableNumElements;                        // 0x0002 (0x0001) [0x0000000000000000]               
	uint8_t                                            LookupTableChunkSize;                          // 0x0003 (0x0001) [0x0000000000000000]               
	uint8_t                                          UnknownData00[0x4];                            // 0x0004 (0x0004) MISSED OFFSET
	class TArray<float>                                LookupTable;                                   // 0x0008 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	float                                              LookupTableTimeScale;                          // 0x0018 (0x0004) [0x0000000000000000]               
	float                                              LookupTableStartTime;                          // 0x001C (0x0004) [0x0000000000000000]               
};

// ScriptStruct Core.Object.InterpCurvePointLinearColor
// Size: 0x0058 (0x0055 PropertySize + 0x0003 padding to satisfy MinAlignment of 4)
struct FInterpCurvePointLinearColor
{
	float                                              InVal;                                         // 0x0000 (0x0004) [0x0000000000000001] (CPF_Edit)    
	struct FLinearColor                                OutVal;                                        // 0x0004 (0x0010) [0x0000000000000001] (CPF_Edit)    
	struct FLinearColor                                ArriveTangent;                                 // 0x0014 (0x0010) [0x0000000000000001] (CPF_Edit)    
	struct FLinearColor                                LeaveTangent;                                  // 0x0024 (0x0010) [0x0000000000000001] (CPF_Edit)    
	struct FLinearColor                                ArriveWeight;                                  // 0x0034 (0x0010) [0x0000000000000001] (CPF_Edit)    
	struct FLinearColor                                LeaveWeight;                                   // 0x0044 (0x0010) [0x0000000000000001] (CPF_Edit)    
	uint8_t                                            InterpMode;                                    // 0x0054 (0x0001) [0x0000000000000001] (CPF_Edit)    
	uint8_t                                          MinAlignmentPadding[0x3];                      // 0x0055 (0x0003) PADDING FOR MINALIGNMENT
};

// ScriptStruct Core.Object.InterpCurveLinearColor
// Size: 0x0018 (0x0011 PropertySize + 0x0007 padding to satisfy MinAlignment of 8)
struct FInterpCurveLinearColor
{
	class TArray<struct FInterpCurvePointLinearColor>  Points;                                        // 0x0000 (0x0010) [0x0000000000400001] (CPF_Edit | CPF_NeedCtorLink)
	uint8_t                                            InterpMethod;                                  // 0x0010 (0x0001) [0x0000000000000000]               
	uint8_t                                          MinAlignmentPadding[0x7];                      // 0x0011 (0x0007) PADDING FOR MINALIGNMENT
};

// ScriptStruct Core.Object.InterpCurvePointQuat
// Size: 0x0070 (0x0061 PropertySize + 0x000F padding to satisfy MinAlignment of 16)
struct FInterpCurvePointQuat
{
	float                                              InVal;                                         // 0x0000 (0x0004) [0x0000000000000001] (CPF_Edit)    
	uint8_t                                          UnknownData00[0xC];                            // 0x0004 (0x000C) MISSED OFFSET
	struct FQuat                                       OutVal;                                        // 0x0010 (0x0010) [0x0000000000000001] (CPF_Edit)    
	struct FQuat                                       ArriveTangent;                                 // 0x0020 (0x0010) [0x0000000000000001] (CPF_Edit)    
	struct FQuat                                       LeaveTangent;                                  // 0x0030 (0x0010) [0x0000000000000001] (CPF_Edit)    
	struct FQuat                                       ArriveWeight;                                  // 0x0040 (0x0010) [0x0000000000000001] (CPF_Edit)    
	struct FQuat                                       LeaveWeight;                                   // 0x0050 (0x0010) [0x0000000000000001] (CPF_Edit)    
	uint8_t                                            InterpMode;                                    // 0x0060 (0x0001) [0x0000000000000001] (CPF_Edit)    
	uint8_t                                          MinAlignmentPadding[0xF];                      // 0x0061 (0x000F) PADDING FOR MINALIGNMENT
};

// ScriptStruct Core.Object.InterpCurveQuat
// Size: 0x0018 (0x0011 PropertySize + 0x0007 padding to satisfy MinAlignment of 8)
struct FInterpCurveQuat
{
	class TArray<struct FInterpCurvePointQuat>         Points;                                        // 0x0000 (0x0010) [0x0000000000400001] (CPF_Edit | CPF_NeedCtorLink)
	uint8_t                                            InterpMethod;                                  // 0x0010 (0x0001) [0x0000000000000000]               
	uint8_t                                          MinAlignmentPadding[0x7];                      // 0x0011 (0x0007) PADDING FOR MINALIGNMENT
};

// ScriptStruct Core.Object.InterpCurvePointTwoVectors
// Size: 0x0080 (0x007D PropertySize + 0x0003 padding to satisfy MinAlignment of 4)
struct FInterpCurvePointTwoVectors
{
	float                                              InVal;                                         // 0x0000 (0x0004) [0x0000000000000001] (CPF_Edit)    
	struct FTwoVectors                                 OutVal;                                        // 0x0004 (0x0018) [0x0000000000000001] (CPF_Edit)    
	struct FTwoVectors                                 ArriveTangent;                                 // 0x001C (0x0018) [0x0000000000000001] (CPF_Edit)    
	struct FTwoVectors                                 LeaveTangent;                                  // 0x0034 (0x0018) [0x0000000000000001] (CPF_Edit)    
	struct FTwoVectors                                 ArriveWeight;                                  // 0x004C (0x0018) [0x0000000000000001] (CPF_Edit)    
	struct FTwoVectors                                 LeaveWeight;                                   // 0x0064 (0x0018) [0x0000000000000001] (CPF_Edit)    
	uint8_t                                            InterpMode;                                    // 0x007C (0x0001) [0x0000000000000001] (CPF_Edit)    
	uint8_t                                          MinAlignmentPadding[0x3];                      // 0x007D (0x0003) PADDING FOR MINALIGNMENT
};

// ScriptStruct Core.Object.InterpCurveTwoVectors
// Size: 0x0018 (0x0011 PropertySize + 0x0007 padding to satisfy MinAlignment of 8)
struct FInterpCurveTwoVectors
{
	class TArray<struct FInterpCurvePointTwoVectors>   Points;                                        // 0x0000 (0x0010) [0x0000000000400001] (CPF_Edit | CPF_NeedCtorLink)
	uint8_t                                            InterpMethod;                                  // 0x0010 (0x0001) [0x0000000000000000]               
	uint8_t                                          MinAlignmentPadding[0x7];                      // 0x0011 (0x0007) PADDING FOR MINALIGNMENT
};

// ScriptStruct Core.Object.Box
// Size: 0x001C (0x0019 PropertySize + 0x0003 padding to satisfy MinAlignment of 4)
struct FBox
{
	struct FVector                                     Min;                                           // 0x0000 (0x000C) [0x0000000000000001] (CPF_Edit)    
	struct FVector                                     Max;                                           // 0x000C (0x000C) [0x0000000000000001] (CPF_Edit)    
	uint8_t                                            IsValid;                                       // 0x0018 (0x0001) [0x0000000000000000]               
	uint8_t                                          MinAlignmentPadding[0x3];                      // 0x0019 (0x0003) PADDING FOR MINALIGNMENT
};

// ScriptStruct Core.Object.TPOV
// Size: 0x001C
struct FTPOV
{
	struct FVector                                     Location;                                      // 0x0000 (0x000C) [0x0000000000000001] (CPF_Edit)    
	struct FRotator                                    Rotation;                                      // 0x000C (0x000C) [0x0000000000000001] (CPF_Edit)    
	float                                              FOV;                                           // 0x0018 (0x0004) [0x0000000000000001] (CPF_Edit)    
};

// ScriptStruct Core.Object.SHVector
// Size: 0x0030
struct FSHVector
{
	float                                              V[9];                                          // 0x0000 (0x0024) [0x0000000000000001] (CPF_Edit)    
	float                                              Padding[3];                                    // 0x0024 (0x000C) [0x0000000000000000]               
};

// ScriptStruct Core.Object.SHVectorRGB
// Size: 0x0090
struct FSHVectorRGB
{
	struct FSHVector                                   R;                                             // 0x0000 (0x0030) [0x0000000000000001] (CPF_Edit)    
	struct FSHVector                                   G;                                             // 0x0030 (0x0030) [0x0000000000000001] (CPF_Edit)    
	struct FSHVector                                   B;                                             // 0x0060 (0x0030) [0x0000000000000001] (CPF_Edit)    
};

// ScriptStruct Core.Object.IntPoint
// Size: 0x0008
struct FIntPoint
{
	int32_t                                            X;                                             // 0x0000 (0x0004) [0x0000000000000001] (CPF_Edit)    
	int32_t                                            Y;                                             // 0x0004 (0x0004) [0x0000000000000001] (CPF_Edit)    
};

// ScriptStruct Core.Object.PackedNormal
// Size: 0x0004
struct FPackedNormal
{
	uint8_t                                            X;                                             // 0x0000 (0x0001) [0x0000000000000001] (CPF_Edit)    
	uint8_t                                            Y;                                             // 0x0001 (0x0001) [0x0000000000000001] (CPF_Edit)    
	uint8_t                                            Z;                                             // 0x0002 (0x0001) [0x0000000000000001] (CPF_Edit)    
	uint8_t                                            W;                                             // 0x0003 (0x0001) [0x0000000000000001] (CPF_Edit)    
};

// ScriptStruct Core.Object.IndirectArray_Mirror
// Size: 0x0010
struct FIndirectArray_Mirror
{
	struct FPointer                                    Data;                                          // 0x0000 (0x0008) [0x0000000000001002] (CPF_Const | CPF_Native)
	int32_t                                            ArrayNum;                                      // 0x0008 (0x0004) [0x0000000000001002] (CPF_Const | CPF_Native)
	int32_t                                            ArrayMax;                                      // 0x000C (0x0004) [0x0000000000001002] (CPF_Const | CPF_Native)
};

// ScriptStruct Core.Object.FColorVertexBuffer_Mirror
// Size: 0x0020 (0x001C PropertySize + 0x0004 padding to satisfy MinAlignment of 8)
struct FFColorVertexBuffer_Mirror
{
	struct FPointer                                    VfTable;                                       // 0x0000 (0x0008) [0x0000000000001002] (CPF_Const | CPF_Native)
	struct FPointer                                    VertexData;                                    // 0x0008 (0x0008) [0x0000000000001002] (CPF_Const | CPF_Native)
	int32_t                                            Data;                                          // 0x0010 (0x0004) [0x0000000000000002] (CPF_Const)   
	int32_t                                            Stride;                                        // 0x0014 (0x0004) [0x0000000000000002] (CPF_Const)   
	int32_t                                            NumVertices;                                   // 0x0018 (0x0004) [0x0000000000000002] (CPF_Const)   
	uint8_t                                          MinAlignmentPadding[0x4];                      // 0x001C (0x0004) PADDING FOR MINALIGNMENT
};

// ScriptStruct Core.Object.RenderCommandFence_Mirror
// Size: 0x0004
struct FRenderCommandFence_Mirror
{
	int32_t                                            NumPendingFences;                              // 0x0000 (0x0004) [0x0000000000003002] (CPF_Const | CPF_Native | CPF_Transient)
};

// ScriptStruct Core.Object.UntypedBulkData_Mirror
// Size: 0x0058 (0x0054 PropertySize + 0x0004 padding to satisfy MinAlignment of 8)
struct FUntypedBulkData_Mirror
{
	struct FPointer                                    VfTable;                                       // 0x0000 (0x0008) [0x0000000000001002] (CPF_Const | CPF_Native)
	int32_t                                            BulkDataFlags;                                 // 0x0008 (0x0004) [0x0000000000001002] (CPF_Const | CPF_Native)
	int32_t                                            ElementCount;                                  // 0x000C (0x0004) [0x0000000000001002] (CPF_Const | CPF_Native)
	uint64_t                                           BulkDataOffsetInFile;                          // 0x0010 (0x0008) [0x0000000000001002] (CPF_Const | CPF_Native)
	int32_t                                            BulkDataSizeOnDisk;                            // 0x0018 (0x0004) [0x0000000000001002] (CPF_Const | CPF_Native)
	int32_t                                            SavedBulkDataFlags;                            // 0x001C (0x0004) [0x0000000000001002] (CPF_Const | CPF_Native)
	int32_t                                            SavedElementCount;                             // 0x0020 (0x0004) [0x0000000000001002] (CPF_Const | CPF_Native)
	uint8_t                                          UnknownData00[0x4];                            // 0x0024 (0x0004) MISSED OFFSET
	uint64_t                                           SavedBulkDataOffsetInFile;                     // 0x0028 (0x0008) [0x0000000000001002] (CPF_Const | CPF_Native)
	int32_t                                            SavedBulkDataSizeOnDisk;                       // 0x0030 (0x0004) [0x0000000000001002] (CPF_Const | CPF_Native)
	uint8_t                                          UnknownData01[0x4];                            // 0x0034 (0x0004) MISSED OFFSET
	struct FPointer                                    BulkData;                                      // 0x0038 (0x0008) [0x0000000000001002] (CPF_Const | CPF_Native)
	int32_t                                            LockStatus;                                    // 0x0040 (0x0004) [0x0000000000001002] (CPF_Const | CPF_Native)
	uint8_t                                          UnknownData02[0x4];                            // 0x0044 (0x0004) MISSED OFFSET
	struct FPointer                                    AttachedAr;                                    // 0x0048 (0x0008) [0x0000000000001002] (CPF_Const | CPF_Native)
	int32_t                                            bShouldFreeOnEmpty;                            // 0x0050 (0x0004) [0x0000000000001002] (CPF_Const | CPF_Native)
	uint8_t                                          MinAlignmentPadding[0x4];                      // 0x0054 (0x0004) PADDING FOR MINALIGNMENT
};

// ScriptStruct Core.Object.BitArray_Mirror
// Size: 0x0020
struct FBitArray_Mirror
{
	struct FPointer                                    IndirectData;                                  // 0x0000 (0x0008) [0x0000000000001002] (CPF_Const | CPF_Native)
	int32_t                                            InlineData[4];                                 // 0x0008 (0x0010) [0x0000000000001002] (CPF_Const | CPF_Native)
	int32_t                                            NumBits;                                       // 0x0018 (0x0004) [0x0000000000001002] (CPF_Const | CPF_Native)
	int32_t                                            MaxBits;                                       // 0x001C (0x0004) [0x0000000000001002] (CPF_Const | CPF_Native)
};

// ScriptStruct Core.Object.SparseArray_Mirror
// Size: 0x0038
struct FSparseArray_Mirror
{
	class TArray<int32_t>                              Elements;                                      // 0x0000 (0x0010) [0x0000000000001002] (CPF_Const | CPF_Native)
	struct FBitArray_Mirror                            AllocationFlags;                               // 0x0010 (0x0020) [0x0000000000001002] (CPF_Const | CPF_Native)
	int32_t                                            FirstFreeIndex;                                // 0x0030 (0x0004) [0x0000000000001002] (CPF_Const | CPF_Native)
	int32_t                                            NumFreeIndices;                                // 0x0034 (0x0004) [0x0000000000001002] (CPF_Const | CPF_Native)
};

// ScriptStruct Core.Object.Set_Mirror
// Size: 0x0050 (0x004C PropertySize + 0x0004 padding to satisfy MinAlignment of 8)
struct FSet_Mirror
{
	struct FSparseArray_Mirror                         Elements;                                      // 0x0000 (0x0038) [0x0000000000001002] (CPF_Const | CPF_Native)
	int32_t                                            InlineHash;                                    // 0x0038 (0x0004) [0x0000000000001002] (CPF_Const | CPF_Native)
	uint8_t                                          UnknownData00[0x4];                            // 0x003C (0x0004) MISSED OFFSET
	struct FPointer                                    Hash;                                          // 0x0040 (0x0008) [0x0000000000001002] (CPF_Const | CPF_Native)
	int32_t                                            HashSize;                                      // 0x0048 (0x0004) [0x0000000000001002] (CPF_Const | CPF_Native)
	uint8_t                                          MinAlignmentPadding[0x4];                      // 0x004C (0x0004) PADDING FOR MINALIGNMENT
};

// ScriptStruct Core.Object.MultiMap_Mirror
// Size: 0x0050
struct FMultiMap_Mirror
{
	struct FSet_Mirror                                 Pairs;                                         // 0x0000 (0x0050) [0x0000000000001002] (CPF_Const | CPF_Native)
};

// ScriptStruct Core.Object.Map_Mirror
// Size: 0x0050
struct FMap_Mirror
{
	struct FSet_Mirror                                 Pairs;                                         // 0x0000 (0x0050) [0x0000000000001002] (CPF_Const | CPF_Native)
};

// ScriptStruct Core.Object.ThreadSafeCounter
// Size: 0x0004
struct FThreadSafeCounter
{
	int32_t                                            Value;                                         // 0x0000 (0x0004) [0x0000000000001002] (CPF_Const | CPF_Native)
};

// ScriptStruct Core.Object.Double
// Size: 0x0008
struct FDouble
{
	int32_t                                            A;                                             // 0x0000 (0x0004) [0x0000000000001002] (CPF_Const | CPF_Native)
	int32_t                                            B;                                             // 0x0004 (0x0004) [0x0000000000001002] (CPF_Const | CPF_Native)
};

// ScriptStruct Core.Object.IpAddr
// Size: 0x0014
struct FIpAddr
{
	int32_t                                            AddrA;                                         // 0x0000 (0x0004) [0x0000000000000000]               
	int32_t                                            AddrB;                                         // 0x0004 (0x0004) [0x0000000000000000]               
	int32_t                                            AddrC;                                         // 0x0008 (0x0004) [0x0000000000000000]               
	int32_t                                            AddrD;                                         // 0x000C (0x0004) [0x0000000000000000]               
	int32_t                                            Port;                                          // 0x0010 (0x0004) [0x0000000000000000]               
};

// ScriptStruct Core.Object.HatPointer
// Size: 0x0008
struct FHatPointer
{
	uint64_t                                           Dummy;                                         // 0x0000 (0x0008) [0x0000000000001002] (CPF_Const | CPF_Native)
};

// ScriptStruct Core._Types_Core.SceNpOnlineId
// Size: 0x0018 (0x0014 PropertySize + 0x0004 padding to satisfy MinAlignment of 8)
struct FSceNpOnlineId
{
	uint64_t                                           Data[2];                                       // 0x0000 (0x0010) [0x0000000000000000]               
	uint8_t                                            Term;                                          // 0x0010 (0x0001) [0x0000000000000000]               
	uint8_t                                            Dummy[3];                                      // 0x0011 (0x0003) [0x0000000000000000]               
	uint8_t                                          MinAlignmentPadding[0x4];                      // 0x0014 (0x0004) PADDING FOR MINALIGNMENT
};

// ScriptStruct Core._Types_Core.SceNpId
// Size: 0x0028
struct FSceNpId
{
	struct FSceNpOnlineId                              Handle;                                        // 0x0000 (0x0018) [0x0000000000000002] (CPF_Const)   
	uint64_t                                           Opt;                                           // 0x0018 (0x0008) [0x0000000000000002] (CPF_Const)   
	uint64_t                                           Reserved;                                      // 0x0020 (0x0008) [0x0000000000000002] (CPF_Const)   
};

// ScriptStruct Core._Types_Core.UniqueNetId
// Size: 0x0048 (0x0042 PropertySize + 0x0006 padding to satisfy MinAlignment of 8)
struct FUniqueNetId
{
	uint64_t                                           Uid;                                           // 0x0000 (0x0008) [0x0000000000000000]               
	struct FSceNpId                                    NpId;                                          // 0x0008 (0x0028) [0x0000000000000000]               
	class FString                                      EpicAccountId;                                 // 0x0030 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	uint8_t                                            Platform;                                      // 0x0040 (0x0001) [0x0000000000000000]               
	uint8_t                                            SplitscreenID;                                 // 0x0041 (0x0001) [0x0000000000000000]               
	uint8_t                                          MinAlignmentPadding[0x6];                      // 0x0042 (0x0006) PADDING FOR MINALIGNMENT
};

// ScriptStruct Core._Types_Core.ProductHashID
// Size: 0x0004
struct FProductHashID
{
	int32_t                                            Id;                                            // 0x0000 (0x0004) [0x0000000000000000]               
};

// ScriptStruct Core._Types_Core.EncryptedKeyIndex
// Size: 0x0004
struct FEncryptedKeyIndex
{
	int32_t                                            Index;                                         // 0x0000 (0x0004) [0x0000000000000000]               
};

// ScriptStruct Core._Types_Core.VoiceAudioDevice
// Size: 0x0028 (0x0024 PropertySize + 0x0004 padding to satisfy MinAlignment of 8)
struct FVoiceAudioDevice
{
	class FString                                      Id;                                            // 0x0000 (0x0010) [0x0000000040400000] (CPF_NeedCtorLink | CPF_DataBinding)
	class FString                                      Name;                                          // 0x0010 (0x0010) [0x0000000040400000] (CPF_NeedCtorLink | CPF_DataBinding)
	uint32_t                                           bDefault : 1;                                  // 0x0020 (0x0004) [0x0000000040000000] [0x00000001] (CPF_DataBinding)
	uint8_t                                          MinAlignmentPadding[0x4];                      // 0x0024 (0x0004) PADDING FOR MINALIGNMENT
};

// ScriptStruct Core._Types_Core.VoiceRoomMemberStatus
// Size: 0x0004
struct FVoiceRoomMemberStatus
{
	uint32_t                                           bLocal : 1;                                    // 0x0000 (0x0004) [0x0000000000000000] [0x00000001] 
	uint32_t                                           bSpeaking : 1;                                 // 0x0000 (0x0004) [0x0000000000000000] [0x00000002] 
	uint32_t                                           bSelfMuted : 1;                                // 0x0000 (0x0004) [0x0000000000000000] [0x00000004] 
	uint32_t                                           bLocalMuted : 1;                               // 0x0000 (0x0004) [0x0000000000000000] [0x00000008] 
	uint32_t                                           bAdminMuted : 1;                               // 0x0000 (0x0004) [0x0000000000000000] [0x00000010] 
	uint32_t                                           bBlocked : 1;                                  // 0x0000 (0x0004) [0x0000000000000000] [0x00000020] 
};

// ScriptStruct Core._Types_Core.ProductInstanceID
// Size: 0x0010
struct FProductInstanceID
{
	uint64_t                                           UpperBits;                                     // 0x0000 (0x0008) [0x0000000000000000]               
	uint64_t                                           LowerBits;                                     // 0x0008 (0x0008) [0x0000000000000000]               
};

// ScriptStruct Core.AutomationTest.ScriptWarning
// Size: 0x0038 (0x0034 PropertySize + 0x0004 padding to satisfy MinAlignment of 8)
struct FScriptWarning
{
	class FString                                      Node;                                          // 0x0000 (0x0010) [0x0000000000500000] (CPF_NeedCtorLink)
	class FString                                      Message;                                       // 0x0010 (0x0010) [0x0000000000500000] (CPF_NeedCtorLink)
	class FString                                      StackTrace;                                    // 0x0020 (0x0010) [0x0000000000500000] (CPF_NeedCtorLink)
	int32_t                                            ScriptPosition;                                // 0x0030 (0x0004) [0x0000000000000000]               
	uint8_t                                          MinAlignmentPadding[0x4];                      // 0x0034 (0x0004) PADDING FOR MINALIGNMENT
};

// ScriptStruct Core.Breadcrumbs.BreadcrumbEntry
// Size: 0x0020
struct FBreadcrumbEntry
{
	class FString                                      Category;                                      // 0x0000 (0x0010) [0x0000000000500000] (CPF_NeedCtorLink)
	class FString                                      Value;                                         // 0x0010 (0x0010) [0x0000000000500000] (CPF_NeedCtorLink)
};

// ScriptStruct Core.DelegateTracker.AsyncDelegateInfo
// Size: 0x0020
struct FAsyncDelegateInfo
{
	int32_t                                            CallbackId;                                    // 0x0000 (0x0004) [0x0000000000000000]               
	uint8_t                                          UnknownData00[0x4];                            // 0x0004 (0x0004) MISSED OFFSET
	struct FScriptDelegate                             AsyncDelegate;                                 // 0x0008 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
};

// ScriptStruct Core.DistributionFloat.RawDistributionFloat
// 0x0008 (0x0020 - 0x0028)
struct FRawDistributionFloat : FRawDistribution
{
	class UDistributionFloat*                          Distribution;                                  // 0x0020 (0x0008) [0x0000000006080009] (CPF_Edit | CPF_ExportObject | CPF_Component | CPF_NoClear | CPF_EditInline)
};

// ScriptStruct Core.DistributionFloat.MatineeRawDistributionFloat
// 0x0008 (0x0028 - 0x0030)
struct FMatineeRawDistributionFloat : FRawDistributionFloat
{
	float                                              MatineeValue;                                  // 0x0028 (0x0004) [0x0000000000000000]               
	uint32_t                                           bInMatinee : 1;                                // 0x002C (0x0004) [0x0000000000000000] [0x00000001] 
};

// ScriptStruct Core.DistributionVector.RawDistributionVector
// 0x0008 (0x0020 - 0x0028)
struct FRawDistributionVector : FRawDistribution
{
	class UDistributionVector*                         Distribution;                                  // 0x0020 (0x0008) [0x0000000006080009] (CPF_Edit | CPF_ExportObject | CPF_Component | CPF_NoClear | CPF_EditInline)
};

// ScriptStruct Core.ObjectProvider.ObjectProviderSubscription
// Size: 0x0028 (0x0024 PropertySize + 0x0004 padding to satisfy MinAlignment of 8)
struct FObjectProviderSubscription
{
	class UClass*                                      ObjClass;                                      // 0x0000 (0x0008) [0x0000000000000000]               
	struct FScriptDelegate                             Callback;                                      // 0x0008 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
	uint32_t                                           bFireOnce : 1;                                 // 0x0020 (0x0004) [0x0000000000000000] [0x00000001] 
	uint8_t                                          MinAlignmentPadding[0x4];                      // 0x0024 (0x0004) PADDING FOR MINALIGNMENT
};

// ScriptStruct Core.ObjectProvider.ObjectProviderPendingCallback
// Size: 0x0020
struct FObjectProviderPendingCallback
{
	struct FScriptDelegate                             Callback;                                      // 0x0000 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
	class UObject*                                     Value;                                         // 0x0018 (0x0008) [0x0000000000000000]               
};

// ScriptStruct Core.ObjectProvider.ObjectPropertyInjection
// Size: 0x0010
struct FObjectPropertyInjection
{
	class UObject*                                     Subscriber;                                    // 0x0000 (0x0008) [0x0000000000000000]               
	class UObjectProperty*                             Property;                                      // 0x0008 (0x0008) [0x0000000000000000]               
};

// ScriptStruct Core.ObjectProvider.InterfacePropertyInjection
// Size: 0x0010
struct FInterfacePropertyInjection
{
	class UObject*                                     Subscriber;                                    // 0x0000 (0x0008) [0x0000000000000000]               
	class UInterfaceProperty*                          Property;                                      // 0x0008 (0x0008) [0x0000000000000000]               
};

// ScriptStruct Core.RotatorConversions.RotatorDegrees
// Size: 0x000C
struct FRotatorDegrees
{
	float                                              Pitch;                                         // 0x0000 (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              Yaw;                                           // 0x0004 (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              Roll;                                          // 0x0008 (0x0004) [0x0000000000000001] (CPF_Edit)    
};

// ScriptStruct Core.RotatorConversions.RotatorRadians
// Size: 0x000C
struct FRotatorRadians
{
	float                                              Pitch;                                         // 0x0000 (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              Yaw;                                           // 0x0004 (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              Roll;                                          // 0x0008 (0x0004) [0x0000000000000001] (CPF_Edit)    
};

/*
# ========================================================================================= #
#
# ========================================================================================= #
*/

#ifdef _MSC_VER
#pragma pack(pop)
#endif
