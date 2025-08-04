/*
#############################################################################################
# RocketLeague (1.0.10897.0) SDK
# Generated with the CodeRedGenerator v1.0.2
# ========================================================================================= #
# File: Engine_structs.hpp
# ========================================================================================= #
# Credits: TheFeckless, ItsBranK
# Links: www.github.com/CodeRedModding/CodeRed-Generator, www.twitter.com/ItsBranK
#############################################################################################
*/
#pragma once

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

/*
# ========================================================================================= #
# Structs
# ========================================================================================= #
*/

// ScriptStruct Engine._Types_Engine.GameClipsMaskArea
// 0x0018
struct FGameClipsMaskArea
{
	uint64_t                                           MaskId;                                        // 0x0000 (0x0008) [0x0000000000000000]               
	float                                              TopLeftX;                                      // 0x0008 (0x0004) [0x0000000000000000]               
	float                                              TopLeftY;                                      // 0x000C (0x0004) [0x0000000000000000]               
	float                                              BottomRightX;                                  // 0x0010 (0x0004) [0x0000000000000000]               
	float                                              BottomRightY;                                  // 0x0014 (0x0004) [0x0000000000000000]               
};

// ScriptStruct Engine.Actor.AnimSlotDesc
// 0x000C
struct FAnimSlotDesc
{
	struct FName                                       SlotName;                                      // 0x0000 (0x0008) [0x0000000000100000]               
	int32_t                                            NumChannels;                                   // 0x0008 (0x0004) [0x0000000000100000]               
};

// ScriptStruct Engine.Actor.RigidBodyState
// 0x0039
struct FRigidBodyState
{
	struct FVector                                     Position;                                      // 0x0000 (0x000C) [0x0000000000000000]               
	struct FQuat                                       Quaternion;                                    // 0x0010 (0x0010) [0x0000000000000000]               
	struct FVector                                     LinVel;                                        // 0x0020 (0x000C) [0x0000000000000000]               
	struct FVector                                     AngVel;                                        // 0x002C (0x000C) [0x0000000000000000]               
	uint8_t                                            bNewData;                                      // 0x0038 (0x0001) [0x0000000000000000]               
};

// ScriptStruct Engine.Actor.RigidBodyContactInfo
// 0x0048
struct FRigidBodyContactInfo
{
	struct FVector                                     ContactPosition;                               // 0x0000 (0x000C) [0x0000000000000000]               
	struct FVector                                     ContactNormal;                                 // 0x000C (0x000C) [0x0000000000000000]               
	float                                              ContactPenetration;                            // 0x0018 (0x0004) [0x0000000000000000]               
	struct FVector                                     ContactVelocity[0x2];                          // 0x001C (0x0018) [0x0000000000000000]               
	class UPhysicalMaterial*                           PhysMaterial[0x2];                             // 0x0038 (0x0010) [0x0000000000000000]               
};

// ScriptStruct Engine.Actor.CollisionImpactData
// 0x0028
struct FCollisionImpactData
{
	TArray<struct FRigidBodyContactInfo>               ContactInfos;                                  // 0x0000 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FVector                                     TotalNormalForceVector;                        // 0x0010 (0x000C) [0x0000000000000000]               
	struct FVector                                     TotalFrictionForceVector;                      // 0x001C (0x000C) [0x0000000000000000]               
};

// ScriptStruct Engine.Actor.PhysEffectInfo
// 0x0018
struct FPhysEffectInfo
{
	float                                              Threshold;                                     // 0x0000 (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              ReFireDelay;                                   // 0x0004 (0x0004) [0x0000000000000001] (CPF_Edit)    
	class UParticleSystem*                             Effect;                                        // 0x0008 (0x0008) [0x0000000000000001] (CPF_Edit)    
	class USoundCue*                                   Sound;                                         // 0x0010 (0x0008) [0x0000000000000001] (CPF_Edit)    
};

// ScriptStruct Engine.Actor.ActorReference
// 0x0018
struct FActorReference
{
	class AActor*                                      Actor;                                         // 0x0000 (0x0008) [0x0000000000000001] (CPF_Edit)    
	struct FGuid                                       Guid;                                          // 0x0008 (0x0010) [0x0000000000020003] (CPF_Edit | CPF_Const | CPF_EditConst)
};

// ScriptStruct Engine.Actor.NavReference
// 0x0018
struct FNavReference
{
	class ANavigationPoint*                            Nav;                                           // 0x0000 (0x0008) [0x0000000000000001] (CPF_Edit)    
	struct FGuid                                       Guid;                                          // 0x0008 (0x0010) [0x0000000000020003] (CPF_Edit | CPF_Const | CPF_EditConst)
};

// ScriptStruct Engine.Actor.BasedPosition
// 0x0038
struct FBasedPosition
{
	class AActor*                                      Base;                                          // 0x0000 (0x0008) [0x0000000000000001] (CPF_Edit)    
	struct FVector                                     Position;                                      // 0x0008 (0x000C) [0x0000000000000001] (CPF_Edit)    
	struct FVector                                     CachedBaseLocation;                            // 0x0014 (0x000C) [0x0000000000000000]               
	struct FRotator                                    CachedBaseRotation;                            // 0x0020 (0x000C) [0x0000000000000000]               
	struct FVector                                     CachedTransPosition;                           // 0x002C (0x000C) [0x0000000000000000]               
};

// ScriptStruct Engine.Actor.TraceHitInfo
// 0x0028
struct FTraceHitInfo
{
	class UMaterial*                                   Material;                                      // 0x0000 (0x0008) [0x0000000000100000]               
	class UPhysicalMaterial*                           PhysMaterial;                                  // 0x0008 (0x0008) [0x0000000000100000]               
	int32_t                                            Item;                                          // 0x0010 (0x0004) [0x0000000000100000]               
	int32_t                                            LevelIndex;                                    // 0x0014 (0x0004) [0x0000000000100000]               
	struct FName                                       BoneName;                                      // 0x0018 (0x0008) [0x0000000000100000]               
	class UPrimitiveComponent*                         HitComponent;                                  // 0x0020 (0x0008) [0x0000000004180008] (CPF_ExportObject | CPF_Component | CPF_EditInline)
};

// ScriptStruct Engine.Actor.ImpactInfo
// 0x0060
struct FImpactInfo
{
	class AActor*                                      HitActor;                                      // 0x0000 (0x0008) [0x0000000000100000]               
	struct FVector                                     HitLocation;                                   // 0x0008 (0x000C) [0x0000000000100000]               
	struct FVector                                     HitNormal;                                     // 0x0014 (0x000C) [0x0000000000100000]               
	struct FVector                                     RayDir;                                        // 0x0020 (0x000C) [0x0000000000100000]               
	struct FVector                                     StartTrace;                                    // 0x002C (0x000C) [0x0000000000100000]               
	struct FTraceHitInfo                               HitInfo;                                       // 0x0038 (0x0028) [0x0000000000180000] (CPF_Component)
};

// ScriptStruct Engine.SequenceOp.SeqOpInputLink
// 0x003C
struct FSeqOpInputLink
{
	class FString                                      LinkDesc;                                      // 0x0000 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	uint32_t                                           bHasImpulse : 1;                               // 0x0010 (0x0004) [0x0000000000000000] [0x00000001] 
	int32_t                                            QueuedActivations;                             // 0x0014 (0x0004) [0x0000000000000000]               
	uint32_t                                           bDisabled : 1;                                 // 0x0018 (0x0004) [0x0000000000000000] [0x00000001] 
	uint32_t                                           bDisabledPIE : 1;                              // 0x0018 (0x0004) [0x0000000000000000] [0x00000002] 
	class USequenceOp*                                 LinkedOp;                                      // 0x0020 (0x0008) [0x0000000000000000]               
	int32_t                                            DrawY;                                         // 0x0028 (0x0004) [0x0000000000000000]               
	uint32_t                                           bHidden : 1;                                   // 0x002C (0x0004) [0x0000000000000000] [0x00000001] 
	float                                              ActivateDelay;                                 // 0x0030 (0x0004) [0x0000000000000000]               
	uint32_t                                           bMoving : 1;                                   // 0x0034 (0x0004) [0x0000000800002000] [0x00000001] (CPF_Transient)
	uint32_t                                           bClampedMax : 1;                               // 0x0034 (0x0004) [0x0000000800000000] [0x00000002] 
	uint32_t                                           bClampedMin : 1;                               // 0x0034 (0x0004) [0x0000000800000000] [0x00000004] 
	int32_t                                            OverrideDelta;                                 // 0x0038 (0x0004) [0x0000000800000000]               
};

// ScriptStruct Engine.Actor.AnimSlotInfo
// 0x0018
struct FAnimSlotInfo
{
	struct FName                                       SlotName;                                      // 0x0000 (0x0008) [0x0000000000100000]               
	TArray<float>                                      ChannelWeights;                                // 0x0008 (0x0010) [0x0000000000500000] (CPF_NeedCtorLink)
};

// ScriptStruct Engine.Actor.TimerData
// 0x0024
struct FTimerData
{
	uint32_t                                           bLoop : 1;                                     // 0x0000 (0x0004) [0x0000000000000000] [0x00000001] 
	uint32_t                                           bPaused : 1;                                   // 0x0000 (0x0004) [0x0000000000000000] [0x00000002] 
	uint32_t                                           bStateTimer : 1;                               // 0x0000 (0x0004) [0x0000000000000000] [0x00000004] 
	struct FName                                       FuncName;                                      // 0x0004 (0x0008) [0x0000000000000000]               
	float                                              Rate;                                          // 0x000C (0x0004) [0x0000000000000000]               
	float                                              Count;                                         // 0x0010 (0x0004) [0x0000000000000000]               
	float                                              TimerTimeDilation;                             // 0x0014 (0x0004) [0x0000000000000000]               
	class UObject*                                     TimerObj;                                      // 0x0018 (0x0008) [0x0000000000000000]               
	int32_t                                            StateGeneration;                               // 0x0020 (0x0004) [0x0000000000000000]               
};

// ScriptStruct Engine.PrimitiveComponent.RBCollisionChannelContainer
// 0x0004
struct FRBCollisionChannelContainer
{
	uint32_t                                           Default : 1;                                   // 0x0000 (0x0004) [0x0000000000000003] [0x00000001] (CPF_Edit | CPF_Const)
	uint32_t                                           Nothing : 1;                                   // 0x0000 (0x0004) [0x0000000000000002] [0x00000002] (CPF_Const)
	uint32_t                                           Pawn : 1;                                      // 0x0000 (0x0004) [0x0000000000000003] [0x00000004] (CPF_Edit | CPF_Const)
	uint32_t                                           Vehicle : 1;                                   // 0x0000 (0x0004) [0x0000000000000003] [0x00000008] (CPF_Edit | CPF_Const)
	uint32_t                                           Water : 1;                                     // 0x0000 (0x0004) [0x0000000000000003] [0x00000010] (CPF_Edit | CPF_Const)
	uint32_t                                           GameplayPhysics : 1;                           // 0x0000 (0x0004) [0x0000000000000003] [0x00000020] (CPF_Edit | CPF_Const)
	uint32_t                                           EffectPhysics : 1;                             // 0x0000 (0x0004) [0x0000000000000003] [0x00000040] (CPF_Edit | CPF_Const)
	uint32_t                                           Ball : 1;                                      // 0x0000 (0x0004) [0x0000000000000003] [0x00000080] (CPF_Edit | CPF_Const)
	uint32_t                                           VehicleBlocker : 1;                            // 0x0000 (0x0004) [0x0000000000000003] [0x00000100] (CPF_Edit | CPF_Const)
	uint32_t                                           BallBlocker : 1;                               // 0x0000 (0x0004) [0x0000000000000003] [0x00000200] (CPF_Edit | CPF_Const)
	uint32_t                                           Untitled4 : 1;                                 // 0x0000 (0x0004) [0x0000000000000003] [0x00000400] (CPF_Edit | CPF_Const)
	uint32_t                                           Cloth : 1;                                     // 0x0000 (0x0004) [0x0000000000000003] [0x00000800] (CPF_Edit | CPF_Const)
	uint32_t                                           FluidDrain : 1;                                // 0x0000 (0x0004) [0x0000000000000003] [0x00001000] (CPF_Edit | CPF_Const)
	uint32_t                                           SoftBody : 1;                                  // 0x0000 (0x0004) [0x0000000000000003] [0x00002000] (CPF_Edit | CPF_Const)
	uint32_t                                           FracturedMeshPart : 1;                         // 0x0000 (0x0004) [0x0000000000000003] [0x00004000] (CPF_Edit | CPF_Const)
	uint32_t                                           BlockingVolume : 1;                            // 0x0000 (0x0004) [0x0000000000000003] [0x00008000] (CPF_Edit | CPF_Const)
	uint32_t                                           DeadPawn : 1;                                  // 0x0000 (0x0004) [0x0000000000000003] [0x00010000] (CPF_Edit | CPF_Const)
	uint32_t                                           Clothing : 1;                                  // 0x0000 (0x0004) [0x0000000000000003] [0x00020000] (CPF_Edit | CPF_Const)
	uint32_t                                           ClothingCollision : 1;                         // 0x0000 (0x0004) [0x0000000000000003] [0x00040000] (CPF_Edit | CPF_Const)
};

// ScriptStruct Engine.LightComponent.LightingChannelContainer
// 0x0004
struct FLightingChannelContainer
{
	uint32_t                                           bInitialized : 1;                              // 0x0000 (0x0004) [0x0000000000000000] [0x00000001] 
	uint32_t                                           BSP : 1;                                       // 0x0000 (0x0004) [0x0000000000000001] [0x00000002] (CPF_Edit)
	uint32_t                                           Static : 1;                                    // 0x0000 (0x0004) [0x0000000000000001] [0x00000004] (CPF_Edit)
	uint32_t                                           Dynamic : 1;                                   // 0x0000 (0x0004) [0x0000000000000001] [0x00000008] (CPF_Edit)
	uint32_t                                           CompositeDynamic : 1;                          // 0x0000 (0x0004) [0x0000000000000001] [0x00000010] (CPF_Edit)
	uint32_t                                           Skybox : 1;                                    // 0x0000 (0x0004) [0x0000000000000001] [0x00000020] (CPF_Edit)
	uint32_t                                           Unnamed : 1;                                   // 0x0000 (0x0004) [0x0000000000000001] [0x00000040] (CPF_Edit)
	uint32_t                                           Unnamed01 : 1;                                 // 0x0000 (0x0004) [0x0000000000000001] [0x00000080] (CPF_Edit)
	uint32_t                                           Unnamed02 : 1;                                 // 0x0000 (0x0004) [0x0000000000000001] [0x00000100] (CPF_Edit)
	uint32_t                                           Unnamed03 : 1;                                 // 0x0000 (0x0004) [0x0000000000000001] [0x00000200] (CPF_Edit)
	uint32_t                                           Unnamed04 : 1;                                 // 0x0000 (0x0004) [0x0000000000000001] [0x00000400] (CPF_Edit)
	uint32_t                                           Unnamed05 : 1;                                 // 0x0000 (0x0004) [0x0000000000000001] [0x00000800] (CPF_Edit)
	uint32_t                                           Cinematic : 1;                                 // 0x0000 (0x0004) [0x0000000000000001] [0x00001000] (CPF_Edit)
	uint32_t                                           Cinematic01 : 1;                               // 0x0000 (0x0004) [0x0000000000000001] [0x00002000] (CPF_Edit)
	uint32_t                                           Cinematic02 : 1;                               // 0x0000 (0x0004) [0x0000000000000001] [0x00004000] (CPF_Edit)
	uint32_t                                           Cinematic03 : 1;                               // 0x0000 (0x0004) [0x0000000000000001] [0x00008000] (CPF_Edit)
	uint32_t                                           Cinematic04 : 1;                               // 0x0000 (0x0004) [0x0000000000000001] [0x00010000] (CPF_Edit)
	uint32_t                                           Cinematic05 : 1;                               // 0x0000 (0x0004) [0x0000000000000001] [0x00020000] (CPF_Edit)
	uint32_t                                           Cinematic06 : 1;                               // 0x0000 (0x0004) [0x0000000000000001] [0x00040000] (CPF_Edit)
	uint32_t                                           Cinematic07 : 1;                               // 0x0000 (0x0004) [0x0000000000000001] [0x00080000] (CPF_Edit)
	uint32_t                                           Cinematic08 : 1;                               // 0x0000 (0x0004) [0x0000000000000001] [0x00100000] (CPF_Edit)
	uint32_t                                           Cinematic09 : 1;                               // 0x0000 (0x0004) [0x0000000000000001] [0x00200000] (CPF_Edit)
	uint32_t                                           Gameplay : 1;                                  // 0x0000 (0x0004) [0x0000000000000001] [0x00400000] (CPF_Edit)
	uint32_t                                           Gameplay01 : 1;                                // 0x0000 (0x0004) [0x0000000000000001] [0x00800000] (CPF_Edit)
	uint32_t                                           Gameplay02 : 1;                                // 0x0000 (0x0004) [0x0000000000000001] [0x01000000] (CPF_Edit)
	uint32_t                                           Gameplay03 : 1;                                // 0x0000 (0x0004) [0x0000000000000001] [0x02000000] (CPF_Edit)
	uint32_t                                           Crowd : 1;                                     // 0x0000 (0x0004) [0x0000000000000001] [0x04000000] (CPF_Edit)
};

// ScriptStruct Engine.PrimitiveComponent.MaterialViewRelevance
// 0x0004
struct FMaterialViewRelevance
{
	uint32_t                                           bOpaque : 1;                                   // 0x0000 (0x0004) [0x0000000000000000] [0x00000001] 
	uint32_t                                           bTranslucent : 1;                              // 0x0000 (0x0004) [0x0000000000000000] [0x00000002] 
	uint32_t                                           bDistortion : 1;                               // 0x0000 (0x0004) [0x0000000000000000] [0x00000004] 
	uint32_t                                           bOneLayerDistortionRelevance : 1;              // 0x0000 (0x0004) [0x0000000000000000] [0x00000008] 
	uint32_t                                           bLit : 1;                                      // 0x0000 (0x0004) [0x0000000000000000] [0x00000010] 
	uint32_t                                           bUsesSceneColor : 1;                           // 0x0000 (0x0004) [0x0000000000000000] [0x00000020] 
};

// ScriptStruct Engine.GroupComponent_ORS.ComponentTemplate
// 0x0020
struct FComponentTemplate
{
	struct FScriptDelegate                             Condition;                                     // 0x0000 (0x0018) [0x0000000000400001] (CPF_Edit | CPF_NeedCtorLink)
	class UObject*                                     Object;                                        // 0x0018 (0x0008) [0x0000000000000001] (CPF_Edit)    
};

// ScriptStruct Engine.Controller.VisiblePortalInfo
// 0x0010
struct FVisiblePortalInfo
{
	class AActor*                                      Source;                                        // 0x0000 (0x0008) [0x0000000000000000]               
	class AActor*                                      Destination;                                   // 0x0008 (0x0008) [0x0000000000000000]               
};

// ScriptStruct Engine.NavigationPoint.DebugNavCost
// 0x0014
struct FDebugNavCost
{
	class FString                                      Desc;                                          // 0x0000 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	int32_t                                            Cost;                                          // 0x0010 (0x0004) [0x0000000000000000]               
};

// ScriptStruct Engine.NavigationPoint.NavigationOctreeObject
// 0x0039
struct FNavigationOctreeObject
{
	struct FBox                                        BoundingBox;                                   // 0x0000 (0x001C) [0x0000000000000000]               
	struct FVector                                     BoxCenter;                                     // 0x001C (0x000C) [0x0000000000000000]               
	struct FPointer                                    OctreeNode;                                    // 0x0028 (0x0008) [0x0000000000003002] (CPF_Const | CPF_Native | CPF_Transient)
	class UObject*                                     Owner;                                         // 0x0030 (0x0008) [0x0000000000800002] (CPF_Const | CPF_NoExport)
	uint8_t                                            OwnerType;                                     // 0x0038 (0x0001) [0x0000000000800002] (CPF_Const | CPF_NoExport)
};

// ScriptStruct Engine.NavigationPoint.CheckpointRecord
// 0x0004
struct ANavigationPoint_FCheckpointRecord
{
	uint32_t                                           bDisabled : 1;                                 // 0x0000 (0x0004) [0x0000000000000000] [0x00000001] 
	uint32_t                                           bBlocked : 1;                                  // 0x0000 (0x0004) [0x0000000000000000] [0x00000002] 
};

// ScriptStruct Engine.KMeshProps.KSphereElem
// 0x0048
struct FKSphereElem
{
	struct FMatrix                                     TM;                                            // 0x0000 (0x0040) [0x0000000000020001] (CPF_Edit | CPF_EditConst)
	float                                              Radius;                                        // 0x0040 (0x0004) [0x0000000000020001] (CPF_Edit | CPF_EditConst)
	uint32_t                                           bNoRBCollision : 1;                            // 0x0044 (0x0004) [0x0000000000000001] [0x00000001] (CPF_Edit)
	uint32_t                                           bPerPolyShape : 1;                             // 0x0044 (0x0004) [0x0000000000000001] [0x00000002] (CPF_Edit)
};

// ScriptStruct Engine.KMeshProps.KBoxElem
// 0x0050
struct FKBoxElem
{
	struct FMatrix                                     TM;                                            // 0x0000 (0x0040) [0x0000000000020001] (CPF_Edit | CPF_EditConst)
	float                                              X;                                             // 0x0040 (0x0004) [0x0000000000020001] (CPF_Edit | CPF_EditConst)
	float                                              Y;                                             // 0x0044 (0x0004) [0x0000000000020001] (CPF_Edit | CPF_EditConst)
	float                                              Z;                                             // 0x0048 (0x0004) [0x0000000000020001] (CPF_Edit | CPF_EditConst)
	uint32_t                                           bNoRBCollision : 1;                            // 0x004C (0x0004) [0x0000000000000001] [0x00000001] (CPF_Edit)
	uint32_t                                           bPerPolyShape : 1;                             // 0x004C (0x0004) [0x0000000000000001] [0x00000002] (CPF_Edit)
};

// ScriptStruct Engine.KMeshProps.KSphylElem
// 0x004C
struct FKSphylElem
{
	struct FMatrix                                     TM;                                            // 0x0000 (0x0040) [0x0000000000020001] (CPF_Edit | CPF_EditConst)
	float                                              Radius;                                        // 0x0040 (0x0004) [0x0000000000020001] (CPF_Edit | CPF_EditConst)
	float                                              Length;                                        // 0x0044 (0x0004) [0x0000000000020001] (CPF_Edit | CPF_EditConst)
	uint32_t                                           bNoRBCollision : 1;                            // 0x0048 (0x0004) [0x0000000000000001] [0x00000001] (CPF_Edit)
	uint32_t                                           bPerPolyShape : 1;                             // 0x0048 (0x0004) [0x0000000000000001] [0x00000002] (CPF_Edit)
};

// ScriptStruct Engine.KMeshProps.KConvexElem
// 0x007C
struct FKConvexElem
{
	TArray<struct FVector>                             VertexData;                                    // 0x0000 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	TArray<struct FPlane>                              PermutedVertexData;                            // 0x0010 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	TArray<int32_t>                                    FaceTriData;                                   // 0x0020 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	TArray<struct FVector>                             EdgeDirections;                                // 0x0030 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	TArray<struct FVector>                             FaceNormalDirections;                          // 0x0040 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	TArray<struct FPlane>                              FacePlaneData;                                 // 0x0050 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FBox                                        ElemBox;                                       // 0x0060 (0x001C) [0x0000000000000000]               
};

// ScriptStruct Engine.KMeshProps.KAggregateGeom
// 0x004C
struct FKAggregateGeom
{
	TArray<struct FKSphereElem>                        SphereElems;                                   // 0x0000 (0x0010) [0x0000000000400041] (CPF_Edit | CPF_EditConstArray | CPF_NeedCtorLink)
	TArray<struct FKBoxElem>                           BoxElems;                                      // 0x0010 (0x0010) [0x0000000000400041] (CPF_Edit | CPF_EditConstArray | CPF_NeedCtorLink)
	TArray<struct FKSphylElem>                         SphylElems;                                    // 0x0020 (0x0010) [0x0000000000400041] (CPF_Edit | CPF_EditConstArray | CPF_NeedCtorLink)
	TArray<struct FKConvexElem>                        ConvexElems;                                   // 0x0030 (0x0010) [0x0000000000400041] (CPF_Edit | CPF_EditConstArray | CPF_NeedCtorLink)
	struct FPointer                                    RenderInfo;                                    // 0x0040 (0x0008) [0x0000000401001000] (CPF_Native)  
	uint32_t                                           bSkipCloseAndParallelChecks : 1;               // 0x0048 (0x0004) [0x0000000000000001] [0x00000001] (CPF_Edit)
	uint32_t                                           bSimpleCollisionPlane : 1;                     // 0x0048 (0x0004) [0x0000000000000001] [0x00000002] (CPF_Edit)
};

// ScriptStruct Engine.Pylon.PolyReference
// 0x0028
struct FPolyReference
{
	struct FActorReference                             OwningPylon;                                   // 0x0000 (0x0018) [0x0000000000000000]               
	int32_t                                            PolyId;                                        // 0x0018 (0x0004) [0x0000000000000000]               
	struct FPointer                                    CachedPoly;                                    // 0x0020 (0x0008) [0x0000000000001000] (CPF_Native)  
};

// ScriptStruct Engine.Scout.PathSizeInfo
// 0x0015
struct FPathSizeInfo
{
	struct FName                                       Desc;                                          // 0x0000 (0x0008) [0x0000000000000000]               
	float                                              Radius;                                        // 0x0008 (0x0004) [0x0000000000000000]               
	float                                              Height;                                        // 0x000C (0x0004) [0x0000000000000000]               
	float                                              CrouchHeight;                                  // 0x0010 (0x0004) [0x0000000000000000]               
	uint8_t                                            PathColor;                                     // 0x0014 (0x0001) [0x0000000000000000]               
};

// ScriptStruct Engine.AkBank.BankLoadState
// 0x000C
struct FBankLoadState
{
	uint8_t                                            Status;                                        // 0x0000 (0x0001) [0x0000000000000000]               
	float                                              AsyncLoadBegin;                                // 0x0004 (0x0004) [0x0000000000000000]               
	float                                              AsyncLoadTimeout;                              // 0x0008 (0x0004) [0x0000000000000000]               
};

// ScriptStruct Engine.BrushComponent.KCachedConvexData_Mirror
// 0x0010
struct FKCachedConvexData_Mirror
{
	TArray<int32_t>                                    CachedConvexElements;                          // 0x0000 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
};

// ScriptStruct Engine.Brush.GeomSelection
// 0x000C
struct FGeomSelection
{
	int32_t                                            Type;                                          // 0x0000 (0x0004) [0x0000000000000000]               
	int32_t                                            Index;                                         // 0x0004 (0x0004) [0x0000000000000000]               
	int32_t                                            SelectionIndex;                                // 0x0008 (0x0004) [0x0000000000000000]               
};

// ScriptStruct Engine.ReverbVolume.InteriorSettings
// 0x0024
struct FInteriorSettings
{
	uint32_t                                           bIsWorldInfo : 1;                              // 0x0000 (0x0004) [0x0000000000000000] [0x00000001] 
	float                                              ExteriorVolume;                                // 0x0004 (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              ExteriorTime;                                  // 0x0008 (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              ExteriorLPF;                                   // 0x000C (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              ExteriorLPFTime;                               // 0x0010 (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              InteriorVolume;                                // 0x0014 (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              InteriorTime;                                  // 0x0018 (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              InteriorLPF;                                   // 0x001C (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              InteriorLPFTime;                               // 0x0020 (0x0004) [0x0000000000000001] (CPF_Edit)    
};

// ScriptStruct Engine.ReverbVolume.ReverbSettings
// 0x0010
struct FReverbSettings
{
	uint32_t                                           bApplyReverb : 1;                              // 0x0000 (0x0004) [0x0000000000000001] [0x00000001] (CPF_Edit)
	uint8_t                                            ReverbType;                                    // 0x0004 (0x0001) [0x0000000000000001] (CPF_Edit)    
	float                                              Volume;                                        // 0x0008 (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              FadeTime;                                      // 0x000C (0x0004) [0x0000000000000001] (CPF_Edit)    
};

// ScriptStruct Engine.AudioComponent.AudioComponentParam
// 0x0018
struct FAudioComponentParam
{
	struct FName                                       ParamName;                                     // 0x0000 (0x0008) [0x0000000000000001] (CPF_Edit)    
	float                                              FloatParam;                                    // 0x0008 (0x0004) [0x0000000000000001] (CPF_Edit)    
	class USoundNodeWave*                              WaveParam;                                     // 0x0010 (0x0008) [0x0000000000000001] (CPF_Edit)    
};

// ScriptStruct Engine.EngineTypes.SubtitleCue
// 0x0014
struct FSubtitleCue
{
	class FString                                      Text;                                          // 0x0000 (0x0010) [0x0000000000408003] (CPF_Edit | CPF_Const | CPF_Localized | CPF_NeedCtorLink)
	float                                              Time;                                          // 0x0010 (0x0004) [0x0000000000008003] (CPF_Edit | CPF_Const | CPF_Localized)
};

// ScriptStruct Engine.AudioDevice.Listener
// 0x0044
struct FListener
{
	class APortalVolume*                               PortalVolume;                                  // 0x0000 (0x0008) [0x0000000000000002] (CPF_Const)   
	struct FVector                                     Location;                                      // 0x0008 (0x000C) [0x0000000000000000]               
	struct FVector                                     Up;                                            // 0x0014 (0x000C) [0x0000000000000000]               
	struct FVector                                     Right;                                         // 0x0020 (0x000C) [0x0000000000000000]               
	struct FVector                                     Front;                                         // 0x002C (0x000C) [0x0000000000000000]               
	struct FVector                                     Velocity;                                      // 0x0038 (0x000C) [0x0000000000000000]               
};

// ScriptStruct Engine.AudioDevice.AudioClassInfo
// 0x0010
struct FAudioClassInfo
{
	int32_t                                            NumResident;                                   // 0x0000 (0x0004) [0x0000000000000002] (CPF_Const)   
	int32_t                                            SizeResident;                                  // 0x0004 (0x0004) [0x0000000000000002] (CPF_Const)   
	int32_t                                            NumRealTime;                                   // 0x0008 (0x0004) [0x0000000000000002] (CPF_Const)   
	int32_t                                            SizeRealTime;                                  // 0x000C (0x0004) [0x0000000000000002] (CPF_Const)   
};

// ScriptStruct Engine.SoundCue.SoundNodeEditorData
// 0x0008
struct FSoundNodeEditorData
{
	int32_t                                            NodePosX;                                      // 0x0000 (0x0004) [0x0000000000001002] (CPF_Const | CPF_Native)
	int32_t                                            NodePosY;                                      // 0x0004 (0x0004) [0x0000000000001002] (CPF_Const | CPF_Native)
};

// ScriptStruct Engine.SoundNodeAmbient.AmbientSoundSlot
// 0x0014
struct FAmbientSoundSlot
{
	class USoundNodeWave*                              Wave;                                          // 0x0000 (0x0008) [0x0000000000000001] (CPF_Edit)    
	float                                              PitchScale;                                    // 0x0008 (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              VolumeScale;                                   // 0x000C (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              Weight;                                        // 0x0010 (0x0004) [0x0000000000000001] (CPF_Edit)    
};

// ScriptStruct Engine.AmbientSoundSimpleToggleable.CheckpointRecord
// 0x0004
struct AAmbientSoundSimpleToggleable_FCheckpointRecord
{
	uint32_t                                           bCurrentlyPlaying : 1;                         // 0x0000 (0x0004) [0x0000000000000000] [0x00000001] 
};

// ScriptStruct Engine.SplineAudioComponent.InterpPointOnSpline
// 0x0014
struct FInterpPointOnSpline
{
	struct FVector                                     Position;                                      // 0x0000 (0x000C) [0x0000000000000001] (CPF_Edit)    
	float                                              InVal;                                         // 0x000C (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              Length;                                        // 0x0010 (0x0004) [0x0000000000000001] (CPF_Edit)    
};

// ScriptStruct Engine.SimpleSplineAudioComponent.SplineSoundSlot
// 0x0038
struct FSplineSoundSlot
{
	class USoundNodeWave*                              Wave;                                          // 0x0000 (0x0008) [0x0000000000000001] (CPF_Edit)    
	float                                              PitchScale;                                    // 0x0008 (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              VolumeScale;                                   // 0x000C (0x0004) [0x0000000000000001] (CPF_Edit)    
	int32_t                                            StartPoint;                                    // 0x0010 (0x0004) [0x0000000000000001] (CPF_Edit)    
	int32_t                                            EndPoint;                                      // 0x0014 (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              Weight;                                        // 0x0018 (0x0004) [0x0000000000000001] (CPF_Edit)    
	struct FDouble                                     LastUpdateTime;                                // 0x0020 (0x0008) [0x0000000000001002] (CPF_Const | CPF_Native)
	float                                              SourceInteriorVolume;                          // 0x0028 (0x0004) [0x0000000000001002] (CPF_Const | CPF_Native)
	float                                              SourceInteriorLPF;                             // 0x002C (0x0004) [0x0000000000001002] (CPF_Const | CPF_Native)
	float                                              CurrentInteriorVolume;                         // 0x0030 (0x0004) [0x0000000000001002] (CPF_Const | CPF_Native)
	float                                              CurrentInteriorLPF;                            // 0x0034 (0x0004) [0x0000000000001002] (CPF_Const | CPF_Native)
};

// ScriptStruct Engine.MultiCueSplineAudioComponent.MultiCueSplineSoundSlot
// 0x0034
struct FMultiCueSplineSoundSlot
{
	class USoundCue*                                   SoundCue;                                      // 0x0000 (0x0008) [0x0000000000000001] (CPF_Edit)    
	float                                              PitchScale;                                    // 0x0008 (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              VolumeScale;                                   // 0x000C (0x0004) [0x0000000000000001] (CPF_Edit)    
	int32_t                                            StartPoint;                                    // 0x0010 (0x0004) [0x0000000000000001] (CPF_Edit)    
	int32_t                                            EndPoint;                                      // 0x0014 (0x0004) [0x0000000000000001] (CPF_Edit)    
	struct FDouble                                     LastUpdateTime;                                // 0x0018 (0x0008) [0x0000000000001002] (CPF_Const | CPF_Native)
	float                                              SourceInteriorVolume;                          // 0x0020 (0x0004) [0x0000000000001002] (CPF_Const | CPF_Native)
	float                                              SourceInteriorLPF;                             // 0x0024 (0x0004) [0x0000000000001002] (CPF_Const | CPF_Native)
	float                                              CurrentInteriorVolume;                         // 0x0028 (0x0004) [0x0000000000001002] (CPF_Const | CPF_Native)
	float                                              CurrentInteriorLPF;                            // 0x002C (0x0004) [0x0000000000001002] (CPF_Const | CPF_Native)
	uint32_t                                           bPlaying : 1;                                  // 0x0030 (0x0004) [0x0000000000000000] [0x00000001] 
};

// ScriptStruct Engine.PlatformInterfaceBase.DelegateArray
// 0x0010
struct FDelegateArray
{
	TArray<struct FScriptDelegate>                     Delegates;                                     // 0x0000 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
};

// ScriptStruct Engine.PlatformInterfaceBase.PlatformInterfaceData
// 0x0040
struct FPlatformInterfaceData
{
	struct FName                                       DataName;                                      // 0x0000 (0x0008) [0x0000000000000000]               
	uint8_t                                            Type;                                          // 0x0008 (0x0001) [0x0000000000000000]               
	int32_t                                            IntValue;                                      // 0x000C (0x0004) [0x0000000000000000]               
	float                                              FloatValue;                                    // 0x0010 (0x0004) [0x0000000000000000]               
	class FString                                      StringValue;                                   // 0x0018 (0x0010) [0x0000000000500000] (CPF_NeedCtorLink)
	class FString                                      StringValue2;                                  // 0x0028 (0x0010) [0x0000000000500000] (CPF_NeedCtorLink)
	class UObject*                                     ObjectValue;                                   // 0x0038 (0x0008) [0x0000000000000000]               
};

// ScriptStruct Engine.PlatformInterfaceBase.PlatformInterfaceDelegateResult
// 0x0048
struct FPlatformInterfaceDelegateResult
{
	uint32_t                                           bSuccessful : 1;                               // 0x0000 (0x0004) [0x0000000000000000] [0x00000001] 
	struct FPlatformInterfaceData                      Data;                                          // 0x0008 (0x0040) [0x0000000000400000] (CPF_NeedCtorLink)
};

// ScriptStruct Engine.AnalyticEventsBase.EventStringParam
// 0x0020
struct FEventStringParam
{
	class FString                                      ParamName;                                     // 0x0000 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	class FString                                      ParamValue;                                    // 0x0010 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
};

// ScriptStruct Engine.AnimSequence.CompressedTrack
// 0x0038
struct FCompressedTrack
{
	TArray<uint8_t>                                    ByteStream;                                    // 0x0000 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	TArray<float>                                      Times;                                         // 0x0010 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	float                                              Mins[0x3];                                     // 0x0020 (0x000C) [0x0000000000000000]               
	float                                              Ranges[0x3];                                   // 0x002C (0x000C) [0x0000000000000000]               
};

// ScriptStruct Engine.AnimSequence.CurveTrack
// 0x0018
struct FCurveTrack
{
	struct FName                                       CurveName;                                     // 0x0000 (0x0008) [0x0000000000000000]               
	TArray<float>                                      CurveWeights;                                  // 0x0008 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
};

// ScriptStruct Engine.AnimSequence.RotationTrack
// 0x0020
struct FRotationTrack
{
	TArray<struct FQuat>                               RotKeys;                                       // 0x0000 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	TArray<float>                                      Times;                                         // 0x0010 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
};

// ScriptStruct Engine.AnimSequence.TranslationTrack
// 0x0020
struct FTranslationTrack
{
	TArray<struct FVector>                             PosKeys;                                       // 0x0000 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	TArray<float>                                      Times;                                         // 0x0010 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
};

// ScriptStruct Engine.AnimSequence.TimeModifier
// 0x0008
struct FTimeModifier
{
	float                                              Time;                                          // 0x0000 (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              TargetStrength;                                // 0x0004 (0x0004) [0x0000000000000001] (CPF_Edit)    
};

// ScriptStruct Engine.AnimSequence.SkelControlModifier
// 0x0018
struct FSkelControlModifier
{
	struct FName                                       SkelControlName;                               // 0x0000 (0x0008) [0x0000000000000001] (CPF_Edit)    
	TArray<struct FTimeModifier>                       Modifiers;                                     // 0x0008 (0x0010) [0x0000000004400001] (CPF_Edit | CPF_NeedCtorLink | CPF_EditInline)
};

// ScriptStruct Engine.AnimSequence.AnimNotifyEvent
// 0x001C
struct FAnimNotifyEvent
{
	float                                              Time;                                          // 0x0000 (0x0004) [0x0000000000000001] (CPF_Edit)    
	class UAnimNotify*                                 Notify;                                        // 0x0008 (0x0008) [0x0000000004400009] (CPF_Edit | CPF_ExportObject | CPF_NeedCtorLink | CPF_EditInline)
	struct FName                                       Comment;                                       // 0x0010 (0x0008) [0x0000000800000001] (CPF_Edit)    
	float                                              Duration;                                      // 0x0018 (0x0004) [0x0000000000000001] (CPF_Edit)    
};

// ScriptStruct Engine.AnimSequence.RawAnimSequenceTrack
// 0x0020
struct FRawAnimSequenceTrack
{
	TArray<struct FVector>                             PosKeys;                                       // 0x0000 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	TArray<struct FQuat>                               RotKeys;                                       // 0x0010 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
};

// ScriptStruct Engine.AnimNode.CurveKey
// 0x000C
struct FCurveKey
{
	struct FName                                       CurveName;                                     // 0x0000 (0x0008) [0x0000000000000000]               
	float                                              Weight;                                        // 0x0008 (0x0004) [0x0000000000000000]               
};

// ScriptStruct Engine.AnimNodeBlendBase.AnimBlendChild
// 0x0020
struct FAnimBlendChild
{
	struct FName                                       Name;                                          // 0x0000 (0x0008) [0x0000000000000001] (CPF_Edit)    
	class UAnimNode*                                   Anim;                                          // 0x0008 (0x0008) [0x0000000004400008] (CPF_ExportObject | CPF_NeedCtorLink | CPF_EditInline)
	float                                              Weight;                                        // 0x0010 (0x0004) [0x0000000000000000]               
	float                                              BlendWeight;                                   // 0x0014 (0x0004) [0x0000000000002002] (CPF_Const | CPF_Transient)
	uint32_t                                           bMirrorSkeleton : 1;                           // 0x0018 (0x0004) [0x0000000000000000] [0x00000001] 
	uint32_t                                           bIsAdditive : 1;                               // 0x0018 (0x0004) [0x0000000000000000] [0x00000002] 
	int32_t                                            DrawY;                                         // 0x001C (0x0004) [0x0000000800000000]               
};

// ScriptStruct Engine.AnimNode_MultiBlendPerBone.WeightNodeRule
// 0x0020
struct FWeightNodeRule
{
	struct FName                                       NodeName;                                      // 0x0000 (0x0008) [0x0000000000000001] (CPF_Edit)    
	class UAnimNodeBlendBase*                          CachedNode;                                    // 0x0008 (0x0008) [0x0000000000000000]               
	class UAnimNodeSlot*                               CachedSlotNode;                                // 0x0010 (0x0008) [0x0000000000000000]               
	uint8_t                                            WeightCheck;                                   // 0x0018 (0x0001) [0x0000000000000001] (CPF_Edit)    
	int32_t                                            ChildIndex;                                    // 0x001C (0x0004) [0x0000000000000001] (CPF_Edit)    
};

// ScriptStruct Engine.AnimNode_MultiBlendPerBone.WeightRule
// 0x0040
struct FWeightRule
{
	struct FWeightNodeRule                             FirstNode;                                     // 0x0000 (0x0020) [0x0000000000000001] (CPF_Edit)    
	struct FWeightNodeRule                             SecondNode;                                    // 0x0020 (0x0020) [0x0000000000000001] (CPF_Edit)    
};

// ScriptStruct Engine.AnimNode_MultiBlendPerBone.BranchInfo
// 0x000C
struct FBranchInfo
{
	struct FName                                       BoneName;                                      // 0x0000 (0x0008) [0x0000000000000001] (CPF_Edit)    
	float                                              PerBoneWeightIncrease;                         // 0x0008 (0x0004) [0x0000000000000001] (CPF_Edit)    
};

// ScriptStruct Engine.AnimNode_MultiBlendPerBone.PerBoneMaskInfo
// 0x0054
struct FPerBoneMaskInfo
{
	TArray<struct FBranchInfo>                         BranchList;                                    // 0x0000 (0x0010) [0x0000000000400001] (CPF_Edit | CPF_NeedCtorLink)
	float                                              DesiredWeight;                                 // 0x0010 (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              BlendTimeToGo;                                 // 0x0014 (0x0004) [0x0000000000000001] (CPF_Edit)    
	TArray<struct FWeightRule>                         WeightRuleList;                                // 0x0018 (0x0010) [0x0000000000400001] (CPF_Edit | CPF_NeedCtorLink)
	uint32_t                                           bWeightBasedOnNodeRules : 1;                   // 0x0028 (0x0004) [0x0000000000000001] [0x00000001] (CPF_Edit)
	uint32_t                                           bDisableForNonLocalHumanPlayers : 1;           // 0x0028 (0x0004) [0x0000000000000001] [0x00000002] (CPF_Edit)
	uint32_t                                           bPendingBlend : 1;                             // 0x0028 (0x0004) [0x0000000000002000] [0x00000004] (CPF_Transient)
	TArray<float>                                      PerBoneWeights;                                // 0x0030 (0x0010) [0x0000000000402000] (CPF_Transient | CPF_NeedCtorLink)
	TArray<uint8_t>                                    TransformReqBone;                              // 0x0040 (0x0010) [0x0000000000402000] (CPF_Transient | CPF_NeedCtorLink)
	int32_t                                            TransformReqBoneIndex;                         // 0x0050 (0x0004) [0x0000000000002000] (CPF_Transient)
};

// ScriptStruct Engine.AnimNodeAimOffset.AimTransform
// 0x001C
struct FAimTransform
{
	struct FQuat                                       Quaternion;                                    // 0x0000 (0x0010) [0x0000000000000001] (CPF_Edit)    
	struct FVector                                     Translation;                                   // 0x0010 (0x000C) [0x0000000000000001] (CPF_Edit)    
};

// ScriptStruct Engine.AnimNodeAimOffset.AimComponent
// 0x0130
struct FAimComponent
{
	struct FName                                       BoneName;                                      // 0x0000 (0x0008) [0x0000000000000001] (CPF_Edit)    
	uint8_t                                           UnknownData00[0x8];                               		// 0x0008 (0x0008) MISSED OFFSET
	struct FAimTransform                               LU;                                            // 0x0010 (0x0020) [0x0000000000000001] (CPF_Edit)    
	struct FAimTransform                               LC;                                            // 0x0030 (0x0020) [0x0000000000000001] (CPF_Edit)    
	struct FAimTransform                               LD;                                            // 0x0050 (0x0020) [0x0000000000000001] (CPF_Edit)    
	struct FAimTransform                               CU;                                            // 0x0070 (0x0020) [0x0000000000000001] (CPF_Edit)    
	struct FAimTransform                               CC;                                            // 0x0090 (0x0020) [0x0000000000000001] (CPF_Edit)    
	struct FAimTransform                               CD;                                            // 0x00B0 (0x0020) [0x0000000000000001] (CPF_Edit)    
	struct FAimTransform                               RU;                                            // 0x00D0 (0x0020) [0x0000000000000001] (CPF_Edit)    
	struct FAimTransform                               RC;                                            // 0x00F0 (0x0020) [0x0000000000000001] (CPF_Edit)    
	struct FAimTransform                               RD;                                            // 0x0110 (0x0020) [0x0000000000000001] (CPF_Edit)    
};

// ScriptStruct Engine.AnimNodeAimOffset.AimOffsetProfile
// 0x0070
struct FAimOffsetProfile
{
	struct FName                                       ProfileName;                                   // 0x0000 (0x0008) [0x0000000000020003] (CPF_Edit | CPF_Const | CPF_EditConst)
	struct FVector2D                                   HorizontalRange;                               // 0x0008 (0x0008) [0x0000000000000001] (CPF_Edit)    
	struct FVector2D                                   VerticalRange;                                 // 0x0010 (0x0008) [0x0000000000000001] (CPF_Edit)    
	TArray<struct FAimComponent>                       AimComponents;                                 // 0x0018 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FName                                       AnimName_LU;                                   // 0x0028 (0x0008) [0x0000000000000001] (CPF_Edit)    
	struct FName                                       AnimName_LC;                                   // 0x0030 (0x0008) [0x0000000000000001] (CPF_Edit)    
	struct FName                                       AnimName_LD;                                   // 0x0038 (0x0008) [0x0000000000000001] (CPF_Edit)    
	struct FName                                       AnimName_CU;                                   // 0x0040 (0x0008) [0x0000000000000001] (CPF_Edit)    
	struct FName                                       AnimName_CC;                                   // 0x0048 (0x0008) [0x0000000000000001] (CPF_Edit)    
	struct FName                                       AnimName_CD;                                   // 0x0050 (0x0008) [0x0000000000000001] (CPF_Edit)    
	struct FName                                       AnimName_RU;                                   // 0x0058 (0x0008) [0x0000000000000001] (CPF_Edit)    
	struct FName                                       AnimName_RC;                                   // 0x0060 (0x0008) [0x0000000000000001] (CPF_Edit)    
	struct FName                                       AnimName_RD;                                   // 0x0068 (0x0008) [0x0000000000000001] (CPF_Edit)    
};

// ScriptStruct Engine.AnimNodeBlendMultiBone.ChildBoneBlendInfo
// 0x0038
struct FChildBoneBlendInfo
{
	TArray<float>                                      TargetPerBoneWeight;                           // 0x0000 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FName                                       InitTargetStartBone;                           // 0x0010 (0x0008) [0x0000000000000001] (CPF_Edit)    
	float                                              InitPerBoneIncrease;                           // 0x0018 (0x0004) [0x0000000000000001] (CPF_Edit)    
	struct FName                                       OldStartBone;                                  // 0x001C (0x0008) [0x0000000000000002] (CPF_Const)   
	float                                              OldBoneIncrease;                               // 0x0024 (0x0004) [0x0000000000000002] (CPF_Const)   
	TArray<uint8_t>                                    TargetRequiredBones;                           // 0x0028 (0x0010) [0x0000000000402000] (CPF_Transient | CPF_NeedCtorLink)
};

// ScriptStruct Engine.AnimNodeRandom.RandomAnimInfo
// 0x0020
struct FRandomAnimInfo
{
	float                                              Chance;                                        // 0x0000 (0x0004) [0x0000000000000001] (CPF_Edit)    
	uint8_t                                            LoopCountMin;                                  // 0x0004 (0x0001) [0x0000000000000001] (CPF_Edit)    
	uint8_t                                            LoopCountMax;                                  // 0x0005 (0x0001) [0x0000000000000001] (CPF_Edit)    
	float                                              BlendInTime;                                   // 0x0008 (0x0004) [0x0000000000000001] (CPF_Edit)    
	struct FVector2D                                   PlayRateRange;                                 // 0x000C (0x0008) [0x0000000000000001] (CPF_Edit)    
	uint32_t                                           bStillFrame : 1;                               // 0x0014 (0x0004) [0x0000000000000001] [0x00000001] (CPF_Edit)
	uint8_t                                            LoopCount;                                     // 0x0018 (0x0001) [0x0000000000002000] (CPF_Transient)
	float                                              LastPosition;                                  // 0x001C (0x0004) [0x0000000000002000] (CPF_Transient)
};

// ScriptStruct Engine.AnimNodeSequenceBlendBase.AnimInfo
// 0x0014
struct FAnimInfo
{
	struct FName                                       AnimSeqName;                                   // 0x0000 (0x0008) [0x0000000000000002] (CPF_Const)   
	class UAnimSequence*                               AnimSeq;                                       // 0x0008 (0x0008) [0x0000000000002002] (CPF_Const | CPF_Transient)
	int32_t                                            AnimLinkupIndex;                               // 0x0010 (0x0004) [0x0000000000002002] (CPF_Const | CPF_Transient)
};

// ScriptStruct Engine.AnimNodeSequenceBlendBase.AnimBlendInfo
// 0x0024
struct FAnimBlendInfo
{
	struct FName                                       AnimName;                                      // 0x0000 (0x0008) [0x0000000000000001] (CPF_Edit)    
	struct FAnimInfo                                   AnimInfo;                                      // 0x0008 (0x0018) [0x0000000000000000]               
	float                                              Weight;                                        // 0x0020 (0x0004) [0x0000000000002000] (CPF_Transient)
};

// ScriptStruct Engine.AnimNodeSynch.SynchGroup
// 0x0028
struct FSynchGroup
{
	TArray<class UAnimNodeSequence*>                   SeqNodes;                                      // 0x0000 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	class UAnimNodeSequence*                           MasterNode;                                    // 0x0010 (0x0008) [0x0000000000002000] (CPF_Transient)
	struct FName                                       GroupName;                                     // 0x0018 (0x0008) [0x0000000000000001] (CPF_Edit)    
	uint32_t                                           bFireSlaveNotifies : 1;                        // 0x0020 (0x0004) [0x0000000000000001] [0x00000001] (CPF_Edit)
	float                                              RateScale;                                     // 0x0024 (0x0004) [0x0000000000000001] (CPF_Edit)    
};

// ScriptStruct Engine.SkeletalMeshComponent.BonePair
// 0x0010
struct FBonePair
{
	struct FName                                       Bones[0x2];                                    // 0x0000 (0x0010) [0x0000000000000000]               
};

// ScriptStruct Engine.SkeletalMeshComponent.SkelMeshComponentLODInfo
// 0x001C
struct FSkelMeshComponentLODInfo
{
	TArray<uint32_t>                                   HiddenMaterials;                               // 0x0000 (0x0010) [0x0000000000400002] (CPF_Const | CPF_NeedCtorLink)
	uint32_t                                           bNeedsInstanceWeightUpdate : 1;                // 0x0010 (0x0004) [0x0000000000000002] [0x00000001] (CPF_Const)
	uint32_t                                           bAlwaysUseInstanceWeights : 1;                 // 0x0010 (0x0004) [0x0000000000000002] [0x00000002] (CPF_Const)
	uint8_t                                            InstanceWeightUsage;                           // 0x0014 (0x0001) [0x0000000000002002] (CPF_Const | CPF_Transient)
	int32_t                                            InstanceWeightIdx;                             // 0x0018 (0x0004) [0x0000000000002002] (CPF_Const | CPF_Transient)
};

// ScriptStruct Engine.SkeletalMeshComponent.Attachment
// 0x0034
struct FAttachment
{
	class UActorComponent*                             Component;                                     // 0x0000 (0x0008) [0x0000000004080009] (CPF_Edit | CPF_ExportObject | CPF_Component | CPF_EditInline)
	struct FName                                       BoneName;                                      // 0x0008 (0x0008) [0x0000000000000001] (CPF_Edit)    
	struct FVector                                     RelativeLocation;                              // 0x0010 (0x000C) [0x0000000000000001] (CPF_Edit)    
	struct FRotator                                    RelativeRotation;                              // 0x001C (0x000C) [0x0000000000000001] (CPF_Edit)    
	struct FVector                                     RelativeScale;                                 // 0x0028 (0x000C) [0x0000000000000001] (CPF_Edit)    
};

// ScriptStruct Engine.SkeletalMeshComponent.ActiveMorph
// 0x000C
struct FActiveMorph
{
	class UMorphTarget*                                Target;                                        // 0x0000 (0x0008) [0x0000000000000000]               
	float                                              Weight;                                        // 0x0008 (0x0004) [0x0000000000000000]               
};

// ScriptStruct Engine.EngineTypes.LocalizedSubtitle
// 0x0024
struct FLocalizedSubtitle
{
	class FString                                      LanguageExt;                                   // 0x0000 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	TArray<struct FSubtitleCue>                        Subtitles;                                     // 0x0010 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	uint32_t                                           bMature : 1;                                   // 0x0020 (0x0004) [0x0000000000000000] [0x00000001] 
	uint32_t                                           bManualWordWrap : 1;                           // 0x0020 (0x0004) [0x0000000000000000] [0x00000002] 
	uint32_t                                           bSingleLine : 1;                               // 0x0020 (0x0004) [0x0000000000000000] [0x00000004] 
};

// ScriptStruct Engine.EngineTypes.LightMapRef
// 0x0008
struct FLightMapRef
{
	struct FPointer                                    Reference;                                     // 0x0000 (0x0008) [0x0000000000001002] (CPF_Const | CPF_Native)
};

// ScriptStruct Engine.EngineTypes.DominantShadowInfo
// 0x00A4
struct FDominantShadowInfo
{
	struct FMatrix                                     WorldToLight;                                  // 0x0000 (0x0040) [0x0000000000000000]               
	struct FMatrix                                     LightToWorld;                                  // 0x0040 (0x0040) [0x0000000000000000]               
	struct FBox                                        LightSpaceImportanceBounds;                    // 0x0080 (0x001C) [0x0000000000000000]               
	int32_t                                            ShadowMapSizeX;                                // 0x009C (0x0004) [0x0000000000000000]               
	int32_t                                            ShadowMapSizeY;                                // 0x00A0 (0x0004) [0x0000000000000000]               
};

// ScriptStruct Engine.EngineTypes.LightmassLightSettings
// 0x000C
struct FLightmassLightSettings
{
	float                                              IndirectLightingScale;                         // 0x0000 (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              IndirectLightingSaturation;                    // 0x0004 (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              ShadowExponent;                                // 0x0008 (0x0004) [0x0000000000000001] (CPF_Edit)    
};

// ScriptStruct Engine.Pawn.ScalarParameterInterpStruct
// 0x0014
struct FScalarParameterInterpStruct
{
	struct FName                                       ParameterName;                                 // 0x0000 (0x0008) [0x0000000000000001] (CPF_Edit)    
	float                                              ParameterValue;                                // 0x0008 (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              InterpTime;                                    // 0x000C (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              WarmupTime;                                    // 0x0010 (0x0004) [0x0000000000000001] (CPF_Edit)    
};

// ScriptStruct Engine.EngineTypes.LightmassPointLightSettings
// 0x0004 (0x000C - 0x0010)
struct FLightmassPointLightSettings : FLightmassLightSettings
{
	float                                              LightSourceRadius;                             // 0x000C (0x0004) [0x0000000000000001] (CPF_Edit)    
};

// ScriptStruct Engine.EngineTypes.LightmassDirectionalLightSettings
// 0x0004 (0x000C - 0x0010)
struct FLightmassDirectionalLightSettings : FLightmassLightSettings
{
	float                                              LightSourceAngle;                              // 0x000C (0x0004) [0x0000000000000001] (CPF_Edit)    
};

// ScriptStruct Engine.EngineTypes.LightmassPrimitiveSettings
// 0x001C
struct FLightmassPrimitiveSettings
{
	uint32_t                                           bUseTwoSidedLighting : 1;                      // 0x0000 (0x0004) [0x0000000000000001] [0x00000001] (CPF_Edit)
	uint32_t                                           bShadowIndirectOnly : 1;                       // 0x0000 (0x0004) [0x0000000000000001] [0x00000002] (CPF_Edit)
	uint32_t                                           bUseEmissiveForStaticLighting : 1;             // 0x0000 (0x0004) [0x0000000000000001] [0x00000004] (CPF_Edit)
	float                                              EmissiveLightFalloffExponent;                  // 0x0004 (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              EmissiveLightExplicitInfluenceRadius;          // 0x0008 (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              EmissiveBoost;                                 // 0x000C (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              DiffuseBoost;                                  // 0x0010 (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              SpecularBoost;                                 // 0x0014 (0x0004) [0x0000000000000000]               
	float                                              FullyOccludedSamplesFraction;                  // 0x0018 (0x0004) [0x0000000000000001] (CPF_Edit)    
};

// ScriptStruct Engine.EngineTypes.LightmassDebugOptions
// 0x0014
struct FLightmassDebugOptions
{
	uint32_t                                           bDebugMode : 1;                                // 0x0000 (0x0004) [0x0000000000000001] [0x00000001] (CPF_Edit)
	uint32_t                                           bStatsEnabled : 1;                             // 0x0000 (0x0004) [0x0000000000000001] [0x00000002] (CPF_Edit)
	uint32_t                                           bGatherBSPSurfacesAcrossComponents : 1;        // 0x0000 (0x0004) [0x0000000000000001] [0x00000004] (CPF_Edit)
	float                                              CoplanarTolerance;                             // 0x0004 (0x0004) [0x0000000000000001] (CPF_Edit)    
	uint32_t                                           bUseDeterministicLighting : 1;                 // 0x0008 (0x0004) [0x0000000000000001] [0x00000001] (CPF_Edit)
	uint32_t                                           bUseImmediateImport : 1;                       // 0x0008 (0x0004) [0x0000000000000001] [0x00000002] (CPF_Edit)
	uint32_t                                           bImmediateProcessMappings : 1;                 // 0x0008 (0x0004) [0x0000000000000001] [0x00000004] (CPF_Edit)
	uint32_t                                           bSortMappings : 1;                             // 0x0008 (0x0004) [0x0000000000000001] [0x00000008] (CPF_Edit)
	uint32_t                                           bDumpBinaryFiles : 1;                          // 0x0008 (0x0004) [0x0000000000000001] [0x00000010] (CPF_Edit)
	uint32_t                                           bDebugMaterials : 1;                           // 0x0008 (0x0004) [0x0000000000000001] [0x00000020] (CPF_Edit)
	uint32_t                                           bPadMappings : 1;                              // 0x0008 (0x0004) [0x0000000000000001] [0x00000040] (CPF_Edit)
	uint32_t                                           bDebugPaddings : 1;                            // 0x0008 (0x0004) [0x0000000000000001] [0x00000080] (CPF_Edit)
	uint32_t                                           bOnlyCalcDebugTexelMappings : 1;               // 0x0008 (0x0004) [0x0000000000000001] [0x00000100] (CPF_Edit)
	uint32_t                                           bUseRandomColors : 1;                          // 0x0008 (0x0004) [0x0000000000000001] [0x00000200] (CPF_Edit)
	uint32_t                                           bColorBordersGreen : 1;                        // 0x0008 (0x0004) [0x0000000000000001] [0x00000400] (CPF_Edit)
	uint32_t                                           bColorByExecutionTime : 1;                     // 0x0008 (0x0004) [0x0000000000000001] [0x00000800] (CPF_Edit)
	float                                              ExecutionTimeDivisor;                          // 0x000C (0x0004) [0x0000000000000001] (CPF_Edit)    
	uint32_t                                           bInitialized : 1;                              // 0x0010 (0x0004) [0x0000000000000000] [0x00000001] 
};

// ScriptStruct Engine.EngineTypes.SwarmDebugOptions
// 0x0004
struct FSwarmDebugOptions
{
	uint32_t                                           bDistributionEnabled : 1;                      // 0x0000 (0x0004) [0x0000000000000001] [0x00000001] (CPF_Edit)
	uint32_t                                           bForceContentExport : 1;                       // 0x0000 (0x0004) [0x0000000000000001] [0x00000002] (CPF_Edit)
	uint32_t                                           bInitialized : 1;                              // 0x0000 (0x0004) [0x0000000000000000] [0x00000004] 
};

// ScriptStruct Engine.EngineTypes.RootMotionCurve
// 0x0024
struct FRootMotionCurve
{
	struct FName                                       AnimName;                                      // 0x0000 (0x0008) [0x0000000000000001] (CPF_Edit)    
	struct FInterpCurveVector                          Curve;                                         // 0x0008 (0x0018) [0x0000000000400001] (CPF_Edit | CPF_NeedCtorLink)
	float                                              MaxCurveTime;                                  // 0x0020 (0x0004) [0x0000000000000001] (CPF_Edit)    
};

// ScriptStruct Engine.AnimNotify_Trails.TrailSocketSamplePoint
// 0x0018
struct FTrailSocketSamplePoint
{
	struct FVector                                     Position;                                      // 0x0000 (0x000C) [0x0000000000000000]               
	struct FVector                                     Velocity;                                      // 0x000C (0x000C) [0x0000000000000000]               
};

// ScriptStruct Engine.AnimNotify_Trails.TrailSamplePoint
// 0x004C
struct FTrailSamplePoint
{
	float                                              RelativeTime;                                  // 0x0000 (0x0004) [0x0000000000000000]               
	struct FTrailSocketSamplePoint                     FirstEdgeSample;                               // 0x0004 (0x0018) [0x0000000000000000]               
	struct FTrailSocketSamplePoint                     ControlPointSample;                            // 0x001C (0x0018) [0x0000000000000000]               
	struct FTrailSocketSamplePoint                     SecondEdgeSample;                              // 0x0034 (0x0018) [0x0000000000000000]               
};

// ScriptStruct Engine.AnimNotify_Trails.TrailSample
// 0x0028
struct FTrailSample
{
	float                                              RelativeTime;                                  // 0x0000 (0x0004) [0x0000000000000000]               
	struct FVector                                     FirstEdgeSample;                               // 0x0004 (0x000C) [0x0000000000000000]               
	struct FVector                                     ControlPointSample;                            // 0x0010 (0x000C) [0x0000000000000000]               
	struct FVector                                     SecondEdgeSample;                              // 0x001C (0x000C) [0x0000000000000000]               
};

// ScriptStruct Engine.AnimSet.AnimSetMeshLinkup
// 0x0010
struct FAnimSetMeshLinkup
{
	TArray<int32_t>                                    BoneToTrackTable;                              // 0x0000 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
};

// ScriptStruct Engine.AnimTree.AnimGroup
// 0x0030
struct FAnimGroup
{
	TArray<class UAnimNodeSequence*>                   SeqNodes;                                      // 0x0000 (0x0010) [0x0000000000402002] (CPF_Const | CPF_Transient | CPF_NeedCtorLink)
	class UAnimNodeSequence*                           SynchMaster;                                   // 0x0010 (0x0008) [0x0000000000002002] (CPF_Const | CPF_Transient)
	class UAnimNodeSequence*                           NotifyMaster;                                  // 0x0018 (0x0008) [0x0000000000002002] (CPF_Const | CPF_Transient)
	struct FName                                       GroupName;                                     // 0x0020 (0x0008) [0x0000000000000003] (CPF_Edit | CPF_Const)
	float                                              RateScale;                                     // 0x0028 (0x0004) [0x0000000000000003] (CPF_Edit | CPF_Const)
	float                                              SynchPctPosition;                              // 0x002C (0x0004) [0x0000000000000002] (CPF_Const)   
};

// ScriptStruct Engine.AnimTree.SkelControlListHead
// 0x0014
struct FSkelControlListHead
{
	struct FName                                       BoneName;                                      // 0x0000 (0x0008) [0x0000000000000000]               
	class USkelControlBase*                            ControlHead;                                   // 0x0008 (0x0008) [0x0000000004400008] (CPF_ExportObject | CPF_NeedCtorLink | CPF_EditInline)
	int32_t                                            DrawY;                                         // 0x0010 (0x0004) [0x0000000800000000]               
};

// ScriptStruct Engine.AnimTree.PreviewSkelMeshStruct
// 0x0020
struct FPreviewSkelMeshStruct
{
	struct FName                                       DisplayName;                                   // 0x0000 (0x0008) [0x0000000000000001] (CPF_Edit)    
	class USkeletalMesh*                               PreviewSkelMesh;                               // 0x0008 (0x0008) [0x0000000000000001] (CPF_Edit)    
	TArray<class UMorphTargetSet*>                     PreviewMorphSets;                              // 0x0010 (0x0010) [0x0000000000400001] (CPF_Edit | CPF_NeedCtorLink)
};

// ScriptStruct Engine.AnimTree.PreviewSocketStruct
// 0x0020
struct FPreviewSocketStruct
{
	struct FName                                       DisplayName;                                   // 0x0000 (0x0008) [0x0000000000000001] (CPF_Edit)    
	struct FName                                       SocketName;                                    // 0x0008 (0x0008) [0x0000000000000001] (CPF_Edit)    
	class USkeletalMesh*                               PreviewSkelMesh;                               // 0x0010 (0x0008) [0x0000000000000001] (CPF_Edit)    
	class UStaticMesh*                                 PreviewStaticMesh;                             // 0x0018 (0x0008) [0x0000000000000001] (CPF_Edit)    
};

// ScriptStruct Engine.AnimTree.PreviewAnimSetsStruct
// 0x0018
struct FPreviewAnimSetsStruct
{
	struct FName                                       DisplayName;                                   // 0x0000 (0x0008) [0x0000000000000001] (CPF_Edit)    
	TArray<class UAnimSet*>                            PreviewAnimSets;                               // 0x0008 (0x0010) [0x0000000000400001] (CPF_Edit | CPF_NeedCtorLink)
};

// ScriptStruct Engine.ApexClothingAsset.ClothingLodInfo
// 0x0010
struct FClothingLodInfo
{
	TArray<int32_t>                                    LODMaterialMap;                                // 0x0000 (0x0010) [0x0000000000500043] (CPF_Edit | CPF_Const | CPF_EditConstArray | CPF_NeedCtorLink)
};

// ScriptStruct Engine.ApexDestructibleAsset.NxDestructibleDamageParameters
// 0x0014
struct FNxDestructibleDamageParameters
{
	float                                              DamageThreshold;                               // 0x0000 (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              DamageSpread;                                  // 0x0004 (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              ImpactDamage;                                  // 0x0008 (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              ImpactResistance;                              // 0x000C (0x0004) [0x0000000000000001] (CPF_Edit)    
	int32_t                                            DefaultImpactDamageDepth;                      // 0x0010 (0x0004) [0x0000000000000001] (CPF_Edit)    
};

// ScriptStruct Engine.ApexDestructibleAsset.NxDestructibleDebrisParameters
// 0x002C
struct FNxDestructibleDebrisParameters
{
	float                                              DebrisLifetimeMin;                             // 0x0000 (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              DebrisLifetimeMax;                             // 0x0004 (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              DebrisMaxSeparationMin;                        // 0x0008 (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              DebrisMaxSeparationMax;                        // 0x000C (0x0004) [0x0000000000000001] (CPF_Edit)    
	struct FBox                                        ValidBounds;                                   // 0x0010 (0x001C) [0x0000000000000001] (CPF_Edit)    
};

// ScriptStruct Engine.ApexDestructibleAsset.NxDestructibleAdvancedParameters
// 0x0018
struct FNxDestructibleAdvancedParameters
{
	float                                              DamageCap;                                     // 0x0000 (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              ImpactVelocityThreshold;                       // 0x0004 (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              MaxChunkSpeed;                                 // 0x0008 (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              MassScaleExponent;                             // 0x000C (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              MassScale;                                     // 0x0010 (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              FractureImpulseScale;                          // 0x0014 (0x0004) [0x0000000000000001] (CPF_Edit)    
};

// ScriptStruct Engine.ApexDestructibleAsset.NxDestructibleParametersFlag
// 0x0004
struct FNxDestructibleParametersFlag
{
	uint32_t                                           ACCUMULATE_DAMAGE : 1;                         // 0x0000 (0x0004) [0x0000000000000001] [0x00000001] (CPF_Edit)
	uint32_t                                           ASSET_DEFINED_SUPPORT : 1;                     // 0x0000 (0x0004) [0x0000000000000001] [0x00000002] (CPF_Edit)
	uint32_t                                           WORLD_SUPPORT : 1;                             // 0x0000 (0x0004) [0x0000000000000001] [0x00000004] (CPF_Edit)
	uint32_t                                           DEBRIS_TIMEOUT : 1;                            // 0x0000 (0x0004) [0x0000000000000001] [0x00000008] (CPF_Edit)
	uint32_t                                           DEBRIS_MAX_SEPARATION : 1;                     // 0x0000 (0x0004) [0x0000000000000001] [0x00000010] (CPF_Edit)
	uint32_t                                           CRUMBLE_SMALLEST_CHUNKS : 1;                   // 0x0000 (0x0004) [0x0000000000000001] [0x00000020] (CPF_Edit)
	uint32_t                                           ACCURATE_RAYCASTS : 1;                         // 0x0000 (0x0004) [0x0000000000000001] [0x00000040] (CPF_Edit)
	uint32_t                                           USE_VALID_BOUNDS : 1;                          // 0x0000 (0x0004) [0x0000000000000001] [0x00000080] (CPF_Edit)
	uint32_t                                           FORM_EXTENDED_STRUCTURES : 1;                  // 0x0000 (0x0004) [0x0000000000000001] [0x00000100] (CPF_Edit)
};

// ScriptStruct Engine.ApexDestructibleAsset.NxDestructibleDepthParameters
// 0x0005
struct FNxDestructibleDepthParameters
{
	uint32_t                                           TAKE_IMPACT_DAMAGE : 1;                        // 0x0000 (0x0004) [0x0000000020000000] [0x00000001]  CPF_Deprecated)
	uint32_t                                           IGNORE_POSE_UPDATES : 1;                       // 0x0000 (0x0004) [0x0000000020000000] [0x00000002]  CPF_Deprecated)
	uint32_t                                           IGNORE_RAYCAST_CALLBACKS : 1;                  // 0x0000 (0x0004) [0x0000000020000000] [0x00000004]  CPF_Deprecated)
	uint32_t                                           IGNORE_CONTACT_CALLBACKS : 1;                  // 0x0000 (0x0004) [0x0000000020000000] [0x00000008]  CPF_Deprecated)
	uint32_t                                           USER_FLAG : 1;                                 // 0x0000 (0x0004) [0x0000000020000000] [0x00000010]  CPF_Deprecated)
	uint32_t                                           USER_FLAG01 : 1;                               // 0x0000 (0x0004) [0x0000000020000000] [0x00000020]  CPF_Deprecated)
	uint32_t                                           USER_FLAG02 : 1;                               // 0x0000 (0x0004) [0x0000000020000000] [0x00000040]  CPF_Deprecated)
	uint32_t                                           USER_FLAG03 : 1;                               // 0x0000 (0x0004) [0x0000000020000000] [0x00000080]  CPF_Deprecated)
	uint8_t                                            ImpactDamageOverride;                          // 0x0004 (0x0001) [0x0000000000000001] (CPF_Edit)    
};

// ScriptStruct Engine.ApexDestructibleAsset.NxDestructibleParameters
// 0x00F0
struct FNxDestructibleParameters
{
	struct FNxDestructibleDamageParameters             DamageParameters;                              // 0x0000 (0x0014) [0x0000000000000001] (CPF_Edit)    
	struct FNxDestructibleDebrisParameters             DebrisParameters;                              // 0x0014 (0x002C) [0x0000000000000001] (CPF_Edit)    
	struct FNxDestructibleAdvancedParameters           AdvancedParameters;                            // 0x0040 (0x0018) [0x0000000000000001] (CPF_Edit)    
	float                                              DamageThreshold;                               // 0x0058 (0x0004) [0x0000000020000000]  CPF_Deprecated)
	float                                              DamageToRadius;                                // 0x005C (0x0004) [0x0000000020000000]  CPF_Deprecated)
	float                                              DamageCap;                                     // 0x0060 (0x0004) [0x0000000020000000]  CPF_Deprecated)
	float                                              ForceToDamage;                                 // 0x0064 (0x0004) [0x0000000020000000]  CPF_Deprecated)
	float                                              ImpactVelocityThreshold;                       // 0x0068 (0x0004) [0x0000000020000000]  CPF_Deprecated)
	float                                              MaterialStrength;                              // 0x006C (0x0004) [0x0000000020000000]  CPF_Deprecated)
	float                                              DamageToPercentDeformation;                    // 0x0070 (0x0004) [0x0000000020000000]  CPF_Deprecated)
	float                                              DeformationPercentLimit;                       // 0x0074 (0x0004) [0x0000000020000000]  CPF_Deprecated)
	uint32_t                                           bFormExtendedStructures : 1;                   // 0x0078 (0x0004) [0x0000000020000000] [0x00000001]  CPF_Deprecated)
	int32_t                                            SupportDepth;                                  // 0x007C (0x0004) [0x0000000000000001] (CPF_Edit)    
	int32_t                                            MinimumFractureDepth;                          // 0x0080 (0x0004) [0x0000000000000001] (CPF_Edit)    
	int32_t                                            DebrisDepth;                                   // 0x0084 (0x0004) [0x0000000000000001] (CPF_Edit)    
	int32_t                                            EssentialDepth;                                // 0x0088 (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              DebrisLifetimeMin;                             // 0x008C (0x0004) [0x0000000020000000]  CPF_Deprecated)
	float                                              DebrisLifetimeMax;                             // 0x0090 (0x0004) [0x0000000020000000]  CPF_Deprecated)
	float                                              DebrisMaxSeparationMin;                        // 0x0094 (0x0004) [0x0000000020000000]  CPF_Deprecated)
	float                                              DebrisMaxSeparationMax;                        // 0x0098 (0x0004) [0x0000000020000000]  CPF_Deprecated)
	struct FBox                                        ValidBounds;                                   // 0x009C (0x001C) [0x0000000020000000]  CPF_Deprecated)
	float                                              MaxChunkSpeed;                                 // 0x00B8 (0x0004) [0x0000000020000000]  CPF_Deprecated)
	float                                              MassScaleExponent;                             // 0x00BC (0x0004) [0x0000000020000000]  CPF_Deprecated)
	struct FNxDestructibleParametersFlag               Flags;                                         // 0x00C0 (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              GrbVolumeLimit;                                // 0x00C4 (0x0004) [0x0000000020000000]  CPF_Deprecated)
	float                                              GrbParticleSpacing;                            // 0x00C8 (0x0004) [0x0000000020000000]  CPF_Deprecated)
	float                                              FractureImpulseScale;                          // 0x00CC (0x0004) [0x0000000020000000]  CPF_Deprecated)
	TArray<struct FNxDestructibleDepthParameters>      DepthParameters;                               // 0x00D0 (0x0010) [0x0000000000400041] (CPF_Edit | CPF_EditConstArray | CPF_NeedCtorLink)
	int32_t                                            DynamicChunksDominanceGroup;                   // 0x00E0 (0x0004) [0x0000000000000001] (CPF_Edit)    
	uint32_t                                           UseDynamicChunksGroupsMask : 1;                // 0x00E4 (0x0004) [0x0000000000000001] [0x00000001] (CPF_Edit)
	uint8_t                                            DynamicChunksChannel;                          // 0x00E8 (0x0001) [0x0000000000000003] (CPF_Edit | CPF_Const)
	struct FRBCollisionChannelContainer                DynamicChunksCollideWithChannels;              // 0x00EC (0x0004) [0x0000000000000003] (CPF_Edit | CPF_Const)
};

// ScriptStruct Engine.ApexDestructibleDamageParameters.DamageParameters
// 0x0010
struct FDamageParameters
{
	uint8_t                                            OverrideMode;                                  // 0x0000 (0x0001) [0x0000000000000001] (CPF_Edit)    
	float                                              BaseDamage;                                    // 0x0004 (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              Radius;                                        // 0x0008 (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              Momentum;                                      // 0x000C (0x0004) [0x0000000000000001] (CPF_Edit)    
};

// ScriptStruct Engine.ApexDestructibleDamageParameters.DamagePair
// 0x0018
struct FDamagePair
{
	struct FName                                       DamageCauserName;                              // 0x0000 (0x0008) [0x0000000000000001] (CPF_Edit)    
	struct FDamageParameters                           Params;                                        // 0x0008 (0x0010) [0x0000000000000001] (CPF_Edit)    
};

// ScriptStruct Engine.AppNotificationsBase.NotificationMessageInfo
// 0x0020
struct FNotificationMessageInfo
{
	class FString                                      Key;                                           // 0x0000 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	class FString                                      Value;                                         // 0x0010 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
};

// ScriptStruct Engine.AppNotificationsBase.NotificationInfo
// 0x0030
struct FNotificationInfo
{
	uint32_t                                           bIsLocal : 1;                                  // 0x0000 (0x0004) [0x0000000000000000] [0x00000001] 
	class FString                                      MessageBody;                                   // 0x0008 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	int32_t                                            BadgeNumber;                                   // 0x0018 (0x0004) [0x0000000000000000]               
	TArray<struct FNotificationMessageInfo>            MessageInfo;                                   // 0x0020 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
};

// ScriptStruct Engine.AppNotificationsBase.LaunchNotificationInfo
// 0x0038
struct FLaunchNotificationInfo
{
	uint32_t                                           bWasLaunchedViaNotification : 1;               // 0x0000 (0x0004) [0x0000000000000000] [0x00000001] 
	struct FNotificationInfo                           Notification;                                  // 0x0008 (0x0030) [0x0000000000400000] (CPF_NeedCtorLink)
};

// ScriptStruct Engine.Info.KeyValuePair
// 0x0020
struct FKeyValuePair
{
	class FString                                      Key;                                           // 0x0000 (0x0010) [0x0000000000500001] (CPF_Edit | CPF_NeedCtorLink)
	class FString                                      Value;                                         // 0x0010 (0x0010) [0x0000000000500001] (CPF_Edit | CPF_NeedCtorLink)
};

// ScriptStruct Engine.Info.PlayerResponseLine
// 0x0038
struct FPlayerResponseLine
{
	int32_t                                            PlayerNum;                                     // 0x0000 (0x0004) [0x0000000000100001] (CPF_Edit)    
	int32_t                                            PlayerID;                                      // 0x0004 (0x0004) [0x0000000000100001] (CPF_Edit)    
	class FString                                      PlayerName;                                    // 0x0008 (0x0010) [0x0000000000500001] (CPF_Edit | CPF_NeedCtorLink)
	int32_t                                            Ping;                                          // 0x0018 (0x0004) [0x0000000000100001] (CPF_Edit)    
	int32_t                                            Score;                                         // 0x001C (0x0004) [0x0000000000100001] (CPF_Edit)    
	int32_t                                            StatsID;                                       // 0x0020 (0x0004) [0x0000000000100001] (CPF_Edit)    
	TArray<struct FKeyValuePair>                       PlayerInfo;                                    // 0x0028 (0x0010) [0x0000000000500001] (CPF_Edit | CPF_NeedCtorLink)
};

// ScriptStruct Engine.Info.ServerResponseLine
// 0x0080
struct FServerResponseLine
{
	int32_t                                            ServerId;                                      // 0x0000 (0x0004) [0x0000000000100001] (CPF_Edit)    
	class FString                                      IP;                                            // 0x0008 (0x0010) [0x0000000000500001] (CPF_Edit | CPF_NeedCtorLink)
	int32_t                                            Port;                                          // 0x0018 (0x0004) [0x0000000000100001] (CPF_Edit)    
	int32_t                                            QueryPort;                                     // 0x001C (0x0004) [0x0000000000100001] (CPF_Edit)    
	class FString                                      ServerName;                                    // 0x0020 (0x0010) [0x0000000000500001] (CPF_Edit | CPF_NeedCtorLink)
	class FString                                      MapName;                                       // 0x0030 (0x0010) [0x0000000000500001] (CPF_Edit | CPF_NeedCtorLink)
	class FString                                      GameType;                                      // 0x0040 (0x0010) [0x0000000000500001] (CPF_Edit | CPF_NeedCtorLink)
	int32_t                                            CurrentPlayers;                                // 0x0050 (0x0004) [0x0000000000100001] (CPF_Edit)    
	int32_t                                            MaxPlayers;                                    // 0x0054 (0x0004) [0x0000000000100001] (CPF_Edit)    
	int32_t                                            Ping;                                          // 0x0058 (0x0004) [0x0000000000100001] (CPF_Edit)    
	TArray<struct FKeyValuePair>                       ServerInfo;                                    // 0x0060 (0x0010) [0x0000000000500001] (CPF_Edit | CPF_NeedCtorLink)
	TArray<struct FPlayerResponseLine>                 PlayerInfo;                                    // 0x0070 (0x0010) [0x0000000000500001] (CPF_Edit | CPF_NeedCtorLink)
};

// ScriptStruct Engine.PlayerReplicationInfo.AutomatedTestingDatum
// 0x0008
struct FAutomatedTestingDatum
{
	int32_t                                            NumberOfMatchesPlayed;                         // 0x0000 (0x0004) [0x0000000000000000]               
	int32_t                                            NumMapListCyclesDone;                          // 0x0004 (0x0004) [0x0000000000000000]               
};

// ScriptStruct Engine.Camera.ViewTargetTransitionParams
// 0x0010
struct FViewTargetTransitionParams
{
	float                                              BlendTime;                                     // 0x0000 (0x0004) [0x0000000000000001] (CPF_Edit)    
	uint8_t                                            BlendFunction;                                 // 0x0004 (0x0001) [0x0000000000000001] (CPF_Edit)    
	float                                              BlendExp;                                      // 0x0008 (0x0004) [0x0000000000000001] (CPF_Edit)    
	uint32_t                                           bLockOutgoing : 1;                             // 0x000C (0x0004) [0x0000000000000001] [0x00000001] (CPF_Edit)
};

// ScriptStruct Engine.Camera.TCameraCache
// 0x0020
struct FTCameraCache
{
	float                                              TimeStamp;                                     // 0x0000 (0x0004) [0x0000000000000000]               
	struct FTPOV                                       POV;                                           // 0x0004 (0x001C) [0x0000000000000000]               
};

// ScriptStruct Engine.Camera.TViewTarget
// 0x0038
struct FTViewTarget
{
	class AActor*                                      Target;                                        // 0x0000 (0x0008) [0x0000000000000001] (CPF_Edit)    
	class AController*                                 Controller;                                    // 0x0008 (0x0008) [0x0000000000000001] (CPF_Edit)    
	struct FTPOV                                       POV;                                           // 0x0010 (0x001C) [0x0000000000000001] (CPF_Edit)    
	float                                              AspectRatio;                                   // 0x002C (0x0004) [0x0000000000000001] (CPF_Edit)    
	class APlayerReplicationInfo*                      PRI;                                           // 0x0030 (0x0008) [0x0000000000000001] (CPF_Edit)    
};

// ScriptStruct Engine.PostProcessVolume.LUTBlender
// 0x0024
struct FLUTBlender
{
	TArray<class UTexture*>                            LUTTextures;                                   // 0x0000 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	TArray<float>                                      LUTWeights;                                    // 0x0010 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	uint32_t                                           bHasChanged : 1;                               // 0x0020 (0x0004) [0x0000000000003002] [0x00000001] (CPF_Const | CPF_Native | CPF_Transient)
};

// ScriptStruct Engine.PostProcessVolume.MobileColorGradingParams
// 0x003C
struct FMobileColorGradingParams
{
	float                                              TransitionTime;                                // 0x0000 (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              Blend;                                         // 0x0004 (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              Desaturation;                                  // 0x0008 (0x0004) [0x0000000000000001] (CPF_Edit)    
	struct FLinearColor                                HighLights;                                    // 0x000C (0x0010) [0x0000000000000001] (CPF_Edit)    
	struct FLinearColor                                MidTones;                                      // 0x001C (0x0010) [0x0000000000000001] (CPF_Edit)    
	struct FLinearColor                                Shadows;                                       // 0x002C (0x0010) [0x0000000000000001] (CPF_Edit)    
};

// ScriptStruct Engine.PostProcessVolume.MobilePostProcessSettings
// 0x0034
struct FMobilePostProcessSettings
{
	uint32_t                                           bOverride_Mobile_BlurAmount : 1;               // 0x0000 (0x0004) [0x0000000000000000] [0x00000001] 
	uint32_t                                           bOverride_Mobile_TransitionTime : 1;           // 0x0000 (0x0004) [0x0000000000000000] [0x00000002] 
	uint32_t                                           bOverride_Mobile_Bloom_Scale : 1;              // 0x0000 (0x0004) [0x0000000000000000] [0x00000004] 
	uint32_t                                           bOverride_Mobile_Bloom_Threshold : 1;          // 0x0000 (0x0004) [0x0000000000000000] [0x00000008] 
	uint32_t                                           bOverride_Mobile_Bloom_Tint : 1;               // 0x0000 (0x0004) [0x0000000000000000] [0x00000010] 
	uint32_t                                           bOverride_Mobile_DOF_Distance : 1;             // 0x0000 (0x0004) [0x0000000000000000] [0x00000020] 
	uint32_t                                           bOverride_Mobile_DOF_MinRange : 1;             // 0x0000 (0x0004) [0x0000000000000000] [0x00000040] 
	uint32_t                                           bOverride_Mobile_DOF_MaxRange : 1;             // 0x0000 (0x0004) [0x0000000000000000] [0x00000080] 
	uint32_t                                           bOverride_Mobile_DOF_FarBlurFactor : 1;        // 0x0000 (0x0004) [0x0000000000000000] [0x00000100] 
	float                                              Mobile_BlurAmount;                             // 0x0004 (0x0004) [0x0000000200000001] (CPF_Edit)    
	float                                              Mobile_TransitionTime;                         // 0x0008 (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              Mobile_Bloom_Scale;                            // 0x000C (0x0004) [0x0000000200000001] (CPF_Edit)    
	float                                              Mobile_Bloom_Threshold;                        // 0x0010 (0x0004) [0x0000000200000001] (CPF_Edit)    
	struct FLinearColor                                Mobile_Bloom_Tint;                             // 0x0014 (0x0010) [0x0000000200000001] (CPF_Edit)    
	float                                              Mobile_DOF_Distance;                           // 0x0024 (0x0004) [0x0000000200000001] (CPF_Edit)    
	float                                              Mobile_DOF_MinRange;                           // 0x0028 (0x0004) [0x0000000200000001] (CPF_Edit)    
	float                                              Mobile_DOF_MaxRange;                           // 0x002C (0x0004) [0x0000000200000001] (CPF_Edit)    
	float                                              Mobile_DOF_FarBlurFactor;                      // 0x0030 (0x0004) [0x0000000200000001] (CPF_Edit)    
};

// ScriptStruct Engine.PostProcessVolume.PostProcessSettings
// 0x0168
struct FPostProcessSettings
{
	uint32_t                                           bOverride_EnableBloom : 1;                     // 0x0000 (0x0004) [0x0000000000000000] [0x00000001] 
	uint32_t                                           bOverride_EnableDOF : 1;                       // 0x0000 (0x0004) [0x0000000000000000] [0x00000002] 
	uint32_t                                           bOverride_EnableMotionBlur : 1;                // 0x0000 (0x0004) [0x0000000000000000] [0x00000004] 
	uint32_t                                           bOverride_EnableSceneEffect : 1;               // 0x0000 (0x0004) [0x0000000000000000] [0x00000008] 
	uint32_t                                           bOverride_AllowAmbientOcclusion : 1;           // 0x0000 (0x0004) [0x0000000000000000] [0x00000010] 
	uint32_t                                           bOverride_OverrideRimShaderColor : 1;          // 0x0000 (0x0004) [0x0000000000000000] [0x00000020] 
	uint32_t                                           bOverride_Bloom_Scale : 1;                     // 0x0000 (0x0004) [0x0000000000000000] [0x00000040] 
	uint32_t                                           bOverride_Bloom_Threshold : 1;                 // 0x0000 (0x0004) [0x0000000000000000] [0x00000080] 
	uint32_t                                           bOverride_Bloom_Tint : 1;                      // 0x0000 (0x0004) [0x0000000000000000] [0x00000100] 
	uint32_t                                           bOverride_Bloom_ScreenBlendThreshold : 1;      // 0x0000 (0x0004) [0x0000000000000000] [0x00000200] 
	uint32_t                                           bOverride_Bloom_InterpolationDuration : 1;     // 0x0000 (0x0004) [0x0000000000000000] [0x00000400] 
	uint32_t                                           bOverride_DOF_FalloffExponent : 1;             // 0x0000 (0x0004) [0x0000000000000000] [0x00000800] 
	uint32_t                                           bOverride_DOF_BlurKernelSize : 1;              // 0x0000 (0x0004) [0x0000000000000000] [0x00001000] 
	uint32_t                                           bOverride_DOF_BlurBloomKernelSize : 1;         // 0x0000 (0x0004) [0x0000000000000000] [0x00002000] 
	uint32_t                                           bOverride_DOF_MaxNearBlurAmount : 1;           // 0x0000 (0x0004) [0x0000000000000000] [0x00004000] 
	uint32_t                                           bOverride_DOF_MinBlurAmount : 1;               // 0x0000 (0x0004) [0x0000000000000000] [0x00008000] 
	uint32_t                                           bOverride_DOF_MaxFarBlurAmount : 1;            // 0x0000 (0x0004) [0x0000000000000000] [0x00010000] 
	uint32_t                                           bOverride_DOF_FocusType : 1;                   // 0x0000 (0x0004) [0x0000000000000000] [0x00020000] 
	uint32_t                                           bOverride_DOF_FocusInnerRadius : 1;            // 0x0000 (0x0004) [0x0000000000000000] [0x00040000] 
	uint32_t                                           bOverride_DOF_FocusDistance : 1;               // 0x0000 (0x0004) [0x0000000000000000] [0x00080000] 
	uint32_t                                           bOverride_DOF_FocusPosition : 1;               // 0x0000 (0x0004) [0x0000000000000000] [0x00100000] 
	uint32_t                                           bOverride_DOF_InterpolationDuration : 1;       // 0x0000 (0x0004) [0x0000000000000000] [0x00200000] 
	uint32_t                                           bOverride_DOF_BokehTexture : 1;                // 0x0000 (0x0004) [0x0000000000000000] [0x00400000] 
	uint32_t                                           bOverride_MotionBlur_MaxVelocity : 1;          // 0x0000 (0x0004) [0x0000000000000000] [0x00800000] 
	uint32_t                                           bOverride_MotionBlur_Amount : 1;               // 0x0000 (0x0004) [0x0000000000000000] [0x01000000] 
	uint32_t                                           bOverride_MotionBlur_FullMotionBlur : 1;       // 0x0000 (0x0004) [0x0000000000000000] [0x02000000] 
	uint32_t                                           bOverride_MotionBlur_CameraRotationThreshold : 1;// 0x0000 (0x0004) [0x0000000000000000] [0x04000000] 
	uint32_t                                           bOverride_MotionBlur_CameraTranslationThreshold : 1;// 0x0000 (0x0004) [0x0000000000000000] [0x08000000] 
	uint32_t                                           bOverride_MotionBlur_InterpolationDuration : 1;// 0x0000 (0x0004) [0x0000000000000000] [0x10000000] 
	uint32_t                                           bOverride_Scene_Desaturation : 1;              // 0x0000 (0x0004) [0x0000000000000000] [0x20000000] 
	uint32_t                                           bOverride_Scene_Colorize : 1;                  // 0x0000 (0x0004) [0x0000000000000000] [0x40000000] 
	uint32_t                                           bOverride_Scene_TonemapperScale : 1;           // 0x0000 (0x0004) [0x0000000000000000] [0x80000000] 
	uint32_t                                           bOverride_Scene_ImageGrainScale : 1;           // 0x0004 (0x0004) [0x0000000000000000] [0x00000001] 
	uint32_t                                           bOverride_Scene_HighLights : 1;                // 0x0004 (0x0004) [0x0000000000000000] [0x00000002] 
	uint32_t                                           bOverride_Scene_MidTones : 1;                  // 0x0004 (0x0004) [0x0000000000000000] [0x00000004] 
	uint32_t                                           bOverride_Scene_Shadows : 1;                   // 0x0004 (0x0004) [0x0000000000000000] [0x00000008] 
	uint32_t                                           bOverride_Scene_InterpolationDuration : 1;     // 0x0004 (0x0004) [0x0000000000000000] [0x00000010] 
	uint32_t                                           bOverride_Scene_ColorGradingLUT : 1;           // 0x0004 (0x0004) [0x0000000000000000] [0x00000020] 
	uint32_t                                           bOverride_RimShader_Color : 1;                 // 0x0004 (0x0004) [0x0000000000000000] [0x00000040] 
	uint32_t                                           bOverride_RimShader_InterpolationDuration : 1; // 0x0004 (0x0004) [0x0000000000000000] [0x00000080] 
	uint32_t                                           bOverride_MobileColorGrading : 1;              // 0x0004 (0x0004) [0x0000000000000000] [0x00000100] 
	uint32_t                                           bEnableBloom : 1;                              // 0x0004 (0x0004) [0x0000000000000001] [0x00000200] (CPF_Edit)
	uint32_t                                           bEnableDOF : 1;                                // 0x0004 (0x0004) [0x0000000000000001] [0x00000400] (CPF_Edit)
	uint32_t                                           bEnableMotionBlur : 1;                         // 0x0004 (0x0004) [0x0000000000000001] [0x00000800] (CPF_Edit)
	uint32_t                                           bEnableSceneEffect : 1;                        // 0x0004 (0x0004) [0x0000000000000001] [0x00001000] (CPF_Edit)
	uint32_t                                           bAllowAmbientOcclusion : 1;                    // 0x0004 (0x0004) [0x0000000000000001] [0x00002000] (CPF_Edit)
	uint32_t                                           bOverrideRimShaderColor : 1;                   // 0x0004 (0x0004) [0x0000000000000001] [0x00004000] (CPF_Edit)
	float                                              Bloom_Scale;                                   // 0x0008 (0x0004) [0x0000000200000001] (CPF_Edit)    
	float                                              Bloom_Threshold;                               // 0x000C (0x0004) [0x0000000200000001] (CPF_Edit)    
	struct FColor                                      Bloom_Tint;                                    // 0x0010 (0x0004) [0x0000000200000001] (CPF_Edit)    
	float                                              Bloom_ScreenBlendThreshold;                    // 0x0014 (0x0004) [0x0000000200000001] (CPF_Edit)    
	float                                              Bloom_InterpolationDuration;                   // 0x0018 (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              DOF_BlurBloomKernelSize;                       // 0x001C (0x0004) [0x0000000200000001] (CPF_Edit)    
	float                                              DOF_FalloffExponent;                           // 0x0020 (0x0004) [0x0000000200000001] (CPF_Edit)    
	float                                              DOF_BlurKernelSize;                            // 0x0024 (0x0004) [0x0000000200000001] (CPF_Edit)    
	float                                              DOF_MaxNearBlurAmount;                         // 0x0028 (0x0004) [0x0000000200000001] (CPF_Edit)    
	float                                              DOF_MinBlurAmount;                             // 0x002C (0x0004) [0x0000000200000001] (CPF_Edit)    
	float                                              DOF_MaxFarBlurAmount;                          // 0x0030 (0x0004) [0x0000000200000001] (CPF_Edit)    
	uint8_t                                            DOF_FocusType;                                 // 0x0034 (0x0001) [0x0000000000000001] (CPF_Edit)    
	float                                              DOF_FocusInnerRadius;                          // 0x0038 (0x0004) [0x0000000200000001] (CPF_Edit)    
	float                                              DOF_FocusDistance;                             // 0x003C (0x0004) [0x0000000200000001] (CPF_Edit)    
	struct FVector                                     DOF_FocusPosition;                             // 0x0040 (0x000C) [0x0000000200000001] (CPF_Edit)    
	float                                              DOF_InterpolationDuration;                     // 0x004C (0x0004) [0x0000000000000001] (CPF_Edit)    
	class UTexture2D*                                  DOF_BokehTexture;                              // 0x0050 (0x0008) [0x0000000000000001] (CPF_Edit)    
	float                                              MotionBlur_MaxVelocity;                        // 0x0058 (0x0004) [0x0000000200000001] (CPF_Edit)    
	float                                              MotionBlur_Amount;                             // 0x005C (0x0004) [0x0000000200000001] (CPF_Edit)    
	uint32_t                                           MotionBlur_FullMotionBlur : 1;                 // 0x0060 (0x0004) [0x0000000000000001] [0x00000001] (CPF_Edit)
	float                                              MotionBlur_CameraRotationThreshold;            // 0x0064 (0x0004) [0x0000000200000001] (CPF_Edit)    
	float                                              MotionBlur_CameraTranslationThreshold;         // 0x0068 (0x0004) [0x0000000200000001] (CPF_Edit)    
	float                                              MotionBlur_InterpolationDuration;              // 0x006C (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              Scene_Desaturation;                            // 0x0070 (0x0004) [0x0000000200000001] (CPF_Edit)    
	struct FVector                                     Scene_Colorize;                                // 0x0074 (0x000C) [0x0000000200000001] (CPF_Edit)    
	float                                              Scene_TonemapperScale;                         // 0x0080 (0x0004) [0x0000000200000001] (CPF_Edit)    
	float                                              Scene_ImageGrainScale;                         // 0x0084 (0x0004) [0x0000000200000001] (CPF_Edit)    
	struct FVector                                     Scene_HighLights;                              // 0x0088 (0x000C) [0x0000000200000001] (CPF_Edit)    
	struct FVector                                     Scene_MidTones;                                // 0x0094 (0x000C) [0x0000000200000001] (CPF_Edit)    
	struct FVector                                     Scene_Shadows;                                 // 0x00A0 (0x000C) [0x0000000200000001] (CPF_Edit)    
	float                                              Scene_InterpolationDuration;                   // 0x00AC (0x0004) [0x0000000000000001] (CPF_Edit)    
	struct FLinearColor                                RimShader_Color;                               // 0x00B0 (0x0010) [0x0000000000000001] (CPF_Edit)    
	float                                              RimShader_InterpolationDuration;               // 0x00C0 (0x0004) [0x0000000000000001] (CPF_Edit)    
	class UTexture*                                    ColorGrading_LookupTable;                      // 0x00C8 (0x0008) [0x0000000000000001] (CPF_Edit)    
	struct FLUTBlender                                 ColorGradingLUT;                               // 0x00D0 (0x0028) [0x0000000000402002] (CPF_Const | CPF_Transient | CPF_NeedCtorLink)
	struct FMobileColorGradingParams                   MobileColorGrading;                            // 0x00F8 (0x003C) [0x0000000000000001] (CPF_Edit)    
	struct FMobilePostProcessSettings                  MobilePostProcess;                             // 0x0134 (0x0034) [0x0000000200000001] (CPF_Edit)    
};

// ScriptStruct Engine.EngineBaseTypes.RenderingPerformanceOverrides
// 0x0004
struct FRenderingPerformanceOverrides
{
	uint32_t                                           bAllowAmbientOcclusion : 1;                    // 0x0000 (0x0004) [0x0000000000000001] [0x00000001] (CPF_Edit)
	uint32_t                                           bAllowDominantWholeSceneDynamicShadows : 1;    // 0x0000 (0x0004) [0x0000000000000001] [0x00000002] (CPF_Edit)
	uint32_t                                           bAllowMotionBlurSkinning : 1;                  // 0x0000 (0x0004) [0x0000000000000001] [0x00000004] (CPF_Edit)
	uint32_t                                           bAllowTemporalAA : 1;                          // 0x0000 (0x0004) [0x0000000000000001] [0x00000008] (CPF_Edit)
	uint32_t                                           bAllowLightShafts : 1;                         // 0x0000 (0x0004) [0x0000000000000001] [0x00000010] (CPF_Edit)
};

// ScriptStruct Engine.CameraShake.FOscillator
// 0x0009
struct FFOscillator
{
	float                                              Amplitude;                                     // 0x0000 (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              Frequency;                                     // 0x0004 (0x0004) [0x0000000000000001] (CPF_Edit)    
	uint8_t                                            InitialOffset;                                 // 0x0008 (0x0001) [0x0000000000000001] (CPF_Edit)    
};

// ScriptStruct Engine.CameraShake.VOscillator
// 0x0024
struct FVOscillator
{
	struct FFOscillator                                X;                                             // 0x0000 (0x000C) [0x0000000000000001] (CPF_Edit)    
	struct FFOscillator                                Y;                                             // 0x000C (0x000C) [0x0000000000000001] (CPF_Edit)    
	struct FFOscillator                                Z;                                             // 0x0018 (0x000C) [0x0000000000000001] (CPF_Edit)    
};

// ScriptStruct Engine.CameraShake.ROscillator
// 0x0024
struct FROscillator
{
	struct FFOscillator                                Pitch;                                         // 0x0000 (0x000C) [0x0000000000000001] (CPF_Edit)    
	struct FFOscillator                                Yaw;                                           // 0x000C (0x000C) [0x0000000000000001] (CPF_Edit)    
	struct FFOscillator                                Roll;                                          // 0x0018 (0x000C) [0x0000000000000001] (CPF_Edit)    
};

// ScriptStruct Engine.CameraModifier_CameraShake.CameraShakeInstance
// 0x00A0
struct FCameraShakeInstance
{
	class UCameraShake*                                SourceShake;                                   // 0x0000 (0x0008) [0x0000000000000000]               
	struct FName                                       SourceShakeName;                               // 0x0008 (0x0008) [0x0000000000000000]               
	float                                              OscillatorTimeRemaining;                       // 0x0010 (0x0004) [0x0000000000000000]               
	uint32_t                                           bBlendingIn : 1;                               // 0x0014 (0x0004) [0x0000000000000000] [0x00000001] 
	float                                              CurrentBlendInTime;                            // 0x0018 (0x0004) [0x0000000000000000]               
	uint32_t                                           bBlendingOut : 1;                              // 0x001C (0x0004) [0x0000000000000000] [0x00000001] 
	float                                              CurrentBlendOutTime;                           // 0x0020 (0x0004) [0x0000000000000000]               
	struct FVector                                     LocSinOffset;                                  // 0x0024 (0x000C) [0x0000000000000000]               
	struct FVector                                     RotSinOffset;                                  // 0x0030 (0x000C) [0x0000000000000000]               
	float                                              FOVSinOffset;                                  // 0x003C (0x0004) [0x0000000000000000]               
	float                                              Scale;                                         // 0x0040 (0x0004) [0x0000000000000000]               
	class UCameraAnimInst*                             AnimInst;                                      // 0x0048 (0x0008) [0x0000000000000000]               
	uint8_t                                            PlaySpace;                                     // 0x0050 (0x0001) [0x0000000000000000]               
	uint8_t                                           UnknownData00[0xF];                               		// 0x0051 (0x000F) MISSED OFFSET
	struct FMatrix                                     UserPlaySpaceMatrix;                           // 0x0060 (0x0040) [0x0000000000000000]               
};

// ScriptStruct Engine.Canvas.CanvasIcon
// 0x0018
struct FCanvasIcon
{
	class UTexture*                                    Texture;                                       // 0x0000 (0x0008) [0x0000000000000001] (CPF_Edit)    
	float                                              U;                                             // 0x0008 (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              V;                                             // 0x000C (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              UL;                                            // 0x0010 (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              VL;                                            // 0x0014 (0x0004) [0x0000000000000001] (CPF_Edit)    
};

// ScriptStruct Engine.Texture.TextureGroupContainer
// 0x0004
struct FTextureGroupContainer
{
	uint32_t                                           TEXTUREGROUP_World : 1;                        // 0x0000 (0x0004) [0x0000000000000003] [0x00000001] (CPF_Edit | CPF_Const)
	uint32_t                                           TEXTUREGROUP_WorldNormalMap : 1;               // 0x0000 (0x0004) [0x0000000000000003] [0x00000002] (CPF_Edit | CPF_Const)
	uint32_t                                           TEXTUREGROUP_WorldSpecular : 1;                // 0x0000 (0x0004) [0x0000000000000003] [0x00000004] (CPF_Edit | CPF_Const)
	uint32_t                                           TEXTUREGROUP_Character : 1;                    // 0x0000 (0x0004) [0x0000000000000003] [0x00000008] (CPF_Edit | CPF_Const)
	uint32_t                                           TEXTUREGROUP_CharacterNormalMap : 1;           // 0x0000 (0x0004) [0x0000000000000003] [0x00000010] (CPF_Edit | CPF_Const)
	uint32_t                                           TEXTUREGROUP_CharacterSpecular : 1;            // 0x0000 (0x0004) [0x0000000000000003] [0x00000020] (CPF_Edit | CPF_Const)
	uint32_t                                           TEXTUREGROUP_Weapon : 1;                       // 0x0000 (0x0004) [0x0000000000000003] [0x00000040] (CPF_Edit | CPF_Const)
	uint32_t                                           TEXTUREGROUP_WeaponNormalMap : 1;              // 0x0000 (0x0004) [0x0000000000000003] [0x00000080] (CPF_Edit | CPF_Const)
	uint32_t                                           TEXTUREGROUP_WeaponSpecular : 1;               // 0x0000 (0x0004) [0x0000000000000003] [0x00000100] (CPF_Edit | CPF_Const)
	uint32_t                                           TEXTUREGROUP_Vehicle : 1;                      // 0x0000 (0x0004) [0x0000000000000003] [0x00000200] (CPF_Edit | CPF_Const)
	uint32_t                                           TEXTUREGROUP_VehicleNormalMap : 1;             // 0x0000 (0x0004) [0x0000000000000003] [0x00000400] (CPF_Edit | CPF_Const)
	uint32_t                                           TEXTUREGROUP_VehicleSpecular : 1;              // 0x0000 (0x0004) [0x0000000000000003] [0x00000800] (CPF_Edit | CPF_Const)
	uint32_t                                           TEXTUREGROUP_Cinematic : 1;                    // 0x0000 (0x0004) [0x0000000000000003] [0x00001000] (CPF_Edit | CPF_Const)
	uint32_t                                           TEXTUREGROUP_Effects : 1;                      // 0x0000 (0x0004) [0x0000000000000003] [0x00002000] (CPF_Edit | CPF_Const)
	uint32_t                                           TEXTUREGROUP_EffectsNotFiltered : 1;           // 0x0000 (0x0004) [0x0000000000000003] [0x00004000] (CPF_Edit | CPF_Const)
	uint32_t                                           TEXTUREGROUP_Skybox : 1;                       // 0x0000 (0x0004) [0x0000000000000003] [0x00008000] (CPF_Edit | CPF_Const)
	uint32_t                                           TEXTUREGROUP_UI : 1;                           // 0x0000 (0x0004) [0x0000000000000003] [0x00010000] (CPF_Edit | CPF_Const)
	uint32_t                                           TEXTUREGROUP_Lightmap : 1;                     // 0x0000 (0x0004) [0x0000000000000003] [0x00020000] (CPF_Edit | CPF_Const)
	uint32_t                                           TEXTUREGROUP_RenderTarget : 1;                 // 0x0000 (0x0004) [0x0000000000000003] [0x00040000] (CPF_Edit | CPF_Const)
	uint32_t                                           TEXTUREGROUP_MobileFlattened : 1;              // 0x0000 (0x0004) [0x0000000000000003] [0x00080000] (CPF_Edit | CPF_Const)
	uint32_t                                           TEXTUREGROUP_ProcBuilding_Face : 1;            // 0x0000 (0x0004) [0x0000000000000003] [0x00100000] (CPF_Edit | CPF_Const)
	uint32_t                                           TEXTUREGROUP_ProcBuilding_LightMap : 1;        // 0x0000 (0x0004) [0x0000000000000003] [0x00200000] (CPF_Edit | CPF_Const)
	uint32_t                                           TEXTUREGROUP_Shadowmap : 1;                    // 0x0000 (0x0004) [0x0000000000000003] [0x00400000] (CPF_Edit | CPF_Const)
	uint32_t                                           TEXTUREGROUP_ColorLookupTable : 1;             // 0x0000 (0x0004) [0x0000000000000003] [0x00800000] (CPF_Edit | CPF_Const)
	uint32_t                                           TEXTUREGROUP_Terrain_Heightmap : 1;            // 0x0000 (0x0004) [0x0000000000000003] [0x01000000] (CPF_Edit | CPF_Const)
	uint32_t                                           TEXTUREGROUP_Terrain_Weightmap : 1;            // 0x0000 (0x0004) [0x0000000000000003] [0x02000000] (CPF_Edit | CPF_Const)
	uint32_t                                           TEXTUREGROUP_ImageBasedReflection : 1;         // 0x0000 (0x0004) [0x0000000000000003] [0x04000000] (CPF_Edit | CPF_Const)
	uint32_t                                           TEXTUREGROUP_Bokeh : 1;                        // 0x0000 (0x0004) [0x0000000000000003] [0x08000000] (CPF_Edit | CPF_Const)
};

// ScriptStruct Engine.Texture2D.Texture2DMipMap
// 0x0060
struct FTexture2DMipMap
{
	struct FUntypedBulkData_Mirror                     Data;                                          // 0x0000 (0x0058) [0x0000000000001000] (CPF_Native)  
	int32_t                                            SizeX;                                         // 0x0058 (0x0004) [0x0000000000001000] (CPF_Native)  
	int32_t                                            SizeY;                                         // 0x005C (0x0004) [0x0000000000001000] (CPF_Native)  
};

// ScriptStruct Engine.Texture2D.TextureLinkedListMirror
// 0x0018
struct FTextureLinkedListMirror
{
	struct FPointer                                    Element;                                       // 0x0000 (0x0008) [0x0000000000001002] (CPF_Const | CPF_Native)
	struct FPointer                                    Next;                                          // 0x0008 (0x0008) [0x0000000000001002] (CPF_Const | CPF_Native)
	struct FPointer                                    PrevLink;                                      // 0x0010 (0x0008) [0x0000000000001002] (CPF_Const | CPF_Native)
};

// ScriptStruct Engine.Canvas.DepthFieldGlowInfo
// 0x0024
struct FDepthFieldGlowInfo
{
	uint32_t                                           bEnableGlow : 1;                               // 0x0000 (0x0004) [0x0000000000000000] [0x00000001] 
	struct FLinearColor                                GlowColor;                                     // 0x0004 (0x0010) [0x0000000000000000]               
	struct FVector2D                                   GlowOuterRadius;                               // 0x0014 (0x0008) [0x0000000000000000]               
	struct FVector2D                                   GlowInnerRadius;                               // 0x001C (0x0008) [0x0000000000000000]               
};

// ScriptStruct Engine.Canvas.MobileDistanceFieldParams
// 0x0054
struct FMobileDistanceFieldParams
{
	float                                              Gamma;                                         // 0x0000 (0x0004) [0x0000000000000000]               
	float                                              AlphaRefVal;                                   // 0x0004 (0x0004) [0x0000000000000000]               
	float                                              SmoothWidth;                                   // 0x0008 (0x0004) [0x0000000000000000]               
	uint32_t                                           EnableShadow : 1;                              // 0x000C (0x0004) [0x0000000000000000] [0x00000001] 
	struct FVector2D                                   ShadowDirection;                               // 0x0010 (0x0008) [0x0000000000000000]               
	struct FLinearColor                                ShadowColor;                                   // 0x0018 (0x0010) [0x0000000000000000]               
	float                                              ShadowSmoothWidth;                             // 0x0028 (0x0004) [0x0000000000000000]               
	struct FDepthFieldGlowInfo                         GlowInfo;                                      // 0x002C (0x0024) [0x0000000000001000] (CPF_Native)  
	int32_t                                            BlendMode;                                     // 0x0050 (0x0004) [0x0000000000000000]               
};

// ScriptStruct Engine.Canvas.FontRenderInfo
// 0x0028
struct FFontRenderInfo
{
	uint32_t                                           bClipText : 1;                                 // 0x0000 (0x0004) [0x0000000000000000] [0x00000001] 
	uint32_t                                           bEnableShadow : 1;                             // 0x0000 (0x0004) [0x0000000000000000] [0x00000002] 
	struct FDepthFieldGlowInfo                         GlowInfo;                                      // 0x0004 (0x0024) [0x0000000000000000]               
};

// ScriptStruct Engine.Canvas.CanvasUVTri
// 0x0030
struct FCanvasUVTri
{
	struct FVector2D                                   V0_Pos;                                        // 0x0000 (0x0008) [0x0000000000000001] (CPF_Edit)    
	struct FVector2D                                   V0_UV;                                         // 0x0008 (0x0008) [0x0000000000000001] (CPF_Edit)    
	struct FVector2D                                   V1_Pos;                                        // 0x0010 (0x0008) [0x0000000000000001] (CPF_Edit)    
	struct FVector2D                                   V1_UV;                                         // 0x0018 (0x0008) [0x0000000000000001] (CPF_Edit)    
	struct FVector2D                                   V2_Pos;                                        // 0x0020 (0x0008) [0x0000000000000001] (CPF_Edit)    
	struct FVector2D                                   V2_UV;                                         // 0x0028 (0x0008) [0x0000000000000001] (CPF_Edit)    
};

// ScriptStruct Engine.Canvas.TextSizingParameters
// 0x002C
struct FTextSizingParameters
{
	float                                              DrawX;                                         // 0x0000 (0x0004) [0x0000000000100000]               
	float                                              DrawY;                                         // 0x0004 (0x0004) [0x0000000000100000]               
	float                                              DrawXL;                                        // 0x0008 (0x0004) [0x0000000000100000]               
	float                                              DrawYL;                                        // 0x000C (0x0004) [0x0000000000100000]               
	struct FVector2D                                   Scaling;                                       // 0x0010 (0x0008) [0x0000000000100000]               
	class UFont*                                       DrawFont;                                      // 0x0018 (0x0008) [0x0000000000100000]               
	struct FVector2D                                   SpacingAdjust;                                 // 0x0020 (0x0008) [0x0000000000100000]               
	float                                              ViewportHeight;                                // 0x0028 (0x0004) [0x0000000000100000]               
};

// ScriptStruct Engine.Canvas.WrappedStringElement
// 0x0018
struct FWrappedStringElement
{
	class FString                                      Value;                                         // 0x0000 (0x0010) [0x0000000000500000] (CPF_NeedCtorLink)
	struct FVector2D                                   LineExtent;                                    // 0x0010 (0x0008) [0x0000000000100000]               
};

// ScriptStruct Engine.CloudSaveSystem.SetSaveDataCallbackStruct
// 0x0020
struct FSetSaveDataCallbackStruct
{
	int32_t                                            SlotIndex;                                     // 0x0000 (0x0004) [0x0000000000000000]               
	struct FScriptDelegate                             Callback;                                      // 0x0008 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
};

// ScriptStruct Engine.CloudSaveSystem.SaveSlotOperation
// 0x0005
struct FSaveSlotOperation
{
	int32_t                                            SlotIndex;                                     // 0x0000 (0x0004) [0x0000000000000000]               
	uint8_t                                            SlotOperation;                                 // 0x0004 (0x0001) [0x0000000000000000]               
};

// ScriptStruct Engine.CloudSaveSystem.GetSaveDataCallbackStruct
// 0x0020
struct FGetSaveDataCallbackStruct
{
	int32_t                                            SlotIndex;                                     // 0x0000 (0x0004) [0x0000000000000000]               
	struct FScriptDelegate                             Callback;                                      // 0x0008 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
};

// ScriptStruct Engine.UIRoot.UIRangeData
// 0x0014
struct FUIRangeData
{
	float                                              CurrentValue;                                  // 0x0000 (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              MinValue;                                      // 0x0004 (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              MaxValue;                                      // 0x0008 (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              NudgeValue;                                    // 0x000C (0x0004) [0x0000000000000001] (CPF_Edit)    
	uint32_t                                           bIntRange : 1;                                 // 0x0010 (0x0004) [0x0000000000000001] [0x00000001] (CPF_Edit)
};

// ScriptStruct Engine.UIRoot.TextureCoordinates
// 0x0010
struct FTextureCoordinates
{
	float                                              U;                                             // 0x0000 (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              V;                                             // 0x0004 (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              UL;                                            // 0x0008 (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              VL;                                            // 0x000C (0x0004) [0x0000000000000001] (CPF_Edit)    
};

// ScriptStruct Engine.SequenceOp.SeqOpOutputInputLink
// 0x000C
struct FSeqOpOutputInputLink
{
	class USequenceOp*                                 LinkedOp;                                      // 0x0000 (0x0008) [0x0000000000000000]               
	int32_t                                            InputLinkIdx;                                  // 0x0008 (0x0004) [0x0000000000000000]               
};

// ScriptStruct Engine.SequenceOp.SeqOpOutputLink
// 0x0048
struct FSeqOpOutputLink
{
	TArray<struct FSeqOpOutputInputLink>               Links;                                         // 0x0000 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	class FString                                      LinkDesc;                                      // 0x0010 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	uint32_t                                           bHasImpulse : 1;                               // 0x0020 (0x0004) [0x0000000000000000] [0x00000001] 
	uint32_t                                           bDisabled : 1;                                 // 0x0020 (0x0004) [0x0000000000000000] [0x00000002] 
	uint32_t                                           bDisabledPIE : 1;                              // 0x0020 (0x0004) [0x0000000000000000] [0x00000004] 
	class USequenceOp*                                 LinkedOp;                                      // 0x0028 (0x0008) [0x0000000000000000]               
	float                                              ActivateDelay;                                 // 0x0030 (0x0004) [0x0000000000000000]               
	int32_t                                            DrawY;                                         // 0x0034 (0x0004) [0x0000000000000000]               
	uint32_t                                           bHidden : 1;                                   // 0x0038 (0x0004) [0x0000000000000000] [0x00000001] 
	uint32_t                                           bMoving : 1;                                   // 0x0038 (0x0004) [0x0000000800002000] [0x00000002] (CPF_Transient)
	uint32_t                                           bClampedMax : 1;                               // 0x0038 (0x0004) [0x0000000800000000] [0x00000004] 
	uint32_t                                           bClampedMin : 1;                               // 0x0038 (0x0004) [0x0000000800000000] [0x00000008] 
	int32_t                                            OverrideDelta;                                 // 0x003C (0x0004) [0x0000000800000000]               
	float                                              PIEActivationTime;                             // 0x0040 (0x0004) [0x0000000800002000] (CPF_Transient)
	uint32_t                                           bIsActivated : 1;                              // 0x0044 (0x0004) [0x0000000C01002000] [0x00000001] (CPF_Transient)
};

// ScriptStruct Engine.SequenceOp.SeqVarLink
// 0x0058
struct FSeqVarLink
{
	class UClass*                                      ExpectedType;                                  // 0x0000 (0x0008) [0x0000000000000000]               
	TArray<class USequenceVariable*>                   LinkedVariables;                               // 0x0008 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	class FString                                      LinkDesc;                                      // 0x0018 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FName                                       LinkVar;                                       // 0x0028 (0x0008) [0x0000000000000000]               
	struct FName                                       PropertyName;                                  // 0x0030 (0x0008) [0x0000000000000000]               
	uint32_t                                           bWriteable : 1;                                // 0x0038 (0x0004) [0x0000000000000000] [0x00000001] 
	uint32_t                                           bSequenceNeverReadsOnlyWritesToThisVar : 1;    // 0x0038 (0x0004) [0x0000000000000000] [0x00000002] 
	uint32_t                                           bModifiesLinkedObject : 1;                     // 0x0038 (0x0004) [0x0000000000000000] [0x00000004] 
	uint32_t                                           bHidden : 1;                                   // 0x0038 (0x0004) [0x0000000000000000] [0x00000008] 
	int32_t                                            MinVars;                                       // 0x003C (0x0004) [0x0000000000000000]               
	int32_t                                            MaxVars;                                       // 0x0040 (0x0004) [0x0000000000000000]               
	int32_t                                            DrawX;                                         // 0x0044 (0x0004) [0x0000000000000000]               
	class UProperty*                                   CachedProperty;                                // 0x0048 (0x0008) [0x0000000000002002] (CPF_Const | CPF_Transient)
	uint32_t                                           bAllowAnyType : 1;                             // 0x0050 (0x0004) [0x0000000000000000] [0x00000001] 
	uint32_t                                           bMoving : 1;                                   // 0x0050 (0x0004) [0x0000000800002000] [0x00000002] (CPF_Transient)
	uint32_t                                           bClampedMax : 1;                               // 0x0050 (0x0004) [0x0000000800000000] [0x00000004] 
	uint32_t                                           bClampedMin : 1;                               // 0x0050 (0x0004) [0x0000000800000000] [0x00000008] 
	int32_t                                            OverrideDelta;                                 // 0x0054 (0x0004) [0x0000000800000000]               
};

// ScriptStruct Engine.SequenceOp.SeqEventLink
// 0x0034
struct FSeqEventLink
{
	class UClass*                                      ExpectedType;                                  // 0x0000 (0x0008) [0x0000000000000000]               
	TArray<class USequenceEvent*>                      LinkedEvents;                                  // 0x0008 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	class FString                                      LinkDesc;                                      // 0x0018 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	int32_t                                            DrawX;                                         // 0x0028 (0x0004) [0x0000000000000000]               
	uint32_t                                           bHidden : 1;                                   // 0x002C (0x0004) [0x0000000000000000] [0x00000001] 
	uint32_t                                           bMoving : 1;                                   // 0x002C (0x0004) [0x0000000800002000] [0x00000002] (CPF_Transient)
	uint32_t                                           bClampedMax : 1;                               // 0x002C (0x0004) [0x0000000800000000] [0x00000004] 
	uint32_t                                           bClampedMin : 1;                               // 0x002C (0x0004) [0x0000000800000000] [0x00000008] 
	int32_t                                            OverrideDelta;                                 // 0x0030 (0x0004) [0x0000000800000000]               
};

// ScriptStruct Engine.UIRoot.InputKeyAction
// 0x0030
struct FInputKeyAction
{
	struct FName                                       InputKeyName;                                  // 0x0000 (0x0008) [0x0000000000000001] (CPF_Edit)    
	uint8_t                                            InputKeyState;                                 // 0x0008 (0x0001) [0x0000000000000001] (CPF_Edit)    
	TArray<struct FSeqOpOutputInputLink>               TriggeredOps;                                  // 0x0010 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	TArray<class USequenceOp*>                         ActionsToExecute;                              // 0x0020 (0x0010) [0x0000000020400000] (CPF_NeedCtorLink | CPF_Deprecated)
};

// ScriptStruct Engine.UIRoot.InputEventParameters
// 0x0020
struct FInputEventParameters
{
	int32_t                                            PlayerIndex;                                   // 0x0000 (0x0004) [0x0000000000102002] (CPF_Const | CPF_Transient)
	int32_t                                            ControllerId;                                  // 0x0004 (0x0004) [0x0000000000102002] (CPF_Const | CPF_Transient)
	struct FName                                       InputKeyName;                                  // 0x0008 (0x0008) [0x0000000000102002] (CPF_Const | CPF_Transient)
	uint8_t                                            EventType;                                     // 0x0010 (0x0001) [0x0000000000102002] (CPF_Const | CPF_Transient)
	float                                              InputDelta;                                    // 0x0014 (0x0004) [0x0000000000102002] (CPF_Const | CPF_Transient)
	float                                              DeltaTime;                                     // 0x0018 (0x0004) [0x0000000000102002] (CPF_Const | CPF_Transient)
	uint32_t                                           bAltPressed : 1;                               // 0x001C (0x0004) [0x0000000000102002] [0x00000001] (CPF_Const | CPF_Transient)
	uint32_t                                           bCtrlPressed : 1;                              // 0x001C (0x0004) [0x0000000000102002] [0x00000002] (CPF_Const | CPF_Transient)
	uint32_t                                           bShiftPressed : 1;                             // 0x001C (0x0004) [0x0000000000102002] [0x00000004] (CPF_Const | CPF_Transient)
};

// ScriptStruct Engine.UIRoot.SubscribedInputEventParameters
// 0x0008 (0x0020 - 0x0028)
struct FSubscribedInputEventParameters : FInputEventParameters
{
	struct FName                                       InputAliasName;                                // 0x0020 (0x0008) [0x0000000000102002] (CPF_Const | CPF_Transient)
};

// ScriptStruct Engine.UIRoot.UIAxisEmulationDefinition
// 0x0024
struct FUIAxisEmulationDefinition
{
	struct FName                                       AxisInputKey;                                  // 0x0000 (0x0008) [0x0000000000000000]               
	struct FName                                       AdjacentAxisInputKey;                          // 0x0008 (0x0008) [0x0000000000000000]               
	uint32_t                                           bEmulateButtonPress : 1;                       // 0x0010 (0x0004) [0x0000000000000000] [0x00000001] 
	struct FName                                       InputKeyToEmulate[0x2];                        // 0x0014 (0x0010) [0x0000000000000000]               
};

// ScriptStruct Engine.UIRoot.RawInputKeyEventData
// 0x0009
struct FRawInputKeyEventData
{
	struct FName                                       InputKeyName;                                  // 0x0000 (0x0008) [0x0000000000000000]               
	uint8_t                                            ModifierKeyFlags;                              // 0x0008 (0x0001) [0x0000000000000000]               
};

// ScriptStruct Engine.Console.AutoCompleteCommand
// 0x0020
struct FAutoCompleteCommand
{
	class FString                                      Command;                                       // 0x0000 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	class FString                                      Desc;                                          // 0x0010 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
};

// ScriptStruct Engine.Console.AutoCompleteNode
// 0x0028
struct FAutoCompleteNode
{
	int32_t                                            IndexChar;                                     // 0x0000 (0x0004) [0x0000000000000000]               
	TArray<int32_t>                                    AutoCompleteListIndices;                       // 0x0008 (0x0010) [0x0000000000500000] (CPF_NeedCtorLink)
	TArray<struct FPointer>                            ChildNodes;                                    // 0x0018 (0x0010) [0x0000000000500000] (CPF_NeedCtorLink)
};

// ScriptStruct Engine.ControllerLayoutStack.ControllerLayout
// 0x000C
struct FControllerLayout
{
	struct FName                                       Name;                                          // 0x0000 (0x0008) [0x0001000000000000]               
	int32_t                                            Priority;                                      // 0x0008 (0x0004) [0x0001000000000000]               
};

// ScriptStruct Engine.CoverLink.CovPosInfo
// 0x0038
struct FCovPosInfo
{
	class ACoverLink*                                  Link;                                          // 0x0000 (0x0008) [0x0000000000000000]               
	int32_t                                            LtSlotIdx;                                     // 0x0008 (0x0004) [0x0000000000000000]               
	int32_t                                            RtSlotIdx;                                     // 0x000C (0x0004) [0x0000000000000000]               
	float                                              LtToRtPct;                                     // 0x0010 (0x0004) [0x0000000000000000]               
	struct FVector                                     Location;                                      // 0x0014 (0x000C) [0x0000000000000000]               
	struct FVector                                     Normal;                                        // 0x0020 (0x000C) [0x0000000000000000]               
	struct FVector                                     Tangent;                                       // 0x002C (0x000C) [0x0000000000000000]               
};

// ScriptStruct Engine.CoverLink.FireLinkItem
// 0x0004
struct FFireLinkItem
{
	uint8_t                                            SrcType;                                       // 0x0000 (0x0001) [0x0000000000000000]               
	uint8_t                                            SrcAction;                                     // 0x0001 (0x0001) [0x0000000000000000]               
	uint8_t                                            DestType;                                      // 0x0002 (0x0001) [0x0000000000000000]               
	uint8_t                                            DestAction;                                    // 0x0003 (0x0001) [0x0000000000000000]               
};

// ScriptStruct Engine.CoverLink.FireLink
// 0x0018
struct FFireLink
{
	TArray<uint8_t>                                    Interactions;                                  // 0x0000 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	int32_t                                            PackedProperties_CoverPairRefAndDynamicInfo;   // 0x0010 (0x0004) [0x0000000000000002] (CPF_Const)   
	uint32_t                                           bFallbackLink : 1;                             // 0x0014 (0x0004) [0x0000000000000000] [0x00000001] 
	uint32_t                                           bDynamicIndexInited : 1;                       // 0x0014 (0x0004) [0x0000000000000000] [0x00000002] 
};

// ScriptStruct Engine.CoverLink.DynamicLinkInfo
// 0x0018
struct FDynamicLinkInfo
{
	struct FVector                                     LastTargetLocation;                            // 0x0000 (0x000C) [0x0000000000000000]               
	struct FVector                                     LastSrcLocation;                               // 0x000C (0x000C) [0x0000000000000000]               
};

// ScriptStruct Engine.CoverLink.CoverReference
// 0x0004 (0x0018 - 0x001C)
struct FCoverReference : FActorReference
{
	int32_t                                            SlotIdx;                                       // 0x0018 (0x0004) [0x0000000000000001] (CPF_Edit)    
};

// ScriptStruct Engine.CoverLink.ExposedLink
// 0x0021
struct FExposedLink
{
	struct FCoverReference                             TargetActor;                                   // 0x0000 (0x0020) [0x0000000000020003] (CPF_Edit | CPF_Const | CPF_EditConst)
	uint8_t                                            ExposedScale;                                  // 0x0020 (0x0001) [0x0000000000000001] (CPF_Edit)    
};

// ScriptStruct Engine.CoverLink.SlotMoveRef
// 0x0064
struct FSlotMoveRef
{
	struct FPolyReference                              Poly;                                          // 0x0000 (0x0028) [0x0000000000000001] (CPF_Edit)    
	struct FBasedPosition                              Dest;                                          // 0x0028 (0x0038) [0x0000000000000001] (CPF_Edit)    
	int32_t                                            Direction;                                     // 0x0060 (0x0004) [0x0000000000000001] (CPF_Edit)    
};

// ScriptStruct Engine.CoverLink.CoverInfo
// 0x000C
struct FCoverInfo
{
	class ACoverLink*                                  Link;                                          // 0x0000 (0x0008) [0x0000000000020001] (CPF_Edit | CPF_EditConst)
	int32_t                                            SlotIdx;                                       // 0x0008 (0x0004) [0x0000000000020001] (CPF_Edit | CPF_EditConst)
};

// ScriptStruct Engine.CoverLink.CoverSlot
// 0x0094
struct FCoverSlot
{
	class APawn*                                       SlotOwner;                                     // 0x0000 (0x0008) [0x0000000000000000]               
	float                                              SlotValidAfterTime;                            // 0x0008 (0x0004) [0x0000000000002000] (CPF_Transient)
	uint8_t                                            ForceCoverType;                                // 0x000C (0x0001) [0x0000000000000001] (CPF_Edit)    
	uint8_t                                            CoverType;                                     // 0x000D (0x0001) [0x0000000000020001] (CPF_Edit | CPF_EditConst)
	uint8_t                                            LocationDescription;                           // 0x000E (0x0001) [0x0000000000000001] (CPF_Edit)    
	struct FVector                                     LocationOffset;                                // 0x0010 (0x000C) [0x0000000000000000]               
	struct FRotator                                    RotationOffset;                                // 0x001C (0x000C) [0x0000000000000000]               
	TArray<uint8_t>                                    Actions;                                       // 0x0028 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	TArray<struct FFireLink>                           FireLinks;                                     // 0x0038 (0x0010) [0x0000000000420001] (CPF_Edit | CPF_EditConst | CPF_NeedCtorLink)
	TArray<struct FFireLink>                           RejectedFireLinks;                             // 0x0048 (0x0010) [0x0000000000422001] (CPF_Edit | CPF_Transient | CPF_EditConst | CPF_NeedCtorLink)
	TArray<int32_t>                                    ExposedCoverPackedProperties;                  // 0x0058 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	int32_t                                            TurnTargetPackedProperties;                    // 0x0068 (0x0004) [0x0000000000000000]               
	TArray<struct FSlotMoveRef>                        SlipRefs;                                      // 0x0070 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	TArray<struct FCoverInfo>                          OverlapClaimsList;                             // 0x0080 (0x0010) [0x0000000000420001] (CPF_Edit | CPF_EditConst | CPF_NeedCtorLink)
	uint32_t                                           bLeanLeft : 1;                                 // 0x0090 (0x0004) [0x0000000000000001] [0x00000001] (CPF_Edit)
	uint32_t                                           bLeanRight : 1;                                // 0x0090 (0x0004) [0x0000000000000001] [0x00000002] (CPF_Edit)
	uint32_t                                           bForceCanPopUp : 1;                            // 0x0090 (0x0004) [0x0000000000000001] [0x00000004] (CPF_Edit)
	uint32_t                                           bCanPopUp : 1;                                 // 0x0090 (0x0004) [0x0000000000020001] [0x00000008] (CPF_Edit | CPF_EditConst)
	uint32_t                                           bCanMantle : 1;                                // 0x0090 (0x0004) [0x0000000000020001] [0x00000010] (CPF_Edit | CPF_EditConst)
	uint32_t                                           bCanClimbUp : 1;                               // 0x0090 (0x0004) [0x0000000000020001] [0x00000020] (CPF_Edit | CPF_EditConst)
	uint32_t                                           bForceCanCoverSlip_Left : 1;                   // 0x0090 (0x0004) [0x0000000000000001] [0x00000040] (CPF_Edit)
	uint32_t                                           bForceCanCoverSlip_Right : 1;                  // 0x0090 (0x0004) [0x0000000000000001] [0x00000080] (CPF_Edit)
	uint32_t                                           bCanCoverSlip_Left : 1;                        // 0x0090 (0x0004) [0x0000000000020001] [0x00000100] (CPF_Edit | CPF_EditConst)
	uint32_t                                           bCanCoverSlip_Right : 1;                       // 0x0090 (0x0004) [0x0000000000020001] [0x00000200] (CPF_Edit | CPF_EditConst)
	uint32_t                                           bCanSwatTurn_Left : 1;                         // 0x0090 (0x0004) [0x0000000000020001] [0x00000400] (CPF_Edit | CPF_EditConst)
	uint32_t                                           bCanSwatTurn_Right : 1;                        // 0x0090 (0x0004) [0x0000000000020001] [0x00000800] (CPF_Edit | CPF_EditConst)
	uint32_t                                           bEnabled : 1;                                  // 0x0090 (0x0004) [0x0000000000000001] [0x00001000] (CPF_Edit)
	uint32_t                                           bAllowPopup : 1;                               // 0x0090 (0x0004) [0x0000000000000001] [0x00002000] (CPF_Edit)
	uint32_t                                           bAllowMantle : 1;                              // 0x0090 (0x0004) [0x0000000000000001] [0x00004000] (CPF_Edit)
	uint32_t                                           bAllowCoverSlip : 1;                           // 0x0090 (0x0004) [0x0000000000000001] [0x00008000] (CPF_Edit)
	uint32_t                                           bAllowClimbUp : 1;                             // 0x0090 (0x0004) [0x0000000000000001] [0x00010000] (CPF_Edit)
	uint32_t                                           bAllowSwatTurn : 1;                            // 0x0090 (0x0004) [0x0000000000000001] [0x00020000] (CPF_Edit)
	uint32_t                                           bForceNoGroundAdjust : 1;                      // 0x0090 (0x0004) [0x0000000000000001] [0x00040000] (CPF_Edit)
	uint32_t                                           bPlayerOnly : 1;                               // 0x0090 (0x0004) [0x0000000000000001] [0x00080000] (CPF_Edit)
	uint32_t                                           bPreferLeanOverPopup : 1;                      // 0x0090 (0x0004) [0x0000000000000001] [0x00100000] (CPF_Edit)
	uint32_t                                           bDestructible : 1;                             // 0x0090 (0x0004) [0x0000000000002000] [0x00200000] (CPF_Transient)
	uint32_t                                           bSelected : 1;                                 // 0x0090 (0x0004) [0x0000000000002000] [0x00400000] (CPF_Transient)
	uint32_t                                           bFailedToFindSurface : 1;                      // 0x0090 (0x0004) [0x0000000000022001] [0x00800000] (CPF_Edit | CPF_Transient | CPF_EditConst)
};

// ScriptStruct Engine.StaticMeshComponent.PaintedVertex
// 0x0014
struct FPaintedVertex
{
	struct FVector                                     Position;                                      // 0x0000 (0x000C) [0x0000000000000000]               
	struct FPackedNormal                               Normal;                                        // 0x000C (0x0004) [0x0000000000000000]               
	struct FColor                                      Color;                                         // 0x0010 (0x0004) [0x0000000000000000]               
};

// ScriptStruct Engine.StaticMeshComponent.StaticMeshComponentLODInfo
// 0x0040
struct FStaticMeshComponentLODInfo
{
	TArray<class UShadowMap2D*>                        ShadowMaps;                                    // 0x0000 (0x0010) [0x0000000000400002] (CPF_Const | CPF_NeedCtorLink)
	TArray<class UObject*>                             ShadowVertexBuffers;                           // 0x0010 (0x0010) [0x0000000000400002] (CPF_Const | CPF_NeedCtorLink)
	struct FPointer                                    LightMap;                                      // 0x0020 (0x0008) [0x0000000000001002] (CPF_Const | CPF_Native)
	struct FPointer                                    OverrideVertexColors;                          // 0x0028 (0x0008) [0x0000000000001002] (CPF_Const | CPF_Native)
	TArray<struct FPaintedVertex>                      PaintedVertices;                               // 0x0030 (0x0010) [0x0000000000400002] (CPF_Const | CPF_NeedCtorLink)
};

// ScriptStruct Engine.CoverMeshComponent.CoverMeshes
// 0x0068
struct FCoverMeshes
{
	class UStaticMesh*                                 Base;                                          // 0x0000 (0x0008) [0x0000000000000000]               
	class UStaticMesh*                                 LeanLeft;                                      // 0x0008 (0x0008) [0x0000000000000000]               
	class UStaticMesh*                                 LeanRight;                                     // 0x0010 (0x0008) [0x0000000000000000]               
	class UStaticMesh*                                 LeanLeftPref;                                  // 0x0018 (0x0008) [0x0000000000000000]               
	class UStaticMesh*                                 LeanRightPref;                                 // 0x0020 (0x0008) [0x0000000000000000]               
	class UStaticMesh*                                 Climb;                                         // 0x0028 (0x0008) [0x0000000000000000]               
	class UStaticMesh*                                 Mantle;                                        // 0x0030 (0x0008) [0x0000000000000000]               
	class UStaticMesh*                                 SlipLeft;                                      // 0x0038 (0x0008) [0x0000000000000000]               
	class UStaticMesh*                                 SlipRight;                                     // 0x0040 (0x0008) [0x0000000000000000]               
	class UStaticMesh*                                 SwatLeft;                                      // 0x0048 (0x0008) [0x0000000000000000]               
	class UStaticMesh*                                 SwatRight;                                     // 0x0050 (0x0008) [0x0000000000000000]               
	class UStaticMesh*                                 PopUp;                                         // 0x0058 (0x0008) [0x0000000000000000]               
	class UStaticMesh*                                 PlayerOnly;                                    // 0x0060 (0x0008) [0x0000000000000000]               
};

// ScriptStruct Engine.CoverReplicator.ManualCoverTypeInfo
// 0x0002
struct FManualCoverTypeInfo
{
	uint8_t                                            SlotIndex;                                     // 0x0000 (0x0001) [0x0000000000000000]               
	uint8_t                                            ManualCoverType;                               // 0x0001 (0x0001) [0x0000000000000000]               
};

// ScriptStruct Engine.CoverReplicator.CoverReplicationInfo
// 0x0048
struct FCoverReplicationInfo
{
	class ACoverLink*                                  Link;                                          // 0x0000 (0x0008) [0x0000000000000000]               
	TArray<uint8_t>                                    SlotsEnabled;                                  // 0x0008 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	TArray<uint8_t>                                    SlotsDisabled;                                 // 0x0018 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	TArray<uint8_t>                                    SlotsAdjusted;                                 // 0x0028 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	TArray<struct FManualCoverTypeInfo>                SlotsCoverTypeChanged;                         // 0x0038 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
};

// ScriptStruct Engine.CullDistanceVolume.CullDistanceSizePair
// 0x0008
struct FCullDistanceSizePair
{
	float                                              Size;                                          // 0x0000 (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              CullDistance;                                  // 0x0004 (0x0004) [0x0000000000000001] (CPF_Edit)    
};

// ScriptStruct Engine.CurveEdPresetCurve.PresetGeneratedPoint
// 0x0015
struct FPresetGeneratedPoint
{
	float                                              KeyIn;                                         // 0x0000 (0x0004) [0x0000000000000000]               
	float                                              KeyOut;                                        // 0x0004 (0x0004) [0x0000000000000000]               
	uint32_t                                           TangentsValid : 1;                             // 0x0008 (0x0004) [0x0000000000000000] [0x00000001] 
	float                                              TangentIn;                                     // 0x000C (0x0004) [0x0000000000000000]               
	float                                              TangentOut;                                    // 0x0010 (0x0004) [0x0000000000000000]               
	uint8_t                                            IntepMode;                                     // 0x0014 (0x0001) [0x0000000000000000]               
};

// ScriptStruct Engine.DataStoreClient.PlayerDataStoreGroup
// 0x0018
struct FPlayerDataStoreGroup
{
	class ULocalPlayer*                                PlayerOwner;                                   // 0x0000 (0x0008) [0x0000000000102002] (CPF_Const | CPF_Transient)
	TArray<class UUIDataStore*>                        DataStores;                                    // 0x0008 (0x0010) [0x0000000000502002] (CPF_Const | CPF_Transient | CPF_NeedCtorLink)
};

// ScriptStruct Engine.DateTime.DateTimeStruct
// 0x001D
struct FDateTimeStruct
{
	int32_t                                            Year;                                          // 0x0000 (0x0004) [0x0000000040000000] (CPF_EditInlineNotify)
	int32_t                                            Month;                                         // 0x0004 (0x0004) [0x0000000040000000] (CPF_EditInlineNotify)
	int32_t                                            Day;                                           // 0x0008 (0x0004) [0x0000000040000000] (CPF_EditInlineNotify)
	int32_t                                            WeekDay;                                       // 0x000C (0x0004) [0x0000000040000000] (CPF_EditInlineNotify)
	int32_t                                            Hour;                                          // 0x0010 (0x0004) [0x0000000040000000] (CPF_EditInlineNotify)
	int32_t                                            Minute;                                        // 0x0014 (0x0004) [0x0000000040000000] (CPF_EditInlineNotify)
	int32_t                                            Second;                                        // 0x0018 (0x0004) [0x0000000040000000] (CPF_EditInlineNotify)
	uint8_t                                            TimeZone;                                      // 0x001C (0x0001) [0x0000000040000000] (CPF_EditInlineNotify)
};

// ScriptStruct Engine.DecalComponent.DecalReceiver
// 0x0010
struct FDecalReceiver
{
	class UPrimitiveComponent*                         Component;                                     // 0x0000 (0x0008) [0x000000000408000A] (CPF_Const | CPF_ExportObject | CPF_Component | CPF_EditInline)
	struct FPointer                                    RenderData;                                    // 0x0008 (0x0008) [0x0000000000001002] (CPF_Const | CPF_Native)
};

// ScriptStruct Engine.DecalManager.ActiveDecalInfo
// 0x000C
struct FActiveDecalInfo
{
	class UDecalComponent*                             Decal;                                         // 0x0000 (0x0008) [0x0000000004080008] (CPF_ExportObject | CPF_Component | CPF_EditInline)
	float                                              LifetimeRemaining;                             // 0x0008 (0x0004) [0x0000000000000000]               
};

// ScriptStruct Engine.MaterialInterface.LightmassMaterialInterfaceSettings
// 0x001C
struct FLightmassMaterialInterfaceSettings
{
	uint32_t                                           bCastShadowAsMasked : 1;                       // 0x0000 (0x0004) [0x0000000000000001] [0x00000001] (CPF_Edit)
	float                                              EmissiveBoost;                                 // 0x0004 (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              DiffuseBoost;                                  // 0x0008 (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              SpecularBoost;                                 // 0x000C (0x0004) [0x0000000000000000]               
	float                                              ExportResolutionScale;                         // 0x0010 (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              DistanceFieldPenumbraScale;                    // 0x0014 (0x0004) [0x0000000000000001] (CPF_Edit)    
	uint32_t                                           bOverrideCastShadowAsMasked : 1;               // 0x0018 (0x0004) [0x0000000000000000] [0x00000001] 
	uint32_t                                           bOverrideEmissiveBoost : 1;                    // 0x0018 (0x0004) [0x0000000000000000] [0x00000002] 
	uint32_t                                           bOverrideDiffuseBoost : 1;                     // 0x0018 (0x0004) [0x0000000000000000] [0x00000004] 
	uint32_t                                           bOverrideSpecularBoost : 1;                    // 0x0018 (0x0004) [0x0000000000000000] [0x00000008] 
	uint32_t                                           bOverrideExportResolutionScale : 1;            // 0x0018 (0x0004) [0x0000000000000000] [0x00000010] 
	uint32_t                                           bOverrideDistanceFieldPenumbraScale : 1;       // 0x0018 (0x0004) [0x0000000000000000] [0x00000020] 
};

// ScriptStruct Engine.Material.MaterialInput
// 0x0038
struct FMaterialInput
{
	class UMaterialExpression*                         Expression;                                    // 0x0000 (0x0008) [0x0000000000000000]               
	int32_t                                            OutputIndex;                                   // 0x0008 (0x0004) [0x0000000000000000]               
	class FString                                      InputName;                                     // 0x0010 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	int32_t                                            Mask;                                          // 0x0020 (0x0004) [0x0000000000000000]               
	int32_t                                            MaskR;                                         // 0x0024 (0x0004) [0x0000000000000000]               
	int32_t                                            MaskG;                                         // 0x0028 (0x0004) [0x0000000000000000]               
	int32_t                                            MaskB;                                         // 0x002C (0x0004) [0x0000000000000000]               
	int32_t                                            MaskA;                                         // 0x0030 (0x0004) [0x0000000000000000]               
	int32_t                                            GCC64_Padding;                                 // 0x0034 (0x0004) [0x0000000000000000]               
};

// ScriptStruct Engine.Material.MaterialFunctionInfo
// 0x0018
struct FMaterialFunctionInfo
{
	struct FGuid                                       StateId;                                       // 0x0000 (0x0010) [0x0000000000000000]               
	class UMaterialFunction*                           Function;                                      // 0x0010 (0x0008) [0x0000000000000000]               
};

// ScriptStruct Engine.Material.ColorMaterialInput
// 0x0008 (0x0038 - 0x0040)
struct FColorMaterialInput : FMaterialInput
{
	uint32_t                                           UseConstant : 1;                               // 0x0038 (0x0004) [0x0000000000000000] [0x00000001] 
	struct FColor                                      Constant;                                      // 0x003C (0x0004) [0x0000000000000000]               
};

// ScriptStruct Engine.Material.ScalarMaterialInput
// 0x0008 (0x0038 - 0x0040)
struct FScalarMaterialInput : FMaterialInput
{
	uint32_t                                           UseConstant : 1;                               // 0x0038 (0x0004) [0x0000000000000000] [0x00000001] 
	float                                              Constant;                                      // 0x003C (0x0004) [0x0000000000000000]               
};

// ScriptStruct Engine.Material.VectorMaterialInput
// 0x0010 (0x0038 - 0x0048)
struct FVectorMaterialInput : FMaterialInput
{
	uint32_t                                           UseConstant : 1;                               // 0x0038 (0x0004) [0x0000000000000000] [0x00000001] 
	struct FVector                                     Constant;                                      // 0x003C (0x000C) [0x0000000000000000]               
};

// ScriptStruct Engine.Material.Vector2MaterialInput
// 0x000C (0x0038 - 0x0044)
struct FVector2MaterialInput : FMaterialInput
{
	uint32_t                                           UseConstant : 1;                               // 0x0038 (0x0004) [0x0000000000000000] [0x00000001] 
	float                                              ConstantX;                                     // 0x003C (0x0004) [0x0000000000000000]               
	float                                              ConstantY;                                     // 0x0040 (0x0004) [0x0000000000000000]               
};

// ScriptStruct Engine.PhysicsVolume.CheckpointRecord
// 0x0004
struct APhysicsVolume_FCheckpointRecord
{
	uint32_t                                           bActive : 1;                                   // 0x0000 (0x0004) [0x0000000000000000] [0x00000001] 
};

// ScriptStruct Engine.DistributionVectorConstantCurveParticleParameter.CurveParameterPoint
// 0x0031
struct FCurveParameterPoint
{
	struct FName                                       ParameterName;                                 // 0x0000 (0x0008) [0x0000000000000001] (CPF_Edit)    
	float                                              InVal;                                         // 0x0008 (0x0004) [0x0000000000000001] (CPF_Edit)    
	struct FVector                                     OutVal;                                        // 0x000C (0x000C) [0x0000000000000001] (CPF_Edit)    
	struct FVector                                     LeaveTangent;                                  // 0x0018 (0x000C) [0x0000000000000001] (CPF_Edit)    
	struct FVector                                     ArriveTangent;                                 // 0x0024 (0x000C) [0x0000000000000001] (CPF_Edit)    
	uint8_t                                            InterpMode;                                    // 0x0030 (0x0001) [0x0000000000000001] (CPF_Edit)    
};

// ScriptStruct Engine.OnlineSubsystem.OnlineProfile
// 0x0078
struct FOnlineProfile
{
	class FString                                      UserId;                                        // 0x0000 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	uint8_t                                            AccountTier;                                   // 0x0010 (0x0001) [0x0000000000000000]               
	int32_t                                            Gamerscore;                                    // 0x0014 (0x0004) [0x0000000000000000]               
	class FString                                      ApplicationDisplayName;                        // 0x0018 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	class FString                                      GameDisplayName;                               // 0x0028 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	class FString                                      DisplayPictureURL;                             // 0x0038 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	class FString                                      ApplicationDisplayPictureResizeURL;            // 0x0048 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	class FString                                      PublicGamerPictureURL;                         // 0x0058 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	class FString                                      GameDisplayPictureResizeURL;                   // 0x0068 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
};

// ScriptStruct Engine.OnlineSubsystem.UniqueLobbyId
// 0x0009
struct FUniqueLobbyId
{
	uint64_t                                           Uid;                                           // 0x0000 (0x0008) [0x0000000000000000]               
	uint8_t                                            Platform;                                      // 0x0008 (0x0001) [0x0000000000000000]               
};

// ScriptStruct Engine.OnlineSubsystem.OnlineRegistrant
// 0x0048
struct FOnlineRegistrant
{
	struct FUniqueNetId                                PlayerNetId;                                   // 0x0000 (0x0048) [0x0000000000400002] (CPF_Const | CPF_NeedCtorLink)
};

// ScriptStruct Engine.OnlineSubsystem.OnlineArbitrationRegistrant
// 0x000C (0x0048 - 0x0054)
struct FOnlineArbitrationRegistrant : FOnlineRegistrant
{
	uint64_t                                           MachineId;                                     // 0x0048 (0x0008) [0x0000000000000002] (CPF_Const)   
	int32_t                                            Trustworthiness;                               // 0x0050 (0x0004) [0x0000000000000002] (CPF_Const)   
};

// ScriptStruct Engine.OnlineSubsystem.NamedSession
// 0x0038
struct FNamedSession
{
	struct FName                                       SessionName;                                   // 0x0000 (0x0008) [0x0000000000000000]               
	struct FPointer                                    SessionInfo;                                   // 0x0008 (0x0008) [0x0000000000003002] (CPF_Const | CPF_Native | CPF_Transient)
	class UOnlineGameSettings*                         GameSettings;                                  // 0x0010 (0x0008) [0x0000000000000000]               
	TArray<struct FOnlineRegistrant>                   Registrants;                                   // 0x0018 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	TArray<struct FOnlineArbitrationRegistrant>        ArbitrationRegistrants;                        // 0x0028 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
};

// ScriptStruct Engine.OnlineSubsystem.FriendHistoryKey
// 0x0020
struct FFriendHistoryKey
{
	TArray<uint8_t>                                    Key;                                           // 0x0000 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	class FString                                      Name;                                          // 0x0010 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
};

// ScriptStruct Engine.OnlineSubsystem.NamedInterface
// 0x0010
struct FNamedInterface
{
	struct FName                                       InterfaceName;                                 // 0x0000 (0x0008) [0x0000000000000000]               
	class UObject*                                     InterfaceObject;                               // 0x0008 (0x0008) [0x0000000000000000]               
};

// ScriptStruct Engine.OnlineSubsystem.SocialPostImageFlags
// 0x0004
struct FSocialPostImageFlags
{
	uint32_t                                           bIsUserGeneratedImage : 1;                     // 0x0000 (0x0004) [0x0000000000000000] [0x00000001] 
	uint32_t                                           bIsGameGeneratedImage : 1;                     // 0x0000 (0x0004) [0x0000000000000000] [0x00000002] 
	uint32_t                                           bIsAchievementImage : 1;                       // 0x0000 (0x0004) [0x0000000000000000] [0x00000004] 
	uint32_t                                           bIsMediaImage : 1;                             // 0x0000 (0x0004) [0x0000000000000000] [0x00000008] 
};

// ScriptStruct Engine.OnlineSubsystem.SocialPostImageInfo
// 0x0048
struct FSocialPostImageInfo
{
	struct FSocialPostImageFlags                       Flags;                                         // 0x0000 (0x0004) [0x0000000000000000]               
	class FString                                      MessageText;                                   // 0x0008 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	class FString                                      TitleText;                                     // 0x0018 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	class FString                                      PictureCaption;                                // 0x0028 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	class FString                                      PictureDescription;                            // 0x0038 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
};

// ScriptStruct Engine.OnlineSubsystem.SocialPostLinkInfo
// 0x0020 (0x0048 - 0x0068)
struct FSocialPostLinkInfo : FSocialPostImageInfo
{
	class FString                                      TitleURL;                                      // 0x0048 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	class FString                                      PictureURL;                                    // 0x0058 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
};

// ScriptStruct Engine.OnlineSubsystem.DownloadedWorkshopData
// 0x00D0
struct FDownloadedWorkshopData
{
	uint64_t                                           ItemID;                                        // 0x0000 (0x0008) [0x0000000040000000] (CPF_EditInlineNotify)
	class FString                                      Title;                                         // 0x0008 (0x0010) [0x0000000040400000] (CPF_NeedCtorLink | CPF_EditInlineNotify)
	class FString                                      AuthorName;                                    // 0x0018 (0x0010) [0x0000000040400000] (CPF_NeedCtorLink | CPF_EditInlineNotify)
	struct FUniqueNetId                                AuthorNetID;                                   // 0x0028 (0x0048) [0x0000000000400000] (CPF_NeedCtorLink)
	class UTexture2DDynamic*                           Preview;                                       // 0x0070 (0x0008) [0x0000000040000000] (CPF_EditInlineNotify)
	class UTexture*                                    Avatar;                                        // 0x0078 (0x0008) [0x0000000040000000] (CPF_EditInlineNotify)
	class FString                                      Description;                                   // 0x0080 (0x0010) [0x0000000040400000] (CPF_NeedCtorLink | CPF_EditInlineNotify)
	class FString                                      PreviewURL;                                    // 0x0090 (0x0010) [0x0000000040400000] (CPF_NeedCtorLink | CPF_EditInlineNotify)
	class FString                                      ItemPath;                                      // 0x00A0 (0x0010) [0x0000000040400000] (CPF_NeedCtorLink | CPF_EditInlineNotify)
	class FString                                      Filename;                                      // 0x00B0 (0x0010) [0x0000000040400000] (CPF_NeedCtorLink | CPF_EditInlineNotify)
	class FString                                      FullPath;                                      // 0x00C0 (0x0010) [0x0000000040400000] (CPF_NeedCtorLink | CPF_EditInlineNotify)
};

// ScriptStruct Engine.OnlineSubsystem.SocialPostPrivileges
// 0x0004
struct FSocialPostPrivileges
{
	uint32_t                                           bCanPostImage : 1;                             // 0x0000 (0x0004) [0x0000000000000002] [0x00000001] (CPF_Const)
	uint32_t                                           bCanPostLink : 1;                              // 0x0000 (0x0004) [0x0000000000000002] [0x00000002] (CPF_Const)
};

// ScriptStruct Engine.OnlineSubsystem.OnlinePartyMember
// 0x0080
struct FOnlinePartyMember
{
	struct FUniqueNetId                                UniqueId;                                      // 0x0000 (0x0048) [0x0000000000400002] (CPF_Const | CPF_NeedCtorLink)
	class FString                                      NickName;                                      // 0x0048 (0x0010) [0x0000000000400002] (CPF_Const | CPF_NeedCtorLink)
	uint8_t                                            LocalUserNum;                                  // 0x0058 (0x0001) [0x0000000000000002] (CPF_Const)   
	uint8_t                                            NatType;                                       // 0x0059 (0x0001) [0x0000000000000002] (CPF_Const)   
	int32_t                                            TitleId;                                       // 0x005C (0x0004) [0x0000000000000002] (CPF_Const)   
	uint32_t                                           bIsLocal : 1;                                  // 0x0060 (0x0004) [0x0000000000000002] [0x00000001] (CPF_Const)
	uint32_t                                           bIsInPartyVoice : 1;                           // 0x0060 (0x0004) [0x0000000000000002] [0x00000002] (CPF_Const)
	uint32_t                                           bIsTalking : 1;                                // 0x0060 (0x0004) [0x0000000000000002] [0x00000004] (CPF_Const)
	uint32_t                                           bIsInGameSession : 1;                          // 0x0060 (0x0004) [0x0000000000000002] [0x00000008] (CPF_Const)
	uint32_t                                           bIsPlayingThisGame : 1;                        // 0x0060 (0x0004) [0x0000000000000002] [0x00000010] (CPF_Const)
	uint64_t                                           SessionId;                                     // 0x0068 (0x0008) [0x0000000000000002] (CPF_Const)   
	int32_t                                            Data1;                                         // 0x0070 (0x0004) [0x0000000000000002] (CPF_Const)   
	int32_t                                            Data2;                                         // 0x0074 (0x0004) [0x0000000000000002] (CPF_Const)   
	int32_t                                            Data3;                                         // 0x0078 (0x0004) [0x0000000000000002] (CPF_Const)   
	int32_t                                            Data4;                                         // 0x007C (0x0004) [0x0000000000000002] (CPF_Const)   
};

// ScriptStruct Engine.OnlineSubsystem.SessionMemberInfo
// 0x0049
struct FSessionMemberInfo
{
	struct FUniqueNetId                                PlayerNetId;                                   // 0x0000 (0x0048) [0x0000000000400000] (CPF_NeedCtorLink)
	uint8_t                                            MemberStatus;                                  // 0x0048 (0x0001) [0x0000000000000000]               
};

// ScriptStruct Engine.OnlineSubsystem.MarketplaceInventoryItem
// 0x0068
struct FMarketplaceInventoryItem
{
	class FString                                      ProductID;                                     // 0x0000 (0x0010) [0x0000000000400002] (CPF_Const | CPF_NeedCtorLink)
	uint8_t                                            MediaItemType;                                 // 0x0010 (0x0001) [0x0000000000000002] (CPF_Const)   
	uint8_t                                            ItemState;                                     // 0x0011 (0x0001) [0x0000000000000002] (CPF_Const)   
	int32_t                                            ConsumableBalance;                             // 0x0014 (0x0004) [0x0000000000000002] (CPF_Const)   
	int32_t                                            TitleId;                                       // 0x0018 (0x0004) [0x0000000000000002] (CPF_Const)   
	TArray<class FString>                              ContainerIds;                                  // 0x0020 (0x0010) [0x0000000000400002] (CPF_Const | CPF_NeedCtorLink)
	uint64_t                                           StartDate;                                     // 0x0030 (0x0008) [0x0000000000000002] (CPF_Const)   
	uint64_t                                           EndDate;                                       // 0x0038 (0x0008) [0x0000000000000002] (CPF_Const)   
	uint64_t                                           RightsObtainedDate;                            // 0x0040 (0x0008) [0x0000000000000002] (CPF_Const)   
	class FString                                      URL;                                           // 0x0048 (0x0010) [0x0000000000400002] (CPF_Const | CPF_NeedCtorLink)
	class FString                                      ConsumableUrl;                                 // 0x0058 (0x0010) [0x0000000000400002] (CPF_Const | CPF_NeedCtorLink)
};

// ScriptStruct Engine.OnlineSubsystem.MarketplaceProductImage
// 0x0048
struct FMarketplaceProductImage
{
	class FString                                      Id;                                            // 0x0000 (0x0010) [0x0000000000400002] (CPF_Const | CPF_NeedCtorLink)
	int32_t                                            Height;                                        // 0x0010 (0x0004) [0x0000000000000002] (CPF_Const)   
	int32_t                                            Width;                                         // 0x0014 (0x0004) [0x0000000000000002] (CPF_Const)   
	class FString                                      Purpose;                                       // 0x0018 (0x0010) [0x0000000000400002] (CPF_Const | CPF_NeedCtorLink)
	TArray<class FString>                              Purposes;                                      // 0x0028 (0x0010) [0x0000000000400002] (CPF_Const | CPF_NeedCtorLink)
	class FString                                      ResizeURL;                                     // 0x0038 (0x0010) [0x0000000000400002] (CPF_Const | CPF_NeedCtorLink)
};

// ScriptStruct Engine.OnlineSubsystem.MarketplaceProductAvailability
// 0x00A0
struct FMarketplaceProductAvailability
{
	TArray<class FString>                              AcceptablePaymentInstrumentTypes;              // 0x0000 (0x0010) [0x0000000000400002] (CPF_Const | CPF_NeedCtorLink)
	class FString                                      Description;                                   // 0x0010 (0x0010) [0x0000000000400002] (CPF_Const | CPF_NeedCtorLink)
	class FString                                      ContentId;                                     // 0x0020 (0x0010) [0x0000000000400002] (CPF_Const | CPF_NeedCtorLink)
	class FString                                      CurrencyCode;                                  // 0x0030 (0x0010) [0x0000000000400002] (CPF_Const | CPF_NeedCtorLink)
	class FString                                      DisplayListPrice;                              // 0x0040 (0x0010) [0x0000000000400002] (CPF_Const | CPF_NeedCtorLink)
	class FString                                      DisplayPrice;                                  // 0x0050 (0x0010) [0x0000000000400002] (CPF_Const | CPF_NeedCtorLink)
	class FString                                      DistributionType;                              // 0x0060 (0x0010) [0x0000000000400002] (CPF_Const | CPF_NeedCtorLink)
	uint32_t                                           bIsPurchasable : 1;                            // 0x0070 (0x0004) [0x0000000000000002] [0x00000001] (CPF_Const)
	float                                              ListPrice;                                     // 0x0074 (0x0004) [0x0000000000000002] (CPF_Const)   
	float                                              Price;                                         // 0x0078 (0x0004) [0x0000000000000002] (CPF_Const)   
	class FString                                      PromotionalText;                               // 0x0080 (0x0010) [0x0000000000400002] (CPF_Const | CPF_NeedCtorLink)
	class FString                                      SignedOffer;                                   // 0x0090 (0x0010) [0x0000000000400002] (CPF_Const | CPF_NeedCtorLink)
};

// ScriptStruct Engine.OnlineSubsystem.MarketplaceProductDetails
// 0x0090
struct FMarketplaceProductDetails
{
	class FString                                      StandardId;                                    // 0x0000 (0x0010) [0x0000000000400002] (CPF_Const | CPF_NeedCtorLink)
	uint8_t                                            MediaItemType;                                 // 0x0010 (0x0001) [0x0000000000000002] (CPF_Const)   
	class FString                                      ProductName;                                   // 0x0018 (0x0010) [0x0000000000400002] (CPF_Const | CPF_NeedCtorLink)
	class FString                                      ProductID;                                     // 0x0028 (0x0010) [0x0000000000400002] (CPF_Const | CPF_NeedCtorLink)
	uint64_t                                           ReleaseDate;                                   // 0x0038 (0x0008) [0x0000000000000002] (CPF_Const)   
	class FString                                      SandboxId;                                     // 0x0040 (0x0010) [0x0000000000400002] (CPF_Const | CPF_NeedCtorLink)
	int32_t                                            TitleId;                                       // 0x0050 (0x0004) [0x0000000000000002] (CPF_Const)   
	TArray<struct FMarketplaceProductImage>            Images;                                        // 0x0058 (0x0010) [0x0000000000400002] (CPF_Const | CPF_NeedCtorLink)
	uint8_t                                            DetailsReadState;                              // 0x0068 (0x0001) [0x0000000000000000]               
	TArray<struct FMarketplaceProductAvailability>     Availabilities;                                // 0x0070 (0x0010) [0x0000000000400002] (CPF_Const | CPF_NeedCtorLink)
	class FString                                      ProductDescription;                            // 0x0080 (0x0010) [0x0000000000400002] (CPF_Const | CPF_NeedCtorLink)
};

// ScriptStruct Engine.OnlineSubsystem.AchievementReward
// 0x0031
struct FAchievementReward
{
	class FString                                      RewardName;                                    // 0x0000 (0x0010) [0x0000000000400002] (CPF_Const | CPF_NeedCtorLink)
	class FString                                      Description;                                   // 0x0010 (0x0010) [0x0000000000400002] (CPF_Const | CPF_NeedCtorLink)
	class FString                                      Data;                                          // 0x0020 (0x0010) [0x0000000000400002] (CPF_Const | CPF_NeedCtorLink)
	uint8_t                                            RewardType;                                    // 0x0030 (0x0001) [0x0000000000000002] (CPF_Const)   
};

// ScriptStruct Engine.OnlineSubsystem.AchievementMediaAsset
// 0x0028
struct FAchievementMediaAsset
{
	class FString                                      AssetName;                                     // 0x0000 (0x0010) [0x0000000000400002] (CPF_Const | CPF_NeedCtorLink)
	uint8_t                                            AssetType;                                     // 0x0010 (0x0001) [0x0000000000000002] (CPF_Const)   
	class FString                                      AssetURL;                                      // 0x0018 (0x0010) [0x0000000000400002] (CPF_Const | CPF_NeedCtorLink)
};

// ScriptStruct Engine.OnlineSubsystem.AchievementTitleAssociation
// 0x0014
struct FAchievementTitleAssociation
{
	class FString                                      LocalizedTitleName;                            // 0x0000 (0x0010) [0x0000000000400002] (CPF_Const | CPF_NeedCtorLink)
	int32_t                                            TitleId;                                       // 0x0010 (0x0004) [0x0000000000000002] (CPF_Const)   
};

// ScriptStruct Engine.OnlineSubsystem.AchievementDetails
// 0x00F8
struct FAchievementDetails
{
	int32_t                                            Id;                                            // 0x0000 (0x0004) [0x0000000000000002] (CPF_Const)   
	class FString                                      StringId;                                      // 0x0008 (0x0010) [0x0000000000400002] (CPF_Const | CPF_NeedCtorLink)
	class FString                                      AchievementName;                               // 0x0018 (0x0010) [0x0000000000400002] (CPF_Const | CPF_NeedCtorLink)
	class FString                                      Description;                                   // 0x0028 (0x0010) [0x0000000000400002] (CPF_Const | CPF_NeedCtorLink)
	class FString                                      HowTo;                                         // 0x0038 (0x0010) [0x0000000000400002] (CPF_Const | CPF_NeedCtorLink)
	class USurface*                                    Image;                                         // 0x0048 (0x0008) [0x0000000000000000]               
	uint8_t                                            MonthEarned;                                   // 0x0050 (0x0001) [0x0000000000000002] (CPF_Const)   
	uint8_t                                            DayEarned;                                     // 0x0051 (0x0001) [0x0000000000000002] (CPF_Const)   
	uint8_t                                            YearEarned;                                    // 0x0052 (0x0001) [0x0000000000000002] (CPF_Const)   
	uint8_t                                            DayOfWeekEarned;                               // 0x0053 (0x0001) [0x0000000000000002] (CPF_Const)   
	int32_t                                            GamerPoints;                                   // 0x0054 (0x0004) [0x0000000000000002] (CPF_Const)   
	uint32_t                                           bIsSecret : 1;                                 // 0x0058 (0x0004) [0x0000000000000002] [0x00000001] (CPF_Const)
	uint32_t                                           bWasAchievedOnline : 1;                        // 0x0058 (0x0004) [0x0000000000000002] [0x00000002] (CPF_Const)
	uint32_t                                           bWasAchievedOffline : 1;                       // 0x0058 (0x0004) [0x0000000000000002] [0x00000004] (CPF_Const)
	uint8_t                                            UnlockType;                                    // 0x005C (0x0001) [0x0000000000000002] (CPF_Const)   
	uint64_t                                           ChallengeWindowBegin;                          // 0x0060 (0x0008) [0x0000000000000002] (CPF_Const)   
	uint64_t                                           ChallengeWindowEnd;                            // 0x0068 (0x0008) [0x0000000000000002] (CPF_Const)   
	class FString                                      DeepLink;                                      // 0x0070 (0x0010) [0x0000000000400002] (CPF_Const | CPF_NeedCtorLink)
	uint64_t                                           EstimatedUnlockTime;                           // 0x0080 (0x0008) [0x0000000000000002] (CPF_Const)   
	uint32_t                                           bIsRevoked : 1;                                // 0x0088 (0x0004) [0x0000000000000002] [0x00000001] (CPF_Const)
	uint8_t                                            ParticipationType;                             // 0x008C (0x0001) [0x0000000000000002] (CPF_Const)   
	TArray<class FString>                              PlatformsAvailableOn;                          // 0x0090 (0x0010) [0x0000000000400002] (CPF_Const | CPF_NeedCtorLink)
	uint8_t                                            ProgressState;                                 // 0x00A0 (0x0001) [0x0000000000000002] (CPF_Const)   
	TArray<struct FAchievementReward>                  Rewards;                                       // 0x00A8 (0x0010) [0x0000000000400002] (CPF_Const | CPF_NeedCtorLink)
	TArray<struct FAchievementMediaAsset>              MediaAssets;                                   // 0x00B8 (0x0010) [0x0000000000400002] (CPF_Const | CPF_NeedCtorLink)
	class FString                                      ProductID;                                     // 0x00C8 (0x0010) [0x0000000000400002] (CPF_Const | CPF_NeedCtorLink)
	class FString                                      ServiceConfigurationID;                        // 0x00D8 (0x0010) [0x0000000000400002] (CPF_Const | CPF_NeedCtorLink)
	TArray<struct FAchievementTitleAssociation>        TitleAssociations;                             // 0x00E8 (0x0010) [0x0000000000400002] (CPF_Const | CPF_NeedCtorLink)
};

// ScriptStruct Engine.Settings.SettingsData
// 0x0010
struct FSettingsData
{
	uint8_t                                            Type;                                          // 0x0000 (0x0001) [0x0000000000000002] (CPF_Const)   
	int32_t                                            Value1;                                        // 0x0004 (0x0004) [0x0000000000000002] (CPF_Const)   
	struct FPointer                                    Value2;                                        // 0x0008 (0x0008) [0x0000000000003002] (CPF_Const | CPF_Native | CPF_Transient)
};

// ScriptStruct Engine.Settings.SettingsProperty
// 0x0019
struct FSettingsProperty
{
	int32_t                                            PropertyId;                                    // 0x0000 (0x0004) [0x0000000000000000]               
	struct FSettingsData                               Data;                                          // 0x0008 (0x0010) [0x0000000000000000]               
	uint8_t                                            AdvertisementType;                             // 0x0018 (0x0001) [0x0000000000000000]               
};

// ScriptStruct Engine.OnlineSubsystem.CommunityContentMetadata
// 0x0038
struct FCommunityContentMetadata
{
	int32_t                                            ContentType;                                   // 0x0000 (0x0004) [0x0000000000000000]               
	TArray<struct FSettingsProperty>                   MetadataItems;                                 // 0x0008 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	class FString                                      RemotePath;                                    // 0x0018 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	class FString                                      DisplayName;                                   // 0x0028 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
};

// ScriptStruct Engine.OnlineSubsystem.CommunityContentFile
// 0x0090
struct FCommunityContentFile
{
	int32_t                                            ContentId;                                     // 0x0000 (0x0004) [0x0000000000000000]               
	class FString                                      RemoteContentPath;                             // 0x0008 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	int32_t                                            FileId;                                        // 0x0018 (0x0004) [0x0000000000000000]               
	int32_t                                            ContentType;                                   // 0x001C (0x0004) [0x0000000000000000]               
	int32_t                                            FileSize;                                      // 0x0020 (0x0004) [0x0000000000000000]               
	struct FUniqueNetId                                Owner;                                         // 0x0028 (0x0048) [0x0000000000400000] (CPF_NeedCtorLink)
	int32_t                                            DownloadCount;                                 // 0x0070 (0x0004) [0x0000000000000000]               
	float                                              AverageRating;                                 // 0x0074 (0x0004) [0x0000000000000000]               
	int32_t                                            RatingCount;                                   // 0x0078 (0x0004) [0x0000000000000000]               
	int32_t                                            LastRatingGiven;                               // 0x007C (0x0004) [0x0000000000000000]               
	class FString                                      LocalFilePath;                                 // 0x0080 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
};

// ScriptStruct Engine.Settings.LocalizedStringSetting
// 0x0009
struct FLocalizedStringSetting
{
	int32_t                                            Id;                                            // 0x0000 (0x0004) [0x0000000000000000]               
	int32_t                                            ValueIndex;                                    // 0x0004 (0x0004) [0x0000000000000000]               
	uint8_t                                            AdvertisementType;                             // 0x0008 (0x0001) [0x0000000000000000]               
};

// ScriptStruct Engine.OnlineSubsystem.TitleFile
// 0x0028
struct FTitleFile
{
	class FString                                      Filename;                                      // 0x0000 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	uint8_t                                            AsyncState;                                    // 0x0010 (0x0001) [0x0000000000000000]               
	TArray<uint8_t>                                    Data;                                          // 0x0018 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
};

// ScriptStruct Engine.OnlineSubsystem.EmsFile
// 0x0034
struct FEmsFile
{
	class FString                                      Hash;                                          // 0x0000 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	class FString                                      DLName;                                        // 0x0010 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	class FString                                      Filename;                                      // 0x0020 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	int32_t                                            FileSize;                                      // 0x0030 (0x0004) [0x0000000000000000]               
};

// ScriptStruct Engine.OnlineSubsystem.NamedInterfaceDef
// 0x0018
struct FNamedInterfaceDef
{
	struct FName                                       InterfaceName;                                 // 0x0000 (0x0008) [0x0000000000000000]               
	class FString                                      InterfaceClassName;                            // 0x0008 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
};

// ScriptStruct Engine.OnlineSubsystem.OnlineFriendMessage
// 0x0070
struct FOnlineFriendMessage
{
	struct FUniqueNetId                                SendingPlayerId;                               // 0x0000 (0x0048) [0x0000000000400000] (CPF_NeedCtorLink)
	class FString                                      SendingPlayerNick;                             // 0x0048 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	uint32_t                                           bIsFriendInvite : 1;                           // 0x0058 (0x0004) [0x0000000000000000] [0x00000001] 
	uint32_t                                           bIsGameInvite : 1;                             // 0x0058 (0x0004) [0x0000000000000000] [0x00000002] 
	uint32_t                                           bWasAccepted : 1;                              // 0x0058 (0x0004) [0x0000000000000000] [0x00000004] 
	uint32_t                                           bWasDenied : 1;                                // 0x0058 (0x0004) [0x0000000000000000] [0x00000008] 
	class FString                                      Message;                                       // 0x0060 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
};

// ScriptStruct Engine.OnlineSubsystem.RemoteTalker
// 0x0050
struct FRemoteTalker
{
	struct FUniqueNetId                                TalkerId;                                      // 0x0000 (0x0048) [0x0000000000400000] (CPF_NeedCtorLink)
	float                                              LastNotificationTime;                          // 0x0048 (0x0004) [0x0000000000000000]               
	uint32_t                                           bWasTalking : 1;                               // 0x004C (0x0004) [0x0000000000000000] [0x00000001] 
	uint32_t                                           bIsTalking : 1;                                // 0x004C (0x0004) [0x0000000000000000] [0x00000002] 
	uint32_t                                           bIsRegistered : 1;                             // 0x004C (0x0004) [0x0000000000000000] [0x00000004] 
};

// ScriptStruct Engine.OnlineSubsystem.LocalTalker
// 0x004C
struct FLocalTalker
{
	struct FUniqueNetId                                TalkerId;                                      // 0x0000 (0x0048) [0x0000000000400000] (CPF_NeedCtorLink)
	uint32_t                                           bHasVoice : 1;                                 // 0x0048 (0x0004) [0x0000000000000000] [0x00000001] 
	uint32_t                                           bHasNetworkedVoice : 1;                        // 0x0048 (0x0004) [0x0000000000000000] [0x00000002] 
	uint32_t                                           bIsRecognizingSpeech : 1;                      // 0x0048 (0x0004) [0x0000000000000000] [0x00000004] 
	uint32_t                                           bWasTalking : 1;                               // 0x0048 (0x0004) [0x0000000000000000] [0x00000008] 
	uint32_t                                           bIsTalking : 1;                                // 0x0048 (0x0004) [0x0000000000000000] [0x00000010] 
	uint32_t                                           bIsRegistered : 1;                             // 0x0048 (0x0004) [0x0000000000000000] [0x00000020] 
};

// ScriptStruct Engine.OnlineSubsystem.OnlinePlayerScore
// 0x0050
struct FOnlinePlayerScore
{
	struct FUniqueNetId                                PlayerID;                                      // 0x0000 (0x0048) [0x0000000000400000] (CPF_NeedCtorLink)
	int32_t                                            TeamID;                                        // 0x0048 (0x0004) [0x0000000000000000]               
	int32_t                                            Score;                                         // 0x004C (0x0004) [0x0000000000000000]               
};

// ScriptStruct Engine.OnlineSubsystem.SpeechRecognizedWord
// 0x001C
struct FSpeechRecognizedWord
{
	int32_t                                            WordId;                                        // 0x0000 (0x0004) [0x0000000000000000]               
	class FString                                      WordText;                                      // 0x0008 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	float                                              Confidence;                                    // 0x0018 (0x0004) [0x0000000000000000]               
};

// ScriptStruct Engine.OnlineSubsystem.OnlineContent
// 0x0060
struct FOnlineContent
{
	uint8_t                                            ContentType;                                   // 0x0000 (0x0001) [0x0000000000000000]               
	uint8_t                                            UserIndex;                                     // 0x0001 (0x0001) [0x0000000000000000]               
	uint32_t                                           bIsCorrupt : 1;                                // 0x0004 (0x0004) [0x0000000000000000] [0x00000001] 
	int32_t                                            DeviceID;                                      // 0x0008 (0x0004) [0x0000000000000000]               
	int32_t                                            LicenseMask;                                   // 0x000C (0x0004) [0x0000000000000000]               
	class FString                                      FriendlyName;                                  // 0x0010 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	class FString                                      Filename;                                      // 0x0020 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	class FString                                      ContentPath;                                   // 0x0030 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	TArray<class FString>                              ContentPackages;                               // 0x0040 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	TArray<class FString>                              ContentFiles;                                  // 0x0050 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
};

// ScriptStruct Engine.OnlineSubsystem.OnlineCrossTitleContent
// 0x0004 (0x0060 - 0x0064)
struct FOnlineCrossTitleContent : FOnlineContent
{
	int32_t                                            TitleId;                                       // 0x0060 (0x0004) [0x0000000000000000]               
};

// ScriptStruct Engine.OnlineSubsystem.OnlineUser
// 0x0078
struct FOnlineUser
{
	struct FUniqueNetId                                UniqueId;                                      // 0x0000 (0x0048) [0x0000000000400002] (CPF_Const | CPF_NeedCtorLink)
	class FString                                      NickName;                                      // 0x0048 (0x0010) [0x0000000000400002] (CPF_Const | CPF_NeedCtorLink)
	TArray<class FString>                              AttrName;                                      // 0x0058 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	TArray<class FString>                              AttrValue;                                     // 0x0068 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
};

// ScriptStruct Engine.OnlineSubsystem.OnlineFriend
// 0x009C (0x0078 - 0x0114)
struct FOnlineFriend : FOnlineUser
{
	struct FUniqueNetId                                PlayerID;                                      // 0x0078 (0x0048) [0x0000000000400000] (CPF_NeedCtorLink)
	uint64_t                                           SessionId;                                     // 0x00C0 (0x0008) [0x0000000000000000]               
	uint8_t                                            PlatformOverride;                              // 0x00C8 (0x0001) [0x0000000000000000]               
	class FString                                      PlayerName;                                    // 0x00D0 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	class FString                                      SecondaryPlayerName;                           // 0x00E0 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	uint8_t                                            SecondaryPlatform;                             // 0x00F0 (0x0001) [0x0000000000000000]               
	class FString                                      PresenceInfo;                                  // 0x00F8 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	uint8_t                                            FriendState;                                   // 0x0108 (0x0001) [0x0000000000000000]               
	uint32_t                                           bIsOnline : 1;                                 // 0x010C (0x0004) [0x0000000000000000] [0x00000001] 
	uint32_t                                           bIsPlaying : 1;                                // 0x010C (0x0004) [0x0000000000000000] [0x00000002] 
	uint32_t                                           bIsPlayingThisGame : 1;                        // 0x010C (0x0004) [0x0000000000000000] [0x00000004] 
	uint32_t                                           bIsJoinable : 1;                               // 0x010C (0x0004) [0x0000000000000000] [0x00000008] 
	uint32_t                                           bHasVoiceSupport : 1;                          // 0x010C (0x0004) [0x0000000000000000] [0x00000010] 
	uint32_t                                           bHaveInvited : 1;                              // 0x010C (0x0004) [0x0000000000000000] [0x00000020] 
	uint32_t                                           bHasInvitedYou : 1;                            // 0x010C (0x0004) [0x0000000000000000] [0x00000040] 
	int32_t                                            GroupId;                                       // 0x0110 (0x0004) [0x0000000000000002] (CPF_Const)   
};

// ScriptStruct Engine.OnlineSubsystem.FriendsQuery
// 0x004C
struct FFriendsQuery
{
	struct FUniqueNetId                                UniqueId;                                      // 0x0000 (0x0048) [0x0000000000400000] (CPF_NeedCtorLink)
	uint32_t                                           bIsFriend : 1;                                 // 0x0048 (0x0004) [0x0000000000000000] [0x00000001] 
};

// ScriptStruct Engine.OnlineSubsystem.WordFilterResult
// 0x0038
struct FWordFilterResult
{
	uint8_t                                            Censorship;                                    // 0x0000 (0x0001) [0x0000000000000000]               
	class FString                                      Original;                                      // 0x0008 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	class FString                                      Sanitized;                                     // 0x0018 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	class FString                                      ErrorMessage;                                  // 0x0028 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
};

// ScriptStruct Engine.OnlineSubsystem.EpicDLCInfo
// 0x0018
struct FEpicDLCInfo
{
	class FString                                      Key;                                           // 0x0000 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FName                                       Value;                                         // 0x0010 (0x0008) [0x0000000000000000]               
};

// ScriptStruct Engine.OnlineSubsystem.SwitchDLCInfo
// 0x0018
struct FSwitchDLCInfo
{
	class FString                                      Key;                                           // 0x0000 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FName                                       Value;                                         // 0x0010 (0x0008) [0x0000000000000000]               
};

// ScriptStruct Engine.OnlineSubsystem.XboxOneDLCInfo
// 0x001C
struct FXboxOneDLCInfo
{
	class FString                                      Key;                                           // 0x0000 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FName                                       Value;                                         // 0x0010 (0x0008) [0x0000000000000000]               
	uint32_t                                           bDiscUnlock : 1;                               // 0x0018 (0x0004) [0x0000000000000000] [0x00000001] 
};

// ScriptStruct Engine.OnlineSubsystem.PS4DLCInfo
// 0x0018
struct FPS4DLCInfo
{
	class FString                                      Key;                                           // 0x0000 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FName                                       Value;                                         // 0x0010 (0x0008) [0x0000000000000000]               
};

// ScriptStruct Engine.OnlineSubsystem.SteamDLCInfo
// 0x0010
struct FSteamDLCInfo
{
	uint64_t                                           AppID;                                         // 0x0000 (0x0008) [0x0000000000000000]               
	struct FName                                       Value;                                         // 0x0008 (0x0008) [0x0000000000000000]               
};

// ScriptStruct Engine.DynamicBlockingVolume.CheckpointRecord
// 0x001C
struct ADynamicBlockingVolume_FCheckpointRecord
{
	struct FVector                                     Location;                                      // 0x0000 (0x000C) [0x0000000000000000]               
	struct FRotator                                    Rotation;                                      // 0x000C (0x000C) [0x0000000000000000]               
	uint32_t                                           bCollideActors : 1;                            // 0x0018 (0x0004) [0x0000000000000000] [0x00000001] 
	uint32_t                                           bBlockActors : 1;                              // 0x0018 (0x0004) [0x0000000000000000] [0x00000002] 
	uint32_t                                           bNeedsReplication : 1;                         // 0x0018 (0x0004) [0x0000000000000000] [0x00000004] 
};

// ScriptStruct Engine.ParticleSystemComponent.ViewParticleEmitterInstanceMotionBlurInfo
// 0x0050
struct FViewParticleEmitterInstanceMotionBlurInfo
{
	struct FMap_Mirror                                 EmitterInstanceMBInfoMap;                      // 0x0000 (0x0050) [0x0000000000003002] (CPF_Const | CPF_Native | CPF_Transient)
};

// ScriptStruct Engine.ParticleSystemComponent.ParticleSysParam
// 0x0048
struct FParticleSysParam
{
	struct FName                                       Name;                                          // 0x0000 (0x0008) [0x0000000000000001] (CPF_Edit)    
	uint8_t                                            ParamType;                                     // 0x0008 (0x0001) [0x0000000000000001] (CPF_Edit)    
	float                                              Scalar;                                        // 0x000C (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              Scalar_Low;                                    // 0x0010 (0x0004) [0x0000000000000001] (CPF_Edit)    
	struct FVector                                     Vector;                                        // 0x0014 (0x000C) [0x0000000000000001] (CPF_Edit)    
	struct FVector                                     Vector_Low;                                    // 0x0020 (0x000C) [0x0000000000000001] (CPF_Edit)    
	struct FColor                                      Color;                                         // 0x002C (0x0004) [0x0000000000000001] (CPF_Edit)    
	class AActor*                                      Actor;                                         // 0x0030 (0x0008) [0x0000000000000001] (CPF_Edit)    
	class UMaterialInterface*                          Material;                                      // 0x0038 (0x0008) [0x0000000000000001] (CPF_Edit)    
	class UStaticMesh*                                 Mesh;                                          // 0x0040 (0x0008) [0x0000000000000001] (CPF_Edit)    
};

// ScriptStruct Engine.ParticleSystemComponent.ParticleEventData
// 0x0034
struct FParticleEventData
{
	int32_t                                            Type;                                          // 0x0000 (0x0004) [0x0000000000000000]               
	struct FName                                       EventName;                                     // 0x0004 (0x0008) [0x0000000000000000]               
	float                                              EmitterTime;                                   // 0x000C (0x0004) [0x0000000000000000]               
	struct FVector                                     Location;                                      // 0x0010 (0x000C) [0x0000000000000000]               
	struct FVector                                     Direction;                                     // 0x001C (0x000C) [0x0000000000000000]               
	struct FVector                                     Velocity;                                      // 0x0028 (0x000C) [0x0000000000000000]               
};

// ScriptStruct Engine.ParticleSystemComponent.ParticleEventSpawnData
// 0x0000 (0x0034 - 0x0034)
struct FParticleEventSpawnData : FParticleEventData
{
};

// ScriptStruct Engine.ParticleSystemComponent.ParticleEventDeathData
// 0x0004 (0x0034 - 0x0038)
struct FParticleEventDeathData : FParticleEventData
{
	float                                              ParticleTime;                                  // 0x0034 (0x0004) [0x0000000000000000]               
};

// ScriptStruct Engine.ParticleSystemComponent.ParticleEventCollideData
// 0x0020 (0x0034 - 0x0054)
struct FParticleEventCollideData : FParticleEventData
{
	float                                              ParticleTime;                                  // 0x0034 (0x0004) [0x0000000000000000]               
	struct FVector                                     Normal;                                        // 0x0038 (0x000C) [0x0000000000000000]               
	float                                              Time;                                          // 0x0044 (0x0004) [0x0000000000000000]               
	int32_t                                            Item;                                          // 0x0048 (0x0004) [0x0000000000000000]               
	struct FName                                       BoneName;                                      // 0x004C (0x0008) [0x0000000000000000]               
};

// ScriptStruct Engine.ParticleSystemComponent.ParticleEventAttractorCollideData
// 0x0000 (0x0054 - 0x0054)
struct FParticleEventAttractorCollideData : FParticleEventCollideData
{
};

// ScriptStruct Engine.ParticleSystemComponent.ParticleEventKismetData
// 0x0010 (0x0034 - 0x0044)
struct FParticleEventKismetData : FParticleEventData
{
	uint32_t                                           UsePSysCompLocation : 1;                       // 0x0034 (0x0004) [0x0000000000000000] [0x00000001] 
	struct FVector                                     Normal;                                        // 0x0038 (0x000C) [0x0000000000000000]               
};

// ScriptStruct Engine.ParticleSystemComponent.ParticleEmitterInstanceMotionBlurInfo
// 0x0050
struct FParticleEmitterInstanceMotionBlurInfo
{
	struct FMap_Mirror                                 ParticleMBInfoMap;                             // 0x0000 (0x0050) [0x0000000000003002] (CPF_Const | CPF_Native | CPF_Transient)
};

// ScriptStruct Engine.ParticleSystemComponent.ParticleEmitterInstance
// 0x0000
struct FParticleEmitterInstance
{
};

// ScriptStruct Engine.Emitter.CheckpointRecord
// 0x0004
struct AEmitter_FCheckpointRecord
{
	uint32_t                                           bIsActive : 1;                                 // 0x0000 (0x0004) [0x0000000000000000] [0x00000001] 
};

// ScriptStruct Engine.EmitterPool.EmitterBaseInfo
// 0x002C
struct FEmitterBaseInfo
{
	class UParticleSystemComponent*                    PSC;                                           // 0x0000 (0x0008) [0x0000000004080008] (CPF_ExportObject | CPF_Component | CPF_EditInline)
	class AActor*                                      Base;                                          // 0x0008 (0x0008) [0x0000000000000000]               
	struct FVector                                     RelativeLocation;                              // 0x0010 (0x000C) [0x0000000000000000]               
	struct FRotator                                    RelativeRotation;                              // 0x001C (0x000C) [0x0000000000000000]               
	uint32_t                                           bInheritBaseScale : 1;                         // 0x0028 (0x0004) [0x0000000000000000] [0x00000001] 
};

// ScriptStruct Engine.Engine.StatColorMapEntry
// 0x0008
struct FStatColorMapEntry
{
	float                                              In;                                            // 0x0000 (0x0004) [0x0000000000044000] (CPF_Config | CPF_GlobalConfig)
	struct FColor                                      Out;                                           // 0x0004 (0x0004) [0x0000000000044000] (CPF_Config | CPF_GlobalConfig)
};

// ScriptStruct Engine.Engine.StatColorMapping
// 0x0024
struct FStatColorMapping
{
	class FString                                      StatName;                                      // 0x0000 (0x0010) [0x0000000000444000] (CPF_Config | CPF_GlobalConfig | CPF_NeedCtorLink)
	TArray<struct FStatColorMapEntry>                  ColorMap;                                      // 0x0010 (0x0010) [0x0000000000444000] (CPF_Config | CPF_GlobalConfig | CPF_NeedCtorLink)
	uint32_t                                           DisableBlend : 1;                              // 0x0020 (0x0004) [0x0000000000044000] [0x00000001] (CPF_Config | CPF_GlobalConfig)
};

// ScriptStruct Engine.Engine.DropNoteInfo
// 0x0028
struct FDropNoteInfo
{
	struct FVector                                     Location;                                      // 0x0000 (0x000C) [0x0000000000000000]               
	struct FRotator                                    Rotation;                                      // 0x000C (0x000C) [0x0000000000000000]               
	class FString                                      Comment;                                       // 0x0018 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
};

// ScriptStruct Engine.EngineTypes.PrimitiveMaterialRef
// 0x000C
struct FPrimitiveMaterialRef
{
	class UPrimitiveComponent*                         Primitive;                                     // 0x0000 (0x0008) [0x0000000004080008] (CPF_ExportObject | CPF_Component | CPF_EditInline)
	int32_t                                            MaterialIndex;                                 // 0x0008 (0x0004) [0x0000000000000000]               
};

// ScriptStruct Engine.EngineTypes.PostProcessMaterialRef
// 0x0008
struct FPostProcessMaterialRef
{
	class UMaterialEffect*                             Effect;                                        // 0x0000 (0x0008) [0x0000000000000000]               
};

// ScriptStruct Engine.EngineTypes.MaterialReferenceList
// 0x0028
struct FMaterialReferenceList
{
	class UMaterialInterface*                          TargetMaterial;                                // 0x0000 (0x0008) [0x0000000000000001] (CPF_Edit)    
	TArray<struct FPrimitiveMaterialRef>               AffectedMaterialRefs;                          // 0x0008 (0x0010) [0x0000020000480000] (CPF_Component | CPF_NeedCtorLink)
	TArray<struct FPostProcessMaterialRef>             AffectedPPChainMaterialRefs;                   // 0x0018 (0x0010) [0x0000020000400000] (CPF_NeedCtorLink)
};

// ScriptStruct Engine.EngineTypes.VelocityObstacleStat
// 0x0020
struct FVelocityObstacleStat
{
	struct FVector                                     Position;                                      // 0x0000 (0x000C) [0x0000000000000000]               
	struct FVector                                     Velocity;                                      // 0x000C (0x000C) [0x0000000000000000]               
	float                                              Radius;                                        // 0x0018 (0x0004) [0x0000000000000000]               
	int32_t                                            Priority;                                      // 0x001C (0x0004) [0x0000000000000000]               
};

// ScriptStruct Engine.FacebookIntegration.FacebookFriend
// 0x0020
struct FFacebookFriend
{
	class FString                                      Name;                                          // 0x0000 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	class FString                                      Id;                                            // 0x0010 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
};

// ScriptStruct Engine.FogVolumeDensityInfo.CheckpointRecord
// 0x0004
struct AFogVolumeDensityInfo_FCheckpointRecord
{
	uint32_t                                           bEnabled : 1;                                  // 0x0000 (0x0004) [0x0000000000000000] [0x00000001] 
};

// ScriptStruct Engine.FontImportOptions.FontImportOptionsData
// 0x00AC
struct FFontImportOptionsData
{
	class FString                                      FontName;                                      // 0x0000 (0x0010) [0x0000000000400001] (CPF_Edit | CPF_NeedCtorLink)
	float                                              Height;                                        // 0x0010 (0x0004) [0x0000000000000001] (CPF_Edit)    
	uint32_t                                           bEnableAntialiasing : 1;                       // 0x0014 (0x0004) [0x0000000000000001] [0x00000001] (CPF_Edit)
	uint32_t                                           bEnableBold : 1;                               // 0x0014 (0x0004) [0x0000000000000001] [0x00000002] (CPF_Edit)
	uint32_t                                           bEnableItalic : 1;                             // 0x0014 (0x0004) [0x0000000000000001] [0x00000004] (CPF_Edit)
	uint32_t                                           bEnableUnderline : 1;                          // 0x0014 (0x0004) [0x0000000000000001] [0x00000008] (CPF_Edit)
	uint32_t                                           bAlphaOnly : 1;                                // 0x0014 (0x0004) [0x0000000000000001] [0x00000010] (CPF_Edit)
	uint8_t                                            CharacterSet;                                  // 0x0018 (0x0001) [0x0000000000000001] (CPF_Edit)    
	class FString                                      Chars;                                         // 0x0020 (0x0010) [0x0000000000400001] (CPF_Edit | CPF_NeedCtorLink)
	class FString                                      UnicodeRange;                                  // 0x0030 (0x0010) [0x0000000000400001] (CPF_Edit | CPF_NeedCtorLink)
	class FString                                      CharsFilePath;                                 // 0x0040 (0x0010) [0x0000000000400001] (CPF_Edit | CPF_NeedCtorLink)
	class FString                                      CharsFileWildcard;                             // 0x0050 (0x0010) [0x0000000000400001] (CPF_Edit | CPF_NeedCtorLink)
	uint32_t                                           bCreatePrintableOnly : 1;                      // 0x0060 (0x0004) [0x0000000000000001] [0x00000001] (CPF_Edit)
	uint32_t                                           bIncludeASCIIRange : 1;                        // 0x0060 (0x0004) [0x0000000000000001] [0x00000002] (CPF_Edit)
	struct FLinearColor                                ForegroundColor;                               // 0x0064 (0x0010) [0x0000000000000001] (CPF_Edit)    
	uint32_t                                           bEnableDropShadow : 1;                         // 0x0074 (0x0004) [0x0000000000000001] [0x00000001] (CPF_Edit)
	int32_t                                            TexturePageWidth;                              // 0x0078 (0x0004) [0x0000000000000001] (CPF_Edit)    
	int32_t                                            TexturePageMaxHeight;                          // 0x007C (0x0004) [0x0000000000000001] (CPF_Edit)    
	int32_t                                            XPadding;                                      // 0x0080 (0x0004) [0x0000000000000001] (CPF_Edit)    
	int32_t                                            YPadding;                                      // 0x0084 (0x0004) [0x0000000000000001] (CPF_Edit)    
	int32_t                                            ExtendBoxTop;                                  // 0x0088 (0x0004) [0x0000000000000001] (CPF_Edit)    
	int32_t                                            ExtendBoxBottom;                               // 0x008C (0x0004) [0x0000000000000001] (CPF_Edit)    
	int32_t                                            ExtendBoxRight;                                // 0x0090 (0x0004) [0x0000000000000001] (CPF_Edit)    
	int32_t                                            ExtendBoxLeft;                                 // 0x0094 (0x0004) [0x0000000000000001] (CPF_Edit)    
	uint32_t                                           bEnableLegacyMode : 1;                         // 0x0098 (0x0004) [0x0000000000000001] [0x00000001] (CPF_Edit)
	int32_t                                            Kerning;                                       // 0x009C (0x0004) [0x0000000000000001] (CPF_Edit)    
	uint32_t                                           bUseDistanceFieldAlpha : 1;                    // 0x00A0 (0x0004) [0x0000000000000001] [0x00000001] (CPF_Edit)
	int32_t                                            DistanceFieldScaleFactor;                      // 0x00A4 (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              DistanceFieldScanRadiusScale;                  // 0x00A8 (0x0004) [0x0000000000000001] (CPF_Edit)    
};

// ScriptStruct Engine.Font.FontCharacter
// 0x0018
struct FFontCharacter
{
	int32_t                                            StartU;                                        // 0x0000 (0x0004) [0x0000000000000001] (CPF_Edit)    
	int32_t                                            StartV;                                        // 0x0004 (0x0004) [0x0000000000000001] (CPF_Edit)    
	int32_t                                            USize;                                         // 0x0008 (0x0004) [0x0000000000000001] (CPF_Edit)    
	int32_t                                            VSize;                                         // 0x000C (0x0004) [0x0000000000000001] (CPF_Edit)    
	uint8_t                                            TextureIndex;                                  // 0x0010 (0x0001) [0x0000000000000001] (CPF_Edit)    
	int32_t                                            VerticalOffset;                                // 0x0014 (0x0004) [0x0000000000000001] (CPF_Edit)    
};

// ScriptStruct Engine.ForceFeedbackWaveform.WaveformSample
// 0x000C
struct FWaveformSample
{
	uint8_t                                            LeftAmplitude;                                 // 0x0000 (0x0001) [0x0000000000000001] (CPF_Edit)    
	uint8_t                                            RightAmplitude;                                // 0x0001 (0x0001) [0x0000000000000001] (CPF_Edit)    
	uint8_t                                            LeftTriggerAmplitude;                          // 0x0002 (0x0001) [0x0000000000000001] (CPF_Edit)    
	uint8_t                                            RightTriggerAmplitude;                         // 0x0003 (0x0001) [0x0000000000000001] (CPF_Edit)    
	uint8_t                                            LeftFunction;                                  // 0x0004 (0x0001) [0x0000000000000001] (CPF_Edit)    
	uint8_t                                            RightFunction;                                 // 0x0005 (0x0001) [0x0000000000000001] (CPF_Edit)    
	uint8_t                                            LeftTriggerFunction;                           // 0x0006 (0x0001) [0x0000000000000001] (CPF_Edit)    
	uint8_t                                            RightTriggerFunction;                          // 0x0007 (0x0001) [0x0000000000000001] (CPF_Edit)    
	float                                              Duration;                                      // 0x0008 (0x0004) [0x0000000000000001] (CPF_Edit)    
};

// ScriptStruct Engine.FracturedStaticMeshComponent.FragmentGroup
// 0x0014
struct FFragmentGroup
{
	TArray<int32_t>                                    FragmentIndices;                               // 0x0000 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	uint32_t                                           bGroupIsRooted : 1;                            // 0x0010 (0x0004) [0x0000000000000000] [0x00000001] 
};

// ScriptStruct Engine.FracturedStaticMeshActor.DeferredPartToSpawn
// 0x0024
struct FDeferredPartToSpawn
{
	int32_t                                            ChunkIndex;                                    // 0x0000 (0x0004) [0x0000000000000000]               
	struct FVector                                     InitialVel;                                    // 0x0004 (0x000C) [0x0000000000000000]               
	struct FVector                                     InitialAngVel;                                 // 0x0010 (0x000C) [0x0000000000000000]               
	float                                              RelativeScale;                                 // 0x001C (0x0004) [0x0000000000000000]               
	uint32_t                                           bExplosion : 1;                                // 0x0020 (0x0004) [0x0000000000000000] [0x00000001] 
};

// ScriptStruct Engine.FracturedStaticMeshActor.CheckpointRecord
// 0x0018
struct AFracturedStaticMeshActor_FCheckpointRecord
{
	uint32_t                                           bIsShutdown : 1;                               // 0x0000 (0x0004) [0x0000000000000000] [0x00000001] 
	TArray<uint8_t>                                    FragmentVis;                                   // 0x0008 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
};

// ScriptStruct Engine.GameEngine.LevelStreamingStatus
// 0x000C
struct FLevelStreamingStatus
{
	struct FName                                       PackageName;                                   // 0x0000 (0x0008) [0x0000000000000000]               
	uint32_t                                           bShouldBeLoaded : 1;                           // 0x0008 (0x0004) [0x0000000000000000] [0x00000001] 
	uint32_t                                           bShouldBeVisible : 1;                          // 0x0008 (0x0004) [0x0000000000000000] [0x00000002] 
};

// ScriptStruct Engine.GameEngine.FullyLoadedPackagesInfo
// 0x0038
struct FFullyLoadedPackagesInfo
{
	uint8_t                                            FullyLoadType;                                 // 0x0000 (0x0001) [0x0000000000000000]               
	class FString                                      Tag;                                           // 0x0008 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	TArray<struct FName>                               PackagesToLoad;                                // 0x0018 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	TArray<class UObject*>                             LoadedObjects;                                 // 0x0028 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
};

// ScriptStruct Engine.GameEngine.NamedNetDriver
// 0x0010
struct FNamedNetDriver
{
	struct FName                                       NetDriverName;                                 // 0x0000 (0x0008) [0x0000000000000000]               
	struct FPointer                                    NetDriver;                                     // 0x0008 (0x0008) [0x0000000000001002] (CPF_Const | CPF_Native)
};

// ScriptStruct Engine.GameEngine.AnimTag
// 0x0020
struct FAnimTag
{
	class FString                                      Tag;                                           // 0x0000 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	TArray<class FString>                              Contains;                                      // 0x0010 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
};

// ScriptStruct Engine.GameEngine.URL
// 0x005C
struct FURL
{
	class FString                                      Protocol;                                      // 0x0000 (0x0010) [0x0000000000500000] (CPF_NeedCtorLink)
	class FString                                      Host;                                          // 0x0010 (0x0010) [0x0000000000500000] (CPF_NeedCtorLink)
	int32_t                                            Port;                                          // 0x0020 (0x0004) [0x0000000000100000]               
	class FString                                      Map;                                           // 0x0028 (0x0010) [0x0000000000500000] (CPF_NeedCtorLink)
	TArray<class FString>                              Op;                                            // 0x0038 (0x0010) [0x0000000000500000] (CPF_NeedCtorLink)
	class FString                                      Portal;                                        // 0x0048 (0x0010) [0x0000000000500000] (CPF_NeedCtorLink)
	int32_t                                            Valid;                                         // 0x0058 (0x0004) [0x0000000000100000]               
};

// ScriptStruct Engine.GameInfo.GameClassShortName
// 0x0020
struct FGameClassShortName
{
	class FString                                      ShortName;                                     // 0x0000 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	class FString                                      GameClassName;                                 // 0x0010 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
};

// ScriptStruct Engine.GameInfo.GameTypePrefix
// 0x0048
struct FGameTypePrefix
{
	class FString                                      Prefix;                                        // 0x0000 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	uint32_t                                           bUsesCommonPackage : 1;                        // 0x0010 (0x0004) [0x0000000000000000] [0x00000001] 
	class FString                                      GameType;                                      // 0x0018 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	TArray<class FString>                              AdditionalGameTypes;                           // 0x0028 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	TArray<class FString>                              ForcedObjects;                                 // 0x0038 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
};

// ScriptStruct Engine.GameplayEvents.PlayerInformation
// 0x0064
struct FPlayerInformation
{
	struct FName                                       ControllerName;                                // 0x0000 (0x0008) [0x0000000000000000]               
	class FString                                      PlayerName;                                    // 0x0008 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FUniqueNetId                                UniqueId;                                      // 0x0018 (0x0048) [0x0000000000400000] (CPF_NeedCtorLink)
	uint32_t                                           bIsBot : 1;                                    // 0x0060 (0x0004) [0x0000000000000000] [0x00000001] 
};

// ScriptStruct Engine.GameplayEvents.TeamInformation
// 0x0020
struct FTeamInformation
{
	int32_t                                            TeamIndex;                                     // 0x0000 (0x0004) [0x0000000000000000]               
	class FString                                      TeamName;                                      // 0x0008 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FColor                                      TeamColor;                                     // 0x0018 (0x0004) [0x0000000000000000]               
	int32_t                                            MaxSize;                                       // 0x001C (0x0004) [0x0000000000000000]               
};

// ScriptStruct Engine.GameplayEvents.GameStatGroup
// 0x0008
struct FGameStatGroup
{
	uint8_t                                            Group;                                         // 0x0000 (0x0001) [0x0000000000000000]               
	int32_t                                            Level;                                         // 0x0004 (0x0004) [0x0000000000000000]               
};

// ScriptStruct Engine.GameplayEvents.GameplayEventMetaData
// 0x0018
struct FGameplayEventMetaData
{
	int32_t                                            EventID;                                       // 0x0000 (0x0004) [0x0000000000000002] (CPF_Const)   
	struct FName                                       EventName;                                     // 0x0004 (0x0008) [0x0000000000000002] (CPF_Const)   
	struct FGameStatGroup                              StatGroup;                                     // 0x000C (0x0008) [0x0000000000000002] (CPF_Const)   
	int32_t                                            EventDataType;                                 // 0x0014 (0x0004) [0x0000000000000002] (CPF_Const)   
};

// ScriptStruct Engine.GameplayEvents.WeaponClassEventData
// 0x0008
struct FWeaponClassEventData
{
	struct FName                                       WeaponClassName;                               // 0x0000 (0x0008) [0x0000000000000000]               
};

// ScriptStruct Engine.GameplayEvents.DamageClassEventData
// 0x0008
struct FDamageClassEventData
{
	struct FName                                       DamageClassName;                               // 0x0000 (0x0008) [0x0000000000000000]               
};

// ScriptStruct Engine.GameplayEvents.ProjectileClassEventData
// 0x0008
struct FProjectileClassEventData
{
	struct FName                                       ProjectileClassName;                           // 0x0000 (0x0008) [0x0000000000000000]               
};

// ScriptStruct Engine.GameplayEvents.PawnClassEventData
// 0x0008
struct FPawnClassEventData
{
	struct FName                                       PawnClassName;                                 // 0x0000 (0x0008) [0x0000000000000000]               
};

// ScriptStruct Engine.GameplayEvents.GameplayEventsHeader
// 0x0034
struct FGameplayEventsHeader
{
	int32_t                                            EngineVersion;                                 // 0x0000 (0x0004) [0x0000000000000002] (CPF_Const)   
	int32_t                                            StatsWriterVersion;                            // 0x0004 (0x0004) [0x0000000000000002] (CPF_Const)   
	int32_t                                            StreamOffset;                                  // 0x0008 (0x0004) [0x0000000000000002] (CPF_Const)   
	int32_t                                            AggregateOffset;                               // 0x000C (0x0004) [0x0000000000000002] (CPF_Const)   
	int32_t                                            FooterOffset;                                  // 0x0010 (0x0004) [0x0000000000000002] (CPF_Const)   
	int32_t                                            TotalStreamSize;                               // 0x0014 (0x0004) [0x0000000000000002] (CPF_Const)   
	int32_t                                            FileSize;                                      // 0x0018 (0x0004) [0x0000000000000002] (CPF_Const)   
	class FString                                      FilterClass;                                   // 0x0020 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	int32_t                                            Flags;                                         // 0x0030 (0x0004) [0x0000000000000000]               
};

// ScriptStruct Engine.GameplayEvents.GameSessionInformation
// 0x00CC
struct FGameSessionInformation
{
	int32_t                                            AppTitleID;                                    // 0x0000 (0x0004) [0x0000000000000000]               
	int32_t                                            PlatformType;                                  // 0x0004 (0x0004) [0x0000000000000000]               
	class FString                                      Language;                                      // 0x0008 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	class FString                                      GameplaySessionTimestamp;                      // 0x0018 (0x0010) [0x0000000000400002] (CPF_Const | CPF_NeedCtorLink)
	float                                              GameplaySessionStartTime;                      // 0x0028 (0x0004) [0x0000000000000002] (CPF_Const)   
	float                                              GameplaySessionEndTime;                        // 0x002C (0x0004) [0x0000000000000002] (CPF_Const)   
	uint32_t                                           bGameplaySessionInProgress : 1;                // 0x0030 (0x0004) [0x0000000000000002] [0x00000001] (CPF_Const)
	class FString                                      GameplaySessionID;                             // 0x0038 (0x0010) [0x0000000000400002] (CPF_Const | CPF_NeedCtorLink)
	class FString                                      GameClassName;                                 // 0x0048 (0x0010) [0x0000000000400002] (CPF_Const | CPF_NeedCtorLink)
	class FString                                      MapName;                                       // 0x0058 (0x0010) [0x0000000000400002] (CPF_Const | CPF_NeedCtorLink)
	class FString                                      MapURL;                                        // 0x0068 (0x0010) [0x0000000000400002] (CPF_Const | CPF_NeedCtorLink)
	int32_t                                            SessionInstance;                               // 0x0078 (0x0004) [0x0000000000000002] (CPF_Const)   
	int32_t                                            GameTypeId;                                    // 0x007C (0x0004) [0x0000000000000002] (CPF_Const)   
	struct FUniqueNetId                                OwningNetId;                                   // 0x0080 (0x0048) [0x0000000000400002] (CPF_Const | CPF_NeedCtorLink)
	int32_t                                            PlaylistId;                                    // 0x00C8 (0x0004) [0x0000000000000000]               
};

// ScriptStruct Engine.WorldInfo.NavMeshPathGoalEvaluatorCacheDatum
// 0x0030
struct FNavMeshPathGoalEvaluatorCacheDatum
{
	int32_t                                            ListIdx;                                       // 0x0000 (0x0004) [0x0000000000000000]               
	class UNavMeshPathGoalEvaluator*                   List[0x5];                                     // 0x0008 (0x0028) [0x0000000000000000]               
};

// ScriptStruct Engine.WorldInfo.PhysXEmitterVerticalProperties
// 0x0018
struct FPhysXEmitterVerticalProperties
{
	uint32_t                                           bDisableLod : 1;                               // 0x0000 (0x0004) [0x0000000000000001] [0x00000001] (CPF_Edit)
	int32_t                                            ParticlesLodMin;                               // 0x0004 (0x0004) [0x0000000000000001] (CPF_Edit)    
	int32_t                                            ParticlesLodMax;                               // 0x0008 (0x0004) [0x0000000000000001] (CPF_Edit)    
	int32_t                                            PacketsPerPhysXParticleSystemMax;              // 0x000C (0x0004) [0x0000000000000001] (CPF_Edit)    
	uint32_t                                           bApplyCylindricalPacketCulling : 1;            // 0x0010 (0x0004) [0x0000000000000001] [0x00000001] (CPF_Edit)
	float                                              SpawnLodVsFifoBias;                            // 0x0014 (0x0004) [0x0000000000000001] (CPF_Edit)    
};

// ScriptStruct Engine.WorldInfo.PhysXVerticalProperties
// 0x0018
struct FPhysXVerticalProperties
{
	struct FPhysXEmitterVerticalProperties             Emitters;                                      // 0x0000 (0x0018) [0x0000000004000001] (CPF_Edit | CPF_EditInline)
};

// ScriptStruct Engine.WorldInfo.HostMigrationState
// 0x0024
struct FHostMigrationState
{
	uint8_t                                            HostMigrationProgress;                         // 0x0000 (0x0001) [0x0000000000000000]               
	float                                              HostMigrationElapsedTime;                      // 0x0004 (0x0004) [0x0000000000000000]               
	float                                              HostMigrationTravelCountdown;                  // 0x0008 (0x0004) [0x0000000000000000]               
	class FString                                      HostMigrationTravelURL;                        // 0x0010 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	uint32_t                                           bHostMigrationEnabled : 1;                     // 0x0020 (0x0004) [0x0000000000000000] [0x00000001] 
};

// ScriptStruct Engine.MusicTrackDataStructures.MusicTrackStruct
// 0x0030
struct FMusicTrackStruct
{
	class USoundCue*                                   TheSoundCue;                                   // 0x0000 (0x0008) [0x0000000000000001] (CPF_Edit)    
	uint32_t                                           bAutoPlay : 1;                                 // 0x0008 (0x0004) [0x0000000000000001] [0x00000001] (CPF_Edit)
	uint32_t                                           bPersistentAcrossLevels : 1;                   // 0x0008 (0x0004) [0x0000000000000001] [0x00000002] (CPF_Edit)
	float                                              FadeInTime;                                    // 0x000C (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              FadeInVolumeLevel;                             // 0x0010 (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              FadeOutTime;                                   // 0x0014 (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              FadeOutVolumeLevel;                            // 0x0018 (0x0004) [0x0000000000000001] (CPF_Edit)    
	class FString                                      MP3Filename;                                   // 0x0020 (0x0010) [0x0000000000400001] (CPF_Edit | CPF_NeedCtorLink)
};

// ScriptStruct Engine.WorldInfo.WorldFractureSettings
// 0x001C
struct FWorldFractureSettings
{
	float                                              ChanceOfPhysicsChunkOverride;                  // 0x0000 (0x0004) [0x0000000000000000]               
	uint32_t                                           bEnableChanceOfPhysicsChunkOverride : 1;       // 0x0004 (0x0004) [0x0000000000000000] [0x00000001] 
	uint32_t                                           bLimitExplosionChunkSize : 1;                  // 0x0004 (0x0004) [0x0000000000000000] [0x00000002] 
	float                                              MaxExplosionChunkSize;                         // 0x0008 (0x0004) [0x0000000000000000]               
	uint32_t                                           bLimitDamageChunkSize : 1;                     // 0x000C (0x0004) [0x0000000000000000] [0x00000001] 
	float                                              MaxDamageChunkSize;                            // 0x0010 (0x0004) [0x0000000000000000]               
	int32_t                                            MaxNumFacturedChunksToSpawnInAFrame;           // 0x0014 (0x0004) [0x0000000000000000]               
	float                                              FractureExplosionVelScale;                     // 0x0018 (0x0004) [0x0000000000000000]               
};

// ScriptStruct Engine.WorldInfo.NavMeshPathConstraintCacheDatum
// 0x0030
struct FNavMeshPathConstraintCacheDatum
{
	int32_t                                            ListIdx;                                       // 0x0000 (0x0004) [0x0000000000000000]               
	class UNavMeshPathConstraint*                      List[0x5];                                     // 0x0008 (0x0028) [0x0000000000000000]               
};

// ScriptStruct Engine.WorldInfo.LightmassWorldInfoSettings
// 0x0058
struct FLightmassWorldInfoSettings
{
	float                                              StaticLightingLevelScale;                      // 0x0000 (0x0004) [0x0000000000000001] (CPF_Edit)    
	int32_t                                            NumIndirectLightingBounces;                    // 0x0004 (0x0004) [0x0000000000000001] (CPF_Edit)    
	struct FColor                                      EnvironmentColor;                              // 0x0008 (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              EnvironmentIntensity;                          // 0x000C (0x0004) [0x0000000000000001] (CPF_Edit)    
	uint32_t                                           bEnableAdvancedEnvironmentColor : 1;           // 0x0010 (0x0004) [0x0000000000000001] [0x00000001] (CPF_Edit)
	struct FColor                                      EnvironmentSunColor;                           // 0x0014 (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              EnvironmentSunIntensity;                       // 0x0018 (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              EnvironmentLightTerminatorAngle;               // 0x001C (0x0004) [0x0000000000000001] (CPF_Edit)    
	struct FVector                                     EnvironmentLightDirection;                     // 0x0020 (0x000C) [0x0000000000000001] (CPF_Edit)    
	float                                              EmissiveBoost;                                 // 0x002C (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              DiffuseBoost;                                  // 0x0030 (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              SpecularBoost;                                 // 0x0034 (0x0004) [0x0000000000000000]               
	float                                              IndirectNormalInfluenceBoost;                  // 0x0038 (0x0004) [0x0000000000000001] (CPF_Edit)    
	uint32_t                                           bUseAmbientOcclusion : 1;                      // 0x003C (0x0004) [0x0000000000000001] [0x00000001] (CPF_Edit)
	uint32_t                                           bEnableImageReflectionShadowing : 1;           // 0x003C (0x0004) [0x0000000000000001] [0x00000002] (CPF_Edit)
	float                                              DirectIlluminationOcclusionFraction;           // 0x0040 (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              IndirectIlluminationOcclusionFraction;         // 0x0044 (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              OcclusionExponent;                             // 0x0048 (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              FullyOccludedSamplesFraction;                  // 0x004C (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              MaxOcclusionDistance;                          // 0x0050 (0x0004) [0x0000000000000001] (CPF_Edit)    
	uint32_t                                           bVisualizeMaterialDiffuse : 1;                 // 0x0054 (0x0004) [0x0000000000000001] [0x00000001] (CPF_Edit)
	uint32_t                                           bVisualizeAmbientOcclusion : 1;                // 0x0054 (0x0004) [0x0000000000000001] [0x00000002] (CPF_Edit)
	uint32_t                                           bCompressShadowmap : 1;                        // 0x0054 (0x0004) [0x0000000000000001] [0x00000004] (CPF_Edit)
};

// ScriptStruct Engine.WorldInfo.ScreenMessageString
// 0x0024
struct FScreenMessageString
{
	uint64_t                                           Key;                                           // 0x0000 (0x0008) [0x0000000000102000] (CPF_Transient)
	class FString                                      ScreenMessage;                                 // 0x0008 (0x0010) [0x0000000000502000] (CPF_Transient | CPF_NeedCtorLink)
	struct FColor                                      DisplayColor;                                  // 0x0018 (0x0004) [0x0000000000102000] (CPF_Transient)
	float                                              TimeToDisplay;                                 // 0x001C (0x0004) [0x0000000000102000] (CPF_Transient)
	float                                              CurrentTimeDisplayed;                          // 0x0020 (0x0004) [0x0000000000102000] (CPF_Transient)
};

// ScriptStruct Engine.WorldInfo.ApexModuleDestructibleSettings
// 0x0014
struct FApexModuleDestructibleSettings
{
	int32_t                                            MaxChunkIslandCount;                           // 0x0000 (0x0004) [0x0000000000000001] (CPF_Edit)    
	int32_t                                            MaxShapeCount;                                 // 0x0004 (0x0004) [0x0000000000000001] (CPF_Edit)    
	int32_t                                            MaxRrbActorCount;                              // 0x0008 (0x0004) [0x0000000000000000]               
	float                                              MaxChunkSeparationLOD;                         // 0x000C (0x0004) [0x0000000000000001] (CPF_Edit)    
	uint32_t                                           bOverrideMaxChunkSeparationLOD : 1;            // 0x0010 (0x0004) [0x0000000000000001] [0x00000001] (CPF_Edit)
};

// ScriptStruct Engine.WorldInfo.PhysXSimulationProperties
// 0x000C
struct FPhysXSimulationProperties
{
	uint32_t                                           bUseHardware : 1;                              // 0x0000 (0x0004) [0x0000000000000001] [0x00000001] (CPF_Edit)
	uint32_t                                           bFixedTimeStep : 1;                            // 0x0000 (0x0004) [0x0000000000000001] [0x00000002] (CPF_Edit)
	float                                              TimeStep;                                      // 0x0004 (0x0004) [0x0000000000000001] (CPF_Edit)    
	int32_t                                            MaxSubSteps;                                   // 0x0008 (0x0004) [0x0000000000000001] (CPF_Edit)    
};

// ScriptStruct Engine.WorldInfo.PhysXSceneProperties
// 0x003C
struct FPhysXSceneProperties
{
	struct FPhysXSimulationProperties                  PrimaryScene;                                  // 0x0000 (0x000C) [0x0000000004000001] (CPF_Edit | CPF_EditInline)
	struct FPhysXSimulationProperties                  CompartmentRigidBody;                          // 0x000C (0x000C) [0x0000000004000001] (CPF_Edit | CPF_EditInline)
	struct FPhysXSimulationProperties                  CompartmentFluid;                              // 0x0018 (0x000C) [0x0000000004000001] (CPF_Edit | CPF_EditInline)
	struct FPhysXSimulationProperties                  CompartmentCloth;                              // 0x0024 (0x000C) [0x0000000004000001] (CPF_Edit | CPF_EditInline)
	struct FPhysXSimulationProperties                  CompartmentSoftBody;                           // 0x0030 (0x000C) [0x0000000004000001] (CPF_Edit | CPF_EditInline)
};

// ScriptStruct Engine.WorldInfo.CompartmentRunList
// 0x0004
struct FCompartmentRunList
{
	uint32_t                                           RigidBody : 1;                                 // 0x0000 (0x0004) [0x0000000000000001] [0x00000001] (CPF_Edit)
	uint32_t                                           Fluid : 1;                                     // 0x0000 (0x0004) [0x0000000000000001] [0x00000002] (CPF_Edit)
	uint32_t                                           Cloth : 1;                                     // 0x0000 (0x0004) [0x0000000000000001] [0x00000004] (CPF_Edit)
	uint32_t                                           SoftBody : 1;                                  // 0x0000 (0x0004) [0x0000000000000001] [0x00000008] (CPF_Edit)
};

// ScriptStruct Engine.WorldInfo.NetViewer
// 0x0028
struct FNetViewer
{
	class APlayerController*                           InViewer;                                      // 0x0000 (0x0008) [0x0000000000000000]               
	class AActor*                                      Viewer;                                        // 0x0008 (0x0008) [0x0000000000000000]               
	struct FVector                                     ViewLocation;                                  // 0x0010 (0x000C) [0x0000000000000000]               
	struct FVector                                     ViewDir;                                       // 0x001C (0x000C) [0x0000000000000000]               
};

// ScriptStruct Engine.Settings.IdToStringMapping
// 0x000C
struct FIdToStringMapping
{
	int32_t                                            Id;                                            // 0x0000 (0x0004) [0x0000000000000002] (CPF_Const)   
	struct FName                                       Name;                                          // 0x0004 (0x0008) [0x0000000000008002] (CPF_Const | CPF_Localized)
};

// ScriptStruct Engine.Settings.StringIdToStringMapping
// 0x0010
struct FStringIdToStringMapping
{
	int32_t                                            Id;                                            // 0x0000 (0x0004) [0x0000000000000002] (CPF_Const)   
	struct FName                                       Name;                                          // 0x0004 (0x0008) [0x0000000000008002] (CPF_Const | CPF_Localized)
	uint32_t                                           bIsWildcard : 1;                               // 0x000C (0x0004) [0x0000000000000002] [0x00000001] (CPF_Const)
};

// ScriptStruct Engine.Settings.LocalizedStringSettingMetaData
// 0x0030
struct FLocalizedStringSettingMetaData
{
	int32_t                                            Id;                                            // 0x0000 (0x0004) [0x0000000000000002] (CPF_Const)   
	struct FName                                       Name;                                          // 0x0004 (0x0008) [0x0000000000000002] (CPF_Const)   
	class FString                                      ColumnHeaderText;                              // 0x0010 (0x0010) [0x0000000000408002] (CPF_Const | CPF_Localized | CPF_NeedCtorLink)
	TArray<struct FStringIdToStringMapping>            ValueMappings;                                 // 0x0020 (0x0010) [0x0000000000400002] (CPF_Const | CPF_NeedCtorLink)
};

// ScriptStruct Engine.Settings.SettingsPropertyPropertyMetaData
// 0x0054
struct FSettingsPropertyPropertyMetaData
{
	int32_t                                            Id;                                            // 0x0000 (0x0004) [0x0000000000000002] (CPF_Const)   
	struct FName                                       Name;                                          // 0x0004 (0x0008) [0x0000000000000002] (CPF_Const)   
	class FString                                      ColumnHeaderText;                              // 0x0010 (0x0010) [0x0000000000408002] (CPF_Const | CPF_Localized | CPF_NeedCtorLink)
	uint8_t                                            MappingType;                                   // 0x0020 (0x0001) [0x0000000000000002] (CPF_Const)   
	TArray<struct FIdToStringMapping>                  ValueMappings;                                 // 0x0028 (0x0010) [0x0000000000400002] (CPF_Const | CPF_NeedCtorLink)
	TArray<struct FSettingsData>                       PredefinedValues;                              // 0x0038 (0x0010) [0x0000000000400002] (CPF_Const | CPF_NeedCtorLink)
	float                                              MinVal;                                        // 0x0048 (0x0004) [0x0000000000000002] (CPF_Const)   
	float                                              MaxVal;                                        // 0x004C (0x0004) [0x0000000000000002] (CPF_Const)   
	float                                              RangeIncrement;                                // 0x0050 (0x0004) [0x0000000000000002] (CPF_Const)   
};

// ScriptStruct Engine.OnlineGameSearch.OnlineGameSearchParameter
// 0x000E
struct FOnlineGameSearchParameter
{
	int32_t                                            EntryId;                                       // 0x0000 (0x0004) [0x0000000000000000]               
	struct FName                                       ObjectPropertyName;                            // 0x0004 (0x0008) [0x0000000000000000]               
	uint8_t                                            EntryType;                                     // 0x000C (0x0001) [0x0000000000000000]               
	uint8_t                                            ComparisonType;                                // 0x000D (0x0001) [0x0000000000000000]               
};

// ScriptStruct Engine.OnlineGameSearch.OnlineGameSearchORClause
// 0x0010
struct FOnlineGameSearchORClause
{
	TArray<struct FOnlineGameSearchParameter>          OrParams;                                      // 0x0000 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
};

// ScriptStruct Engine.OnlineGameSearch.OnlineGameSearchSortClause
// 0x000E
struct FOnlineGameSearchSortClause
{
	int32_t                                            EntryId;                                       // 0x0000 (0x0004) [0x0000000000000000]               
	struct FName                                       ObjectPropertyName;                            // 0x0004 (0x0008) [0x0000000000000000]               
	uint8_t                                            EntryType;                                     // 0x000C (0x0001) [0x0000000000000000]               
	uint8_t                                            SortType;                                      // 0x000D (0x0001) [0x0000000000000000]               
};

// ScriptStruct Engine.OnlineGameSearch.OnlineGameSearchQuery
// 0x0020
struct FOnlineGameSearchQuery
{
	TArray<struct FOnlineGameSearchORClause>           OrClauses;                                     // 0x0000 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	TArray<struct FOnlineGameSearchSortClause>         SortClauses;                                   // 0x0010 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
};

// ScriptStruct Engine.OnlineGameSearch.OverrideSkill
// 0x0038
struct FOverrideSkill
{
	int32_t                                            LeaderboardId;                                 // 0x0000 (0x0004) [0x0000000000000000]               
	TArray<struct FUniqueNetId>                        Players;                                       // 0x0008 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	TArray<struct FDouble>                             Mus;                                           // 0x0018 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	TArray<struct FDouble>                             Sigmas;                                        // 0x0028 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
};

// ScriptStruct Engine.OnlineGameSearch.NamedObjectProperty
// 0x0018
struct FNamedObjectProperty
{
	struct FName                                       ObjectPropertyName;                            // 0x0000 (0x0008) [0x0000000000000000]               
	class FString                                      ObjectPropertyValue;                           // 0x0008 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
};

// ScriptStruct Engine.OnlineGameSearch.OnlineGameSearchResult
// 0x0010
struct FOnlineGameSearchResult
{
	class UOnlineGameSettings*                         GameSettings;                                  // 0x0000 (0x0008) [0x0000000000000002] (CPF_Const)   
	struct FPointer                                    PlatformData;                                  // 0x0008 (0x0008) [0x0000000000001002] (CPF_Const | CPF_Native)
};

// ScriptStruct Engine.PlayerController.ConnectedPeerInfo
// 0x0050
struct FConnectedPeerInfo
{
	struct FUniqueNetId                                PlayerID;                                      // 0x0000 (0x0048) [0x0000000000400000] (CPF_NeedCtorLink)
	uint8_t                                            NatType;                                       // 0x0048 (0x0001) [0x0000000000000000]               
	uint32_t                                           bLostConnectionToHost : 1;                     // 0x004C (0x0004) [0x0000000000000000] [0x00000001] 
};

// ScriptStruct Engine.PlayerController.ClientAdjustment
// 0x0035
struct FClientAdjustment
{
	float                                              TimeStamp;                                     // 0x0000 (0x0004) [0x0000000000000000]               
	uint8_t                                            newPhysics;                                    // 0x0004 (0x0001) [0x0000000000000000]               
	struct FVector                                     NewLoc;                                        // 0x0008 (0x000C) [0x0000000000000000]               
	struct FVector                                     NewVel;                                        // 0x0014 (0x000C) [0x0000000000000000]               
	class AActor*                                      NewBase;                                       // 0x0020 (0x0008) [0x0000000000000000]               
	struct FVector                                     NewFloor;                                      // 0x0028 (0x000C) [0x0000000000000000]               
	uint8_t                                            bAckGoodMove;                                  // 0x0034 (0x0001) [0x0000000000000000]               
};

// ScriptStruct Engine.PlayerReplicationInfo.ClientConnectionStats
// 0x0058
struct FClientConnectionStats
{
	int32_t                                            ConnectionCount;                               // 0x0000 (0x0004) [0x0000000000000000]               
	int32_t                                            PingTotal;                                     // 0x0004 (0x0004) [0x0000000000000000]               
	int32_t                                            PingMin;                                       // 0x0008 (0x0004) [0x0000000000000000]               
	int32_t                                            PingMax;                                       // 0x000C (0x0004) [0x0000000000000000]               
	float                                              CurrentAckTime;                                // 0x0010 (0x0004) [0x0000000000000000]               
	float                                              TotalAckTime;                                  // 0x0014 (0x0004) [0x0000000000000000]               
	float                                              CurrentReceiveTime;                            // 0x0018 (0x0004) [0x0000000000000000]               
	float                                              TotalReceiveTime;                              // 0x001C (0x0004) [0x0000000000000000]               
	int32_t                                            TotalPacketsLost;                              // 0x0020 (0x0004) [0x0000000000000000]               
	int32_t                                            TotalPacketsInOut;                             // 0x0024 (0x0004) [0x0000000000000000]               
	float                                              InPacketLossPerSecMin;                         // 0x0028 (0x0004) [0x0000000000000000]               
	float                                              InPacketLossPerSecMax;                         // 0x002C (0x0004) [0x0000000000000000]               
	float                                              OutPacketLossPerSecMin;                        // 0x0030 (0x0004) [0x0000000000000000]               
	float                                              OutPacketLossPerSecMax;                        // 0x0034 (0x0004) [0x0000000000000000]               
	int32_t                                            MaxInBPS;                                      // 0x0038 (0x0004) [0x0000000000000000]               
	int32_t                                            TotalInBPS;                                    // 0x003C (0x0004) [0x0000000000000000]               
	int32_t                                            TotalInBytes;                                  // 0x0040 (0x0004) [0x0000000000000000]               
	int32_t                                            MaxOutBPS;                                     // 0x0044 (0x0004) [0x0000000000000000]               
	int32_t                                            TotalOutBPS;                                   // 0x0048 (0x0004) [0x0000000000000000]               
	int32_t                                            TotalOutBytes;                                 // 0x004C (0x0004) [0x0000000000000000]               
	float                                              CurrentLatency;                                // 0x0050 (0x0004) [0x0000000000000000]               
	float                                              CurrentJitter;                                 // 0x0054 (0x0004) [0x0000000000000000]               
};

// ScriptStruct Engine.PlayerController.DebugTextInfo
// 0x0060
struct FDebugTextInfo
{
	class AActor*                                      SrcActor;                                      // 0x0000 (0x0008) [0x0000000000000000]               
	struct FVector                                     SrcActorOffset;                                // 0x0008 (0x000C) [0x0000000000000000]               
	struct FVector                                     SrcActorDesiredOffset;                         // 0x0014 (0x000C) [0x0000000000000000]               
	class FString                                      DebugText;                                     // 0x0020 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	float                                              TimeRemaining;                                 // 0x0030 (0x0004) [0x0000000000002000] (CPF_Transient)
	float                                              Duration;                                      // 0x0034 (0x0004) [0x0000000000000000]               
	struct FColor                                      TextColor;                                     // 0x0038 (0x0004) [0x0000000000000000]               
	uint32_t                                           bAbsoluteLocation : 1;                         // 0x003C (0x0004) [0x0000000000000000] [0x00000001] 
	uint32_t                                           bKeepAttachedToActor : 1;                      // 0x003C (0x0004) [0x0000000000000000] [0x00000002] 
	struct FVector                                     OrigActorLocation;                             // 0x0040 (0x000C) [0x0000000000000000]               
	class UFont*                                       Font;                                          // 0x0050 (0x0008) [0x0000000000000000]               
	struct FVector2D                                   TextScale;                                     // 0x0058 (0x0008) [0x0000000000000000]               
};

// ScriptStruct Engine.HUD.KismetDrawTextInfo
// 0x0040
struct FKismetDrawTextInfo
{
	class FString                                      MessageText;                                   // 0x0000 (0x0010) [0x0000000000400001] (CPF_Edit | CPF_NeedCtorLink)
	class FString                                      AppendedText;                                  // 0x0010 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	class UFont*                                       MessageFont;                                   // 0x0020 (0x0008) [0x0000000000000001] (CPF_Edit)    
	struct FVector2D                                   MessageFontScale;                              // 0x0028 (0x0008) [0x0000000000000001] (CPF_Edit)    
	struct FVector2D                                   MessageOffset;                                 // 0x0030 (0x0008) [0x0000000000000001] (CPF_Edit)    
	struct FColor                                      MessageColor;                                  // 0x0038 (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              MessageEndTime;                                // 0x003C (0x0004) [0x0000000000000000]               
};

// ScriptStruct Engine.HUD.ConsoleMessage
// 0x0020
struct FConsoleMessage
{
	class FString                                      Text;                                          // 0x0000 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FColor                                      TextColor;                                     // 0x0010 (0x0004) [0x0000000000000000]               
	float                                              MessageLife;                                   // 0x0014 (0x0004) [0x0000000000000000]               
	class APlayerReplicationInfo*                      PRI;                                           // 0x0018 (0x0008) [0x0000000000000000]               
};

// ScriptStruct Engine.PlayerController.InputEntry
// 0x000D
struct FInputEntry
{
	uint8_t                                            Type;                                          // 0x0000 (0x0001) [0x0000000000000000]               
	float                                              Value;                                         // 0x0004 (0x0004) [0x0000000000000000]               
	float                                              TimeDelta;                                     // 0x0008 (0x0004) [0x0000000000000000]               
	uint8_t                                            Action;                                        // 0x000C (0x0001) [0x0000000000000000]               
};

// ScriptStruct Engine.PlayerController.InputMatchRequest
// 0x0050
struct FInputMatchRequest
{
	TArray<struct FInputEntry>                         Inputs;                                        // 0x0000 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	class AActor*                                      MatchActor;                                    // 0x0010 (0x0008) [0x0000000000000000]               
	struct FName                                       MatchFuncName;                                 // 0x0018 (0x0008) [0x0000000000000000]               
	struct FScriptDelegate                             MatchDelegate;                                 // 0x0020 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FName                                       FailedFuncName;                                // 0x0038 (0x0008) [0x0000000000000000]               
	struct FName                                       RequestName;                                   // 0x0040 (0x0008) [0x0000000000000000]               
	int32_t                                            MatchIdx;                                      // 0x0048 (0x0004) [0x0000000000002000] (CPF_Transient)
	float                                              LastMatchTime;                                 // 0x004C (0x0004) [0x0000000000002000] (CPF_Transient)
};

// ScriptStruct Engine.GameViewportClient.GamepadInfo
// 0x0008
struct FGamepadInfo
{
	uint8_t                                            InputAPI;                                      // 0x0000 (0x0001) [0x0000000000000000]               
	uint32_t                                           bConnected : 1;                                // 0x0004 (0x0004) [0x0000000000000000] [0x00000001] 
};

// ScriptStruct Engine.GameViewportClient.PerPlayerSplitscreenData
// 0x0010
struct FPerPlayerSplitscreenData
{
	float                                              SizeX;                                         // 0x0000 (0x0004) [0x0000000000000000]               
	float                                              SizeY;                                         // 0x0004 (0x0004) [0x0000000000000000]               
	float                                              OriginX;                                       // 0x0008 (0x0004) [0x0000000000000000]               
	float                                              OriginY;                                       // 0x000C (0x0004) [0x0000000000000000]               
};

// ScriptStruct Engine.GameViewportClient.SplitscreenData
// 0x0010
struct FSplitscreenData
{
	TArray<struct FPerPlayerSplitscreenData>           PlayerData;                                    // 0x0000 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
};

// ScriptStruct Engine.GameViewportClient.DebugDisplayProperty
// 0x0014
struct FDebugDisplayProperty
{
	class UObject*                                     Obj;                                           // 0x0000 (0x0008) [0x0000000000000000]               
	struct FName                                       PropertyName;                                  // 0x0008 (0x0008) [0x0000000000000000]               
	uint32_t                                           bSpecialProperty : 1;                          // 0x0010 (0x0004) [0x0000000000000000] [0x00000001] 
};

// ScriptStruct Engine.GameViewportClient.TitleSafeZoneArea
// 0x0010
struct FTitleSafeZoneArea
{
	float                                              MaxPercentX;                                   // 0x0000 (0x0004) [0x0000000000000000]               
	float                                              MaxPercentY;                                   // 0x0004 (0x0004) [0x0000000000000000]               
	float                                              RecommendedPercentX;                           // 0x0008 (0x0004) [0x0000000000000000]               
	float                                              RecommendedPercentY;                           // 0x000C (0x0004) [0x0000000000000000]               
};

// ScriptStruct Engine.GameViewportClient.ShowFlags_Mirror
// 0x0010
struct FShowFlags_Mirror
{
	uint64_t                                           flags0;                                        // 0x0000 (0x0008) [0x0000000000001002] (CPF_Const | CPF_Native)
	uint64_t                                           flags1;                                        // 0x0008 (0x0008) [0x0000000000001002] (CPF_Const | CPF_Native)
};

// ScriptStruct Engine.GameViewportClient.ExportShowFlags_Mirror
// 0x0000 (0x0010 - 0x0010)
struct FExportShowFlags_Mirror : FShowFlags_Mirror
{
};

// ScriptStruct Engine.HeadTrackingComponent.ActorToLookAt
// 0x001C
struct FActorToLookAt
{
	class AActor*                                      Actor;                                         // 0x0000 (0x0008) [0x0000000000000000]               
	float                                              Rating;                                        // 0x0008 (0x0004) [0x0000000000000000]               
	float                                              EnteredTime;                                   // 0x000C (0x0004) [0x0000000000000000]               
	float                                              LastKnownDistance;                             // 0x0010 (0x0004) [0x0000000000000000]               
	float                                              StartTimeBeingLookedAt;                        // 0x0014 (0x0004) [0x0000000000000000]               
	uint32_t                                           CurrentlyBeingLookedAt : 1;                    // 0x0018 (0x0004) [0x0000000000000000] [0x00000001] 
};

// ScriptStruct Engine.IniLocPatcher.IniLocFileEntry
// 0x0035
struct FIniLocFileEntry
{
	class FString                                      Filename;                                      // 0x0000 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	class FString                                      DLName;                                        // 0x0010 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	class FString                                      HashCode;                                      // 0x0020 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	uint32_t                                           bIsUnicode : 1;                                // 0x0030 (0x0004) [0x0000000000000000] [0x00000001] 
	uint8_t                                            ReadState;                                     // 0x0034 (0x0001) [0x0000000000000000]               
};

// ScriptStruct Engine.Input.KeyBind
// 0x001C
struct FKeyBind
{
	struct FName                                       Name;                                          // 0x0000 (0x0008) [0x0000000000000000]               
	class FString                                      Command;                                       // 0x0008 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	uint32_t                                           Control : 1;                                   // 0x0018 (0x0004) [0x0000000000000000] [0x00000001] 
	uint32_t                                           Shift : 1;                                     // 0x0018 (0x0004) [0x0000000000000000] [0x00000002] 
	uint32_t                                           Alt : 1;                                       // 0x0018 (0x0004) [0x0000000000000000] [0x00000004] 
	uint32_t                                           bIgnoreCtrl : 1;                               // 0x0018 (0x0004) [0x0000000000000000] [0x00000008] 
	uint32_t                                           bIgnoreShift : 1;                              // 0x0018 (0x0004) [0x0000000000000000] [0x00000010] 
	uint32_t                                           bIgnoreAlt : 1;                                // 0x0018 (0x0004) [0x0000000000000000] [0x00000020] 
};

// ScriptStruct Engine.Input.TouchTracker
// 0x0018
struct FTouchTracker
{
	int32_t                                            Handle;                                        // 0x0000 (0x0004) [0x0000000000000000]               
	int32_t                                            TouchpadIndex;                                 // 0x0004 (0x0004) [0x0000000000000000]               
	struct FVector2D                                   Location;                                      // 0x0008 (0x0008) [0x0000000000000000]               
	uint8_t                                            EventType;                                     // 0x0010 (0x0001) [0x0000000000000000]               
	uint32_t                                           bTrapInput : 1;                                // 0x0014 (0x0004) [0x0000000000000000] [0x00000001] 
};

// ScriptStruct Engine.InstancedStaticMeshComponent.InstancedStaticMeshInstanceData
// 0x0050
struct FInstancedStaticMeshInstanceData
{
	struct FMatrix                                     Transform;                                     // 0x0000 (0x0040) [0x0000000000000000]               
	struct FVector2D                                   LightmapUVBias;                                // 0x0040 (0x0008) [0x0000000000000000]               
	struct FVector2D                                   ShadowmapUVBias;                               // 0x0048 (0x0008) [0x0000000000000000]               
};

// ScriptStruct Engine.InstancedStaticMeshComponent.InstancedStaticMeshMappingInfo
// 0x0020
struct FInstancedStaticMeshMappingInfo
{
	struct FPointer                                    Mapping;                                       // 0x0000 (0x0008) [0x0000000000001000] (CPF_Native)  
	struct FPointer                                    LightMap;                                      // 0x0008 (0x0008) [0x0000000000001000] (CPF_Native)  
	class UTexture2D*                                  LightmapTexture;                               // 0x0010 (0x0008) [0x0000000000000000]               
	class UShadowMap2D*                                ShadowmapTexture;                              // 0x0018 (0x0008) [0x0000000000000000]               
};

// ScriptStruct Engine.StaticMeshActor.PreCombinedStaticMeshActor
// 0x0048
struct FPreCombinedStaticMeshActor
{
	class UStaticMesh*                                 Mesh;                                          // 0x0000 (0x0008) [0x0000000000000000]               
	struct FVector                                     Location;                                      // 0x0008 (0x000C) [0x0000000000000000]               
	struct FRotator                                    Rotation;                                      // 0x0014 (0x000C) [0x0000000000000000]               
	struct FVector                                     PrePivot;                                      // 0x0020 (0x000C) [0x0000000000000000]               
	float                                              DrawScale;                                     // 0x002C (0x0004) [0x0000000000000000]               
	struct FVector                                     DrawScale3D;                                   // 0x0030 (0x000C) [0x0000000000000000]               
	struct FVector                                     ComponentScale3D;                              // 0x003C (0x000C) [0x0000000000000000]               
};

// ScriptStruct Engine.InterpActor.CheckpointRecord
// 0x0020
struct AInterpActor_FCheckpointRecord
{
	struct FVector                                     Location;                                      // 0x0000 (0x000C) [0x0000000000000000]               
	struct FRotator                                    Rotation;                                      // 0x000C (0x000C) [0x0000000000000000]               
	uint8_t                                            CollisionType;                                 // 0x0018 (0x0001) [0x0000000000000000]               
	uint32_t                                           bHidden : 1;                                   // 0x001C (0x0004) [0x0000000000000000] [0x00000001] 
	uint32_t                                           bIsShutdown : 1;                               // 0x001C (0x0004) [0x0000000000000000] [0x00000002] 
	uint32_t                                           bNeedsPositionReplication : 1;                 // 0x001C (0x0004) [0x0000000000000000] [0x00000004] 
};

// ScriptStruct Engine.InterpCurveEdSetup.CurveEdEntry
// 0x0038
struct FCurveEdEntry
{
	class UObject*                                     CurveObject;                                   // 0x0000 (0x0008) [0x0000000000000000]               
	struct FColor                                      CurveColor;                                    // 0x0008 (0x0004) [0x0000000000000000]               
	class FString                                      CurveName;                                     // 0x0010 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	int32_t                                            bHideCurve;                                    // 0x0020 (0x0004) [0x0000000000000000]               
	int32_t                                            bColorCurve;                                   // 0x0024 (0x0004) [0x0000000000000000]               
	int32_t                                            bFloatingPointColorCurve;                      // 0x0028 (0x0004) [0x0000000000000000]               
	int32_t                                            bClamp;                                        // 0x002C (0x0004) [0x0000000000000000]               
	float                                              ClampLow;                                      // 0x0030 (0x0004) [0x0000000000000000]               
	float                                              ClampHigh;                                     // 0x0034 (0x0004) [0x0000000000000000]               
};

// ScriptStruct Engine.InterpCurveEdSetup.CurveEdTab
// 0x0030
struct FCurveEdTab
{
	class FString                                      TabName;                                       // 0x0000 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	TArray<struct FCurveEdEntry>                       Curves;                                        // 0x0010 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	float                                              ViewStartInput;                                // 0x0020 (0x0004) [0x0000000000000000]               
	float                                              ViewEndInput;                                  // 0x0024 (0x0004) [0x0000000000000000]               
	float                                              ViewStartOutput;                               // 0x0028 (0x0004) [0x0000000000000000]               
	float                                              ViewEndOutput;                                 // 0x002C (0x0004) [0x0000000000000000]               
};

// ScriptStruct Engine.InterpData.AnimSetBakeAndPruneStatus
// 0x0014
struct FAnimSetBakeAndPruneStatus
{
	class FString                                      AnimSetName;                                   // 0x0000 (0x0010) [0x0000000000420001] (CPF_Edit | CPF_EditConst | CPF_NeedCtorLink)
	uint32_t                                           bReferencedButUnused : 1;                      // 0x0010 (0x0004) [0x0000000000020001] [0x00000001] (CPF_Edit | CPF_EditConst)
	uint32_t                                           bSkipBakeAndPrune : 1;                         // 0x0010 (0x0004) [0x0000000000000001] [0x00000002] (CPF_Edit)
	uint32_t                                           bSkipCooking : 1;                              // 0x0010 (0x0004) [0x0000000000000001] [0x00000004] (CPF_Edit)
};

// ScriptStruct Engine.InterpGroup.InterpEdSelKey
// 0x0018
struct FInterpEdSelKey
{
	class UInterpGroup*                                Group;                                         // 0x0000 (0x0008) [0x0000000000000000]               
	class UInterpTrack*                                Track;                                         // 0x0008 (0x0008) [0x0000000000000000]               
	int32_t                                            KeyIndex;                                      // 0x0010 (0x0004) [0x0000000000000000]               
	float                                              UnsnappedPosition;                             // 0x0014 (0x0004) [0x0000000000000000]               
};

// ScriptStruct Engine.InterpGroupCamera.CameraPreviewInfo
// 0x0040
struct FCameraPreviewInfo
{
	class UClass*                                      PawnClass;                                     // 0x0000 (0x0008) [0x0000000000000001] (CPF_Edit)    
	TArray<class UAnimSet*>                            PreviewAnimSets;                               // 0x0008 (0x0010) [0x0000000000400001] (CPF_Edit | CPF_NeedCtorLink)
	struct FName                                       AnimSeqName;                                   // 0x0018 (0x0008) [0x0000000000000001] (CPF_Edit)    
	struct FVector                                     Location;                                      // 0x0020 (0x000C) [0x0000000000020000] (CPF_EditConst)
	struct FRotator                                    Rotation;                                      // 0x002C (0x000C) [0x0000000000020000] (CPF_EditConst)
	class APawn*                                       PawnInst;                                      // 0x0038 (0x0008) [0x0000000000002000] (CPF_Transient)
};

// ScriptStruct Engine.InterpTrack.SubTrackGroup
// 0x0024
struct FSubTrackGroup
{
	class FString                                      GroupName;                                     // 0x0000 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	TArray<int32_t>                                    TrackIndices;                                  // 0x0010 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	uint32_t                                           bIsCollapsed : 1;                              // 0x0020 (0x0004) [0x0000000000000000] [0x00000001] 
	uint32_t                                           bIsSelected : 1;                               // 0x0020 (0x0004) [0x0000000000002000] [0x00000002] (CPF_Transient)
};

// ScriptStruct Engine.InterpTrack.SupportedSubTrackInfo
// 0x001C
struct FSupportedSubTrackInfo
{
	class UClass*                                      SupportedClass;                                // 0x0000 (0x0008) [0x0000000000000000]               
	class FString                                      SubTrackName;                                  // 0x0008 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	int32_t                                            GroupIndex;                                    // 0x0018 (0x0004) [0x0000000000000000]               
};

// ScriptStruct Engine.InterpTrackAnimControl.AnimControlTrackKey
// 0x001C
struct FAnimControlTrackKey
{
	float                                              StartTime;                                     // 0x0000 (0x0004) [0x0000000000000000]               
	struct FName                                       AnimSeqName;                                   // 0x0004 (0x0008) [0x0000000000000000]               
	float                                              AnimStartOffset;                               // 0x000C (0x0004) [0x0000000000000000]               
	float                                              AnimEndOffset;                                 // 0x0010 (0x0004) [0x0000000000000000]               
	float                                              AnimPlayRate;                                  // 0x0014 (0x0004) [0x0000000000000000]               
	uint32_t                                           bLooping : 1;                                  // 0x0018 (0x0004) [0x0000000000000000] [0x00000001] 
	uint32_t                                           bReverse : 1;                                  // 0x0018 (0x0004) [0x0000000000000000] [0x00000002] 
};

// ScriptStruct Engine.InterpTrackBoolProp.BoolTrackKey
// 0x0008
struct FBoolTrackKey
{
	float                                              Time;                                          // 0x0000 (0x0004) [0x0000000000000000]               
	uint32_t                                           Value : 1;                                     // 0x0004 (0x0004) [0x0000000000000001] [0x00000001] (CPF_Edit)
};

// ScriptStruct Engine.InterpTrackDirector.DirectorTrackCut
// 0x0014
struct FDirectorTrackCut
{
	float                                              Time;                                          // 0x0000 (0x0004) [0x0000000000000000]               
	float                                              TransitionTime;                                // 0x0004 (0x0004) [0x0000000000000000]               
	struct FName                                       TargetCamGroup;                                // 0x0008 (0x0008) [0x0000000000000001] (CPF_Edit)    
	int32_t                                            ShotNumber;                                    // 0x0010 (0x0004) [0x0000000000000000]               
};

// ScriptStruct Engine.InterpTrackEvent.EventTrackKey
// 0x000C
struct FEventTrackKey
{
	float                                              Time;                                          // 0x0000 (0x0004) [0x0000000000000000]               
	struct FName                                       EventName;                                     // 0x0004 (0x0008) [0x0000000000000001] (CPF_Edit)    
};

// ScriptStruct Engine.InterpTrackFaceFX.FaceFXTrackKey
// 0x0028
struct FFaceFXTrackKey
{
	float                                              StartTime;                                     // 0x0000 (0x0004) [0x0000000000000000]               
	class FString                                      FaceFXGroupName;                               // 0x0008 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	class FString                                      FaceFXSeqName;                                 // 0x0018 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
};

// ScriptStruct Engine.InterpTrackFaceFX.FaceFXSoundCueKey
// 0x0010
struct FFaceFXSoundCueKey
{
	class USoundCue*                                   FaceFXSoundCue;                                // 0x0000 (0x0008) [0x0000000000000002] (CPF_Const)   
	class UAkEvent*                                    FaceFXAkEvent;                                 // 0x0008 (0x0008) [0x0000000000000002] (CPF_Const)   
};

// ScriptStruct Engine.InterpTrackHeadTracking.HeadTrackingKey
// 0x0005
struct FHeadTrackingKey
{
	float                                              Time;                                          // 0x0000 (0x0004) [0x0000000000000000]               
	uint8_t                                            Action;                                        // 0x0004 (0x0001) [0x0000000000000001] (CPF_Edit)    
};

// ScriptStruct Engine.InterpTrackInstFloatMaterialParam.FloatMaterialParamMICData
// 0x0020
struct FFloatMaterialParamMICData
{
	TArray<class UMaterialInstanceConstant*>           MICs;                                          // 0x0000 (0x0010) [0x0000000000400002] (CPF_Const | CPF_NeedCtorLink)
	TArray<float>                                      MICResetFloats;                                // 0x0010 (0x0010) [0x0000000000400002] (CPF_Const | CPF_NeedCtorLink)
};

// ScriptStruct Engine.InterpTrackToggle.ToggleTrackKey
// 0x0005
struct FToggleTrackKey
{
	float                                              Time;                                          // 0x0000 (0x0004) [0x0000000000000000]               
	uint8_t                                            ToggleAction;                                  // 0x0004 (0x0001) [0x0000000000000001] (CPF_Edit)    
};

// ScriptStruct Engine.InterpTrackInstVectorMaterialParam.VectorMaterialParamMICData
// 0x0020
struct FVectorMaterialParamMICData
{
	TArray<class UMaterialInstanceConstant*>           MICs;                                          // 0x0000 (0x0010) [0x0000000000400002] (CPF_Const | CPF_NeedCtorLink)
	TArray<struct FVector>                             MICResetVectors;                               // 0x0010 (0x0010) [0x0000000000400002] (CPF_Const | CPF_NeedCtorLink)
};

// ScriptStruct Engine.InterpTrackVisibility.VisibilityTrackKey
// 0x0006
struct FVisibilityTrackKey
{
	float                                              Time;                                          // 0x0000 (0x0004) [0x0000000000000000]               
	uint8_t                                            Action;                                        // 0x0004 (0x0001) [0x0000000000000001] (CPF_Edit)    
	uint8_t                                            ActiveCondition;                               // 0x0005 (0x0001) [0x0000000000000000]               
};

// ScriptStruct Engine.InterpTrackMove.InterpLookupPoint
// 0x000C
struct FInterpLookupPoint
{
	struct FName                                       GroupName;                                     // 0x0000 (0x0008) [0x0000000000000000]               
	float                                              Time;                                          // 0x0008 (0x0004) [0x0000000000000000]               
};

// ScriptStruct Engine.InterpTrackMove.InterpLookupTrack
// 0x0010
struct FInterpLookupTrack
{
	TArray<struct FInterpLookupPoint>                  Points;                                        // 0x0000 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
};

// ScriptStruct Engine.InterpTrackNotify.NotifyTrackKey
// 0x0010
struct FNotifyTrackKey
{
	float                                              Time;                                          // 0x0000 (0x0004) [0x0000000000000000]               
	class UAnimNotify*                                 Notify;                                        // 0x0008 (0x0008) [0x0000000000000000]               
};

// ScriptStruct Engine.InterpTrackParticleReplay.ParticleReplayTrackKey
// 0x000C
struct FParticleReplayTrackKey
{
	float                                              Time;                                          // 0x0000 (0x0004) [0x0000000000000000]               
	float                                              Duration;                                      // 0x0004 (0x0004) [0x0000000000000001] (CPF_Edit)    
	int32_t                                            ClipIDNumber;                                  // 0x0008 (0x0004) [0x0000000000000001] (CPF_Edit)    
};

// ScriptStruct Engine.InterpTrackSound.SoundTrackKey
// 0x0018
struct FSoundTrackKey
{
	float                                              Time;                                          // 0x0000 (0x0004) [0x0000000000000000]               
	float                                              Volume;                                        // 0x0004 (0x0004) [0x0000000000000000]               
	float                                              Pitch;                                         // 0x0008 (0x0004) [0x0000000000000000]               
	class USoundCue*                                   Sound;                                         // 0x0010 (0x0008) [0x0000000000000001] (CPF_Edit)    
};

// ScriptStruct Engine.LandscapeProxy.LandscapeLayerStruct
// 0x0030
struct FLandscapeLayerStruct
{
	class ULandscapeLayerInfoObject*                   LayerInfoObj;                                  // 0x0000 (0x0008) [0x0000000000000000]               
	class UMaterialInstanceConstant*                   ThumbnailMIC;                                  // 0x0008 (0x0008) [0x0000000800000000]               
	class ALandscapeProxy*                             Owner;                                         // 0x0010 (0x0008) [0x0000000800000000]               
	int32_t                                            DebugColorChannel;                             // 0x0018 (0x0004) [0x0000000800002000] (CPF_Transient)
	uint32_t                                           bSelected : 1;                                 // 0x001C (0x0004) [0x0000000800002000] [0x00000001] (CPF_Transient)
	class FString                                      SourceFilePath;                                // 0x0020 (0x0010) [0x0000000800400000] (CPF_NeedCtorLink)
};

// ScriptStruct Engine.LandscapeProxy.LandscapeWeightmapUsage
// 0x0020
struct FLandscapeWeightmapUsage
{
	class ULandscapeComponent*                         ChannelUsage[0x4];                             // 0x0000 (0x0020) [0x0000000004080008] (CPF_ExportObject | CPF_Component | CPF_EditInline)
};

// ScriptStruct Engine.Landscape.LandscapeLayerInfo
// 0x0038
struct FLandscapeLayerInfo
{
	struct FName                                       LayerName;                                     // 0x0000 (0x0008) [0x0000000000000001] (CPF_Edit)    
	float                                              Hardness;                                      // 0x0008 (0x0004) [0x0000000000000001] (CPF_Edit)    
	uint32_t                                           bNoWeightBlend : 1;                            // 0x000C (0x0004) [0x0000000800000000] [0x00000001] 
	class UPhysicalMaterial*                           PhysMaterial;                                  // 0x0010 (0x0008) [0x0000000000000001] (CPF_Edit)    
	class UMaterialInstanceConstant*                   ThumbnailMIC;                                  // 0x0018 (0x0008) [0x0000000800000000]               
	uint32_t                                           bSelected : 1;                                 // 0x0020 (0x0004) [0x0000000800002000] [0x00000001] (CPF_Transient)
	int32_t                                            DebugColorChannel;                             // 0x0024 (0x0004) [0x0000000800002000] (CPF_Transient)
	class FString                                      LayerSourceFile;                               // 0x0028 (0x0010) [0x0000000800402000] (CPF_Transient | CPF_NeedCtorLink)
};

// ScriptStruct Engine.LandscapeComponent.WeightmapLayerAllocationInfo
// 0x000A
struct FWeightmapLayerAllocationInfo
{
	struct FName                                       LayerName;                                     // 0x0000 (0x0008) [0x0000000000000000]               
	uint8_t                                            WeightmapTextureIndex;                         // 0x0008 (0x0001) [0x0000000000000000]               
	uint8_t                                            WeightmapTextureChannel;                       // 0x0009 (0x0001) [0x0000000000000000]               
};

// ScriptStruct Engine.LandscapeGizmoActiveActor.GizmoSelectData
// 0x0058
struct FGizmoSelectData
{
	float                                              Ratio;                                         // 0x0000 (0x0004) [0x0000000800000000]               
	float                                              HeightData;                                    // 0x0004 (0x0004) [0x0000000800000000]               
	uint8_t                                           UnknownData00[0x50];                              // 0x0008 (0x0050) UNKNOWN PROPERTY: MapProperty Engine.LandscapeGizmoActiveActor.GizmoSelectData.WeightDataMap
};

// ScriptStruct Engine.LandscapeInfo.LandscapeAddCollision
// 0x0030
struct FLandscapeAddCollision
{
	struct FVector                                     Corners[0x4];                                  // 0x0000 (0x0030) [0x0000000800000000]               
};

// ScriptStruct Engine.MaterialInstance.FontParameterValue
// 0x0024
struct FFontParameterValue
{
	struct FName                                       ParameterName;                                 // 0x0000 (0x0008) [0x0000000000000001] (CPF_Edit)    
	class UFont*                                       FontValue;                                     // 0x0008 (0x0008) [0x0000000000000001] (CPF_Edit)    
	int32_t                                            FontPage;                                      // 0x0010 (0x0004) [0x0000000000000001] (CPF_Edit)    
	struct FGuid                                       ExpressionGUID;                                // 0x0014 (0x0010) [0x0000000000000000]               
};

// ScriptStruct Engine.MaterialInstance.ScalarParameterValue
// 0x001C
struct FScalarParameterValue
{
	struct FName                                       ParameterName;                                 // 0x0000 (0x0008) [0x0000000000000001] (CPF_Edit)    
	float                                              ParameterValue;                                // 0x0008 (0x0004) [0x0000000000000001] (CPF_Edit)    
	struct FGuid                                       ExpressionGUID;                                // 0x000C (0x0010) [0x0000000000000000]               
};

// ScriptStruct Engine.MaterialInstance.TextureParameterValue
// 0x0020
struct FTextureParameterValue
{
	struct FName                                       ParameterName;                                 // 0x0000 (0x0008) [0x0000000000000001] (CPF_Edit)    
	class UTexture*                                    ParameterValue;                                // 0x0008 (0x0008) [0x0000000000000001] (CPF_Edit)    
	struct FGuid                                       ExpressionGUID;                                // 0x0010 (0x0010) [0x0000000000000000]               
};

// ScriptStruct Engine.MaterialInstance.VectorParameterValue
// 0x0028
struct FVectorParameterValue
{
	struct FName                                       ParameterName;                                 // 0x0000 (0x0008) [0x0000000000000001] (CPF_Edit)    
	struct FLinearColor                                ParameterValue;                                // 0x0008 (0x0010) [0x0000000000000001] (CPF_Edit)    
	struct FGuid                                       ExpressionGUID;                                // 0x0018 (0x0010) [0x0000000000000000]               
};

// ScriptStruct Engine.LensFlare.LensFlareElement
// 0x01C8
struct FLensFlareElement
{
	struct FName                                       ElementName;                                   // 0x0000 (0x0008) [0x0000000000000001] (CPF_Edit)    
	float                                              RayDistance;                                   // 0x0008 (0x0004) [0x0000000000000001] (CPF_Edit)    
	uint32_t                                           bIsEnabled : 1;                                // 0x000C (0x0004) [0x0000000000000001] [0x00000001] (CPF_Edit)
	uint32_t                                           bUseSourceDistance : 1;                        // 0x000C (0x0004) [0x0000000000000001] [0x00000002] (CPF_Edit)
	uint32_t                                           bNormalizeRadialDistance : 1;                  // 0x000C (0x0004) [0x0000000000000001] [0x00000004] (CPF_Edit)
	uint32_t                                           bModulateColorBySource : 1;                    // 0x000C (0x0004) [0x0000000000000001] [0x00000008] (CPF_Edit)
	struct FVector                                     Size;                                          // 0x0010 (0x000C) [0x0000000000000001] (CPF_Edit)    
	TArray<class UMaterialInterface*>                  LFMaterials;                                   // 0x0020 (0x0010) [0x0000000000400001] (CPF_Edit | CPF_NeedCtorLink)
	struct FRawDistributionFloat                       LFMaterialIndex;                               // 0x0030 (0x0028) [0x0000000000480001] (CPF_Edit | CPF_Component | CPF_NeedCtorLink)
	struct FRawDistributionFloat                       Scaling;                                       // 0x0058 (0x0028) [0x0000000000480001] (CPF_Edit | CPF_Component | CPF_NeedCtorLink)
	struct FRawDistributionVector                      AxisScaling;                                   // 0x0080 (0x0028) [0x0000000000480001] (CPF_Edit | CPF_Component | CPF_NeedCtorLink)
	struct FRawDistributionFloat                       Rotation;                                      // 0x00A8 (0x0028) [0x0000000000480001] (CPF_Edit | CPF_Component | CPF_NeedCtorLink)
	uint32_t                                           bOrientTowardsSource : 1;                      // 0x00D0 (0x0004) [0x0000000000000001] [0x00000001] (CPF_Edit)
	struct FRawDistributionVector                      Color;                                         // 0x00D8 (0x0028) [0x0000000000480001] (CPF_Edit | CPF_Component | CPF_NeedCtorLink)
	struct FRawDistributionFloat                       Alpha;                                         // 0x0100 (0x0028) [0x0000000000480001] (CPF_Edit | CPF_Component | CPF_NeedCtorLink)
	struct FRawDistributionVector                      Offset;                                        // 0x0128 (0x0028) [0x0000000000480001] (CPF_Edit | CPF_Component | CPF_NeedCtorLink)
	struct FRawDistributionVector                      DistMap_Scale;                                 // 0x0150 (0x0028) [0x0000000000480001] (CPF_Edit | CPF_Component | CPF_NeedCtorLink)
	struct FRawDistributionVector                      DistMap_Color;                                 // 0x0178 (0x0028) [0x0000000000480001] (CPF_Edit | CPF_Component | CPF_NeedCtorLink)
	struct FRawDistributionFloat                       DistMap_Alpha;                                 // 0x01A0 (0x0028) [0x0000000000480001] (CPF_Edit | CPF_Component | CPF_NeedCtorLink)
};

// ScriptStruct Engine.LensFlare.LensFlareElementCurvePair
// 0x0018
struct FLensFlareElementCurvePair
{
	class FString                                      CurveName;                                     // 0x0000 (0x0010) [0x0000000000500000] (CPF_NeedCtorLink)
	class UObject*                                     CurveObject;                                   // 0x0010 (0x0008) [0x0000000000100000]               
};

// ScriptStruct Engine.LensFlareComponent.LensFlareElementMaterials
// 0x0010
struct FLensFlareElementMaterials
{
	TArray<class UMaterialInterface*>                  ElementMaterials;                              // 0x0000 (0x0010) [0x0000000000400001] (CPF_Edit | CPF_NeedCtorLink)
};

// ScriptStruct Engine.LensFlareComponent.LensFlareElementInstance
// 0x0000
struct FLensFlareElementInstance
{
};

// ScriptStruct Engine.LevelGridVolume.LevelGridCellCoordinate
// 0x000C
struct FLevelGridCellCoordinate
{
	int32_t                                            X;                                             // 0x0000 (0x0004) [0x0000000000000000]               
	int32_t                                            Y;                                             // 0x0004 (0x0004) [0x0000000000000000]               
	int32_t                                            Z;                                             // 0x0008 (0x0004) [0x0000000000000000]               
};

// ScriptStruct Engine.LevelStreamingVolume.CheckpointRecord
// 0x0004
struct ALevelStreamingVolume_FCheckpointRecord
{
	uint32_t                                           bDisabled : 1;                                 // 0x0000 (0x0004) [0x0000000000000000] [0x00000001] 
};

// ScriptStruct Engine.LinkedAccountDetails.LinkedAccountData
// 0x00A8
struct FLinkedAccountData
{
	uint32_t                                           bSuccess : 1;                                  // 0x0000 (0x0004) [0x0000000000000000] [0x00000001] 
	struct FUniqueNetId                                OriginalId;                                    // 0x0008 (0x0048) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FUniqueNetId                                LinkedId;                                      // 0x0050 (0x0048) [0x0000000000400000] (CPF_NeedCtorLink)
	class FString                                      LinkedDisplayName;                             // 0x0098 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
};

// ScriptStruct Engine.OnlineAuthInterface.BaseAuthSession
// 0x0060
struct FBaseAuthSession
{
	struct FIpAddr                                     EndPointIP;                                    // 0x0000 (0x0014) [0x0000000000000002] (CPF_Const)   
	int32_t                                            EndPointPort;                                  // 0x0014 (0x0004) [0x0000000000000002] (CPF_Const)   
	struct FUniqueNetId                                EndPointUID;                                   // 0x0018 (0x0048) [0x0000000000400002] (CPF_Const | CPF_NeedCtorLink)
};

// ScriptStruct Engine.LocalPlayer.PostProcessSettingsOverride
// 0x0198
struct FPostProcessSettingsOverride
{
	struct FPostProcessSettings                        Settings;                                      // 0x0000 (0x0168) [0x0000000000400000] (CPF_NeedCtorLink)
	uint32_t                                           bBlendingIn : 1;                               // 0x0168 (0x0004) [0x0000000000000000] [0x00000001] 
	uint32_t                                           bBlendingOut : 1;                              // 0x0168 (0x0004) [0x0000000000000000] [0x00000002] 
	float                                              CurrentBlendInTime;                            // 0x016C (0x0004) [0x0000000000000000]               
	float                                              CurrentBlendOutTime;                           // 0x0170 (0x0004) [0x0000000000000000]               
	float                                              BlendInDuration;                               // 0x0174 (0x0004) [0x0000000000000000]               
	float                                              BlendOutDuration;                              // 0x0178 (0x0004) [0x0000000000000000]               
	float                                              BlendStartTime;                                // 0x017C (0x0004) [0x0000000000000000]               
	struct FInterpCurveFloat                           TimeAlphaCurve;                                // 0x0180 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
};

// ScriptStruct Engine.LocalPlayer.CurrentPostProcessVolumeInfo
// 0x0178
struct FCurrentPostProcessVolumeInfo
{
	struct FPostProcessSettings                        LastSettings;                                  // 0x0000 (0x0168) [0x0000000000400000] (CPF_NeedCtorLink)
	class APostProcessVolume*                          LastVolumeUsed;                                // 0x0168 (0x0008) [0x0000000000000000]               
	float                                              BlendStartTime;                                // 0x0170 (0x0004) [0x0000000000000000]               
	float                                              LastBlendTime;                                 // 0x0174 (0x0004) [0x0000000000000000]               
};

// ScriptStruct Engine.LocalPlayer.SynchronizedActorVisibilityHistory
// 0x0010
struct FSynchronizedActorVisibilityHistory
{
	struct FPointer                                    State;                                         // 0x0000 (0x0008) [0x0000000000000000]               
	struct FPointer                                    CriticalSection;                               // 0x0008 (0x0008) [0x0000000000000000]               
};

// ScriptStruct Engine.OnlineAuthInterface.AuthSession
// 0x0008 (0x0060 - 0x0068)
struct FAuthSession : FBaseAuthSession
{
	uint8_t                                            AuthStatus;                                    // 0x0060 (0x0001) [0x0000000000000002] (CPF_Const)   
	int32_t                                            AuthTicketUID;                                 // 0x0064 (0x0004) [0x0000000000000002] (CPF_Const)   
};

// ScriptStruct Engine.OnlineAuthInterface.LocalAuthSession
// 0x0004 (0x0060 - 0x0064)
struct FLocalAuthSession : FBaseAuthSession
{
	int32_t                                            SessionUID;                                    // 0x0060 (0x0004) [0x0000000000000002] (CPF_Const)   
};

// ScriptStruct Engine.MaterialExpression.ExpressionOutput
// 0x0024
struct FExpressionOutput
{
	class FString                                      OutputName;                                    // 0x0000 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	int32_t                                            Mask;                                          // 0x0010 (0x0004) [0x0000000000000000]               
	int32_t                                            MaskR;                                         // 0x0014 (0x0004) [0x0000000000000000]               
	int32_t                                            MaskG;                                         // 0x0018 (0x0004) [0x0000000000000000]               
	int32_t                                            MaskB;                                         // 0x001C (0x0004) [0x0000000000000000]               
	int32_t                                            MaskA;                                         // 0x0020 (0x0004) [0x0000000000000000]               
};

// ScriptStruct Engine.MaterialExpression.ExpressionInput
// 0x0038
struct FExpressionInput
{
	class UMaterialExpression*                         Expression;                                    // 0x0000 (0x0008) [0x0000000000000000]               
	int32_t                                            OutputIndex;                                   // 0x0008 (0x0004) [0x0000000000000000]               
	class FString                                      InputName;                                     // 0x0010 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	int32_t                                            Mask;                                          // 0x0020 (0x0004) [0x0000000000000000]               
	int32_t                                            MaskR;                                         // 0x0024 (0x0004) [0x0000000000000000]               
	int32_t                                            MaskG;                                         // 0x0028 (0x0004) [0x0000000000000000]               
	int32_t                                            MaskB;                                         // 0x002C (0x0004) [0x0000000000000000]               
	int32_t                                            MaskA;                                         // 0x0030 (0x0004) [0x0000000000000000]               
	int32_t                                            GCC64_Padding;                                 // 0x0034 (0x0004) [0x0000000000000000]               
};

// ScriptStruct Engine.MaterialExpressionCustom.CustomInput
// 0x0048
struct FCustomInput
{
	class FString                                      InputName;                                     // 0x0000 (0x0010) [0x0000000000400001] (CPF_Edit | CPF_NeedCtorLink)
	struct FExpressionInput                            Input;                                         // 0x0010 (0x0038) [0x0000020000400000] (CPF_NeedCtorLink)
};

// ScriptStruct Engine.MaterialExpressionLandscapeLayerBlend.LayerBlendInput
// 0x0090
struct FLayerBlendInput
{
	struct FName                                       LayerName;                                     // 0x0000 (0x0008) [0x0000000000000001] (CPF_Edit)    
	uint8_t                                            BlendType;                                     // 0x0008 (0x0001) [0x0000000000000001] (CPF_Edit)    
	struct FExpressionInput                            LayerInput;                                    // 0x0010 (0x0038) [0x0000020000400000] (CPF_NeedCtorLink)
	struct FExpressionInput                            HeightInput;                                   // 0x0048 (0x0038) [0x0000020000400000] (CPF_NeedCtorLink)
	float                                              PreviewWeight;                                 // 0x0080 (0x0004) [0x0000000000000001] (CPF_Edit)    
	struct FPointer                                    InstanceOverride;                              // 0x0088 (0x0008) [0x0000000000003002] (CPF_Const | CPF_Native | CPF_Transient)
};

// ScriptStruct Engine.MaterialExpressionMaterialFunctionCall.FunctionExpressionInput
// 0x0050
struct FFunctionExpressionInput
{
	class UMaterialExpressionFunctionInput*            ExpressionInput;                               // 0x0000 (0x0008) [0x0000000000002000] (CPF_Transient)
	struct FGuid                                       ExpressionInputId;                             // 0x0008 (0x0010) [0x0000000000000000]               
	struct FExpressionInput                            Input;                                         // 0x0018 (0x0038) [0x0000000000400000] (CPF_NeedCtorLink)
};

// ScriptStruct Engine.MaterialExpressionMaterialFunctionCall.FunctionExpressionOutput
// 0x0040
struct FFunctionExpressionOutput
{
	class UMaterialExpressionFunctionOutput*           ExpressionOutput;                              // 0x0000 (0x0008) [0x0000000000002000] (CPF_Transient)
	struct FGuid                                       ExpressionOutputId;                            // 0x0008 (0x0010) [0x0000000000000000]               
	struct FExpressionOutput                           Output;                                        // 0x0018 (0x0028) [0x0000000000400000] (CPF_NeedCtorLink)
};

// ScriptStruct Engine.MaterialInstanceTimeVarying.ParameterValueOverTime
// 0x0030
struct FParameterValueOverTime
{
	struct FGuid                                       ExpressionGUID;                                // 0x0000 (0x0010) [0x0000000000000000]               
	float                                              StartTime;                                     // 0x0010 (0x0004) [0x0000000000000000]               
	struct FName                                       ParameterName;                                 // 0x0014 (0x0008) [0x0000000000000001] (CPF_Edit)    
	uint32_t                                           bLoop : 1;                                     // 0x001C (0x0004) [0x0000000000000001] [0x00000001] (CPF_Edit)
	uint32_t                                           bAutoActivate : 1;                             // 0x001C (0x0004) [0x0000000000000001] [0x00000002] (CPF_Edit)
	float                                              CycleTime;                                     // 0x0020 (0x0004) [0x0000000000000001] (CPF_Edit)    
	uint32_t                                           bNormalizeTime : 1;                            // 0x0024 (0x0004) [0x0000000000000001] [0x00000001] (CPF_Edit)
	float                                              OffsetTime;                                    // 0x0028 (0x0004) [0x0000000000000001] (CPF_Edit)    
	uint32_t                                           bOffsetFromEnd : 1;                            // 0x002C (0x0004) [0x0000000000000001] [0x00000001] (CPF_Edit)
};

// ScriptStruct Engine.MaterialInstanceTimeVarying.FontParameterValueOverTime
// 0x000C (0x0030 - 0x003C)
struct FFontParameterValueOverTime : FParameterValueOverTime
{
	class UFont*                                       FontValue;                                     // 0x0030 (0x0008) [0x0000000000000001] (CPF_Edit)    
	int32_t                                            FontPage;                                      // 0x0038 (0x0004) [0x0000000000000001] (CPF_Edit)    
};

// ScriptStruct Engine.MaterialInstanceTimeVarying.ScalarParameterValueOverTime
// 0x0020 (0x0030 - 0x0050)
struct FScalarParameterValueOverTime : FParameterValueOverTime
{
	float                                              ParameterValue;                                // 0x0030 (0x0004) [0x0000000000000001] (CPF_Edit)    
	struct FInterpCurveFloat                           ParameterValueCurve;                           // 0x0038 (0x0018) [0x0000000000400001] (CPF_Edit | CPF_NeedCtorLink)
};

// ScriptStruct Engine.MaterialInstanceTimeVarying.TextureParameterValueOverTime
// 0x0008 (0x0030 - 0x0038)
struct FTextureParameterValueOverTime : FParameterValueOverTime
{
	class UTexture*                                    ParameterValue;                                // 0x0030 (0x0008) [0x0000000000000001] (CPF_Edit)    
};

// ScriptStruct Engine.MaterialInstanceTimeVarying.VectorParameterValueOverTime
// 0x0028 (0x0030 - 0x0058)
struct FVectorParameterValueOverTime : FParameterValueOverTime
{
	struct FLinearColor                                ParameterValue;                                // 0x0030 (0x0010) [0x0000000000000001] (CPF_Edit)    
	struct FInterpCurveVector                          ParameterValueCurve;                           // 0x0040 (0x0018) [0x0000000000400001] (CPF_Edit | CPF_NeedCtorLink)
};

// ScriptStruct Engine.MaterialInstanceTimeVarying.LinearColorParameterValueOverTime
// 0x0028 (0x0030 - 0x0058)
struct FLinearColorParameterValueOverTime : FParameterValueOverTime
{
	struct FLinearColor                                ParameterValue;                                // 0x0030 (0x0010) [0x0000000000000001] (CPF_Edit)    
	struct FInterpCurveLinearColor                     ParameterValueCurve;                           // 0x0040 (0x0018) [0x0000000000400001] (CPF_Edit | CPF_NeedCtorLink)
};

// ScriptStruct Engine.MicroTransactionBase.PurchaseInfo
// 0x0050
struct FPurchaseInfo
{
	class FString                                      Identifier;                                    // 0x0000 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	class FString                                      DisplayName;                                   // 0x0010 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	class FString                                      DisplayDescription;                            // 0x0020 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	class FString                                      DisplayPrice;                                  // 0x0030 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	class FString                                      CurrencyType;                                  // 0x0040 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
};

// ScriptStruct Engine.MorphNodeWeightBase.MorphNodeConn
// 0x001C
struct FMorphNodeConn
{
	TArray<class UMorphNodeBase*>                      ChildNodes;                                    // 0x0000 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FName                                       ConnName;                                      // 0x0010 (0x0008) [0x0000000000000000]               
	int32_t                                            DrawY;                                         // 0x0018 (0x0004) [0x0000000000000000]               
};

// ScriptStruct Engine.MorphNodeWeightByBoneAngle.BoneAngleMorph
// 0x0008
struct FBoneAngleMorph
{
	float                                              Angle;                                         // 0x0000 (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              TargetWeight;                                  // 0x0004 (0x0004) [0x0000000000000001] (CPF_Edit)    
};

// ScriptStruct Engine.NavigationHandle.PolySegmentSpan
// 0x0020
struct FPolySegmentSpan
{
	struct FPointer                                    Poly;                                          // 0x0000 (0x0008) [0x0000000000001000] (CPF_Native)  
	struct FVector                                     P1;                                            // 0x0008 (0x000C) [0x0000000000000000]               
	struct FVector                                     P2;                                            // 0x0014 (0x000C) [0x0000000000000000]               
};

// ScriptStruct Engine.NavigationHandle.NavMeshPathParams
// 0x0034
struct FNavMeshPathParams
{
	struct FPointer                                    Interface;                                     // 0x0000 (0x0008) [0x0000000000001000] (CPF_Native)  
	uint32_t                                           bCanMantle : 1;                                // 0x0008 (0x0004) [0x0000000000000000] [0x00000001] 
	uint32_t                                           bNeedsMantleValidityTest : 1;                  // 0x0008 (0x0004) [0x0000000000000000] [0x00000002] 
	uint32_t                                           bAbleToSearch : 1;                             // 0x0008 (0x0004) [0x0000000000000000] [0x00000004] 
	struct FVector                                     SearchExtent;                                  // 0x000C (0x000C) [0x0000000000000000]               
	float                                              SearchLaneMultiplier;                          // 0x0018 (0x0004) [0x0000000000000000]               
	struct FVector                                     SearchStart;                                   // 0x001C (0x000C) [0x0000000000000000]               
	float                                              MaxDropHeight;                                 // 0x0028 (0x0004) [0x0000000000000000]               
	float                                              MinWalkableZ;                                  // 0x002C (0x0004) [0x0000000000000000]               
	float                                              MaxHoverDistance;                              // 0x0030 (0x0004) [0x0000000000000000]               
};

// ScriptStruct Engine.NavigationHandle.EdgePointer
// 0x0008
struct FEdgePointer
{
	struct FPointer                                    Dummy;                                         // 0x0000 (0x0008) [0x0000000000001002] (CPF_Const | CPF_Native)
};

// ScriptStruct Engine.NavigationHandle.PathStore
// 0x0010
struct FPathStore
{
	TArray<struct FEdgePointer>                        EdgeList;                                      // 0x0000 (0x0010) [0x0000000000001000] (CPF_Native)  
};

// ScriptStruct Engine.NavMeshPathGoalEvaluator.BiasedGoalActor
// 0x000C
struct FBiasedGoalActor
{
	class AActor*                                      Goal;                                          // 0x0000 (0x0008) [0x0000000000000000]               
	int32_t                                            ExtraCost;                                     // 0x0008 (0x0004) [0x0000000000000000]               
};

// ScriptStruct Engine.NavMeshObstacle.CheckpointRecord
// 0x0004
struct ANavMeshObstacle_FCheckpointRecord
{
	uint32_t                                           bEnabled : 1;                                  // 0x0000 (0x0004) [0x0000000000000000] [0x00000001] 
};

// ScriptStruct Engine.OnlineLobbySettings.LobbyMetaData
// 0x0020
struct FLobbyMetaData
{
	class FString                                      Key;                                           // 0x0000 (0x0010) [0x0000000000500000] (CPF_NeedCtorLink)
	class FString                                      Value;                                         // 0x0010 (0x0010) [0x0000000000500000] (CPF_NeedCtorLink)
};

// ScriptStruct Engine.OnlineLobbySettings.BasicLobbyInfo
// 0x0020
struct FBasicLobbyInfo
{
	struct FUniqueLobbyId                              LobbyUID;                                      // 0x0000 (0x0010) [0x0000000000000000]               
	TArray<struct FLobbyMetaData>                      LobbySettings;                                 // 0x0010 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
};

// ScriptStruct Engine.OnlineLobbySettings.LobbyMember
// 0x0068
struct FLobbyMember
{
	struct FUniqueNetId                                PlayerUID;                                     // 0x0000 (0x0048) [0x0000000000400000] (CPF_NeedCtorLink)
	TArray<struct FLobbyMetaData>                      PlayerSettings;                                // 0x0048 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	class FString                                      OnlineName;                                    // 0x0058 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
};

// ScriptStruct Engine.OnlineLobbySettings.ActiveLobbyInfo
// 0x0010 (0x0020 - 0x0030)
struct FActiveLobbyInfo : FBasicLobbyInfo
{
	TArray<struct FLobbyMember>                        Members;                                       // 0x0020 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
};

// ScriptStruct Engine.OnlineLobbySettings.LobbyFilter
// 0x0028
struct FLobbyFilter
{
	class FString                                      Key;                                           // 0x0000 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	class FString                                      Value;                                         // 0x0010 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	uint8_t                                            Operator;                                      // 0x0020 (0x0001) [0x0000000000000000]               
	uint32_t                                           bNumeric : 1;                                  // 0x0024 (0x0004) [0x0000000000000000] [0x00000001] 
};

// ScriptStruct Engine.OnlineLobbySettings.LobbySortFilter
// 0x0014
struct FLobbySortFilter
{
	class FString                                      Key;                                           // 0x0000 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	int32_t                                            TargetValue;                                   // 0x0010 (0x0004) [0x0000000000000000]               
};

// ScriptStruct Engine.OnlineMatchmakingStats.MMStats_Timer
// 0x0010
struct FMMStats_Timer
{
	uint32_t                                           bInProgress : 1;                               // 0x0000 (0x0004) [0x0000000000000000] [0x00000001] 
	struct FDouble                                     MSecs;                                         // 0x0008 (0x0008) [0x0000000000000000]               
};

// ScriptStruct Engine.OnlinePlayerStorage.OnlineProfileSetting
// 0x0028
struct FOnlineProfileSetting
{
	uint8_t                                            Owner;                                         // 0x0000 (0x0001) [0x0000000000000000]               
	struct FSettingsProperty                           ProfileSetting;                                // 0x0008 (0x0020) [0x0000000000000000]               
};

// ScriptStruct Engine.OnlineRecentPlayersList.RecentParty
// 0x0058
struct FRecentParty
{
	struct FUniqueNetId                                PartyLeader;                                   // 0x0000 (0x0048) [0x0000000000400000] (CPF_NeedCtorLink)
	TArray<struct FUniqueNetId>                        PartyMembers;                                  // 0x0048 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
};

// ScriptStruct Engine.OnlineRecentPlayersList.CurrentPlayerMet
// 0x0050
struct FCurrentPlayerMet
{
	int32_t                                            TeamNum;                                       // 0x0000 (0x0004) [0x0000000000000000]               
	int32_t                                            Skill;                                         // 0x0004 (0x0004) [0x0000000000000000]               
	struct FUniqueNetId                                NetId;                                         // 0x0008 (0x0048) [0x0000000000400000] (CPF_NeedCtorLink)
};

// ScriptStruct Engine.OnlineStatsRead.OnlineStatsColumn
// 0x0018
struct FOnlineStatsColumn
{
	int32_t                                            ColumnNo;                                      // 0x0000 (0x0004) [0x0000000000000000]               
	struct FSettingsData                               StatValue;                                     // 0x0008 (0x0010) [0x0000000000000000]               
};

// ScriptStruct Engine.OnlineStatsRead.OnlineStatsRow
// 0x0088
struct FOnlineStatsRow
{
	struct FUniqueNetId                                PlayerID;                                      // 0x0000 (0x0048) [0x0000000000400002] (CPF_Const | CPF_NeedCtorLink)
	struct FSettingsData                               Rank;                                          // 0x0048 (0x0010) [0x0000000000000002] (CPF_Const)   
	class FString                                      NickName;                                      // 0x0058 (0x0010) [0x0000000000400002] (CPF_Const | CPF_NeedCtorLink)
	TArray<struct FOnlineStatsColumn>                  Columns;                                       // 0x0068 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	TArray<struct FSettingsData>                       StatValues;                                    // 0x0078 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
};

// ScriptStruct Engine.OnlineStatsRead.ColumnMetaData
// 0x0028
struct FColumnMetaData
{
	int32_t                                            Id;                                            // 0x0000 (0x0004) [0x0000000000000002] (CPF_Const)   
	class FString                                      Name;                                          // 0x0008 (0x0010) [0x0000000000400002] (CPF_Const | CPF_NeedCtorLink)
	class FString                                      ColumnName;                                    // 0x0018 (0x0010) [0x0000000000408002] (CPF_Const | CPF_Localized | CPF_NeedCtorLink)
};

// ScriptStruct Engine.ORS.TimerOptions
// 0x0004
struct FTimerOptions
{
	uint32_t                                           bLooping : 1;                                  // 0x0000 (0x0004) [0x0000000000000000] [0x00000001] 
};

// ScriptStruct Engine.ParticleEmitter.ParticleBurst
// 0x000C
struct FParticleBurst
{
	int32_t                                            Count;                                         // 0x0000 (0x0004) [0x0000000000000001] (CPF_Edit)    
	int32_t                                            CountLow;                                      // 0x0004 (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              Time;                                          // 0x0008 (0x0004) [0x0000000000000001] (CPF_Edit)    
};

// ScriptStruct Engine.ParticleModule.ParticleCurvePair
// 0x0018
struct FParticleCurvePair
{
	class FString                                      CurveName;                                     // 0x0000 (0x0010) [0x0000000000500000] (CPF_NeedCtorLink)
	class UObject*                                     CurveObject;                                   // 0x0010 (0x0008) [0x0000000000100000]               
};

// ScriptStruct Engine.ParticleModule.ParticleRandomSeedInfo
// 0x0020
struct FParticleRandomSeedInfo
{
	struct FName                                       ParameterName;                                 // 0x0000 (0x0008) [0x0000000000000001] (CPF_Edit)    
	uint32_t                                           bGetSeedFromInstance : 1;                      // 0x0008 (0x0004) [0x0000000000000001] [0x00000001] (CPF_Edit)
	uint32_t                                           bInstanceSeedIsIndex : 1;                      // 0x0008 (0x0004) [0x0000000000000001] [0x00000002] (CPF_Edit)
	uint32_t                                           bResetSeedOnEmitterLooping : 1;                // 0x0008 (0x0004) [0x0000000000000001] [0x00000004] (CPF_Edit)
	TArray<int32_t>                                    RandomSeeds;                                   // 0x0010 (0x0010) [0x0000000000400001] (CPF_Edit | CPF_NeedCtorLink)
};

// ScriptStruct Engine.ParticleModuleAttractorBoneSocket.AttractLocationBoneSocketInfo
// 0x0014
struct FAttractLocationBoneSocketInfo
{
	struct FName                                       BoneSocketName;                                // 0x0000 (0x0008) [0x0000000000000001] (CPF_Edit)    
	struct FVector                                     Offset;                                        // 0x0008 (0x000C) [0x0000000000000001] (CPF_Edit)    
};

// ScriptStruct Engine.ParticleModuleBeamModifier.BeamModifierOptions
// 0x0004
struct FBeamModifierOptions
{
	uint32_t                                           bModify : 1;                                   // 0x0000 (0x0004) [0x0000000000000001] [0x00000001] (CPF_Edit)
	uint32_t                                           bScale : 1;                                    // 0x0000 (0x0004) [0x0000000000000001] [0x00000002] (CPF_Edit)
	uint32_t                                           bLock : 1;                                     // 0x0000 (0x0004) [0x0000000000000001] [0x00000004] (CPF_Edit)
};

// ScriptStruct Engine.ParticleModuleCollision.ParticleAttractorCollisionAction
// 0x0018
struct FParticleAttractorCollisionAction
{
	uint8_t                                            Type;                                          // 0x0000 (0x0001) [0x0000000000000001] (CPF_Edit)    
	class FString                                      EventName;                                     // 0x0008 (0x0010) [0x0000000000400001] (CPF_Edit | CPF_NeedCtorLink)
};

// ScriptStruct Engine.ParticleModuleEventGenerator.ParticleEvent_GenerateInfo
// 0x0030
struct FParticleEvent_GenerateInfo
{
	uint8_t                                            Type;                                          // 0x0000 (0x0001) [0x0000000000000001] (CPF_Edit)    
	int32_t                                            Frequency;                                     // 0x0004 (0x0004) [0x0000000000000001] (CPF_Edit)    
	int32_t                                            LowFreq;                                       // 0x0008 (0x0004) [0x0000000000000001] (CPF_Edit)    
	int32_t                                            ParticleFrequency;                             // 0x000C (0x0004) [0x0000000000000001] (CPF_Edit)    
	uint32_t                                           FirstTimeOnly : 1;                             // 0x0010 (0x0004) [0x0000000000000001] [0x00000001] (CPF_Edit)
	uint32_t                                           LastTimeOnly : 1;                              // 0x0010 (0x0004) [0x0000000000000001] [0x00000002] (CPF_Edit)
	uint32_t                                           UseReflectedImpactVector : 1;                  // 0x0010 (0x0004) [0x0000000000000001] [0x00000004] (CPF_Edit)
	struct FName                                       CustomName;                                    // 0x0014 (0x0008) [0x0000000000000001] (CPF_Edit)    
	TArray<class UParticleModuleEventSendToGame*>      ParticleModuleEventsToSendToGame;              // 0x0020 (0x0010) [0x0000000004400001] (CPF_Edit | CPF_NeedCtorLink | CPF_EditInline)
};

// ScriptStruct Engine.ParticleModuleLocationBoneSocket.LocationBoneSocketInfo
// 0x0014
struct FLocationBoneSocketInfo
{
	struct FName                                       BoneSocketName;                                // 0x0000 (0x0008) [0x0000000000000001] (CPF_Edit)    
	struct FVector                                     Offset;                                        // 0x0008 (0x000C) [0x0000000000000001] (CPF_Edit)    
};

// ScriptStruct Engine.ParticleModuleOrbit.OrbitOptions
// 0x0004
struct FOrbitOptions
{
	uint32_t                                           bProcessDuringSpawn : 1;                       // 0x0000 (0x0004) [0x0000000000000001] [0x00000001] (CPF_Edit)
	uint32_t                                           bProcessDuringUpdate : 1;                      // 0x0000 (0x0004) [0x0000000000000001] [0x00000002] (CPF_Edit)
	uint32_t                                           bUseEmitterTime : 1;                           // 0x0000 (0x0004) [0x0000000000000001] [0x00000004] (CPF_Edit)
};

// ScriptStruct Engine.ParticleModuleParameterDynamic.EmitterDynamicParameter
// 0x0040
struct FEmitterDynamicParameter
{
	struct FName                                       ParamName;                                     // 0x0000 (0x0008) [0x0000000000020001] (CPF_Edit | CPF_EditConst)
	uint32_t                                           bUseEmitterTime : 1;                           // 0x0008 (0x0004) [0x0000000000000001] [0x00000001] (CPF_Edit)
	uint32_t                                           bSpawnTimeOnly : 1;                            // 0x0008 (0x0004) [0x0000000000000001] [0x00000002] (CPF_Edit)
	uint8_t                                            ValueMethod;                                   // 0x000C (0x0001) [0x0000000000000001] (CPF_Edit)    
	uint32_t                                           bScaleVelocityByParamValue : 1;                // 0x0010 (0x0004) [0x0000000000000001] [0x00000001] (CPF_Edit)
	struct FRawDistributionFloat                       ParamValue;                                    // 0x0018 (0x0028) [0x0000000000480001] (CPF_Edit | CPF_Component | CPF_NeedCtorLink)
};

// ScriptStruct Engine.ParticleModuleTypeDataBeam2.BeamTargetData
// 0x000C
struct FBeamTargetData
{
	struct FName                                       TargetName;                                    // 0x0000 (0x0008) [0x0000000000000001] (CPF_Edit)    
	float                                              TargetPercentage;                              // 0x0008 (0x0004) [0x0000000000000001] (CPF_Edit)    
};

// ScriptStruct Engine.ParticleModuleTypeDataPhysX.PhysXEmitterVerticalLodProperties
// 0x0010
struct FPhysXEmitterVerticalLodProperties
{
	float                                              WeightForFifo;                                 // 0x0000 (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              WeightForSpawnLod;                             // 0x0004 (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              SpawnLodRateVsLifeBias;                        // 0x0008 (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              RelativeFadeoutTime;                           // 0x000C (0x0004) [0x0000000000000001] (CPF_Edit)    
};

// ScriptStruct Engine.ParticleSystem.ParticleSystemLOD
// 0x0004
struct FParticleSystemLOD
{
	uint32_t                                           bLit : 1;                                      // 0x0000 (0x0004) [0x0000000000000001] [0x00000001] (CPF_Edit)
};

// ScriptStruct Engine.ParticleSystem.LODSoloTrack
// 0x0010
struct FLODSoloTrack
{
	TArray<uint8_t>                                    SoloEnableSetting;                             // 0x0000 (0x0010) [0x0000000000402000] (CPF_Transient | CPF_NeedCtorLink)
};

// ScriptStruct Engine.ParticleSystemReplay.ParticleEmitterReplayFrame
// 0x0010
struct FParticleEmitterReplayFrame
{
	int32_t                                            EmitterType;                                   // 0x0000 (0x0004) [0x0000000000001002] (CPF_Const | CPF_Native)
	int32_t                                            OriginalEmitterIndex;                          // 0x0004 (0x0004) [0x0000000000001002] (CPF_Const | CPF_Native)
	struct FPointer                                    FrameState;                                    // 0x0008 (0x0008) [0x0000000000001002] (CPF_Const | CPF_Native)
};

// ScriptStruct Engine.ParticleSystemReplay.ParticleSystemReplayFrame
// 0x0010
struct FParticleSystemReplayFrame
{
	TArray<struct FParticleEmitterReplayFrame>         Emitters;                                      // 0x0000 (0x0010) [0x0000000000001002] (CPF_Const | CPF_Native)
};

// ScriptStruct Engine.PBRuleNodeBase.PBRuleLink
// 0x0014
struct FPBRuleLink
{
	class UPBRuleNodeBase*                             NextRule;                                      // 0x0000 (0x0008) [0x0000000004400009] (CPF_Edit | CPF_ExportObject | CPF_NeedCtorLink | CPF_EditInline)
	struct FName                                       LinkName;                                      // 0x0008 (0x0008) [0x0000000000000001] (CPF_Edit)    
	int32_t                                            DrawY;                                         // 0x0010 (0x0004) [0x0000000800000000]               
};

// ScriptStruct Engine.ProcBuilding.PBMaterialParam
// 0x0018
struct FPBMaterialParam
{
	struct FName                                       ParamName;                                     // 0x0000 (0x0008) [0x0000000000000001] (CPF_Edit)    
	struct FLinearColor                                Color;                                         // 0x0008 (0x0010) [0x0000000000000001] (CPF_Edit)    
};

// ScriptStruct Engine.ProcBuildingRuleset.PBParamSwatch
// 0x0018
struct FPBParamSwatch
{
	struct FName                                       SwatchName;                                    // 0x0000 (0x0008) [0x0000000000000001] (CPF_Edit)    
	TArray<struct FPBMaterialParam>                    Params;                                        // 0x0008 (0x0010) [0x0000000000400001] (CPF_Edit | CPF_NeedCtorLink)
};

// ScriptStruct Engine.ProcBuildingRuleset.PBVariationInfo
// 0x000C
struct FPBVariationInfo
{
	struct FName                                       VariationName;                                 // 0x0000 (0x0008) [0x0000000000000001] (CPF_Edit)    
	uint32_t                                           bMeshOnTopOfFacePoly : 1;                      // 0x0008 (0x0004) [0x0000000000000001] [0x00000001] (CPF_Edit)
};

// ScriptStruct Engine.ProcBuilding.PBFracMeshCompInfo
// 0x000C
struct FPBFracMeshCompInfo
{
	class UFracturedStaticMeshComponent*               FracMeshComp;                                  // 0x0000 (0x0008) [0x0000000004080008] (CPF_ExportObject | CPF_Component | CPF_EditInline)
	int32_t                                            TopLevelScopeIndex;                            // 0x0008 (0x0004) [0x0000000000000000]               
};

// ScriptStruct Engine.ProcBuilding.PBFaceUVInfo
// 0x0010
struct FPBFaceUVInfo
{
	struct FVector2D                                   Offset;                                        // 0x0000 (0x0008) [0x0000000000000000]               
	struct FVector2D                                   Size;                                          // 0x0008 (0x0008) [0x0000000000000000]               
};

// ScriptStruct Engine.ProcBuilding.PBMemUsageInfo
// 0x002C
struct FPBMemUsageInfo
{
	class AProcBuilding*                               Building;                                      // 0x0000 (0x0008) [0x0000000000000000]               
	class UProcBuildingRuleset*                        Ruleset;                                       // 0x0008 (0x0008) [0x0000000000000000]               
	int32_t                                            NumStaticMeshComponent;                        // 0x0010 (0x0004) [0x0000000000000000]               
	int32_t                                            NumInstancedStaticMeshComponents;              // 0x0014 (0x0004) [0x0000000000000000]               
	int32_t                                            NumInstancedTris;                              // 0x0018 (0x0004) [0x0000000000000000]               
	int32_t                                            LightmapMemBytes;                              // 0x001C (0x0004) [0x0000000000000000]               
	int32_t                                            ShadowmapMemBytes;                             // 0x0020 (0x0004) [0x0000000000000000]               
	int32_t                                            LODDiffuseMemBytes;                            // 0x0024 (0x0004) [0x0000000000000000]               
	int32_t                                            LODLightingMemBytes;                           // 0x0028 (0x0004) [0x0000000000000000]               
};

// ScriptStruct Engine.ProcBuilding.PBMeshCompInfo
// 0x000C
struct FPBMeshCompInfo
{
	class UStaticMeshComponent*                        MeshComp;                                      // 0x0000 (0x0008) [0x0000000004080008] (CPF_ExportObject | CPF_Component | CPF_EditInline)
	int32_t                                            TopLevelScopeIndex;                            // 0x0008 (0x0004) [0x0000000000000000]               
};

// ScriptStruct Engine.ProcBuilding.PBScopeProcessInfo
// 0x001C
struct FPBScopeProcessInfo
{
	class AProcBuilding*                               OwningBuilding;                                // 0x0000 (0x0008) [0x0000000000000000]               
	class UProcBuildingRuleset*                        Ruleset;                                       // 0x0008 (0x0008) [0x0000000000000000]               
	struct FName                                       RulesetVariation;                              // 0x0010 (0x0008) [0x0000000000000000]               
	uint32_t                                           bGenerateLODPoly : 1;                          // 0x0018 (0x0004) [0x0000000000000000] [0x00000001] 
	uint32_t                                           bPartOfNonRect : 1;                            // 0x0018 (0x0004) [0x0000000000000000] [0x00000002] 
};

// ScriptStruct Engine.ProcBuilding.PBScope2D
// 0x0048
struct FPBScope2D
{
	struct FMatrix                                     ScopeFrame;                                    // 0x0000 (0x0040) [0x0000000000000000]               
	float                                              DimX;                                          // 0x0040 (0x0004) [0x0000000000000000]               
	float                                              DimZ;                                          // 0x0044 (0x0004) [0x0000000000000000]               
};

// ScriptStruct Engine.ProcBuilding.PBEdgeInfo
// 0x002C
struct FPBEdgeInfo
{
	struct FVector                                     EdgeEnd;                                       // 0x0000 (0x000C) [0x0000000000000000]               
	struct FVector                                     EdgeStart;                                     // 0x000C (0x000C) [0x0000000000000000]               
	int32_t                                            ScopeAIndex;                                   // 0x0018 (0x0004) [0x0000000000000000]               
	uint8_t                                            ScopeAEdge;                                    // 0x001C (0x0001) [0x0000000000000000]               
	int32_t                                            ScopeBIndex;                                   // 0x0020 (0x0004) [0x0000000000000000]               
	uint8_t                                            ScopeBEdge;                                    // 0x0024 (0x0001) [0x0000000000000000]               
	float                                              EdgeAngle;                                     // 0x0028 (0x0004) [0x0000000000000000]               
};

// ScriptStruct Engine.PBRuleNodeCorner.RBCornerAngleInfo
// 0x0008
struct FRBCornerAngleInfo
{
	float                                              Angle;                                         // 0x0000 (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              CornerSize;                                    // 0x0004 (0x0004) [0x0000000000000001] (CPF_Edit)    
};

// ScriptStruct Engine.PBRuleNodeEdgeAngle.RBEdgeAngleInfo
// 0x0004
struct FRBEdgeAngleInfo
{
	float                                              Angle;                                         // 0x0000 (0x0004) [0x0000000000000001] (CPF_Edit)    
};

// ScriptStruct Engine.PBRuleNodeMesh.BuildingMatOverrides
// 0x0010
struct FBuildingMatOverrides
{
	TArray<class UMaterialInterface*>                  MaterialOptions;                               // 0x0000 (0x0010) [0x0000000000400001] (CPF_Edit | CPF_NeedCtorLink)
};

// ScriptStruct Engine.PBRuleNodeMesh.BuildingMeshInfo
// 0x0050
struct FBuildingMeshInfo
{
	class UStaticMesh*                                 Mesh;                                          // 0x0000 (0x0008) [0x0000000000000001] (CPF_Edit)    
	float                                              DimX;                                          // 0x0008 (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              DimZ;                                          // 0x000C (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              Chance;                                        // 0x0010 (0x0004) [0x0000000000000001] (CPF_Edit)    
	class UDistributionVector*                         Translation;                                   // 0x0018 (0x0008) [0x0000000004080009] (CPF_Edit | CPF_ExportObject | CPF_Component | CPF_EditInline)
	class UDistributionVector*                         Rotation;                                      // 0x0020 (0x0008) [0x0000000004080009] (CPF_Edit | CPF_ExportObject | CPF_Component | CPF_EditInline)
	uint32_t                                           bMeshScaleTranslation : 1;                     // 0x0028 (0x0004) [0x0000000000000001] [0x00000001] (CPF_Edit)
	uint32_t                                           bOverrideMeshLightMapRes : 1;                  // 0x0028 (0x0004) [0x0000000000000001] [0x00000002] (CPF_Edit)
	int32_t                                            OverriddenMeshLightMapRes;                     // 0x002C (0x0004) [0x0000000000000001] (CPF_Edit)    
	TArray<class UMaterialInterface*>                  MaterialOverrides;                             // 0x0030 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	TArray<struct FBuildingMatOverrides>               SectionOverrides;                              // 0x0040 (0x0010) [0x0000000000400001] (CPF_Edit | CPF_NeedCtorLink)
};

// ScriptStruct Engine.PBRuleNodeSplit.RBSplitInfo
// 0x0014
struct FRBSplitInfo
{
	uint32_t                                           bFixSize : 1;                                  // 0x0000 (0x0004) [0x0000000000000001] [0x00000001] (CPF_Edit)
	float                                              FixedSize;                                     // 0x0004 (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              ExpandRatio;                                   // 0x0008 (0x0004) [0x0000000000000001] (CPF_Edit)    
	struct FName                                       SplitName;                                     // 0x000C (0x0008) [0x0000000000000001] (CPF_Edit)    
};

// ScriptStruct Engine.PitchTekSettings.PitchTekTextureDecalSettings
// 0x0020
struct FPitchTekTextureDecalSettings
{
	uint32_t                                           bDrawColorDecal : 1;                           // 0x0000 (0x0004) [0x0000000000000001] [0x00000001] (CPF_Edit)
	float                                              ColorTextureScale;                             // 0x0004 (0x0004) [0x0000000000000001] (CPF_Edit)    
	class UTexture2D*                                  ColorTexture;                                  // 0x0008 (0x0008) [0x0000000000000001] (CPF_Edit)    
	uint32_t                                           bDrawDataDecal : 1;                            // 0x0010 (0x0004) [0x0000000000000001] [0x00000001] (CPF_Edit)
	float                                              DataTextureScale;                              // 0x0014 (0x0004) [0x0000000000000001] (CPF_Edit)    
	class UTexture2D*                                  DataTexture;                                   // 0x0018 (0x0008) [0x0000000000000001] (CPF_Edit)    
};

// ScriptStruct Engine.PitchTekSettings.PitchTekClearSettings
// 0x0010
struct FPitchTekClearSettings
{
	uint32_t                                           bClearColorTargetEveryFrame : 1;               // 0x0000 (0x0004) [0x0000000000000001] [0x00000001] (CPF_Edit)
	struct FColor                                      ColorTargetClearColor;                         // 0x0004 (0x0004) [0x0000000000000001] (CPF_Edit)    
	uint32_t                                           bClearDataTargetEveryFrame : 1;                // 0x0008 (0x0004) [0x0000000000000001] [0x00000001] (CPF_Edit)
	struct FColor                                      DataTargetClearColor;                          // 0x000C (0x0004) [0x0000000000000001] (CPF_Edit)    
};

// ScriptStruct Engine.PlayerReplicationInfo.PRIRemoteUserData
// 0x0010
struct FPRIRemoteUserData
{
	class FString                                      UserId;                                        // 0x0000 (0x0010) [0x0000000000500000] (CPF_NeedCtorLink)
};

// ScriptStruct Engine.PlayerReplicationInfo.NetPacketStats
// 0x001C
struct FNetPacketStats
{
	int32_t                                            OutPackets;                                    // 0x0000 (0x0004) [0x0000000000000000]               
	int32_t                                            InPackets;                                     // 0x0004 (0x0004) [0x0000000000000000]               
	int32_t                                            OutPacketsLost;                                // 0x0008 (0x0004) [0x0000000000000000]               
	int32_t                                            InPacketsLost;                                 // 0x000C (0x0004) [0x0000000000000000]               
	int32_t                                            OutOfOrderPackets;                             // 0x0010 (0x0004) [0x0000000000000000]               
	int32_t                                            OutBytes;                                      // 0x0014 (0x0004) [0x0000000000000000]               
	int32_t                                            InBytes;                                       // 0x0018 (0x0004) [0x0000000000000000]               
};

// ScriptStruct Engine.PointLightToggleable.CheckpointRecord
// 0x0004
struct APointLightToggleable_FCheckpointRecord
{
	uint32_t                                           bEnabled : 1;                                  // 0x0000 (0x0004) [0x0000000000000000] [0x00000001] 
};

// ScriptStruct Engine.Sequence.ActivateOp
// 0x0018
struct FActivateOp
{
	class USequenceOp*                                 ActivatorOp;                                   // 0x0000 (0x0008) [0x0000000000000000]               
	class USequenceOp*                                 Op;                                            // 0x0008 (0x0008) [0x0000000000000000]               
	int32_t                                            InputIdx;                                      // 0x0010 (0x0004) [0x0000000000000000]               
	float                                              RemainingDelay;                                // 0x0014 (0x0004) [0x0000000000000000]               
};

// ScriptStruct Engine.Sequence.QueuedActivationInfo
// 0x002C
struct FQueuedActivationInfo
{
	class USequenceEvent*                              ActivatedEvent;                                // 0x0000 (0x0008) [0x0000000000000000]               
	class AActor*                                      InOriginator;                                  // 0x0008 (0x0008) [0x0000000000000000]               
	class AActor*                                      InInstigator;                                  // 0x0010 (0x0008) [0x0000000000000000]               
	TArray<int32_t>                                    ActivateIndices;                               // 0x0018 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	uint32_t                                           bPushTop : 1;                                  // 0x0028 (0x0004) [0x0000000000000000] [0x00000001] 
};

// ScriptStruct Engine.RB_BodyInstance.BulletBodyData
// 0x0010
struct FBulletBodyData
{
	int32_t                                            SceneIndex;                                    // 0x0000 (0x0004) [0x0000000000000000]               
	struct FPointer                                    Body;                                          // 0x0008 (0x0008) [0x0000000000000000]               
};

// ScriptStruct Engine.RB_BodySetup.KCachedConvexDataElement
// 0x0010
struct FKCachedConvexDataElement
{
	TArray<uint8_t>                                    ConvexElementData;                             // 0x0000 (0x0010) [0x0000000000001000] (CPF_Native)  
};

// ScriptStruct Engine.RB_BodySetup.KCachedConvexData
// 0x0010
struct FKCachedConvexData
{
	TArray<struct FKCachedConvexDataElement>           CachedConvexElements;                          // 0x0000 (0x0010) [0x0000000000001000] (CPF_Native)  
};

// ScriptStruct Engine.RB_ConstraintSetup.LinearDOFSetup
// 0x0008
struct FLinearDOFSetup
{
	uint8_t                                            bLimited;                                      // 0x0000 (0x0001) [0x0000000000000001] (CPF_Edit)    
	float                                              LimitSize;                                     // 0x0004 (0x0004) [0x0000000000000001] (CPF_Edit)    
};

// ScriptStruct Engine.SeqAct_Interp.CameraCutInfo
// 0x0010
struct FCameraCutInfo
{
	struct FVector                                     Location;                                      // 0x0000 (0x000C) [0x0000000000000000]               
	float                                              TimeStamp;                                     // 0x000C (0x0004) [0x0000000000000000]               
};

// ScriptStruct Engine.SeqAct_Interp.SavedTransform
// 0x0018
struct FSavedTransform
{
	struct FVector                                     Location;                                      // 0x0000 (0x000C) [0x0000000000000000]               
	struct FRotator                                    Rotation;                                      // 0x000C (0x000C) [0x0000000000000000]               
};

// ScriptStruct Engine.SeqAct_MultiLevelStreaming.LevelStreamingNameCombo
// 0x0010
struct FLevelStreamingNameCombo
{
	class ULevelStreaming*                             Level;                                         // 0x0000 (0x0008) [0x0000000000000002] (CPF_Const)   
	struct FName                                       LevelName;                                     // 0x0008 (0x0008) [0x0000000000000003] (CPF_Edit | CPF_Const)
};

// ScriptStruct Engine.SeqAct_RangeSwitch.SwitchRange
// 0x0008
struct FSwitchRange
{
	int32_t                                            Min;                                           // 0x0000 (0x0004) [0x0000000000000001] (CPF_Edit)    
	int32_t                                            Max;                                           // 0x0004 (0x0004) [0x0000000000000001] (CPF_Edit)    
};

// ScriptStruct Engine.WorldAttractor.WorldAttractorData
// 0x0020
struct FWorldAttractorData
{
	uint32_t                                           bEnabled : 1;                                  // 0x0000 (0x0004) [0x0000000000000000] [0x00000001] 
	struct FVector                                     Location;                                      // 0x0004 (0x000C) [0x0000000000000000]               
	uint8_t                                            FalloffType;                                   // 0x0010 (0x0001) [0x0000000000000000]               
	float                                              FalloffExponent;                               // 0x0014 (0x0004) [0x0000000000000000]               
	float                                              Range;                                         // 0x0018 (0x0004) [0x0000000000000000]               
	float                                              Strength;                                      // 0x001C (0x0004) [0x0000000000000000]               
};

// ScriptStruct Engine.SeqCond_SwitchClass.SwitchClassInfo
// 0x0009
struct FSwitchClassInfo
{
	struct FName                                       ClassName;                                     // 0x0000 (0x0008) [0x0000000000000001] (CPF_Edit)    
	uint8_t                                            bFallThru;                                     // 0x0008 (0x0001) [0x0000000000000001] (CPF_Edit)    
};

// ScriptStruct Engine.SeqCond_SwitchObject.SwitchObjectCase
// 0x000C
struct FSwitchObjectCase
{
	class UObject*                                     ObjectValue;                                   // 0x0000 (0x0008) [0x0000000000000001] (CPF_Edit)    
	uint32_t                                           bFallThru : 1;                                 // 0x0008 (0x0004) [0x0000000000000001] [0x00000001] (CPF_Edit)
	uint32_t                                           bDefaultValue : 1;                             // 0x0008 (0x0004) [0x0000000000000001] [0x00000002] (CPF_Edit)
};

// ScriptStruct Engine.SkeletalMesh.SoftBodyTetraLink
// 0x0010
struct FSoftBodyTetraLink
{
	int32_t                                            Index;                                         // 0x0000 (0x0004) [0x0000000000000000]               
	struct FVector                                     Bary;                                          // 0x0004 (0x000C) [0x0000000000000000]               
};

// ScriptStruct Engine.SkeletalMesh.SoftBodySpecialBoneInfo
// 0x0020
struct FSoftBodySpecialBoneInfo
{
	struct FName                                       BoneName;                                      // 0x0000 (0x0008) [0x0000000000000001] (CPF_Edit)    
	uint8_t                                            BoneType;                                      // 0x0008 (0x0001) [0x0000000000000001] (CPF_Edit)    
	TArray<int32_t>                                    AttachedVertexIndices;                         // 0x0010 (0x0010) [0x0000000000400002] (CPF_Const | CPF_NeedCtorLink)
};

// ScriptStruct Engine.SkeletalMesh.ClothSpecialBoneInfo
// 0x0020
struct FClothSpecialBoneInfo
{
	struct FName                                       BoneName;                                      // 0x0000 (0x0008) [0x0000000000000001] (CPF_Edit)    
	uint8_t                                            BoneType;                                      // 0x0008 (0x0001) [0x0000000000000001] (CPF_Edit)    
	TArray<int32_t>                                    AttachedVertexIndices;                         // 0x0010 (0x0010) [0x0000000000400002] (CPF_Const | CPF_NeedCtorLink)
};

// ScriptStruct Engine.SkeletalMesh.SkeletalMeshOptimizationSettings
// 0x0028
struct FSkeletalMeshOptimizationSettings
{
	float                                              MaxDeviationPercentage;                        // 0x0000 (0x0004) [0x0000000000000000]               
	uint8_t                                            SilhouetteImportance;                          // 0x0004 (0x0001) [0x0000000000000000]               
	uint8_t                                            TextureImportance;                             // 0x0005 (0x0001) [0x0000000000000000]               
	uint8_t                                            ShadingImportance;                             // 0x0006 (0x0001) [0x0000000000000000]               
	uint8_t                                            SkinningImportance;                            // 0x0007 (0x0001) [0x0000000000000000]               
	uint8_t                                            NormalMode;                                    // 0x0008 (0x0001) [0x0000000020000000]  CPF_Deprecated)
	float                                              BoneReductionRatio;                            // 0x000C (0x0004) [0x0000000000000000]               
	int32_t                                            MaxBonesPerVertex;                             // 0x0010 (0x0004) [0x0000000000000000]               
	uint8_t                                            ReductionMethod;                               // 0x0014 (0x0001) [0x0000000000000000]               
	float                                              NumOfTrianglesPercentage;                      // 0x0018 (0x0004) [0x0000000000000000]               
	float                                              WeldingThreshold;                              // 0x001C (0x0004) [0x0000000000000000]               
	uint32_t                                           bRecalcNormals : 1;                            // 0x0020 (0x0004) [0x0000000000000000] [0x00000001] 
	float                                              NormalsThreshold;                              // 0x0024 (0x0004) [0x0000000000000000]               
};

// ScriptStruct Engine.SkeletalMesh.SkeletalMeshLODDistanceInfo
// 0x0008
struct FSkeletalMeshLODDistanceInfo
{
	float                                              DisplayFactor;                                 // 0x0000 (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              LODHysteresis;                                 // 0x0004 (0x0004) [0x0000000000000001] (CPF_Edit)    
};

// ScriptStruct Engine.SkeletalMesh.TriangleSortSettings
// 0x000C
struct FTriangleSortSettings
{
	uint8_t                                            TriangleSorting;                               // 0x0000 (0x0001) [0x0000000000000001] (CPF_Edit)    
	uint8_t                                            CustomLeftRightAxis;                           // 0x0001 (0x0001) [0x0000000000000001] (CPF_Edit)    
	struct FName                                       CustomLeftRightBoneName;                       // 0x0004 (0x0008) [0x0000000000000001] (CPF_Edit)    
};

// ScriptStruct Engine.SkeletalMesh.SkeletalMeshLODInfo
// 0x004C
struct FSkeletalMeshLODInfo
{
	float                                              DisplayFactor;                                 // 0x0000 (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              LODHysteresis;                                 // 0x0004 (0x0004) [0x0000000000000001] (CPF_Edit)    
	TArray<int32_t>                                    LODMaterialMap;                                // 0x0008 (0x0010) [0x0000000000400041] (CPF_Edit | CPF_EditConstArray | CPF_NeedCtorLink)
	TArray<uint32_t>                                   bEnableShadowCasting;                          // 0x0018 (0x0010) [0x0000000000400041] (CPF_Edit | CPF_EditConstArray | CPF_NeedCtorLink)
	TArray<uint8_t>                                    TriangleSorting;                               // 0x0028 (0x0010) [0x0000000020400000] (CPF_NeedCtorLink | CPF_Deprecated)
	TArray<struct FTriangleSortSettings>               TriangleSortSettings;                          // 0x0038 (0x0010) [0x0000000000400041] (CPF_Edit | CPF_EditConstArray | CPF_NeedCtorLink)
	uint32_t                                           bDisableCompressions : 1;                      // 0x0048 (0x0004) [0x0000000000000001] [0x00000001] (CPF_Edit)
	uint32_t                                           bHasBeenSimplified : 1;                        // 0x0048 (0x0004) [0x0000000000000000] [0x00000002] 
};

// ScriptStruct Engine.SkeletalMesh.BoneMirrorExport
// 0x0011
struct FBoneMirrorExport
{
	struct FName                                       BoneName;                                      // 0x0000 (0x0008) [0x0000000000000001] (CPF_Edit)    
	struct FName                                       SourceBoneName;                                // 0x0008 (0x0008) [0x0000000000000001] (CPF_Edit)    
	uint8_t                                            BoneFlipAxis;                                  // 0x0010 (0x0001) [0x0000000000000001] (CPF_Edit)    
};

// ScriptStruct Engine.SkeletalMesh.BoneMirrorInfo
// 0x0005
struct FBoneMirrorInfo
{
	int32_t                                            SourceIndex;                                   // 0x0000 (0x0004) [0x0000000000000001] (CPF_Edit)    
	uint8_t                                            BoneFlipAxis;                                  // 0x0004 (0x0001) [0x0000000000000001] (CPF_Edit)    
};

// ScriptStruct Engine.SkeletalMesh.ApexClothingLodInfo
// 0x0010
struct FApexClothingLodInfo
{
	TArray<int32_t>                                    ClothingSectionInfo;                           // 0x0000 (0x0010) [0x0000000000400041] (CPF_Edit | CPF_EditConstArray | CPF_NeedCtorLink)
};

// ScriptStruct Engine.SkeletalMesh.ApexClothingAssetInfo
// 0x0018
struct FApexClothingAssetInfo
{
	TArray<struct FApexClothingLodInfo>                ClothingLodInfo;                               // 0x0000 (0x0010) [0x0000000000400041] (CPF_Edit | CPF_EditConstArray | CPF_NeedCtorLink)
	struct FName                                       ClothingAssetName;                             // 0x0010 (0x0008) [0x0000000000000000]               
};

// ScriptStruct Engine.SkeletalMeshActor.SkelMeshActorControlTarget
// 0x0010
struct FSkelMeshActorControlTarget
{
	struct FName                                       ControlName;                                   // 0x0000 (0x0008) [0x0000000000000001] (CPF_Edit)    
	class AActor*                                      TargetActor;                                   // 0x0008 (0x0008) [0x0000000000000001] (CPF_Edit)    
};

// ScriptStruct Engine.SkeletalMeshActor.CheckpointRecord
// 0x001C
struct ASkeletalMeshActor_FCheckpointRecord
{
	uint32_t                                           bReplicated : 1;                               // 0x0000 (0x0004) [0x0000000000000000] [0x00000001] 
	uint32_t                                           bHidden : 1;                                   // 0x0000 (0x0004) [0x0000000000000000] [0x00000002] 
	uint32_t                                           bSavedPosition : 1;                            // 0x0000 (0x0004) [0x0000000000000000] [0x00000004] 
	struct FVector                                     Location;                                      // 0x0004 (0x000C) [0x0000000000000000]               
	struct FRotator                                    Rotation;                                      // 0x0010 (0x000C) [0x0000000000000000]               
};

// ScriptStruct Engine.SkeletalMeshActorBasedOnExtremeContent.SkelMaterialSetterDatum
// 0x0010
struct FSkelMaterialSetterDatum
{
	int32_t                                            MaterialIndex;                                 // 0x0000 (0x0004) [0x0000000000000001] (CPF_Edit)    
	class UMaterialInterface*                          TheMaterial;                                   // 0x0008 (0x0008) [0x0000000000000001] (CPF_Edit)    
};

// ScriptStruct Engine.SoundClass.SoundClassEditorData
// 0x0008
struct FSoundClassEditorData
{
	int32_t                                            NodePosX;                                      // 0x0000 (0x0004) [0x0000000000001002] (CPF_Const | CPF_Native)
	int32_t                                            NodePosY;                                      // 0x0004 (0x0004) [0x0000000000001002] (CPF_Const | CPF_Native)
};

// ScriptStruct Engine.SoundClass.SoundClassProperties
// 0x0020
struct FSoundClassProperties
{
	float                                              Volume;                                        // 0x0000 (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              Pitch;                                         // 0x0004 (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              StereoBleed;                                   // 0x0008 (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              LFEBleed;                                      // 0x000C (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              VoiceCenterChannelVolume;                      // 0x0010 (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              RadioFilterVolume;                             // 0x0014 (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              RadioFilterVolumeThreshold;                    // 0x0018 (0x0004) [0x0000000000000001] (CPF_Edit)    
	uint32_t                                           bApplyEffects : 1;                             // 0x001C (0x0004) [0x0000000000000001] [0x00000001] (CPF_Edit)
	uint32_t                                           bAlwaysPlay : 1;                               // 0x001C (0x0004) [0x0000000000000001] [0x00000002] (CPF_Edit)
	uint32_t                                           bIsUISound : 1;                                // 0x001C (0x0004) [0x0000000000000001] [0x00000004] (CPF_Edit)
	uint32_t                                           bIsMusic : 1;                                  // 0x001C (0x0004) [0x0000000000000001] [0x00000008] (CPF_Edit)
	uint32_t                                           bReverb : 1;                                   // 0x001C (0x0004) [0x0000000000000001] [0x00000010] (CPF_Edit)
	uint32_t                                           bCenterChannelOnly : 1;                        // 0x001C (0x0004) [0x0000000000000001] [0x00000020] (CPF_Edit)
	uint32_t                                           bApplyAmbientVolumes : 1;                      // 0x001C (0x0004) [0x0000000000000001] [0x00000040] (CPF_Edit)
};

// ScriptStruct Engine.SoundMode.SoundClassAdjuster
// 0x001C
struct FSoundClassAdjuster
{
	uint8_t                                            SoundClassName;                                // 0x0000 (0x0001) [0x0000000000002001] (CPF_Edit | CPF_Transient)
	struct FName                                       SoundClass;                                    // 0x0004 (0x0008) [0x0000000000020001] (CPF_Edit | CPF_EditConst)
	float                                              VolumeAdjuster;                                // 0x000C (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              PitchAdjuster;                                 // 0x0010 (0x0004) [0x0000000000000001] (CPF_Edit)    
	uint32_t                                           bApplyToChildren : 1;                          // 0x0014 (0x0004) [0x0000000000000001] [0x00000001] (CPF_Edit)
	float                                              VoiceCenterChannelVolumeAdjuster;              // 0x0018 (0x0004) [0x0000000000000001] (CPF_Edit)    
};

// ScriptStruct Engine.SoundMode.AudioEQEffect
// 0x0024
struct FAudioEQEffect
{
	struct FDouble                                     RootTime;                                      // 0x0000 (0x0008) [0x0000000000003000] (CPF_Native | CPF_Transient)
	float                                              HFFrequency;                                   // 0x0008 (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              HFGain;                                        // 0x000C (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              MFCutoffFrequency;                             // 0x0010 (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              MFBandwidth;                                   // 0x0014 (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              MFGain;                                        // 0x0018 (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              LFFrequency;                                   // 0x001C (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              LFGain;                                        // 0x0020 (0x0004) [0x0000000000000001] (CPF_Edit)    
};

// ScriptStruct Engine.SoundNodeDistanceCrossFade.DistanceDatum
// 0x0068
struct FDistanceDatum
{
	float                                              FadeInDistanceStart;                           // 0x0000 (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              FadeInDistanceEnd;                             // 0x0004 (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              FadeOutDistanceStart;                          // 0x0008 (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              FadeOutDistanceEnd;                            // 0x000C (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              Volume;                                        // 0x0010 (0x0004) [0x0000000000000001] (CPF_Edit)    
	struct FRawDistributionFloat                       FadeInDistance;                                // 0x0018 (0x0028) [0x0000000020480000] (CPF_Component | CPF_NeedCtorLink | CPF_Deprecated)
	struct FRawDistributionFloat                       FadeOutDistance;                               // 0x0040 (0x0028) [0x0000000020480000] (CPF_Component | CPF_NeedCtorLink | CPF_Deprecated)
};

// ScriptStruct Engine.SpeechRecognition.RecognisableWord
// 0x0028
struct FRecognisableWord
{
	int32_t                                            Id;                                            // 0x0000 (0x0004) [0x0000000000000001] (CPF_Edit)    
	class FString                                      ReferenceWord;                                 // 0x0008 (0x0010) [0x0000000000400001] (CPF_Edit | CPF_NeedCtorLink)
	class FString                                      PhoneticWord;                                  // 0x0018 (0x0010) [0x0000000000400001] (CPF_Edit | CPF_NeedCtorLink)
};

// ScriptStruct Engine.SpeechRecognition.RecogVocabulary
// 0x0060
struct FRecogVocabulary
{
	TArray<struct FRecognisableWord>                   WhoDictionary;                                 // 0x0000 (0x0010) [0x0000000000400001] (CPF_Edit | CPF_NeedCtorLink)
	TArray<struct FRecognisableWord>                   WhatDictionary;                                // 0x0010 (0x0010) [0x0000000000400001] (CPF_Edit | CPF_NeedCtorLink)
	TArray<struct FRecognisableWord>                   WhereDictionary;                               // 0x0020 (0x0010) [0x0000000000400001] (CPF_Edit | CPF_NeedCtorLink)
	class FString                                      VocabName;                                     // 0x0030 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	TArray<uint8_t>                                    VocabData;                                     // 0x0040 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	TArray<uint8_t>                                    WorkingVocabData;                              // 0x0050 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
};

// ScriptStruct Engine.SpeechRecognition.RecogUserData
// 0x0018
struct FRecogUserData
{
	int32_t                                            ActiveVocabularies;                            // 0x0000 (0x0004) [0x0000000000000000]               
	TArray<uint8_t>                                    UserData;                                      // 0x0008 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
};

// ScriptStruct Engine.SpeedTreeComponent.SpeedTreeStaticLight
// 0x0038
struct FSpeedTreeStaticLight
{
	struct FGuid                                       Guid;                                          // 0x0000 (0x0010) [0x0000000000000002] (CPF_Const)   
	class UShadowMap1D*                                BranchShadowMap;                               // 0x0010 (0x0008) [0x0000000000000002] (CPF_Const)   
	class UShadowMap1D*                                FrondShadowMap;                                // 0x0018 (0x0008) [0x0000000000000002] (CPF_Const)   
	class UShadowMap1D*                                LeafMeshShadowMap;                             // 0x0020 (0x0008) [0x0000000000000002] (CPF_Const)   
	class UShadowMap1D*                                LeafCardShadowMap;                             // 0x0028 (0x0008) [0x0000000000000002] (CPF_Const)   
	class UShadowMap1D*                                BillboardShadowMap;                            // 0x0030 (0x0008) [0x0000000000000002] (CPF_Const)   
};

// ScriptStruct Engine.SplineActor.SplineConnection
// 0x0010
struct FSplineConnection
{
	class USplineComponent*                            SplineComponent;                               // 0x0000 (0x0008) [0x0000000004080009] (CPF_Edit | CPF_ExportObject | CPF_Component | CPF_EditInline)
	class ASplineActor*                                ConnectTo;                                     // 0x0008 (0x0008) [0x0000000000000001] (CPF_Edit)    
};

// ScriptStruct Engine.SplineMeshComponent.SplineMeshParams
// 0x0058
struct FSplineMeshParams
{
	struct FVector                                     StartPos;                                      // 0x0000 (0x000C) [0x0000000000000000]               
	struct FVector                                     StartTangent;                                  // 0x000C (0x000C) [0x0000000000000000]               
	struct FVector2D                                   StartScale;                                    // 0x0018 (0x0008) [0x0000000000000000]               
	float                                              StartRoll;                                     // 0x0020 (0x0004) [0x0000000000000000]               
	struct FVector2D                                   StartOffset;                                   // 0x0024 (0x0008) [0x0000000000000000]               
	struct FVector                                     EndPos;                                        // 0x002C (0x000C) [0x0000000000000000]               
	struct FVector                                     EndTangent;                                    // 0x0038 (0x000C) [0x0000000000000000]               
	struct FVector2D                                   EndScale;                                      // 0x0044 (0x0008) [0x0000000000000000]               
	float                                              EndRoll;                                       // 0x004C (0x0004) [0x0000000000000000]               
	struct FVector2D                                   EndOffset;                                     // 0x0050 (0x0008) [0x0000000000000000]               
};

// ScriptStruct Engine.SpotLightToggleable.CheckpointRecord
// 0x0004
struct ASpotLightToggleable_FCheckpointRecord
{
	uint32_t                                           bEnabled : 1;                                  // 0x0000 (0x0004) [0x0000000000000000] [0x00000001] 
};

// ScriptStruct Engine.StaticMeshActorBasedOnExtremeContent.SMMaterialSetterDatum
// 0x0010
struct FSMMaterialSetterDatum
{
	int32_t                                            MaterialIndex;                                 // 0x0000 (0x0004) [0x0000000000000001] (CPF_Edit)    
	class UMaterialInterface*                          TheMaterial;                                   // 0x0008 (0x0008) [0x0000000000000001] (CPF_Edit)    
};

// ScriptStruct Engine.Terrain.TerrainHeight
// 0x0000
struct FTerrainHeight
{
};

// ScriptStruct Engine.Terrain.TerrainInfoData
// 0x0000
struct FTerrainInfoData
{
};

// ScriptStruct Engine.Terrain.TerrainLayer
// 0x0038
struct FTerrainLayer
{
	class FString                                      Name;                                          // 0x0000 (0x0010) [0x0000000000400001] (CPF_Edit | CPF_NeedCtorLink)
	class UTerrainLayerSetup*                          Setup;                                         // 0x0010 (0x0008) [0x0000000000000001] (CPF_Edit)    
	int32_t                                            AlphaMapIndex;                                 // 0x0018 (0x0004) [0x0000000000000000]               
	uint32_t                                           Highlighted : 1;                               // 0x001C (0x0004) [0x0000000000000001] [0x00000001] (CPF_Edit)
	uint32_t                                           WireframeHighlighted : 1;                      // 0x001C (0x0004) [0x0000000000000001] [0x00000002] (CPF_Edit)
	uint32_t                                           Hidden : 1;                                    // 0x001C (0x0004) [0x0000000000000001] [0x00000004] (CPF_Edit)
	struct FColor                                      HighlightColor;                                // 0x0020 (0x0004) [0x0000000000000001] (CPF_Edit)    
	struct FColor                                      WireframeColor;                                // 0x0024 (0x0004) [0x0000000000000001] (CPF_Edit)    
	int32_t                                            MinX;                                          // 0x0028 (0x0004) [0x0000000000000000]               
	int32_t                                            MinY;                                          // 0x002C (0x0004) [0x0000000000000000]               
	int32_t                                            MaxX;                                          // 0x0030 (0x0004) [0x0000000000000000]               
	int32_t                                            MaxY;                                          // 0x0034 (0x0004) [0x0000000000000000]               
};

// ScriptStruct Engine.Terrain.TerrainDecorationInstance
// 0x0018
struct FTerrainDecorationInstance
{
	class UPrimitiveComponent*                         Component;                                     // 0x0000 (0x0008) [0x0000000004080008] (CPF_ExportObject | CPF_Component | CPF_EditInline)
	float                                              X;                                             // 0x0008 (0x0004) [0x0000000000000000]               
	float                                              Y;                                             // 0x000C (0x0004) [0x0000000000000000]               
	float                                              Scale;                                         // 0x0010 (0x0004) [0x0000000000000000]               
	int32_t                                            Yaw;                                           // 0x0014 (0x0004) [0x0000000000000000]               
};

// ScriptStruct Engine.Terrain.TerrainDecoration
// 0x0030
struct FTerrainDecoration
{
	class UPrimitiveComponentFactory*                  Factory;                                       // 0x0000 (0x0008) [0x0000000004000001] (CPF_Edit | CPF_EditInline)
	float                                              MinScale;                                      // 0x0008 (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              MaxScale;                                      // 0x000C (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              Density;                                       // 0x0010 (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              SlopeRotationBlend;                            // 0x0014 (0x0004) [0x0000000000000001] (CPF_Edit)    
	int32_t                                            RandSeed;                                      // 0x0018 (0x0004) [0x0000000000000001] (CPF_Edit)    
	TArray<struct FTerrainDecorationInstance>          Instances;                                     // 0x0020 (0x0010) [0x0000000000480000] (CPF_Component | CPF_NeedCtorLink)
};

// ScriptStruct Engine.Terrain.TerrainDecoLayer
// 0x0024
struct FTerrainDecoLayer
{
	class FString                                      Name;                                          // 0x0000 (0x0010) [0x0000000000400001] (CPF_Edit | CPF_NeedCtorLink)
	TArray<struct FTerrainDecoration>                  Decorations;                                   // 0x0010 (0x0010) [0x0000000000480001] (CPF_Edit | CPF_Component | CPF_NeedCtorLink)
	int32_t                                            AlphaMapIndex;                                 // 0x0020 (0x0004) [0x0000000000000000]               
};

// ScriptStruct Engine.Terrain.AlphaMap
// 0x0000
struct FAlphaMap
{
};

// ScriptStruct Engine.Terrain.TerrainWeightedMaterial
// 0x0000
struct ATerrain_FTerrainWeightedMaterial
{
};

// ScriptStruct Engine.Terrain.SelectedTerrainVertex
// 0x000C
struct FSelectedTerrainVertex
{
	int32_t                                            X;                                             // 0x0000 (0x0004) [0x0000000000000000]               
	int32_t                                            Y;                                             // 0x0004 (0x0004) [0x0000000000000000]               
	int32_t                                            Weight;                                        // 0x0008 (0x0004) [0x0000000000000000]               
};

// ScriptStruct Engine.Terrain.TerrainMaterialResource
// 0x0000
struct FTerrainMaterialResource
{
};

// ScriptStruct Engine.Terrain.CachedTerrainMaterialArray
// 0x0010
struct FCachedTerrainMaterialArray
{
	TArray<struct FPointer>                            CachedMaterials;                               // 0x0000 (0x0010) [0x0000000000001002] (CPF_Const | CPF_Native)
};

// ScriptStruct Engine.TerrainComponent.TerrainPatchBounds
// 0x000C
struct FTerrainPatchBounds
{
	float                                              MinHeight;                                     // 0x0000 (0x0004) [0x0000000000000000]               
	float                                              MaxHeight;                                     // 0x0004 (0x0004) [0x0000000000000000]               
	float                                              MaxDisplacement;                               // 0x0008 (0x0004) [0x0000000000000000]               
};

// ScriptStruct Engine.TerrainComponent.TerrainMaterialMask
// 0x000C
struct FTerrainMaterialMask
{
	uint64_t                                           BitMask;                                       // 0x0000 (0x0008) [0x0000000000000000]               
	int32_t                                            NumBits;                                       // 0x0008 (0x0004) [0x0000000000000000]               
};

// ScriptStruct Engine.TerrainComponent.TerrainBVTree
// 0x0010
struct FTerrainBVTree
{
	TArray<int32_t>                                    Nodes;                                         // 0x0000 (0x0010) [0x0000000000001002] (CPF_Const | CPF_Native)
};

// ScriptStruct Engine.TerrainLayerSetup.FilterLimit
// 0x0010
struct FFilterLimit
{
	uint32_t                                           Enabled : 1;                                   // 0x0000 (0x0004) [0x0000000000000001] [0x00000001] (CPF_Edit)
	float                                              Base;                                          // 0x0004 (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              NoiseScale;                                    // 0x0008 (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              NoiseAmount;                                   // 0x000C (0x0004) [0x0000000000000001] (CPF_Edit)    
};

// ScriptStruct Engine.TerrainLayerSetup.TerrainFilteredMaterial
// 0x0058
struct FTerrainFilteredMaterial
{
	uint32_t                                           UseNoise : 1;                                  // 0x0000 (0x0004) [0x0000000000000001] [0x00000001] (CPF_Edit)
	float                                              NoiseScale;                                    // 0x0004 (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              NoisePercent;                                  // 0x0008 (0x0004) [0x0000000000000001] (CPF_Edit)    
	struct FFilterLimit                                MinHeight;                                     // 0x000C (0x0010) [0x0000000000000001] (CPF_Edit)    
	struct FFilterLimit                                MaxHeight;                                     // 0x001C (0x0010) [0x0000000000000001] (CPF_Edit)    
	struct FFilterLimit                                MinSlope;                                      // 0x002C (0x0010) [0x0000000000000001] (CPF_Edit)    
	struct FFilterLimit                                MaxSlope;                                      // 0x003C (0x0010) [0x0000000000000001] (CPF_Edit)    
	float                                              Alpha;                                         // 0x004C (0x0004) [0x0000000000000001] (CPF_Edit)    
	class UTerrainMaterial*                            Material;                                      // 0x0050 (0x0008) [0x0000000000000001] (CPF_Edit)    
};

// ScriptStruct Engine.TerrainWeightMapTexture.TerrainWeightedMaterial
// 0x0000
struct UTerrainWeightMapTexture_FTerrainWeightedMaterial
{
};

// ScriptStruct Engine.Texture2DComposite.SourceTexture2DRegion
// 0x0020
struct FSourceTexture2DRegion
{
	int32_t                                            OffsetX;                                       // 0x0000 (0x0004) [0x0000000000000000]               
	int32_t                                            OffsetY;                                       // 0x0004 (0x0004) [0x0000000000000000]               
	int32_t                                            SizeX;                                         // 0x0008 (0x0004) [0x0000000000000000]               
	int32_t                                            SizeY;                                         // 0x000C (0x0004) [0x0000000000000000]               
	int32_t                                            DestOffsetX;                                   // 0x0010 (0x0004) [0x0000000000000000]               
	int32_t                                            DestOffsetY;                                   // 0x0014 (0x0004) [0x0000000000000000]               
	class UTexture2D*                                  Texture2D;                                     // 0x0018 (0x0008) [0x0000000000000000]               
};

// ScriptStruct Engine.Texture2DDynamic.ImageLayout
// 0x0018
struct FImageLayout
{
	TArray<uint8_t>                                    Data;                                          // 0x0000 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	int32_t                                            SizeX;                                         // 0x0010 (0x0004) [0x0000000000000000]               
	int32_t                                            SizeY;                                         // 0x0014 (0x0004) [0x0000000000000000]               
};

// ScriptStruct Engine.Trigger.CheckpointRecord
// 0x0004
struct ATrigger_FCheckpointRecord
{
	uint32_t                                           bCollideActors : 1;                            // 0x0000 (0x0004) [0x0000000000000000] [0x00000001] 
};

// ScriptStruct Engine.TriggerStreamingLevel.LevelStreamingData
// 0x0010
struct FLevelStreamingData
{
	uint32_t                                           bShouldBeLoaded : 1;                           // 0x0000 (0x0004) [0x0000000000000001] [0x00000001] (CPF_Edit)
	uint32_t                                           bShouldBeVisible : 1;                          // 0x0000 (0x0004) [0x0000000000000001] [0x00000002] (CPF_Edit)
	uint32_t                                           bShouldBlockOnLoad : 1;                        // 0x0000 (0x0004) [0x0000000000000001] [0x00000004] (CPF_Edit)
	class ULevelStreaming*                             Level;                                         // 0x0008 (0x0008) [0x0000000000000001] (CPF_Edit)    
};

// ScriptStruct Engine.UIDataProvider_OnlinePlayerStorage.PlayerStorageArrayProvider
// 0x0010
struct FPlayerStorageArrayProvider
{
	int32_t                                            PlayerStorageId;                               // 0x0000 (0x0004) [0x0000000000000000]               
	class UUIDataProvider_OnlinePlayerStorageArray*    Provider;                                      // 0x0008 (0x0008) [0x0000000000000000]               
};

// ScriptStruct Engine.UIDataStore_DynamicResource.DynamicResourceProviderDefinition
// 0x0020
struct FDynamicResourceProviderDefinition
{
	struct FName                                       ProviderTag;                                   // 0x0000 (0x0008) [0x0000000000004000] (CPF_Config)  
	class FString                                      ProviderClassName;                             // 0x0008 (0x0010) [0x0000000000404000] (CPF_Config | CPF_NeedCtorLink)
	class UClass*                                      ProviderClass;                                 // 0x0018 (0x0008) [0x0000000000002000] (CPF_Transient)
};

// ScriptStruct Engine.UIDataStore_GameResource.GameResourceDataProvider
// 0x0028
struct FGameResourceDataProvider
{
	struct FName                                       ProviderTag;                                   // 0x0000 (0x0008) [0x0000000000004000] (CPF_Config)  
	class FString                                      ProviderClassName;                             // 0x0008 (0x0010) [0x0000000000404000] (CPF_Config | CPF_NeedCtorLink)
	uint32_t                                           bExpandProviders : 1;                          // 0x0018 (0x0004) [0x0000000000004000] [0x00000001] (CPF_Config)
	class UClass*                                      ProviderClass;                                 // 0x0020 (0x0008) [0x0000000000002000] (CPF_Transient)
};

// ScriptStruct Engine.UIDataStore_InputAlias.UIInputKeyData
// 0x0020
struct FUIInputKeyData
{
	struct FRawInputKeyEventData                       InputKeyData;                                  // 0x0000 (0x000C) [0x0000000000004000] (CPF_Config)  
	class FString                                      ButtonFontMarkupString;                        // 0x0010 (0x0010) [0x0000000000404000] (CPF_Config | CPF_NeedCtorLink)
};

// ScriptStruct Engine.UIDataStore_InputAlias.UIDataStoreInputAlias
// 0x00E8
struct FUIDataStoreInputAlias
{
	struct FName                                       AliasName;                                     // 0x0000 (0x0008) [0x0000000000004000] (CPF_Config)  
	struct FUIInputKeyData                             PlatformInputKeys[0x7];                        // 0x0008 (0x00E0) [0x0000000000404000] (CPF_Config | CPF_NeedCtorLink)
};

// ScriptStruct Engine.UIDataStore_OnlineGameSearch.GameSearchCfg
// 0x0030
struct FGameSearchCfg
{
	class UClass*                                      GameSearchClass;                               // 0x0000 (0x0008) [0x0000000000000000]               
	class UClass*                                      DefaultGameSettingsClass;                      // 0x0008 (0x0008) [0x0000000000000000]               
	class UClass*                                      SearchResultsProviderClass;                    // 0x0010 (0x0008) [0x0000000000000000]               
	class UUIDataProvider_Settings*                    DesiredSettingsProvider;                       // 0x0018 (0x0008) [0x0000000000000000]               
	class UOnlineGameSearch*                           Search;                                        // 0x0020 (0x0008) [0x0000000000000000]               
	struct FName                                       SearchName;                                    // 0x0028 (0x0008) [0x0000000000000000]               
};

// ScriptStruct Engine.UIDataStore_OnlineGameSettings.GameSettingsCfg
// 0x0020
struct FGameSettingsCfg
{
	class UClass*                                      GameSettingsClass;                             // 0x0000 (0x0008) [0x0000000000000000]               
	class UUIDataProvider_Settings*                    Provider;                                      // 0x0008 (0x0008) [0x0000000000000000]               
	class UOnlineGameSettings*                         GameSettings;                                  // 0x0010 (0x0008) [0x0000000000000000]               
	struct FName                                       SettingsName;                                  // 0x0018 (0x0008) [0x0000000000000000]               
};

// ScriptStruct Engine.UIDataStore_OnlineStats.RankMetaData
// 0x0018
struct FRankMetaData
{
	struct FName                                       RankName;                                      // 0x0000 (0x0008) [0x0000000000000002] (CPF_Const)   
	class FString                                      RankColumnName;                                // 0x0008 (0x0010) [0x0000000000408002] (CPF_Const | CPF_Localized | CPF_NeedCtorLink)
};

// ScriptStruct Engine.UIDataStore_OnlineStats.PlayerNickMetaData
// 0x0018
struct FPlayerNickMetaData
{
	struct FName                                       PlayerNickName;                                // 0x0000 (0x0008) [0x0000000000000002] (CPF_Const)   
	class FString                                      PlayerNickColumnName;                          // 0x0008 (0x0010) [0x0000000000408002] (CPF_Const | CPF_Localized | CPF_NeedCtorLink)
};

// ScriptStruct Engine.UIDataStore_Registry.RegistryKeyValuePair
// 0x0020
struct FRegistryKeyValuePair
{
	class FString                                      Key;                                           // 0x0000 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	class FString                                      Value;                                         // 0x0010 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
};

// ScriptStruct Engine.UIDataStore_StringAliasMap.UIMenuInputMap
// 0x0020
struct FUIMenuInputMap
{
	struct FName                                       FieldName;                                     // 0x0000 (0x0008) [0x0000000000000000]               
	struct FName                                       Set;                                           // 0x0008 (0x0008) [0x0000000000000000]               
	class FString                                      MappedText;                                    // 0x0010 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
};

// ScriptStruct Engine.UIInteraction.UIKeyRepeatData
// 0x0010
struct FUIKeyRepeatData
{
	struct FName                                       CurrentRepeatKey;                              // 0x0000 (0x0008) [0x0000000000100000]               
	struct FDouble                                     NextRepeatTime;                                // 0x0008 (0x0008) [0x0000000000100000]               
};

// ScriptStruct Engine.UIInteraction.UIAxisEmulationData
// 0x0004 (0x0010 - 0x0014)
struct FUIAxisEmulationData : FUIKeyRepeatData
{
	uint32_t                                           bEnabled : 1;                                  // 0x0010 (0x0004) [0x0000000000100000] [0x00000001] 
};

// ScriptStruct Engine.UISoundTheme.SoundEventMapping
// 0x0010
struct FSoundEventMapping
{
	struct FName                                       SoundEventName;                                // 0x0000 (0x0008) [0x0000000000000001] (CPF_Edit)    
	class USoundCue*                                   SoundToPlay;                                   // 0x0008 (0x0008) [0x0000000000000001] (CPF_Edit)    
};

// ScriptStruct Engine.StaticMesh.StaticMeshLODElement
// 0x0018
struct FStaticMeshLODElement
{
	class UMaterialInterface*                          Material;                                      // 0x0000 (0x0008) [0x0000000000000001] (CPF_Edit)    
	uint32_t                                           bEnableShadowCasting : 1;                      // 0x0008 (0x0004) [0x0000000000001001] [0x00000001] (CPF_Edit | CPF_Native)
	uint32_t                                           bEnableCollision : 1;                          // 0x0010 (0x0004) [0x0000000000001001] [0x00000001] (CPF_Edit | CPF_Native)
};

// ScriptStruct Engine.StaticMesh.StaticMeshLODInfo
// 0x0010
struct FStaticMeshLODInfo
{
	TArray<struct FStaticMeshLODElement>               Elements;                                      // 0x0000 (0x0010) [0x0000000000001041] (CPF_Edit | CPF_EditConstArray | CPF_Native)
};

/*
# ========================================================================================= #
#
# ========================================================================================= #
*/

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
