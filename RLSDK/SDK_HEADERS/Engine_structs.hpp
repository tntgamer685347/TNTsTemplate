/*
#############################################################################################
# Rocket League SDK (RLSDK) Season 20 (v2.61)
# Generated with CodeRedGenerator v1.1.5 on 11/05/2025 07:11PM
# ========================================================================================= #
# File: Engine_structs.hpp
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

// ScriptStruct Engine._Types_Engine.GameClipsMaskArea
// Size: 0x0018
struct FGameClipsMaskArea
{
	uint64_t                                           MaskId;                                        // 0x0000 (0x0008) [0x0000000000000000]               
	float                                              TopLeftX;                                      // 0x0008 (0x0004) [0x0000000000000000]               
	float                                              TopLeftY;                                      // 0x000C (0x0004) [0x0000000000000000]               
	float                                              BottomRightX;                                  // 0x0010 (0x0004) [0x0000000000000000]               
	float                                              BottomRightY;                                  // 0x0014 (0x0004) [0x0000000000000000]               
};

// ScriptStruct Engine.Actor.AnimSlotDesc
// Size: 0x000C
struct FAnimSlotDesc
{
	class FName                                        SlotName;                                      // 0x0000 (0x0008) [0x0000000000100000]               
	int32_t                                            NumChannels;                                   // 0x0008 (0x0004) [0x0000000000100000]               
};

// ScriptStruct Engine.Actor.RigidBodyState
// Size: 0x0040 (0x0039 PropertySize + 0x0007 padding to satisfy MinAlignment of 16)
struct FRigidBodyState
{
	struct FVector                                     Position;                                      // 0x0000 (0x000C) [0x0000000000000000]               
	uint8_t                                          UnknownData00[0x4];                            // 0x000C (0x0004) MISSED OFFSET
	struct FQuat                                       Quaternion;                                    // 0x0010 (0x0010) [0x0000000000000000]               
	struct FVector                                     LinVel;                                        // 0x0020 (0x000C) [0x0000000000000000]               
	struct FVector                                     AngVel;                                        // 0x002C (0x000C) [0x0000000000000000]               
	uint8_t                                            bNewData;                                      // 0x0038 (0x0001) [0x0000000000000000]               
	uint8_t                                          MinAlignmentPadding[0x7];                      // 0x0039 (0x0007) PADDING FOR MINALIGNMENT
};

// ScriptStruct Engine.Actor.RigidBodyContactInfo
// Size: 0x0048
struct FRigidBodyContactInfo
{
	struct FVector                                     ContactPosition;                               // 0x0000 (0x000C) [0x0000000000000000]               
	struct FVector                                     ContactNormal;                                 // 0x000C (0x000C) [0x0000000000000000]               
	float                                              ContactPenetration;                            // 0x0018 (0x0004) [0x0000000000000000]               
	struct FVector                                     ContactVelocity[2];                            // 0x001C (0x0018) [0x0000000000000000]               
	uint8_t                                          UnknownData00[0x4];                            // 0x0034 (0x0004) MISSED OFFSET
	class UPhysicalMaterial*                           PhysMaterial[2];                               // 0x0038 (0x0010) [0x0000000000000000]               
};

// ScriptStruct Engine.Actor.CollisionImpactData
// Size: 0x0028
struct FCollisionImpactData
{
	class TArray<struct FRigidBodyContactInfo>         ContactInfos;                                  // 0x0000 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FVector                                     TotalNormalForceVector;                        // 0x0010 (0x000C) [0x0000000000000000]               
	struct FVector                                     TotalFrictionForceVector;                      // 0x001C (0x000C) [0x0000000000000000]               
};

// ScriptStruct Engine.Actor.PhysEffectInfo
// Size: 0x0018
struct FPhysEffectInfo
{
	float                                              Threshold;                                     // 0x0000 (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              ReFireDelay;                                   // 0x0004 (0x0004) [0x0000000000000001] (CPF_Edit)    
	class UParticleSystem*                             Effect;                                        // 0x0008 (0x0008) [0x0000000000000001] (CPF_Edit)    
	class USoundCue*                                   Sound;                                         // 0x0010 (0x0008) [0x0000000000000001] (CPF_Edit)    
};

// ScriptStruct Engine.Actor.ActorReference
// Size: 0x0018
struct FActorReference
{
	class AActor*                                      Actor;                                         // 0x0000 (0x0008) [0x0000000000000001] (CPF_Edit)    
	struct FGuid                                       Guid;                                          // 0x0008 (0x0010) [0x0000000000020003] (CPF_Edit | CPF_Const | CPF_EditConst)
};

// ScriptStruct Engine.Actor.NavReference
// Size: 0x0018
struct FNavReference
{
	class ANavigationPoint*                            Nav;                                           // 0x0000 (0x0008) [0x0000000000000001] (CPF_Edit)    
	struct FGuid                                       Guid;                                          // 0x0008 (0x0010) [0x0000000000020003] (CPF_Edit | CPF_Const | CPF_EditConst)
};

// ScriptStruct Engine.Actor.BasedPosition
// Size: 0x0038
struct FBasedPosition
{
	class AActor*                                      Base;                                          // 0x0000 (0x0008) [0x0000000000000001] (CPF_Edit)    
	struct FVector                                     Position;                                      // 0x0008 (0x000C) [0x0000000000000001] (CPF_Edit)    
	struct FVector                                     CachedBaseLocation;                            // 0x0014 (0x000C) [0x0000000000000000]               
	struct FRotator                                    CachedBaseRotation;                            // 0x0020 (0x000C) [0x0000000000000000]               
	struct FVector                                     CachedTransPosition;                           // 0x002C (0x000C) [0x0000000000000000]               
};

// ScriptStruct Engine.Actor.TraceHitInfo
// Size: 0x0028
struct FTraceHitInfo
{
	class UMaterial*                                   Material;                                      // 0x0000 (0x0008) [0x0000000000100000]               
	class UPhysicalMaterial*                           PhysMaterial;                                  // 0x0008 (0x0008) [0x0000000000100000]               
	int32_t                                            Item;                                          // 0x0010 (0x0004) [0x0000000000100000]               
	int32_t                                            LevelIndex;                                    // 0x0014 (0x0004) [0x0000000000100000]               
	class FName                                        BoneName;                                      // 0x0018 (0x0008) [0x0000000000100000]               
	class UPrimitiveComponent*                         HitComponent;                                  // 0x0020 (0x0008) [0x0000000004180008] (CPF_ExportObject | CPF_Component | CPF_EditInline)
};

// ScriptStruct Engine.Actor.ImpactInfo
// Size: 0x0060
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
// Size: 0x0040 (0x003C PropertySize + 0x0004 padding to satisfy MinAlignment of 8)
struct FSeqOpInputLink
{
	class FString                                      LinkDesc;                                      // 0x0000 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	uint32_t                                           bHasImpulse : 1;                               // 0x0010 (0x0004) [0x0000000000000000] [0x00000001] 
	int32_t                                            QueuedActivations;                             // 0x0014 (0x0004) [0x0000000000000000]               
	uint32_t                                           bDisabled : 1;                                 // 0x0018 (0x0004) [0x0000000000000000] [0x00000001] 
	uint32_t                                           bDisabledPIE : 1;                              // 0x0018 (0x0004) [0x0000000000000000] [0x00000002] 
	uint8_t                                          UnknownData00[0x4];                            // 0x001C (0x0004) MISSED OFFSET
	class USequenceOp*                                 LinkedOp;                                      // 0x0020 (0x0008) [0x0000000000000000]               
	int32_t                                            DrawY;                                         // 0x0028 (0x0004) [0x0000000000000000]               
	uint32_t                                           bHidden : 1;                                   // 0x002C (0x0004) [0x0000000000000000] [0x00000001] 
	float                                              ActivateDelay;                                 // 0x0030 (0x0004) [0x0000000000000000]               
	uint32_t                                           bMoving : 1;                                   // 0x0034 (0x0004) [0x0000000800002000] [0x00000001] (CPF_Transient | CPF_EditorOnly)
	uint32_t                                           bClampedMax : 1;                               // 0x0034 (0x0004) [0x0000000800000000] [0x00000002] (CPF_EditorOnly)
	uint32_t                                           bClampedMin : 1;                               // 0x0034 (0x0004) [0x0000000800000000] [0x00000004] (CPF_EditorOnly)
	int32_t                                            OverrideDelta;                                 // 0x0038 (0x0004) [0x0000000800000000] (CPF_EditorOnly)
	uint8_t                                          MinAlignmentPadding[0x4];                      // 0x003C (0x0004) PADDING FOR MINALIGNMENT
};

// ScriptStruct Engine.Actor.AnimSlotInfo
// Size: 0x0018
struct FAnimSlotInfo
{
	class FName                                        SlotName;                                      // 0x0000 (0x0008) [0x0000000000100000]               
	class TArray<float>                                ChannelWeights;                                // 0x0008 (0x0010) [0x0000000000500000] (CPF_NeedCtorLink)
};

// ScriptStruct Engine.Actor.TimerData
// Size: 0x0028 (0x0024 PropertySize + 0x0004 padding to satisfy MinAlignment of 8)
struct FTimerData
{
	uint32_t                                           bLoop : 1;                                     // 0x0000 (0x0004) [0x0000000000000000] [0x00000001] 
	uint32_t                                           bPaused : 1;                                   // 0x0000 (0x0004) [0x0000000000000000] [0x00000002] 
	uint32_t                                           bStateTimer : 1;                               // 0x0000 (0x0004) [0x0000000000000000] [0x00000004] 
	class FName                                        FuncName;                                      // 0x0004 (0x0008) [0x0000000000000000]               
	float                                              Rate;                                          // 0x000C (0x0004) [0x0000000000000000]               
	float                                              Count;                                         // 0x0010 (0x0004) [0x0000000000000000]               
	float                                              TimerTimeDilation;                             // 0x0014 (0x0004) [0x0000000000000000]               
	class UObject*                                     TimerObj;                                      // 0x0018 (0x0008) [0x0000000000000000]               
	int32_t                                            StateGeneration;                               // 0x0020 (0x0004) [0x0000000000000000]               
	uint8_t                                          MinAlignmentPadding[0x4];                      // 0x0024 (0x0004) PADDING FOR MINALIGNMENT
};

// ScriptStruct Engine.PrimitiveComponent.RBCollisionChannelContainer
// Size: 0x0004
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
// Size: 0x0004
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
// Size: 0x0004
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
// Size: 0x0020
struct FComponentTemplate
{
	struct FScriptDelegate                             Condition;                                     // 0x0000 (0x0018) [0x0000000000400001] (CPF_Edit | CPF_NeedCtorLink)
	class UObject*                                     Object;                                        // 0x0018 (0x0008) [0x0000000000000001] (CPF_Edit)    
};

// ScriptStruct Engine.Controller.VisiblePortalInfo
// Size: 0x0010
struct FVisiblePortalInfo
{
	class AActor*                                      Source;                                        // 0x0000 (0x0008) [0x0000000000000000]               
	class AActor*                                      Destination;                                   // 0x0008 (0x0008) [0x0000000000000000]               
};

// ScriptStruct Engine.NavigationPoint.DebugNavCost
// Size: 0x0018 (0x0014 PropertySize + 0x0004 padding to satisfy MinAlignment of 8)
struct FDebugNavCost
{
	class FString                                      Desc;                                          // 0x0000 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	int32_t                                            Cost;                                          // 0x0010 (0x0004) [0x0000000000000000]               
	uint8_t                                          MinAlignmentPadding[0x4];                      // 0x0014 (0x0004) PADDING FOR MINALIGNMENT
};

// ScriptStruct Engine.NavigationPoint.NavigationOctreeObject
// Size: 0x0040 (0x0039 PropertySize + 0x0007 padding to satisfy MinAlignment of 8)
struct FNavigationOctreeObject
{
	struct FBox                                        BoundingBox;                                   // 0x0000 (0x001C) [0x0000000000000000]               
	struct FVector                                     BoxCenter;                                     // 0x001C (0x000C) [0x0000000000000000]               
	struct FPointer                                    OctreeNode;                                    // 0x0028 (0x0008) [0x0000000000003002] (CPF_Const | CPF_Native | CPF_Transient)
	class UObject*                                     Owner;                                         // 0x0030 (0x0008) [0x0000000000800002] (CPF_Const | CPF_NoExport)
	uint8_t                                            OwnerType;                                     // 0x0038 (0x0001) [0x0000000000800002] (CPF_Const | CPF_NoExport)
	uint8_t                                          MinAlignmentPadding[0x7];                      // 0x0039 (0x0007) PADDING FOR MINALIGNMENT
};

// ScriptStruct Engine.NavigationPoint.CheckpointRecord
// Size: 0x0004
struct ANavigationPoint_FCheckpointRecord
{
	uint32_t                                           bDisabled : 1;                                 // 0x0000 (0x0004) [0x0000000000000000] [0x00000001] 
	uint32_t                                           bBlocked : 1;                                  // 0x0000 (0x0004) [0x0000000000000000] [0x00000002] 
};

// ScriptStruct Engine.KMeshProps.KSphereElem
// Size: 0x0050 (0x0048 PropertySize + 0x0008 padding to satisfy MinAlignment of 16)
struct FKSphereElem
{
	struct FMatrix                                     TM;                                            // 0x0000 (0x0040) [0x0000000000020001] (CPF_Edit | CPF_EditConst)
	float                                              Radius;                                        // 0x0040 (0x0004) [0x0000000000020001] (CPF_Edit | CPF_EditConst)
	uint32_t                                           bNoRBCollision : 1;                            // 0x0044 (0x0004) [0x0000000000000001] [0x00000001] (CPF_Edit)
	uint32_t                                           bPerPolyShape : 1;                             // 0x0044 (0x0004) [0x0000000000000001] [0x00000002] (CPF_Edit)
	uint8_t                                          MinAlignmentPadding[0x8];                      // 0x0048 (0x0008) PADDING FOR MINALIGNMENT
};

// ScriptStruct Engine.KMeshProps.KBoxElem
// Size: 0x0050
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
// Size: 0x0050 (0x004C PropertySize + 0x0004 padding to satisfy MinAlignment of 16)
struct FKSphylElem
{
	struct FMatrix                                     TM;                                            // 0x0000 (0x0040) [0x0000000000020001] (CPF_Edit | CPF_EditConst)
	float                                              Radius;                                        // 0x0040 (0x0004) [0x0000000000020001] (CPF_Edit | CPF_EditConst)
	float                                              Length;                                        // 0x0044 (0x0004) [0x0000000000020001] (CPF_Edit | CPF_EditConst)
	uint32_t                                           bNoRBCollision : 1;                            // 0x0048 (0x0004) [0x0000000000000001] [0x00000001] (CPF_Edit)
	uint32_t                                           bPerPolyShape : 1;                             // 0x0048 (0x0004) [0x0000000000000001] [0x00000002] (CPF_Edit)
	uint8_t                                          MinAlignmentPadding[0x4];                      // 0x004C (0x0004) PADDING FOR MINALIGNMENT
};

// ScriptStruct Engine.KMeshProps.KConvexElem
// Size: 0x0080 (0x007C PropertySize + 0x0004 padding to satisfy MinAlignment of 8)
struct FKConvexElem
{
	class TArray<struct FVector>                       VertexData;                                    // 0x0000 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	class TArray<struct FPlane>                        PermutedVertexData;                            // 0x0010 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	class TArray<int32_t>                              FaceTriData;                                   // 0x0020 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	class TArray<struct FVector>                       EdgeDirections;                                // 0x0030 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	class TArray<struct FVector>                       FaceNormalDirections;                          // 0x0040 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	class TArray<struct FPlane>                        FacePlaneData;                                 // 0x0050 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FBox                                        ElemBox;                                       // 0x0060 (0x001C) [0x0000000000000000]               
	uint8_t                                          MinAlignmentPadding[0x4];                      // 0x007C (0x0004) PADDING FOR MINALIGNMENT
};

// ScriptStruct Engine.KMeshProps.KAggregateGeom
// Size: 0x0050 (0x004C PropertySize + 0x0004 padding to satisfy MinAlignment of 8)
struct FKAggregateGeom
{
	class TArray<struct FKSphereElem>                  SphereElems;                                   // 0x0000 (0x0010) [0x0000000000400041] (CPF_Edit | CPF_EditFixedSize | CPF_NeedCtorLink)
	class TArray<struct FKBoxElem>                     BoxElems;                                      // 0x0010 (0x0010) [0x0000000000400041] (CPF_Edit | CPF_EditFixedSize | CPF_NeedCtorLink)
	class TArray<struct FKSphylElem>                   SphylElems;                                    // 0x0020 (0x0010) [0x0000000000400041] (CPF_Edit | CPF_EditFixedSize | CPF_NeedCtorLink)
	class TArray<struct FKConvexElem>                  ConvexElems;                                   // 0x0030 (0x0010) [0x0000000000400041] (CPF_Edit | CPF_EditFixedSize | CPF_NeedCtorLink)
	struct FPointer                                    RenderInfo;                                    // 0x0040 (0x0008) [0x0000000401001000] (CPF_Native | CPF_NonTransactional)
	uint32_t                                           bSkipCloseAndParallelChecks : 1;               // 0x0048 (0x0004) [0x0000000000000001] [0x00000001] (CPF_Edit)
	uint32_t                                           bSimpleCollisionPlane : 1;                     // 0x0048 (0x0004) [0x0000000000000001] [0x00000002] (CPF_Edit)
	uint8_t                                          MinAlignmentPadding[0x4];                      // 0x004C (0x0004) PADDING FOR MINALIGNMENT
};

// ScriptStruct Engine.Pylon.PolyReference
// Size: 0x0028
struct FPolyReference
{
	struct FActorReference                             OwningPylon;                                   // 0x0000 (0x0018) [0x0000000000000000]               
	int32_t                                            PolyId;                                        // 0x0018 (0x0004) [0x0000000000000000]               
	uint8_t                                          UnknownData00[0x4];                            // 0x001C (0x0004) MISSED OFFSET
	struct FPointer                                    CachedPoly;                                    // 0x0020 (0x0008) [0x0000000000001000] (CPF_Native)  
};

// ScriptStruct Engine.Scout.PathSizeInfo
// Size: 0x0018 (0x0015 PropertySize + 0x0003 padding to satisfy MinAlignment of 4)
struct FPathSizeInfo
{
	class FName                                        Desc;                                          // 0x0000 (0x0008) [0x0000000000000000]               
	float                                              Radius;                                        // 0x0008 (0x0004) [0x0000000000000000]               
	float                                              Height;                                        // 0x000C (0x0004) [0x0000000000000000]               
	float                                              CrouchHeight;                                  // 0x0010 (0x0004) [0x0000000000000000]               
	uint8_t                                            PathColor;                                     // 0x0014 (0x0001) [0x0000000000000000]               
	uint8_t                                          MinAlignmentPadding[0x3];                      // 0x0015 (0x0003) PADDING FOR MINALIGNMENT
};

// ScriptStruct Engine.AkBank.BankLoadState
// Size: 0x000C
struct FBankLoadState
{
	uint8_t                                            Status;                                        // 0x0000 (0x0001) [0x0000000000000000]               
	uint8_t                                          UnknownData00[0x3];                            // 0x0001 (0x0003) MISSED OFFSET
	float                                              AsyncLoadBegin;                                // 0x0004 (0x0004) [0x0000000000000000]               
	float                                              AsyncLoadTimeout;                              // 0x0008 (0x0004) [0x0000000000000000]               
};

// ScriptStruct Engine.BrushComponent.KCachedConvexData_Mirror
// Size: 0x0010
struct FKCachedConvexData_Mirror
{
	class TArray<int32_t>                              CachedConvexElements;                          // 0x0000 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
};

// ScriptStruct Engine.Brush.GeomSelection
// Size: 0x000C
struct FGeomSelection
{
	int32_t                                            Type;                                          // 0x0000 (0x0004) [0x0000000000000000]               
	int32_t                                            Index;                                         // 0x0004 (0x0004) [0x0000000000000000]               
	int32_t                                            SelectionIndex;                                // 0x0008 (0x0004) [0x0000000000000000]               
};

// ScriptStruct Engine.ReverbVolume.InteriorSettings
// Size: 0x0024
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
// Size: 0x0010
struct FReverbSettings
{
	uint32_t                                           bApplyReverb : 1;                              // 0x0000 (0x0004) [0x0000000000000001] [0x00000001] (CPF_Edit)
	uint8_t                                            ReverbType;                                    // 0x0004 (0x0001) [0x0000000000000001] (CPF_Edit)    
	uint8_t                                          UnknownData00[0x3];                            // 0x0005 (0x0003) MISSED OFFSET
	float                                              Volume;                                        // 0x0008 (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              FadeTime;                                      // 0x000C (0x0004) [0x0000000000000001] (CPF_Edit)    
};

// ScriptStruct Engine.AudioComponent.AudioComponentParam
// Size: 0x0018
struct FAudioComponentParam
{
	class FName                                        ParamName;                                     // 0x0000 (0x0008) [0x0000000000000001] (CPF_Edit)    
	float                                              FloatParam;                                    // 0x0008 (0x0004) [0x0000000000000001] (CPF_Edit)    
	uint8_t                                          UnknownData00[0x4];                            // 0x000C (0x0004) MISSED OFFSET
	class USoundNodeWave*                              WaveParam;                                     // 0x0010 (0x0008) [0x0000000000000001] (CPF_Edit)    
};

// ScriptStruct Engine.EngineTypes.SubtitleCue
// Size: 0x0018 (0x0014 PropertySize + 0x0004 padding to satisfy MinAlignment of 8)
struct FSubtitleCue
{
	class FString                                      Text;                                          // 0x0000 (0x0010) [0x0000000000408003] (CPF_Edit | CPF_Const | CPF_Localized | CPF_NeedCtorLink)
	float                                              Time;                                          // 0x0010 (0x0004) [0x0000000000008003] (CPF_Edit | CPF_Const | CPF_Localized)
	uint8_t                                          MinAlignmentPadding[0x4];                      // 0x0014 (0x0004) PADDING FOR MINALIGNMENT
};

// ScriptStruct Engine.AudioDevice.Listener
// Size: 0x0048 (0x0044 PropertySize + 0x0004 padding to satisfy MinAlignment of 8)
struct FListener
{
	class APortalVolume*                               PortalVolume;                                  // 0x0000 (0x0008) [0x0000000000000002] (CPF_Const)   
	struct FVector                                     Location;                                      // 0x0008 (0x000C) [0x0000000000000000]               
	struct FVector                                     Up;                                            // 0x0014 (0x000C) [0x0000000000000000]               
	struct FVector                                     Right;                                         // 0x0020 (0x000C) [0x0000000000000000]               
	struct FVector                                     Front;                                         // 0x002C (0x000C) [0x0000000000000000]               
	struct FVector                                     Velocity;                                      // 0x0038 (0x000C) [0x0000000000000000]               
	uint8_t                                          MinAlignmentPadding[0x4];                      // 0x0044 (0x0004) PADDING FOR MINALIGNMENT
};

// ScriptStruct Engine.AudioDevice.AudioClassInfo
// Size: 0x0010
struct FAudioClassInfo
{
	int32_t                                            NumResident;                                   // 0x0000 (0x0004) [0x0000000000000002] (CPF_Const)   
	int32_t                                            SizeResident;                                  // 0x0004 (0x0004) [0x0000000000000002] (CPF_Const)   
	int32_t                                            NumRealTime;                                   // 0x0008 (0x0004) [0x0000000000000002] (CPF_Const)   
	int32_t                                            SizeRealTime;                                  // 0x000C (0x0004) [0x0000000000000002] (CPF_Const)   
};

// ScriptStruct Engine.SoundCue.SoundNodeEditorData
// Size: 0x0008
struct FSoundNodeEditorData
{
	int32_t                                            NodePosX;                                      // 0x0000 (0x0004) [0x0000000000001002] (CPF_Const | CPF_Native)
	int32_t                                            NodePosY;                                      // 0x0004 (0x0004) [0x0000000000001002] (CPF_Const | CPF_Native)
};

// ScriptStruct Engine.SoundNodeAmbient.AmbientSoundSlot
// Size: 0x0018 (0x0014 PropertySize + 0x0004 padding to satisfy MinAlignment of 8)
struct FAmbientSoundSlot
{
	class USoundNodeWave*                              Wave;                                          // 0x0000 (0x0008) [0x0000000000000001] (CPF_Edit)    
	float                                              PitchScale;                                    // 0x0008 (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              VolumeScale;                                   // 0x000C (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              Weight;                                        // 0x0010 (0x0004) [0x0000000000000001] (CPF_Edit)    
	uint8_t                                          MinAlignmentPadding[0x4];                      // 0x0014 (0x0004) PADDING FOR MINALIGNMENT
};

// ScriptStruct Engine.AmbientSoundSimpleToggleable.CheckpointRecord
// Size: 0x0004
struct AAmbientSoundSimpleToggleable_FCheckpointRecord
{
	uint32_t                                           bCurrentlyPlaying : 1;                         // 0x0000 (0x0004) [0x0000000000000000] [0x00000001] 
};

// ScriptStruct Engine.SplineAudioComponent.InterpPointOnSpline
// Size: 0x0014
struct FInterpPointOnSpline
{
	struct FVector                                     Position;                                      // 0x0000 (0x000C) [0x0000000000000001] (CPF_Edit)    
	float                                              InVal;                                         // 0x000C (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              Length;                                        // 0x0010 (0x0004) [0x0000000000000001] (CPF_Edit)    
};

// ScriptStruct Engine.SimpleSplineAudioComponent.SplineSoundSlot
// Size: 0x0038
struct FSplineSoundSlot
{
	class USoundNodeWave*                              Wave;                                          // 0x0000 (0x0008) [0x0000000000000001] (CPF_Edit)    
	float                                              PitchScale;                                    // 0x0008 (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              VolumeScale;                                   // 0x000C (0x0004) [0x0000000000000001] (CPF_Edit)    
	int32_t                                            StartPoint;                                    // 0x0010 (0x0004) [0x0000000000000001] (CPF_Edit)    
	int32_t                                            EndPoint;                                      // 0x0014 (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              Weight;                                        // 0x0018 (0x0004) [0x0000000000000001] (CPF_Edit)    
	uint8_t                                          UnknownData00[0x4];                            // 0x001C (0x0004) MISSED OFFSET
	struct FDouble                                     LastUpdateTime;                                // 0x0020 (0x0008) [0x0000000000001002] (CPF_Const | CPF_Native)
	float                                              SourceInteriorVolume;                          // 0x0028 (0x0004) [0x0000000000001002] (CPF_Const | CPF_Native)
	float                                              SourceInteriorLPF;                             // 0x002C (0x0004) [0x0000000000001002] (CPF_Const | CPF_Native)
	float                                              CurrentInteriorVolume;                         // 0x0030 (0x0004) [0x0000000000001002] (CPF_Const | CPF_Native)
	float                                              CurrentInteriorLPF;                            // 0x0034 (0x0004) [0x0000000000001002] (CPF_Const | CPF_Native)
};

// ScriptStruct Engine.MultiCueSplineAudioComponent.MultiCueSplineSoundSlot
// Size: 0x0038 (0x0034 PropertySize + 0x0004 padding to satisfy MinAlignment of 8)
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
	uint8_t                                          MinAlignmentPadding[0x4];                      // 0x0034 (0x0004) PADDING FOR MINALIGNMENT
};

// ScriptStruct Engine.PlatformInterfaceBase.DelegateArray
// Size: 0x0010
struct FDelegateArray
{
	class TArray<struct FScriptDelegate>               Delegates;                                     // 0x0000 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
};

// ScriptStruct Engine.PlatformInterfaceBase.PlatformInterfaceData
// Size: 0x0040
struct FPlatformInterfaceData
{
	class FName                                        DataName;                                      // 0x0000 (0x0008) [0x0000000000000000]               
	uint8_t                                            Type;                                          // 0x0008 (0x0001) [0x0000000000000000]               
	uint8_t                                          UnknownData00[0x3];                            // 0x0009 (0x0003) MISSED OFFSET
	int32_t                                            IntValue;                                      // 0x000C (0x0004) [0x0000000000000000]               
	float                                              FloatValue;                                    // 0x0010 (0x0004) [0x0000000000000000]               
	uint8_t                                          UnknownData01[0x4];                            // 0x0014 (0x0004) MISSED OFFSET
	class FString                                      StringValue;                                   // 0x0018 (0x0010) [0x0000000000500000] (CPF_NeedCtorLink)
	class FString                                      StringValue2;                                  // 0x0028 (0x0010) [0x0000000000500000] (CPF_NeedCtorLink)
	class UObject*                                     ObjectValue;                                   // 0x0038 (0x0008) [0x0000000000000000]               
};

// ScriptStruct Engine.PlatformInterfaceBase.PlatformInterfaceDelegateResult
// Size: 0x0048
struct FPlatformInterfaceDelegateResult
{
	uint32_t                                           bSuccessful : 1;                               // 0x0000 (0x0004) [0x0000000000000000] [0x00000001] 
	uint8_t                                          UnknownData00[0x4];                            // 0x0004 (0x0004) MISSED OFFSET
	struct FPlatformInterfaceData                      Data;                                          // 0x0008 (0x0040) [0x0000000000400000] (CPF_NeedCtorLink)
};

// ScriptStruct Engine.AnalyticEventsBase.EventStringParam
// Size: 0x0020
struct FEventStringParam
{
	class FString                                      ParamName;                                     // 0x0000 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	class FString                                      ParamValue;                                    // 0x0010 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
};

// ScriptStruct Engine.AnimSequence.CompressedTrack
// Size: 0x0038
struct FCompressedTrack
{
	class TArray<uint8_t>                              ByteStream;                                    // 0x0000 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	class TArray<float>                                Times;                                         // 0x0010 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	float                                              Mins[3];                                       // 0x0020 (0x000C) [0x0000000000000000]               
	float                                              Ranges[3];                                     // 0x002C (0x000C) [0x0000000000000000]               
};

// ScriptStruct Engine.AnimSequence.CurveTrack
// Size: 0x0018
struct FCurveTrack
{
	class FName                                        CurveName;                                     // 0x0000 (0x0008) [0x0000000000000000]               
	class TArray<float>                                CurveWeights;                                  // 0x0008 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
};

// ScriptStruct Engine.AnimSequence.RotationTrack
// Size: 0x0020
struct FRotationTrack
{
	class TArray<struct FQuat>                         RotKeys;                                       // 0x0000 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	class TArray<float>                                Times;                                         // 0x0010 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
};

// ScriptStruct Engine.AnimSequence.TranslationTrack
// Size: 0x0020
struct FTranslationTrack
{
	class TArray<struct FVector>                       PosKeys;                                       // 0x0000 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	class TArray<float>                                Times;                                         // 0x0010 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
};

// ScriptStruct Engine.AnimSequence.TimeModifier
// Size: 0x0008
struct FTimeModifier
{
	float                                              Time;                                          // 0x0000 (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              TargetStrength;                                // 0x0004 (0x0004) [0x0000000000000001] (CPF_Edit)    
};

// ScriptStruct Engine.AnimSequence.SkelControlModifier
// Size: 0x0018
struct FSkelControlModifier
{
	class FName                                        SkelControlName;                               // 0x0000 (0x0008) [0x0000000000000001] (CPF_Edit)    
	class TArray<struct FTimeModifier>                 Modifiers;                                     // 0x0008 (0x0010) [0x0000000004400001] (CPF_Edit | CPF_NeedCtorLink | CPF_EditInline)
};

// ScriptStruct Engine.AnimSequence.AnimNotifyEvent
// Size: 0x0020 (0x001C PropertySize + 0x0004 padding to satisfy MinAlignment of 8)
struct FAnimNotifyEvent
{
	float                                              Time;                                          // 0x0000 (0x0004) [0x0000000000000001] (CPF_Edit)    
	uint8_t                                          UnknownData00[0x4];                            // 0x0004 (0x0004) MISSED OFFSET
	class UAnimNotify*                                 Notify;                                        // 0x0008 (0x0008) [0x0000000004400009] (CPF_Edit | CPF_ExportObject | CPF_NeedCtorLink | CPF_EditInline)
	class FName                                        Comment;                                       // 0x0010 (0x0008) [0x0000000800000001] (CPF_Edit | CPF_EditorOnly)
	float                                              Duration;                                      // 0x0018 (0x0004) [0x0000000000000001] (CPF_Edit)    
	uint8_t                                          MinAlignmentPadding[0x4];                      // 0x001C (0x0004) PADDING FOR MINALIGNMENT
};

// ScriptStruct Engine.AnimSequence.RawAnimSequenceTrack
// Size: 0x0020
struct FRawAnimSequenceTrack
{
	class TArray<struct FVector>                       PosKeys;                                       // 0x0000 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	class TArray<struct FQuat>                         RotKeys;                                       // 0x0010 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
};

// ScriptStruct Engine.AnimNode.CurveKey
// Size: 0x000C
struct FCurveKey
{
	class FName                                        CurveName;                                     // 0x0000 (0x0008) [0x0000000000000000]               
	float                                              Weight;                                        // 0x0008 (0x0004) [0x0000000000000000]               
};

// ScriptStruct Engine.AnimNodeBlendBase.AnimBlendChild
// Size: 0x0020
struct FAnimBlendChild
{
	class FName                                        Name;                                          // 0x0000 (0x0008) [0x0000000000000001] (CPF_Edit)    
	class UAnimNode*                                   Anim;                                          // 0x0008 (0x0008) [0x0000000004400008] (CPF_ExportObject | CPF_NeedCtorLink | CPF_EditInline)
	float                                              Weight;                                        // 0x0010 (0x0004) [0x0000000000000000]               
	float                                              BlendWeight;                                   // 0x0014 (0x0004) [0x0000000000002002] (CPF_Const | CPF_Transient)
	uint32_t                                           bMirrorSkeleton : 1;                           // 0x0018 (0x0004) [0x0000000000000000] [0x00000001] 
	uint32_t                                           bIsAdditive : 1;                               // 0x0018 (0x0004) [0x0000000000000000] [0x00000002] 
	int32_t                                            DrawY;                                         // 0x001C (0x0004) [0x0000000800000000] (CPF_EditorOnly)
};

// ScriptStruct Engine.AnimNode_MultiBlendPerBone.WeightNodeRule
// Size: 0x0020
struct FWeightNodeRule
{
	class FName                                        NodeName;                                      // 0x0000 (0x0008) [0x0000000000000001] (CPF_Edit)    
	class UAnimNodeBlendBase*                          CachedNode;                                    // 0x0008 (0x0008) [0x0000000000000000]               
	class UAnimNodeSlot*                               CachedSlotNode;                                // 0x0010 (0x0008) [0x0000000000000000]               
	uint8_t                                            WeightCheck;                                   // 0x0018 (0x0001) [0x0000000000000001] (CPF_Edit)    
	uint8_t                                          UnknownData00[0x3];                            // 0x0019 (0x0003) MISSED OFFSET
	int32_t                                            ChildIndex;                                    // 0x001C (0x0004) [0x0000000000000001] (CPF_Edit)    
};

// ScriptStruct Engine.AnimNode_MultiBlendPerBone.WeightRule
// Size: 0x0040
struct FWeightRule
{
	struct FWeightNodeRule                             FirstNode;                                     // 0x0000 (0x0020) [0x0000000000000001] (CPF_Edit)    
	struct FWeightNodeRule                             SecondNode;                                    // 0x0020 (0x0020) [0x0000000000000001] (CPF_Edit)    
};

// ScriptStruct Engine.AnimNode_MultiBlendPerBone.BranchInfo
// Size: 0x000C
struct FBranchInfo
{
	class FName                                        BoneName;                                      // 0x0000 (0x0008) [0x0000000000000001] (CPF_Edit)    
	float                                              PerBoneWeightIncrease;                         // 0x0008 (0x0004) [0x0000000000000001] (CPF_Edit)    
};

// ScriptStruct Engine.AnimNode_MultiBlendPerBone.PerBoneMaskInfo
// Size: 0x0058 (0x0054 PropertySize + 0x0004 padding to satisfy MinAlignment of 8)
struct FPerBoneMaskInfo
{
	class TArray<struct FBranchInfo>                   BranchList;                                    // 0x0000 (0x0010) [0x0000000000400001] (CPF_Edit | CPF_NeedCtorLink)
	float                                              DesiredWeight;                                 // 0x0010 (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              BlendTimeToGo;                                 // 0x0014 (0x0004) [0x0000000000000001] (CPF_Edit)    
	class TArray<struct FWeightRule>                   WeightRuleList;                                // 0x0018 (0x0010) [0x0000000000400001] (CPF_Edit | CPF_NeedCtorLink)
	uint32_t                                           bWeightBasedOnNodeRules : 1;                   // 0x0028 (0x0004) [0x0000000000000001] [0x00000001] (CPF_Edit)
	uint32_t                                           bDisableForNonLocalHumanPlayers : 1;           // 0x0028 (0x0004) [0x0000000000000001] [0x00000002] (CPF_Edit)
	uint32_t                                           bPendingBlend : 1;                             // 0x0028 (0x0004) [0x0000000000002000] [0x00000004] (CPF_Transient)
	uint8_t                                          UnknownData00[0x4];                            // 0x002C (0x0004) MISSED OFFSET
	class TArray<float>                                PerBoneWeights;                                // 0x0030 (0x0010) [0x0000000000402000] (CPF_Transient | CPF_NeedCtorLink)
	class TArray<uint8_t>                              TransformReqBone;                              // 0x0040 (0x0010) [0x0000000000402000] (CPF_Transient | CPF_NeedCtorLink)
	int32_t                                            TransformReqBoneIndex;                         // 0x0050 (0x0004) [0x0000000000002000] (CPF_Transient)
	uint8_t                                          MinAlignmentPadding[0x4];                      // 0x0054 (0x0004) PADDING FOR MINALIGNMENT
};

// ScriptStruct Engine.AnimNodeAimOffset.AimTransform
// Size: 0x0020 (0x001C PropertySize + 0x0004 padding to satisfy MinAlignment of 16)
struct FAimTransform
{
	struct FQuat                                       Quaternion;                                    // 0x0000 (0x0010) [0x0000000000000001] (CPF_Edit)    
	struct FVector                                     Translation;                                   // 0x0010 (0x000C) [0x0000000000000001] (CPF_Edit)    
	uint8_t                                          MinAlignmentPadding[0x4];                      // 0x001C (0x0004) PADDING FOR MINALIGNMENT
};

// ScriptStruct Engine.AnimNodeAimOffset.AimComponent
// Size: 0x0130
struct FAimComponent
{
	class FName                                        BoneName;                                      // 0x0000 (0x0008) [0x0000000000000001] (CPF_Edit)    
	uint8_t                                          UnknownData00[0x8];                            // 0x0008 (0x0008) MISSED OFFSET
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
// Size: 0x0070
struct FAimOffsetProfile
{
	class FName                                        ProfileName;                                   // 0x0000 (0x0008) [0x0000000000020003] (CPF_Edit | CPF_Const | CPF_EditConst)
	struct FVector2D                                   HorizontalRange;                               // 0x0008 (0x0008) [0x0000000000000001] (CPF_Edit)    
	struct FVector2D                                   VerticalRange;                                 // 0x0010 (0x0008) [0x0000000000000001] (CPF_Edit)    
	class TArray<struct FAimComponent>                 AimComponents;                                 // 0x0018 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	class FName                                        AnimName_LU;                                   // 0x0028 (0x0008) [0x0000000000000001] (CPF_Edit)    
	class FName                                        AnimName_LC;                                   // 0x0030 (0x0008) [0x0000000000000001] (CPF_Edit)    
	class FName                                        AnimName_LD;                                   // 0x0038 (0x0008) [0x0000000000000001] (CPF_Edit)    
	class FName                                        AnimName_CU;                                   // 0x0040 (0x0008) [0x0000000000000001] (CPF_Edit)    
	class FName                                        AnimName_CC;                                   // 0x0048 (0x0008) [0x0000000000000001] (CPF_Edit)    
	class FName                                        AnimName_CD;                                   // 0x0050 (0x0008) [0x0000000000000001] (CPF_Edit)    
	class FName                                        AnimName_RU;                                   // 0x0058 (0x0008) [0x0000000000000001] (CPF_Edit)    
	class FName                                        AnimName_RC;                                   // 0x0060 (0x0008) [0x0000000000000001] (CPF_Edit)    
	class FName                                        AnimName_RD;                                   // 0x0068 (0x0008) [0x0000000000000001] (CPF_Edit)    
};

// ScriptStruct Engine.AnimNodeBlendMultiBone.ChildBoneBlendInfo
// Size: 0x0038
struct FChildBoneBlendInfo
{
	class TArray<float>                                TargetPerBoneWeight;                           // 0x0000 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	class FName                                        InitTargetStartBone;                           // 0x0010 (0x0008) [0x0000000000000001] (CPF_Edit)    
	float                                              InitPerBoneIncrease;                           // 0x0018 (0x0004) [0x0000000000000001] (CPF_Edit)    
	class FName                                        OldStartBone;                                  // 0x001C (0x0008) [0x0000000000000002] (CPF_Const)   
	float                                              OldBoneIncrease;                               // 0x0024 (0x0004) [0x0000000000000002] (CPF_Const)   
	class TArray<uint8_t>                              TargetRequiredBones;                           // 0x0028 (0x0010) [0x0000000000402000] (CPF_Transient | CPF_NeedCtorLink)
};

// ScriptStruct Engine.AnimNodeRandom.RandomAnimInfo
// Size: 0x0020
struct FRandomAnimInfo
{
	float                                              Chance;                                        // 0x0000 (0x0004) [0x0000000000000001] (CPF_Edit)    
	uint8_t                                            LoopCountMin;                                  // 0x0004 (0x0001) [0x0000000000000001] (CPF_Edit)    
	uint8_t                                            LoopCountMax;                                  // 0x0005 (0x0001) [0x0000000000000001] (CPF_Edit)    
	uint8_t                                          UnknownData00[0x2];                            // 0x0006 (0x0002) MISSED OFFSET
	float                                              BlendInTime;                                   // 0x0008 (0x0004) [0x0000000000000001] (CPF_Edit)    
	struct FVector2D                                   PlayRateRange;                                 // 0x000C (0x0008) [0x0000000000000001] (CPF_Edit)    
	uint32_t                                           bStillFrame : 1;                               // 0x0014 (0x0004) [0x0000000000000001] [0x00000001] (CPF_Edit)
	uint8_t                                            LoopCount;                                     // 0x0018 (0x0001) [0x0000000000002000] (CPF_Transient)
	uint8_t                                          UnknownData01[0x3];                            // 0x0019 (0x0003) MISSED OFFSET
	float                                              LastPosition;                                  // 0x001C (0x0004) [0x0000000000002000] (CPF_Transient)
};

// ScriptStruct Engine.AnimNodeSequenceBlendBase.AnimInfo
// Size: 0x0018 (0x0014 PropertySize + 0x0004 padding to satisfy MinAlignment of 8)
struct FAnimInfo
{
	class FName                                        AnimSeqName;                                   // 0x0000 (0x0008) [0x0000000000000002] (CPF_Const)   
	class UAnimSequence*                               AnimSeq;                                       // 0x0008 (0x0008) [0x0000000000002002] (CPF_Const | CPF_Transient)
	int32_t                                            AnimLinkupIndex;                               // 0x0010 (0x0004) [0x0000000000002002] (CPF_Const | CPF_Transient)
	uint8_t                                          MinAlignmentPadding[0x4];                      // 0x0014 (0x0004) PADDING FOR MINALIGNMENT
};

// ScriptStruct Engine.AnimNodeSequenceBlendBase.AnimBlendInfo
// Size: 0x0028 (0x0024 PropertySize + 0x0004 padding to satisfy MinAlignment of 8)
struct FAnimBlendInfo
{
	class FName                                        AnimName;                                      // 0x0000 (0x0008) [0x0000000000000001] (CPF_Edit)    
	struct FAnimInfo                                   AnimInfo;                                      // 0x0008 (0x0018) [0x0000000000000000]               
	float                                              Weight;                                        // 0x0020 (0x0004) [0x0000000000002000] (CPF_Transient)
	uint8_t                                          MinAlignmentPadding[0x4];                      // 0x0024 (0x0004) PADDING FOR MINALIGNMENT
};

// ScriptStruct Engine.AnimNodeSynch.SynchGroup
// Size: 0x0028
struct FSynchGroup
{
	class TArray<class UAnimNodeSequence*>             SeqNodes;                                      // 0x0000 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	class UAnimNodeSequence*                           MasterNode;                                    // 0x0010 (0x0008) [0x0000000000002000] (CPF_Transient)
	class FName                                        GroupName;                                     // 0x0018 (0x0008) [0x0000000000000001] (CPF_Edit)    
	uint32_t                                           bFireSlaveNotifies : 1;                        // 0x0020 (0x0004) [0x0000000000000001] [0x00000001] (CPF_Edit)
	float                                              RateScale;                                     // 0x0024 (0x0004) [0x0000000000000001] (CPF_Edit)    
};

// ScriptStruct Engine.SkeletalMeshComponent.BonePair
// Size: 0x0010
struct FBonePair
{
	class FName                                        Bones[2];                                      // 0x0000 (0x0010) [0x0000000000000000]               
};

// ScriptStruct Engine.SkeletalMeshComponent.SkelMeshComponentLODInfo
// Size: 0x0020 (0x001C PropertySize + 0x0004 padding to satisfy MinAlignment of 8)
struct FSkelMeshComponentLODInfo
{
	class TArray<uint32_t>                             HiddenMaterials;                               // 0x0000 (0x0010) [0x0000000000400002] (CPF_Const | CPF_NeedCtorLink)
	uint32_t                                           bNeedsInstanceWeightUpdate : 1;                // 0x0010 (0x0004) [0x0000000000000002] [0x00000001] (CPF_Const)
	uint32_t                                           bAlwaysUseInstanceWeights : 1;                 // 0x0010 (0x0004) [0x0000000000000002] [0x00000002] (CPF_Const)
	uint8_t                                            InstanceWeightUsage;                           // 0x0014 (0x0001) [0x0000000000002002] (CPF_Const | CPF_Transient)
	uint8_t                                          UnknownData00[0x3];                            // 0x0015 (0x0003) MISSED OFFSET
	int32_t                                            InstanceWeightIdx;                             // 0x0018 (0x0004) [0x0000000000002002] (CPF_Const | CPF_Transient)
	uint8_t                                          MinAlignmentPadding[0x4];                      // 0x001C (0x0004) PADDING FOR MINALIGNMENT
};

// ScriptStruct Engine.SkeletalMeshComponent.Attachment
// Size: 0x0038 (0x0034 PropertySize + 0x0004 padding to satisfy MinAlignment of 8)
struct FAttachment
{
	class UActorComponent*                             Component;                                     // 0x0000 (0x0008) [0x0000000004080009] (CPF_Edit | CPF_ExportObject | CPF_Component | CPF_EditInline)
	class FName                                        BoneName;                                      // 0x0008 (0x0008) [0x0000000000000001] (CPF_Edit)    
	struct FVector                                     RelativeLocation;                              // 0x0010 (0x000C) [0x0000000000000001] (CPF_Edit)    
	struct FRotator                                    RelativeRotation;                              // 0x001C (0x000C) [0x0000000000000001] (CPF_Edit)    
	struct FVector                                     RelativeScale;                                 // 0x0028 (0x000C) [0x0000000000000001] (CPF_Edit)    
	uint8_t                                          MinAlignmentPadding[0x4];                      // 0x0034 (0x0004) PADDING FOR MINALIGNMENT
};

// ScriptStruct Engine.SkeletalMeshComponent.ActiveMorph
// Size: 0x0010 (0x000C PropertySize + 0x0004 padding to satisfy MinAlignment of 8)
struct FActiveMorph
{
	class UMorphTarget*                                Target;                                        // 0x0000 (0x0008) [0x0000000000000000]               
	float                                              Weight;                                        // 0x0008 (0x0004) [0x0000000000000000]               
	uint8_t                                          MinAlignmentPadding[0x4];                      // 0x000C (0x0004) PADDING FOR MINALIGNMENT
};

// ScriptStruct Engine.EngineTypes.LocalizedSubtitle
// Size: 0x0028 (0x0024 PropertySize + 0x0004 padding to satisfy MinAlignment of 8)
struct FLocalizedSubtitle
{
	class FString                                      LanguageExt;                                   // 0x0000 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	class TArray<struct FSubtitleCue>                  Subtitles;                                     // 0x0010 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	uint32_t                                           bMature : 1;                                   // 0x0020 (0x0004) [0x0000000000000000] [0x00000001] 
	uint32_t                                           bManualWordWrap : 1;                           // 0x0020 (0x0004) [0x0000000000000000] [0x00000002] 
	uint32_t                                           bSingleLine : 1;                               // 0x0020 (0x0004) [0x0000000000000000] [0x00000004] 
	uint8_t                                          MinAlignmentPadding[0x4];                      // 0x0024 (0x0004) PADDING FOR MINALIGNMENT
};

// ScriptStruct Engine.EngineTypes.LightMapRef
// Size: 0x0008
struct FLightMapRef
{
	struct FPointer                                    Reference;                                     // 0x0000 (0x0008) [0x0000000000001002] (CPF_Const | CPF_Native)
};

// ScriptStruct Engine.EngineTypes.DominantShadowInfo
// Size: 0x00B0 (0x00A4 PropertySize + 0x000C padding to satisfy MinAlignment of 16)
struct FDominantShadowInfo
{
	struct FMatrix                                     WorldToLight;                                  // 0x0000 (0x0040) [0x0000000000000000]               
	struct FMatrix                                     LightToWorld;                                  // 0x0040 (0x0040) [0x0000000000000000]               
	struct FBox                                        LightSpaceImportanceBounds;                    // 0x0080 (0x001C) [0x0000000000000000]               
	int32_t                                            ShadowMapSizeX;                                // 0x009C (0x0004) [0x0000000000000000]               
	int32_t                                            ShadowMapSizeY;                                // 0x00A0 (0x0004) [0x0000000000000000]               
	uint8_t                                          MinAlignmentPadding[0xC];                      // 0x00A4 (0x000C) PADDING FOR MINALIGNMENT
};

// ScriptStruct Engine.EngineTypes.LightmassLightSettings
// Size: 0x000C
struct FLightmassLightSettings
{
	float                                              IndirectLightingScale;                         // 0x0000 (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              IndirectLightingSaturation;                    // 0x0004 (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              ShadowExponent;                                // 0x0008 (0x0004) [0x0000000000000001] (CPF_Edit)    
};

// ScriptStruct Engine.Pawn.ScalarParameterInterpStruct
// Size: 0x0014
struct FScalarParameterInterpStruct
{
	class FName                                        ParameterName;                                 // 0x0000 (0x0008) [0x0000000000000001] (CPF_Edit)    
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
// Size: 0x001C
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
// Size: 0x0014
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
// Size: 0x0004
struct FSwarmDebugOptions
{
	uint32_t                                           bDistributionEnabled : 1;                      // 0x0000 (0x0004) [0x0000000000000001] [0x00000001] (CPF_Edit)
	uint32_t                                           bForceContentExport : 1;                       // 0x0000 (0x0004) [0x0000000000000001] [0x00000002] (CPF_Edit)
	uint32_t                                           bInitialized : 1;                              // 0x0000 (0x0004) [0x0000000000000000] [0x00000004] 
};

// ScriptStruct Engine.EngineTypes.RootMotionCurve
// Size: 0x0028 (0x0024 PropertySize + 0x0004 padding to satisfy MinAlignment of 8)
struct FRootMotionCurve
{
	class FName                                        AnimName;                                      // 0x0000 (0x0008) [0x0000000000000001] (CPF_Edit)    
	struct FInterpCurveVector                          Curve;                                         // 0x0008 (0x0018) [0x0000000000400001] (CPF_Edit | CPF_NeedCtorLink)
	float                                              MaxCurveTime;                                  // 0x0020 (0x0004) [0x0000000000000001] (CPF_Edit)    
	uint8_t                                          MinAlignmentPadding[0x4];                      // 0x0024 (0x0004) PADDING FOR MINALIGNMENT
};

// ScriptStruct Engine.AnimNotify_Trails.TrailSocketSamplePoint
// Size: 0x0018
struct FTrailSocketSamplePoint
{
	struct FVector                                     Position;                                      // 0x0000 (0x000C) [0x0000000000000000]               
	struct FVector                                     Velocity;                                      // 0x000C (0x000C) [0x0000000000000000]               
};

// ScriptStruct Engine.AnimNotify_Trails.TrailSamplePoint
// Size: 0x004C
struct FTrailSamplePoint
{
	float                                              RelativeTime;                                  // 0x0000 (0x0004) [0x0000000000000000]               
	struct FTrailSocketSamplePoint                     FirstEdgeSample;                               // 0x0004 (0x0018) [0x0000000000000000]               
	struct FTrailSocketSamplePoint                     ControlPointSample;                            // 0x001C (0x0018) [0x0000000000000000]               
	struct FTrailSocketSamplePoint                     SecondEdgeSample;                              // 0x0034 (0x0018) [0x0000000000000000]               
};

// ScriptStruct Engine.AnimNotify_Trails.TrailSample
// Size: 0x0028
struct FTrailSample
{
	float                                              RelativeTime;                                  // 0x0000 (0x0004) [0x0000000000000000]               
	struct FVector                                     FirstEdgeSample;                               // 0x0004 (0x000C) [0x0000000000000000]               
	struct FVector                                     ControlPointSample;                            // 0x0010 (0x000C) [0x0000000000000000]               
	struct FVector                                     SecondEdgeSample;                              // 0x001C (0x000C) [0x0000000000000000]               
};

// ScriptStruct Engine.AnimSet.AnimSetMeshLinkup
// Size: 0x0010
struct FAnimSetMeshLinkup
{
	class TArray<int32_t>                              BoneToTrackTable;                              // 0x0000 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
};

// ScriptStruct Engine.AnimTree.AnimGroup
// Size: 0x0030
struct FAnimGroup
{
	class TArray<class UAnimNodeSequence*>             SeqNodes;                                      // 0x0000 (0x0010) [0x0000000000402002] (CPF_Const | CPF_Transient | CPF_NeedCtorLink)
	class UAnimNodeSequence*                           SynchMaster;                                   // 0x0010 (0x0008) [0x0000000000002002] (CPF_Const | CPF_Transient)
	class UAnimNodeSequence*                           NotifyMaster;                                  // 0x0018 (0x0008) [0x0000000000002002] (CPF_Const | CPF_Transient)
	class FName                                        GroupName;                                     // 0x0020 (0x0008) [0x0000000000000003] (CPF_Edit | CPF_Const)
	float                                              RateScale;                                     // 0x0028 (0x0004) [0x0000000000000003] (CPF_Edit | CPF_Const)
	float                                              SynchPctPosition;                              // 0x002C (0x0004) [0x0000000000000002] (CPF_Const)   
};

// ScriptStruct Engine.AnimTree.SkelControlListHead
// Size: 0x0018 (0x0014 PropertySize + 0x0004 padding to satisfy MinAlignment of 8)
struct FSkelControlListHead
{
	class FName                                        BoneName;                                      // 0x0000 (0x0008) [0x0000000000000000]               
	class USkelControlBase*                            ControlHead;                                   // 0x0008 (0x0008) [0x0000000004400008] (CPF_ExportObject | CPF_NeedCtorLink | CPF_EditInline)
	int32_t                                            DrawY;                                         // 0x0010 (0x0004) [0x0000000800000000] (CPF_EditorOnly)
	uint8_t                                          MinAlignmentPadding[0x4];                      // 0x0014 (0x0004) PADDING FOR MINALIGNMENT
};

// ScriptStruct Engine.AnimTree.PreviewSkelMeshStruct
// Size: 0x0020
struct FPreviewSkelMeshStruct
{
	class FName                                        DisplayName;                                   // 0x0000 (0x0008) [0x0000000000000001] (CPF_Edit)    
	class USkeletalMesh*                               PreviewSkelMesh;                               // 0x0008 (0x0008) [0x0000000000000001] (CPF_Edit)    
	class TArray<class UMorphTargetSet*>               PreviewMorphSets;                              // 0x0010 (0x0010) [0x0000000000400001] (CPF_Edit | CPF_NeedCtorLink)
};

// ScriptStruct Engine.AnimTree.PreviewSocketStruct
// Size: 0x0020
struct FPreviewSocketStruct
{
	class FName                                        DisplayName;                                   // 0x0000 (0x0008) [0x0000000000000001] (CPF_Edit)    
	class FName                                        SocketName;                                    // 0x0008 (0x0008) [0x0000000000000001] (CPF_Edit)    
	class USkeletalMesh*                               PreviewSkelMesh;                               // 0x0010 (0x0008) [0x0000000000000001] (CPF_Edit)    
	class UStaticMesh*                                 PreviewStaticMesh;                             // 0x0018 (0x0008) [0x0000000000000001] (CPF_Edit)    
};

// ScriptStruct Engine.AnimTree.PreviewAnimSetsStruct
// Size: 0x0018
struct FPreviewAnimSetsStruct
{
	class FName                                        DisplayName;                                   // 0x0000 (0x0008) [0x0000000000000001] (CPF_Edit)    
	class TArray<class UAnimSet*>                      PreviewAnimSets;                               // 0x0008 (0x0010) [0x0000000000400001] (CPF_Edit | CPF_NeedCtorLink)
};

// ScriptStruct Engine.ApexClothingAsset.ClothingLodInfo
// Size: 0x0010
struct FClothingLodInfo
{
	class TArray<int32_t>                              LODMaterialMap;                                // 0x0000 (0x0010) [0x0000000000500043] (CPF_Edit | CPF_Const | CPF_EditFixedSize | CPF_NeedCtorLink)
};

// ScriptStruct Engine.ApexDestructibleAsset.NxDestructibleDamageParameters
// Size: 0x0014
struct FNxDestructibleDamageParameters
{
	float                                              DamageThreshold;                               // 0x0000 (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              DamageSpread;                                  // 0x0004 (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              ImpactDamage;                                  // 0x0008 (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              ImpactResistance;                              // 0x000C (0x0004) [0x0000000000000001] (CPF_Edit)    
	int32_t                                            DefaultImpactDamageDepth;                      // 0x0010 (0x0004) [0x0000000000000001] (CPF_Edit)    
};

// ScriptStruct Engine.ApexDestructibleAsset.NxDestructibleDebrisParameters
// Size: 0x002C
struct FNxDestructibleDebrisParameters
{
	float                                              DebrisLifetimeMin;                             // 0x0000 (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              DebrisLifetimeMax;                             // 0x0004 (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              DebrisMaxSeparationMin;                        // 0x0008 (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              DebrisMaxSeparationMax;                        // 0x000C (0x0004) [0x0000000000000001] (CPF_Edit)    
	struct FBox                                        ValidBounds;                                   // 0x0010 (0x001C) [0x0000000000000001] (CPF_Edit)    
};

// ScriptStruct Engine.ApexDestructibleAsset.NxDestructibleAdvancedParameters
// Size: 0x0018
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
// Size: 0x0004
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
// Size: 0x0008 (0x0005 PropertySize + 0x0003 padding to satisfy MinAlignment of 4)
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
	uint8_t                                          MinAlignmentPadding[0x3];                      // 0x0005 (0x0003) PADDING FOR MINALIGNMENT
};

// ScriptStruct Engine.ApexDestructibleAsset.NxDestructibleParameters
// Size: 0x00F0
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
	class TArray<struct FNxDestructibleDepthParameters> DepthParameters;                               // 0x00D0 (0x0010) [0x0000000000400041] (CPF_Edit | CPF_EditFixedSize | CPF_NeedCtorLink)
	int32_t                                            DynamicChunksDominanceGroup;                   // 0x00E0 (0x0004) [0x0000000000000001] (CPF_Edit)    
	uint32_t                                           UseDynamicChunksGroupsMask : 1;                // 0x00E4 (0x0004) [0x0000000000000001] [0x00000001] (CPF_Edit)
	uint8_t                                            DynamicChunksChannel;                          // 0x00E8 (0x0001) [0x0000000000000003] (CPF_Edit | CPF_Const)
	uint8_t                                          UnknownData00[0x3];                            // 0x00E9 (0x0003) MISSED OFFSET
	struct FRBCollisionChannelContainer                DynamicChunksCollideWithChannels;              // 0x00EC (0x0004) [0x0000000000000003] (CPF_Edit | CPF_Const)
};

// ScriptStruct Engine.ApexDestructibleDamageParameters.DamageParameters
// Size: 0x0010
struct FDamageParameters
{
	uint8_t                                            OverrideMode;                                  // 0x0000 (0x0001) [0x0000000000000001] (CPF_Edit)    
	uint8_t                                          UnknownData00[0x3];                            // 0x0001 (0x0003) MISSED OFFSET
	float                                              BaseDamage;                                    // 0x0004 (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              Radius;                                        // 0x0008 (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              Momentum;                                      // 0x000C (0x0004) [0x0000000000000001] (CPF_Edit)    
};

// ScriptStruct Engine.ApexDestructibleDamageParameters.DamagePair
// Size: 0x0018
struct FDamagePair
{
	class FName                                        DamageCauserName;                              // 0x0000 (0x0008) [0x0000000000000001] (CPF_Edit)    
	struct FDamageParameters                           Params;                                        // 0x0008 (0x0010) [0x0000000000000001] (CPF_Edit)    
};

// ScriptStruct Engine.AppNotificationsBase.NotificationMessageInfo
// Size: 0x0020
struct FNotificationMessageInfo
{
	class FString                                      Key;                                           // 0x0000 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	class FString                                      Value;                                         // 0x0010 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
};

// ScriptStruct Engine.AppNotificationsBase.NotificationInfo
// Size: 0x0030
struct FNotificationInfo
{
	uint32_t                                           bIsLocal : 1;                                  // 0x0000 (0x0004) [0x0000000000000000] [0x00000001] 
	uint8_t                                          UnknownData00[0x4];                            // 0x0004 (0x0004) MISSED OFFSET
	class FString                                      MessageBody;                                   // 0x0008 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	int32_t                                            BadgeNumber;                                   // 0x0018 (0x0004) [0x0000000000000000]               
	uint8_t                                          UnknownData01[0x4];                            // 0x001C (0x0004) MISSED OFFSET
	class TArray<struct FNotificationMessageInfo>      MessageInfo;                                   // 0x0020 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
};

// ScriptStruct Engine.AppNotificationsBase.LaunchNotificationInfo
// Size: 0x0038
struct FLaunchNotificationInfo
{
	uint32_t                                           bWasLaunchedViaNotification : 1;               // 0x0000 (0x0004) [0x0000000000000000] [0x00000001] 
	uint8_t                                          UnknownData00[0x4];                            // 0x0004 (0x0004) MISSED OFFSET
	struct FNotificationInfo                           Notification;                                  // 0x0008 (0x0030) [0x0000000000400000] (CPF_NeedCtorLink)
};

// ScriptStruct Engine.Info.KeyValuePair
// Size: 0x0020
struct FKeyValuePair
{
	class FString                                      Key;                                           // 0x0000 (0x0010) [0x0000000000500001] (CPF_Edit | CPF_NeedCtorLink)
	class FString                                      Value;                                         // 0x0010 (0x0010) [0x0000000000500001] (CPF_Edit | CPF_NeedCtorLink)
};

// ScriptStruct Engine.Info.PlayerResponseLine
// Size: 0x0038
struct FPlayerResponseLine
{
	int32_t                                            PlayerNum;                                     // 0x0000 (0x0004) [0x0000000000100001] (CPF_Edit)    
	int32_t                                            PlayerID;                                      // 0x0004 (0x0004) [0x0000000000100001] (CPF_Edit)    
	class FString                                      PlayerName;                                    // 0x0008 (0x0010) [0x0000000000500001] (CPF_Edit | CPF_NeedCtorLink)
	int32_t                                            Ping;                                          // 0x0018 (0x0004) [0x0000000000100001] (CPF_Edit)    
	int32_t                                            Score;                                         // 0x001C (0x0004) [0x0000000000100001] (CPF_Edit)    
	int32_t                                            StatsID;                                       // 0x0020 (0x0004) [0x0000000000100001] (CPF_Edit)    
	uint8_t                                          UnknownData00[0x4];                            // 0x0024 (0x0004) MISSED OFFSET
	class TArray<struct FKeyValuePair>                 PlayerInfo;                                    // 0x0028 (0x0010) [0x0000000000500001] (CPF_Edit | CPF_NeedCtorLink)
};

// ScriptStruct Engine.Info.ServerResponseLine
// Size: 0x0080
struct FServerResponseLine
{
	int32_t                                            ServerId;                                      // 0x0000 (0x0004) [0x0000000000100001] (CPF_Edit)    
	uint8_t                                          UnknownData00[0x4];                            // 0x0004 (0x0004) MISSED OFFSET
	class FString                                      IP;                                            // 0x0008 (0x0010) [0x0000000000500001] (CPF_Edit | CPF_NeedCtorLink)
	int32_t                                            Port;                                          // 0x0018 (0x0004) [0x0000000000100001] (CPF_Edit)    
	int32_t                                            QueryPort;                                     // 0x001C (0x0004) [0x0000000000100001] (CPF_Edit)    
	class FString                                      ServerName;                                    // 0x0020 (0x0010) [0x0000000000500001] (CPF_Edit | CPF_NeedCtorLink)
	class FString                                      MapName;                                       // 0x0030 (0x0010) [0x0000000000500001] (CPF_Edit | CPF_NeedCtorLink)
	class FString                                      GameType;                                      // 0x0040 (0x0010) [0x0000000000500001] (CPF_Edit | CPF_NeedCtorLink)
	int32_t                                            CurrentPlayers;                                // 0x0050 (0x0004) [0x0000000000100001] (CPF_Edit)    
	int32_t                                            MaxPlayers;                                    // 0x0054 (0x0004) [0x0000000000100001] (CPF_Edit)    
	int32_t                                            Ping;                                          // 0x0058 (0x0004) [0x0000000000100001] (CPF_Edit)    
	uint8_t                                          UnknownData01[0x4];                            // 0x005C (0x0004) MISSED OFFSET
	class TArray<struct FKeyValuePair>                 ServerInfo;                                    // 0x0060 (0x0010) [0x0000000000500001] (CPF_Edit | CPF_NeedCtorLink)
	class TArray<struct FPlayerResponseLine>           PlayerInfo;                                    // 0x0070 (0x0010) [0x0000000000500001] (CPF_Edit | CPF_NeedCtorLink)
};

// ScriptStruct Engine.PlayerReplicationInfo.AutomatedTestingDatum
// Size: 0x0008
struct FAutomatedTestingDatum
{
	int32_t                                            NumberOfMatchesPlayed;                         // 0x0000 (0x0004) [0x0000000000000000]               
	int32_t                                            NumMapListCyclesDone;                          // 0x0004 (0x0004) [0x0000000000000000]               
};

// ScriptStruct Engine.Camera.ViewTargetTransitionParams
// Size: 0x0010
struct FViewTargetTransitionParams
{
	float                                              BlendTime;                                     // 0x0000 (0x0004) [0x0000000000000001] (CPF_Edit)    
	uint8_t                                            BlendFunction;                                 // 0x0004 (0x0001) [0x0000000000000001] (CPF_Edit)    
	uint8_t                                          UnknownData00[0x3];                            // 0x0005 (0x0003) MISSED OFFSET
	float                                              BlendExp;                                      // 0x0008 (0x0004) [0x0000000000000001] (CPF_Edit)    
	uint32_t                                           bLockOutgoing : 1;                             // 0x000C (0x0004) [0x0000000000000001] [0x00000001] (CPF_Edit)
};

// ScriptStruct Engine.Camera.TCameraCache
// Size: 0x0020
struct FTCameraCache
{
	float                                              TimeStamp;                                     // 0x0000 (0x0004) [0x0000000000000000]               
	struct FTPOV                                       POV;                                           // 0x0004 (0x001C) [0x0000000000000000]               
};

// ScriptStruct Engine.Camera.TViewTarget
// Size: 0x0038
struct FTViewTarget
{
	class AActor*                                      Target;                                        // 0x0000 (0x0008) [0x0000000000000001] (CPF_Edit)    
	class AController*                                 Controller;                                    // 0x0008 (0x0008) [0x0000000000000001] (CPF_Edit)    
	struct FTPOV                                       POV;                                           // 0x0010 (0x001C) [0x0000000000000001] (CPF_Edit)    
	float                                              AspectRatio;                                   // 0x002C (0x0004) [0x0000000000000001] (CPF_Edit)    
	class APlayerReplicationInfo*                      PRI;                                           // 0x0030 (0x0008) [0x0000000000000001] (CPF_Edit)    
};

// ScriptStruct Engine.PostProcessVolume.LUTBlender
// Size: 0x0028 (0x0024 PropertySize + 0x0004 padding to satisfy MinAlignment of 8)
struct FLUTBlender
{
	class TArray<class UTexture*>                      LUTTextures;                                   // 0x0000 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	class TArray<float>                                LUTWeights;                                    // 0x0010 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	uint32_t                                           bHasChanged : 1;                               // 0x0020 (0x0004) [0x0000000000003002] [0x00000001] (CPF_Const | CPF_Native | CPF_Transient)
	uint8_t                                          MinAlignmentPadding[0x4];                      // 0x0024 (0x0004) PADDING FOR MINALIGNMENT
};

// ScriptStruct Engine.PostProcessVolume.MobileColorGradingParams
// Size: 0x003C
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
// Size: 0x0034
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
	float                                              Mobile_BlurAmount;                             // 0x0004 (0x0004) [0x0000000200000001] (CPF_Edit | CPF_Interp)
	float                                              Mobile_TransitionTime;                         // 0x0008 (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              Mobile_Bloom_Scale;                            // 0x000C (0x0004) [0x0000000200000001] (CPF_Edit | CPF_Interp)
	float                                              Mobile_Bloom_Threshold;                        // 0x0010 (0x0004) [0x0000000200000001] (CPF_Edit | CPF_Interp)
	struct FLinearColor                                Mobile_Bloom_Tint;                             // 0x0014 (0x0010) [0x0000000200000001] (CPF_Edit | CPF_Interp)
	float                                              Mobile_DOF_Distance;                           // 0x0024 (0x0004) [0x0000000200000001] (CPF_Edit | CPF_Interp)
	float                                              Mobile_DOF_MinRange;                           // 0x0028 (0x0004) [0x0000000200000001] (CPF_Edit | CPF_Interp)
	float                                              Mobile_DOF_MaxRange;                           // 0x002C (0x0004) [0x0000000200000001] (CPF_Edit | CPF_Interp)
	float                                              Mobile_DOF_FarBlurFactor;                      // 0x0030 (0x0004) [0x0000000200000001] (CPF_Edit | CPF_Interp)
};

// ScriptStruct Engine.PostProcessVolume.PostProcessSettings
// Size: 0x0168
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
	float                                              Bloom_Scale;                                   // 0x0008 (0x0004) [0x0000000200000001] (CPF_Edit | CPF_Interp)
	float                                              Bloom_Threshold;                               // 0x000C (0x0004) [0x0000000200000001] (CPF_Edit | CPF_Interp)
	struct FColor                                      Bloom_Tint;                                    // 0x0010 (0x0004) [0x0000000200000001] (CPF_Edit | CPF_Interp)
	float                                              Bloom_ScreenBlendThreshold;                    // 0x0014 (0x0004) [0x0000000200000001] (CPF_Edit | CPF_Interp)
	float                                              Bloom_InterpolationDuration;                   // 0x0018 (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              DOF_BlurBloomKernelSize;                       // 0x001C (0x0004) [0x0000000200000001] (CPF_Edit | CPF_Interp)
	float                                              DOF_FalloffExponent;                           // 0x0020 (0x0004) [0x0000000200000001] (CPF_Edit | CPF_Interp)
	float                                              DOF_BlurKernelSize;                            // 0x0024 (0x0004) [0x0000000200000001] (CPF_Edit | CPF_Interp)
	float                                              DOF_MaxNearBlurAmount;                         // 0x0028 (0x0004) [0x0000000200000001] (CPF_Edit | CPF_Interp)
	float                                              DOF_MinBlurAmount;                             // 0x002C (0x0004) [0x0000000200000001] (CPF_Edit | CPF_Interp)
	float                                              DOF_MaxFarBlurAmount;                          // 0x0030 (0x0004) [0x0000000200000001] (CPF_Edit | CPF_Interp)
	uint8_t                                            DOF_FocusType;                                 // 0x0034 (0x0001) [0x0000000000000001] (CPF_Edit)    
	uint8_t                                          UnknownData00[0x3];                            // 0x0035 (0x0003) MISSED OFFSET
	float                                              DOF_FocusInnerRadius;                          // 0x0038 (0x0004) [0x0000000200000001] (CPF_Edit | CPF_Interp)
	float                                              DOF_FocusDistance;                             // 0x003C (0x0004) [0x0000000200000001] (CPF_Edit | CPF_Interp)
	struct FVector                                     DOF_FocusPosition;                             // 0x0040 (0x000C) [0x0000000200000001] (CPF_Edit | CPF_Interp)
	float                                              DOF_InterpolationDuration;                     // 0x004C (0x0004) [0x0000000000000001] (CPF_Edit)    
	class UTexture2D*                                  DOF_BokehTexture;                              // 0x0050 (0x0008) [0x0000000000000001] (CPF_Edit)    
	float                                              MotionBlur_MaxVelocity;                        // 0x0058 (0x0004) [0x0000000200000001] (CPF_Edit | CPF_Interp)
	float                                              MotionBlur_Amount;                             // 0x005C (0x0004) [0x0000000200000001] (CPF_Edit | CPF_Interp)
	uint32_t                                           MotionBlur_FullMotionBlur : 1;                 // 0x0060 (0x0004) [0x0000000000000001] [0x00000001] (CPF_Edit)
	float                                              MotionBlur_CameraRotationThreshold;            // 0x0064 (0x0004) [0x0000000200000001] (CPF_Edit | CPF_Interp)
	float                                              MotionBlur_CameraTranslationThreshold;         // 0x0068 (0x0004) [0x0000000200000001] (CPF_Edit | CPF_Interp)
	float                                              MotionBlur_InterpolationDuration;              // 0x006C (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              Scene_Desaturation;                            // 0x0070 (0x0004) [0x0000000200000001] (CPF_Edit | CPF_Interp)
	struct FVector                                     Scene_Colorize;                                // 0x0074 (0x000C) [0x0000000200000001] (CPF_Edit | CPF_Interp)
	float                                              Scene_TonemapperScale;                         // 0x0080 (0x0004) [0x0000000200000001] (CPF_Edit | CPF_Interp)
	float                                              Scene_ImageGrainScale;                         // 0x0084 (0x0004) [0x0000000200000001] (CPF_Edit | CPF_Interp)
	struct FVector                                     Scene_HighLights;                              // 0x0088 (0x000C) [0x0000000200000001] (CPF_Edit | CPF_Interp)
	struct FVector                                     Scene_MidTones;                                // 0x0094 (0x000C) [0x0000000200000001] (CPF_Edit | CPF_Interp)
	struct FVector                                     Scene_Shadows;                                 // 0x00A0 (0x000C) [0x0000000200000001] (CPF_Edit | CPF_Interp)
	float                                              Scene_InterpolationDuration;                   // 0x00AC (0x0004) [0x0000000000000001] (CPF_Edit)    
	struct FLinearColor                                RimShader_Color;                               // 0x00B0 (0x0010) [0x0000000000000001] (CPF_Edit)    
	float                                              RimShader_InterpolationDuration;               // 0x00C0 (0x0004) [0x0000000000000001] (CPF_Edit)    
	uint8_t                                          UnknownData01[0x4];                            // 0x00C4 (0x0004) MISSED OFFSET
	class UTexture*                                    ColorGrading_LookupTable;                      // 0x00C8 (0x0008) [0x0000000000000001] (CPF_Edit)    
	struct FLUTBlender                                 ColorGradingLUT;                               // 0x00D0 (0x0028) [0x0000000000402002] (CPF_Const | CPF_Transient | CPF_NeedCtorLink)
	struct FMobileColorGradingParams                   MobileColorGrading;                            // 0x00F8 (0x003C) [0x0000000000000001] (CPF_Edit)    
	struct FMobilePostProcessSettings                  MobilePostProcess;                             // 0x0134 (0x0034) [0x0000000200000001] (CPF_Edit | CPF_Interp)
};

// ScriptStruct Engine.EngineBaseTypes.RenderingPerformanceOverrides
// Size: 0x0004
struct FRenderingPerformanceOverrides
{
	uint32_t                                           bAllowAmbientOcclusion : 1;                    // 0x0000 (0x0004) [0x0000000000000001] [0x00000001] (CPF_Edit)
	uint32_t                                           bAllowDominantWholeSceneDynamicShadows : 1;    // 0x0000 (0x0004) [0x0000000000000001] [0x00000002] (CPF_Edit)
	uint32_t                                           bAllowMotionBlurSkinning : 1;                  // 0x0000 (0x0004) [0x0000000000000001] [0x00000004] (CPF_Edit)
	uint32_t                                           bAllowTemporalAA : 1;                          // 0x0000 (0x0004) [0x0000000000000001] [0x00000008] (CPF_Edit)
	uint32_t                                           bAllowLightShafts : 1;                         // 0x0000 (0x0004) [0x0000000000000001] [0x00000010] (CPF_Edit)
};

// ScriptStruct Engine.CameraShake.FOscillator
// Size: 0x000C (0x0009 PropertySize + 0x0003 padding to satisfy MinAlignment of 4)
struct FFOscillator
{
	float                                              Amplitude;                                     // 0x0000 (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              Frequency;                                     // 0x0004 (0x0004) [0x0000000000000001] (CPF_Edit)    
	uint8_t                                            InitialOffset;                                 // 0x0008 (0x0001) [0x0000000000000001] (CPF_Edit)    
	uint8_t                                          MinAlignmentPadding[0x3];                      // 0x0009 (0x0003) PADDING FOR MINALIGNMENT
};

// ScriptStruct Engine.CameraShake.VOscillator
// Size: 0x0024
struct FVOscillator
{
	struct FFOscillator                                X;                                             // 0x0000 (0x000C) [0x0000000000000001] (CPF_Edit)    
	struct FFOscillator                                Y;                                             // 0x000C (0x000C) [0x0000000000000001] (CPF_Edit)    
	struct FFOscillator                                Z;                                             // 0x0018 (0x000C) [0x0000000000000001] (CPF_Edit)    
};

// ScriptStruct Engine.CameraShake.ROscillator
// Size: 0x0024
struct FROscillator
{
	struct FFOscillator                                Pitch;                                         // 0x0000 (0x000C) [0x0000000000000001] (CPF_Edit)    
	struct FFOscillator                                Yaw;                                           // 0x000C (0x000C) [0x0000000000000001] (CPF_Edit)    
	struct FFOscillator                                Roll;                                          // 0x0018 (0x000C) [0x0000000000000001] (CPF_Edit)    
};

// ScriptStruct Engine.CameraModifier_CameraShake.CameraShakeInstance
// Size: 0x00A0
struct FCameraShakeInstance
{
	class UCameraShake*                                SourceShake;                                   // 0x0000 (0x0008) [0x0000000000000000]               
	class FName                                        SourceShakeName;                               // 0x0008 (0x0008) [0x0000000000000000]               
	float                                              OscillatorTimeRemaining;                       // 0x0010 (0x0004) [0x0000000000000000]               
	uint32_t                                           bBlendingIn : 1;                               // 0x0014 (0x0004) [0x0000000000000000] [0x00000001] 
	float                                              CurrentBlendInTime;                            // 0x0018 (0x0004) [0x0000000000000000]               
	uint32_t                                           bBlendingOut : 1;                              // 0x001C (0x0004) [0x0000000000000000] [0x00000001] 
	float                                              CurrentBlendOutTime;                           // 0x0020 (0x0004) [0x0000000000000000]               
	struct FVector                                     LocSinOffset;                                  // 0x0024 (0x000C) [0x0000000000000000]               
	struct FVector                                     RotSinOffset;                                  // 0x0030 (0x000C) [0x0000000000000000]               
	float                                              FOVSinOffset;                                  // 0x003C (0x0004) [0x0000000000000000]               
	float                                              Scale;                                         // 0x0040 (0x0004) [0x0000000000000000]               
	uint8_t                                          UnknownData00[0x4];                            // 0x0044 (0x0004) MISSED OFFSET
	class UCameraAnimInst*                             AnimInst;                                      // 0x0048 (0x0008) [0x0000000000000000]               
	uint8_t                                            PlaySpace;                                     // 0x0050 (0x0001) [0x0000000000000000]               
	uint8_t                                          UnknownData01[0xF];                            // 0x0051 (0x000F) MISSED OFFSET
	struct FMatrix                                     UserPlaySpaceMatrix;                           // 0x0060 (0x0040) [0x0000000000000000]               
};

// ScriptStruct Engine.Canvas.CanvasIcon
// Size: 0x0018
struct FCanvasIcon
{
	class UTexture*                                    Texture;                                       // 0x0000 (0x0008) [0x0000000000000001] (CPF_Edit)    
	float                                              U;                                             // 0x0008 (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              V;                                             // 0x000C (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              UL;                                            // 0x0010 (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              VL;                                            // 0x0014 (0x0004) [0x0000000000000001] (CPF_Edit)    
};

// ScriptStruct Engine.Texture.TextureGroupContainer
// Size: 0x0004
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
// Size: 0x0060
struct FTexture2DMipMap
{
	struct FUntypedBulkData_Mirror                     Data;                                          // 0x0000 (0x0058) [0x0000000000001000] (CPF_Native)  
	int32_t                                            SizeX;                                         // 0x0058 (0x0004) [0x0000000000001000] (CPF_Native)  
	int32_t                                            SizeY;                                         // 0x005C (0x0004) [0x0000000000001000] (CPF_Native)  
};

// ScriptStruct Engine.Texture2D.TextureLinkedListMirror
// Size: 0x0018
struct FTextureLinkedListMirror
{
	struct FPointer                                    Element;                                       // 0x0000 (0x0008) [0x0000000000001002] (CPF_Const | CPF_Native)
	struct FPointer                                    Next;                                          // 0x0008 (0x0008) [0x0000000000001002] (CPF_Const | CPF_Native)
	struct FPointer                                    PrevLink;                                      // 0x0010 (0x0008) [0x0000000000001002] (CPF_Const | CPF_Native)
};

// ScriptStruct Engine.Canvas.DepthFieldGlowInfo
// Size: 0x0024
struct FDepthFieldGlowInfo
{
	uint32_t                                           bEnableGlow : 1;                               // 0x0000 (0x0004) [0x0000000000000000] [0x00000001] 
	struct FLinearColor                                GlowColor;                                     // 0x0004 (0x0010) [0x0000000000000000]               
	struct FVector2D                                   GlowOuterRadius;                               // 0x0014 (0x0008) [0x0000000000000000]               
	struct FVector2D                                   GlowInnerRadius;                               // 0x001C (0x0008) [0x0000000000000000]               
};

// ScriptStruct Engine.Canvas.MobileDistanceFieldParams
// Size: 0x0054
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
// Size: 0x0028
struct FFontRenderInfo
{
	uint32_t                                           bClipText : 1;                                 // 0x0000 (0x0004) [0x0000000000000000] [0x00000001] 
	uint32_t                                           bEnableShadow : 1;                             // 0x0000 (0x0004) [0x0000000000000000] [0x00000002] 
	struct FDepthFieldGlowInfo                         GlowInfo;                                      // 0x0004 (0x0024) [0x0000000000000000]               
};

// ScriptStruct Engine.Canvas.CanvasUVTri
// Size: 0x0030
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
// Size: 0x0030 (0x002C PropertySize + 0x0004 padding to satisfy MinAlignment of 8)
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
	uint8_t                                          MinAlignmentPadding[0x4];                      // 0x002C (0x0004) PADDING FOR MINALIGNMENT
};

// ScriptStruct Engine.Canvas.WrappedStringElement
// Size: 0x0018
struct FWrappedStringElement
{
	class FString                                      Value;                                         // 0x0000 (0x0010) [0x0000000000500000] (CPF_NeedCtorLink)
	struct FVector2D                                   LineExtent;                                    // 0x0010 (0x0008) [0x0000000000100000]               
};

// ScriptStruct Engine.CloudSaveSystem.SetSaveDataCallbackStruct
// Size: 0x0020
struct FSetSaveDataCallbackStruct
{
	int32_t                                            SlotIndex;                                     // 0x0000 (0x0004) [0x0000000000000000]               
	uint8_t                                          UnknownData00[0x4];                            // 0x0004 (0x0004) MISSED OFFSET
	struct FScriptDelegate                             Callback;                                      // 0x0008 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
};

// ScriptStruct Engine.CloudSaveSystem.SaveSlotOperation
// Size: 0x0008 (0x0005 PropertySize + 0x0003 padding to satisfy MinAlignment of 4)
struct FSaveSlotOperation
{
	int32_t                                            SlotIndex;                                     // 0x0000 (0x0004) [0x0000000000000000]               
	uint8_t                                            SlotOperation;                                 // 0x0004 (0x0001) [0x0000000000000000]               
	uint8_t                                          MinAlignmentPadding[0x3];                      // 0x0005 (0x0003) PADDING FOR MINALIGNMENT
};

// ScriptStruct Engine.CloudSaveSystem.GetSaveDataCallbackStruct
// Size: 0x0020
struct FGetSaveDataCallbackStruct
{
	int32_t                                            SlotIndex;                                     // 0x0000 (0x0004) [0x0000000000000000]               
	uint8_t                                          UnknownData00[0x4];                            // 0x0004 (0x0004) MISSED OFFSET
	struct FScriptDelegate                             Callback;                                      // 0x0008 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
};

// ScriptStruct Engine.UIRoot.UIRangeData
// Size: 0x0014
struct FUIRangeData
{
	float                                              CurrentValue;                                  // 0x0000 (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              MinValue;                                      // 0x0004 (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              MaxValue;                                      // 0x0008 (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              NudgeValue;                                    // 0x000C (0x0004) [0x0000000000000001] (CPF_Edit)    
	uint32_t                                           bIntRange : 1;                                 // 0x0010 (0x0004) [0x0000000000000001] [0x00000001] (CPF_Edit)
};

// ScriptStruct Engine.UIRoot.TextureCoordinates
// Size: 0x0010
struct FTextureCoordinates
{
	float                                              U;                                             // 0x0000 (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              V;                                             // 0x0004 (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              UL;                                            // 0x0008 (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              VL;                                            // 0x000C (0x0004) [0x0000000000000001] (CPF_Edit)    
};

// ScriptStruct Engine.SequenceOp.SeqOpOutputInputLink
// Size: 0x0010 (0x000C PropertySize + 0x0004 padding to satisfy MinAlignment of 8)
struct FSeqOpOutputInputLink
{
	class USequenceOp*                                 LinkedOp;                                      // 0x0000 (0x0008) [0x0000000000000000]               
	int32_t                                            InputLinkIdx;                                  // 0x0008 (0x0004) [0x0000000000000000]               
	uint8_t                                          MinAlignmentPadding[0x4];                      // 0x000C (0x0004) PADDING FOR MINALIGNMENT
};

// ScriptStruct Engine.SequenceOp.SeqOpOutputLink
// Size: 0x0048
struct FSeqOpOutputLink
{
	class TArray<struct FSeqOpOutputInputLink>         Links;                                         // 0x0000 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	class FString                                      LinkDesc;                                      // 0x0010 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	uint32_t                                           bHasImpulse : 1;                               // 0x0020 (0x0004) [0x0000000000000000] [0x00000001] 
	uint32_t                                           bDisabled : 1;                                 // 0x0020 (0x0004) [0x0000000000000000] [0x00000002] 
	uint32_t                                           bDisabledPIE : 1;                              // 0x0020 (0x0004) [0x0000000000000000] [0x00000004] 
	uint8_t                                          UnknownData00[0x4];                            // 0x0024 (0x0004) MISSED OFFSET
	class USequenceOp*                                 LinkedOp;                                      // 0x0028 (0x0008) [0x0000000000000000]               
	float                                              ActivateDelay;                                 // 0x0030 (0x0004) [0x0000000000000000]               
	int32_t                                            DrawY;                                         // 0x0034 (0x0004) [0x0000000000000000]               
	uint32_t                                           bHidden : 1;                                   // 0x0038 (0x0004) [0x0000000000000000] [0x00000001] 
	uint32_t                                           bMoving : 1;                                   // 0x0038 (0x0004) [0x0000000800002000] [0x00000002] (CPF_Transient | CPF_EditorOnly)
	uint32_t                                           bClampedMax : 1;                               // 0x0038 (0x0004) [0x0000000800000000] [0x00000004] (CPF_EditorOnly)
	uint32_t                                           bClampedMin : 1;                               // 0x0038 (0x0004) [0x0000000800000000] [0x00000008] (CPF_EditorOnly)
	int32_t                                            OverrideDelta;                                 // 0x003C (0x0004) [0x0000000800000000] (CPF_EditorOnly)
	float                                              PIEActivationTime;                             // 0x0040 (0x0004) [0x0000000800002000] (CPF_Transient | CPF_EditorOnly)
	uint32_t                                           bIsActivated : 1;                              // 0x0044 (0x0004) [0x0000000C01002000] [0x00000001] (CPF_Transient | CPF_NonTransactional | CPF_EditorOnly)
};

// ScriptStruct Engine.SequenceOp.SeqVarLink
// Size: 0x0058
struct FSeqVarLink
{
	class UClass*                                      ExpectedType;                                  // 0x0000 (0x0008) [0x0000000000000000]               
	class TArray<class USequenceVariable*>             LinkedVariables;                               // 0x0008 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	class FString                                      LinkDesc;                                      // 0x0018 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	class FName                                        LinkVar;                                       // 0x0028 (0x0008) [0x0000000000000000]               
	class FName                                        PropertyName;                                  // 0x0030 (0x0008) [0x0000000000000000]               
	uint32_t                                           bWriteable : 1;                                // 0x0038 (0x0004) [0x0000000000000000] [0x00000001] 
	uint32_t                                           bSequenceNeverReadsOnlyWritesToThisVar : 1;    // 0x0038 (0x0004) [0x0000000000000000] [0x00000002] 
	uint32_t                                           bModifiesLinkedObject : 1;                     // 0x0038 (0x0004) [0x0000000000000000] [0x00000004] 
	uint32_t                                           bHidden : 1;                                   // 0x0038 (0x0004) [0x0000000000000000] [0x00000008] 
	int32_t                                            MinVars;                                       // 0x003C (0x0004) [0x0000000000000000]               
	int32_t                                            MaxVars;                                       // 0x0040 (0x0004) [0x0000000000000000]               
	int32_t                                            DrawX;                                         // 0x0044 (0x0004) [0x0000000000000000]               
	class UProperty*                                   CachedProperty;                                // 0x0048 (0x0008) [0x0000000000002002] (CPF_Const | CPF_Transient)
	uint32_t                                           bAllowAnyType : 1;                             // 0x0050 (0x0004) [0x0000000000000000] [0x00000001] 
	uint32_t                                           bMoving : 1;                                   // 0x0050 (0x0004) [0x0000000800002000] [0x00000002] (CPF_Transient | CPF_EditorOnly)
	uint32_t                                           bClampedMax : 1;                               // 0x0050 (0x0004) [0x0000000800000000] [0x00000004] (CPF_EditorOnly)
	uint32_t                                           bClampedMin : 1;                               // 0x0050 (0x0004) [0x0000000800000000] [0x00000008] (CPF_EditorOnly)
	int32_t                                            OverrideDelta;                                 // 0x0054 (0x0004) [0x0000000800000000] (CPF_EditorOnly)
};

// ScriptStruct Engine.SequenceOp.SeqEventLink
// Size: 0x0038 (0x0034 PropertySize + 0x0004 padding to satisfy MinAlignment of 8)
struct FSeqEventLink
{
	class UClass*                                      ExpectedType;                                  // 0x0000 (0x0008) [0x0000000000000000]               
	class TArray<class USequenceEvent*>                LinkedEvents;                                  // 0x0008 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	class FString                                      LinkDesc;                                      // 0x0018 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	int32_t                                            DrawX;                                         // 0x0028 (0x0004) [0x0000000000000000]               
	uint32_t                                           bHidden : 1;                                   // 0x002C (0x0004) [0x0000000000000000] [0x00000001] 
	uint32_t                                           bMoving : 1;                                   // 0x002C (0x0004) [0x0000000800002000] [0x00000002] (CPF_Transient | CPF_EditorOnly)
	uint32_t                                           bClampedMax : 1;                               // 0x002C (0x0004) [0x0000000800000000] [0x00000004] (CPF_EditorOnly)
	uint32_t                                           bClampedMin : 1;                               // 0x002C (0x0004) [0x0000000800000000] [0x00000008] (CPF_EditorOnly)
	int32_t                                            OverrideDelta;                                 // 0x0030 (0x0004) [0x0000000800000000] (CPF_EditorOnly)
	uint8_t                                          MinAlignmentPadding[0x4];                      // 0x0034 (0x0004) PADDING FOR MINALIGNMENT
};

// ScriptStruct Engine.UIRoot.InputKeyAction
// Size: 0x0030
struct FInputKeyAction
{
	class FName                                        InputKeyName;                                  // 0x0000 (0x0008) [0x0000000000000001] (CPF_Edit)    
	uint8_t                                            InputKeyState;                                 // 0x0008 (0x0001) [0x0000000000000001] (CPF_Edit)    
	uint8_t                                          UnknownData00[0x7];                            // 0x0009 (0x0007) MISSED OFFSET
	class TArray<struct FSeqOpOutputInputLink>         TriggeredOps;                                  // 0x0010 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	class TArray<class USequenceOp*>                   ActionsToExecute;                              // 0x0020 (0x0010) [0x0000000020400000] (CPF_NeedCtorLink | CPF_Deprecated)
};

// ScriptStruct Engine.UIRoot.InputEventParameters
// Size: 0x0020
struct FInputEventParameters
{
	int32_t                                            PlayerIndex;                                   // 0x0000 (0x0004) [0x0000000000102002] (CPF_Const | CPF_Transient)
	int32_t                                            ControllerId;                                  // 0x0004 (0x0004) [0x0000000000102002] (CPF_Const | CPF_Transient)
	class FName                                        InputKeyName;                                  // 0x0008 (0x0008) [0x0000000000102002] (CPF_Const | CPF_Transient)
	uint8_t                                            EventType;                                     // 0x0010 (0x0001) [0x0000000000102002] (CPF_Const | CPF_Transient)
	uint8_t                                          UnknownData00[0x3];                            // 0x0011 (0x0003) MISSED OFFSET
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
	class FName                                        InputAliasName;                                // 0x0020 (0x0008) [0x0000000000102002] (CPF_Const | CPF_Transient)
};

// ScriptStruct Engine.UIRoot.UIAxisEmulationDefinition
// Size: 0x0024
struct FUIAxisEmulationDefinition
{
	class FName                                        AxisInputKey;                                  // 0x0000 (0x0008) [0x0000000000000000]               
	class FName                                        AdjacentAxisInputKey;                          // 0x0008 (0x0008) [0x0000000000000000]               
	uint32_t                                           bEmulateButtonPress : 1;                       // 0x0010 (0x0004) [0x0000000000000000] [0x00000001] 
	class FName                                        InputKeyToEmulate[2];                          // 0x0014 (0x0010) [0x0000000000000000]               
};

// ScriptStruct Engine.UIRoot.RawInputKeyEventData
// Size: 0x000C (0x0009 PropertySize + 0x0003 padding to satisfy MinAlignment of 4)
struct FRawInputKeyEventData
{
	class FName                                        InputKeyName;                                  // 0x0000 (0x0008) [0x0000000000000000]               
	uint8_t                                            ModifierKeyFlags;                              // 0x0008 (0x0001) [0x0000000000000000]               
	uint8_t                                          MinAlignmentPadding[0x3];                      // 0x0009 (0x0003) PADDING FOR MINALIGNMENT
};

// ScriptStruct Engine.Console.AutoCompleteCommand
// Size: 0x0020
struct FAutoCompleteCommand
{
	class FString                                      Command;                                       // 0x0000 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	class FString                                      Desc;                                          // 0x0010 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
};

// ScriptStruct Engine.Console.AutoCompleteNode
// Size: 0x0028
struct FAutoCompleteNode
{
	int32_t                                            IndexChar;                                     // 0x0000 (0x0004) [0x0000000000000000]               
	uint8_t                                          UnknownData00[0x4];                            // 0x0004 (0x0004) MISSED OFFSET
	class TArray<int32_t>                              AutoCompleteListIndices;                       // 0x0008 (0x0010) [0x0000000000500000] (CPF_NeedCtorLink)
	class TArray<struct FPointer>                      ChildNodes;                                    // 0x0018 (0x0010) [0x0000000000500000] (CPF_NeedCtorLink)
};

// ScriptStruct Engine.ControllerLayoutStack.ControllerLayout
// Size: 0x000C
struct FControllerLayout
{
	class FName                                        Name;                                          // 0x0000 (0x0008) [0x0001000000000000]               
	int32_t                                            Priority;                                      // 0x0008 (0x0004) [0x0001000000000000]               
};

// ScriptStruct Engine.CoverLink.CovPosInfo
// Size: 0x0038
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
// Size: 0x0004
struct FFireLinkItem
{
	uint8_t                                            SrcType;                                       // 0x0000 (0x0001) [0x0000000000000000]               
	uint8_t                                            SrcAction;                                     // 0x0001 (0x0001) [0x0000000000000000]               
	uint8_t                                            DestType;                                      // 0x0002 (0x0001) [0x0000000000000000]               
	uint8_t                                            DestAction;                                    // 0x0003 (0x0001) [0x0000000000000000]               
};

// ScriptStruct Engine.CoverLink.FireLink
// Size: 0x0018
struct FFireLink
{
	class TArray<uint8_t>                              Interactions;                                  // 0x0000 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	int32_t                                            PackedProperties_CoverPairRefAndDynamicInfo;   // 0x0010 (0x0004) [0x0000000000000002] (CPF_Const)   
	uint32_t                                           bFallbackLink : 1;                             // 0x0014 (0x0004) [0x0000000000000000] [0x00000001] 
	uint32_t                                           bDynamicIndexInited : 1;                       // 0x0014 (0x0004) [0x0000000000000000] [0x00000002] 
};

// ScriptStruct Engine.CoverLink.DynamicLinkInfo
// Size: 0x0018
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
	uint8_t                                          MinAlignmentPadding[0x4];                      // 0x001C (0x0004) PADDING FOR MINALIGNMENT
};

// ScriptStruct Engine.CoverLink.ExposedLink
// Size: 0x0028 (0x0021 PropertySize + 0x0007 padding to satisfy MinAlignment of 8)
struct FExposedLink
{
	struct FCoverReference                             TargetActor;                                   // 0x0000 (0x0020) [0x0000000000020003] (CPF_Edit | CPF_Const | CPF_EditConst)
	uint8_t                                            ExposedScale;                                  // 0x0020 (0x0001) [0x0000000000000001] (CPF_Edit)    
	uint8_t                                          MinAlignmentPadding[0x7];                      // 0x0021 (0x0007) PADDING FOR MINALIGNMENT
};

// ScriptStruct Engine.CoverLink.SlotMoveRef
// Size: 0x0068 (0x0064 PropertySize + 0x0004 padding to satisfy MinAlignment of 8)
struct FSlotMoveRef
{
	struct FPolyReference                              Poly;                                          // 0x0000 (0x0028) [0x0000000000000001] (CPF_Edit)    
	struct FBasedPosition                              Dest;                                          // 0x0028 (0x0038) [0x0000000000000001] (CPF_Edit)    
	int32_t                                            Direction;                                     // 0x0060 (0x0004) [0x0000000000000001] (CPF_Edit)    
	uint8_t                                          MinAlignmentPadding[0x4];                      // 0x0064 (0x0004) PADDING FOR MINALIGNMENT
};

// ScriptStruct Engine.CoverLink.CoverInfo
// Size: 0x0010 (0x000C PropertySize + 0x0004 padding to satisfy MinAlignment of 8)
struct FCoverInfo
{
	class ACoverLink*                                  Link;                                          // 0x0000 (0x0008) [0x0000000000020001] (CPF_Edit | CPF_EditConst)
	int32_t                                            SlotIdx;                                       // 0x0008 (0x0004) [0x0000000000020001] (CPF_Edit | CPF_EditConst)
	uint8_t                                          MinAlignmentPadding[0x4];                      // 0x000C (0x0004) PADDING FOR MINALIGNMENT
};

// ScriptStruct Engine.CoverLink.CoverSlot
// Size: 0x0098 (0x0094 PropertySize + 0x0004 padding to satisfy MinAlignment of 8)
struct FCoverSlot
{
	class APawn*                                       SlotOwner;                                     // 0x0000 (0x0008) [0x0000000000000000]               
	float                                              SlotValidAfterTime;                            // 0x0008 (0x0004) [0x0000000000002000] (CPF_Transient)
	uint8_t                                            ForceCoverType;                                // 0x000C (0x0001) [0x0000000000000001] (CPF_Edit)    
	uint8_t                                            CoverType;                                     // 0x000D (0x0001) [0x0000000000020001] (CPF_Edit | CPF_EditConst)
	uint8_t                                            LocationDescription;                           // 0x000E (0x0001) [0x0000000000000001] (CPF_Edit)    
	uint8_t                                          UnknownData00[0x1];                            // 0x000F (0x0001) MISSED OFFSET
	struct FVector                                     LocationOffset;                                // 0x0010 (0x000C) [0x0000000000000000]               
	struct FRotator                                    RotationOffset;                                // 0x001C (0x000C) [0x0000000000000000]               
	class TArray<uint8_t>                              Actions;                                       // 0x0028 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	class TArray<struct FFireLink>                     FireLinks;                                     // 0x0038 (0x0010) [0x0000000000420001] (CPF_Edit | CPF_EditConst | CPF_NeedCtorLink)
	class TArray<struct FFireLink>                     RejectedFireLinks;                             // 0x0048 (0x0010) [0x0000000000422001] (CPF_Edit | CPF_Transient | CPF_EditConst | CPF_NeedCtorLink)
	class TArray<int32_t>                              ExposedCoverPackedProperties;                  // 0x0058 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	int32_t                                            TurnTargetPackedProperties;                    // 0x0068 (0x0004) [0x0000000000000000]               
	uint8_t                                          UnknownData01[0x4];                            // 0x006C (0x0004) MISSED OFFSET
	class TArray<struct FSlotMoveRef>                  SlipRefs;                                      // 0x0070 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	class TArray<struct FCoverInfo>                    OverlapClaimsList;                             // 0x0080 (0x0010) [0x0000000000420001] (CPF_Edit | CPF_EditConst | CPF_NeedCtorLink)
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
	uint8_t                                          MinAlignmentPadding[0x4];                      // 0x0094 (0x0004) PADDING FOR MINALIGNMENT
};

// ScriptStruct Engine.StaticMeshComponent.PaintedVertex
// Size: 0x0014
struct FPaintedVertex
{
	struct FVector                                     Position;                                      // 0x0000 (0x000C) [0x0000000000000000]               
	struct FPackedNormal                               Normal;                                        // 0x000C (0x0004) [0x0000000000000000]               
	struct FColor                                      Color;                                         // 0x0010 (0x0004) [0x0000000000000000]               
};

// ScriptStruct Engine.StaticMeshComponent.StaticMeshComponentLODInfo
// Size: 0x0040
struct FStaticMeshComponentLODInfo
{
	class TArray<class UShadowMap2D*>                  ShadowMaps;                                    // 0x0000 (0x0010) [0x0000000000400002] (CPF_Const | CPF_NeedCtorLink)
	class TArray<class UObject*>                       ShadowVertexBuffers;                           // 0x0010 (0x0010) [0x0000000000400002] (CPF_Const | CPF_NeedCtorLink)
	struct FPointer                                    LightMap;                                      // 0x0020 (0x0008) [0x0000000000001002] (CPF_Const | CPF_Native)
	struct FPointer                                    OverrideVertexColors;                          // 0x0028 (0x0008) [0x0000000000001002] (CPF_Const | CPF_Native)
	class TArray<struct FPaintedVertex>                PaintedVertices;                               // 0x0030 (0x0010) [0x0000000000400002] (CPF_Const | CPF_NeedCtorLink)
};

// ScriptStruct Engine.CoverMeshComponent.CoverMeshes
// Size: 0x0068
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
// Size: 0x0004 (0x0002 PropertySize + 0x0002 padding to satisfy MinAlignment of 4)
struct FManualCoverTypeInfo
{
	uint8_t                                            SlotIndex;                                     // 0x0000 (0x0001) [0x0000000000000000]               
	uint8_t                                            ManualCoverType;                               // 0x0001 (0x0001) [0x0000000000000000]               
	uint8_t                                          MinAlignmentPadding[0x2];                      // 0x0002 (0x0002) PADDING FOR MINALIGNMENT
};

// ScriptStruct Engine.CoverReplicator.CoverReplicationInfo
// Size: 0x0048
struct FCoverReplicationInfo
{
	class ACoverLink*                                  Link;                                          // 0x0000 (0x0008) [0x0000000000000000]               
	class TArray<uint8_t>                              SlotsEnabled;                                  // 0x0008 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	class TArray<uint8_t>                              SlotsDisabled;                                 // 0x0018 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	class TArray<uint8_t>                              SlotsAdjusted;                                 // 0x0028 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	class TArray<struct FManualCoverTypeInfo>          SlotsCoverTypeChanged;                         // 0x0038 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
};

// ScriptStruct Engine.CullDistanceVolume.CullDistanceSizePair
// Size: 0x0008
struct FCullDistanceSizePair
{
	float                                              Size;                                          // 0x0000 (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              CullDistance;                                  // 0x0004 (0x0004) [0x0000000000000001] (CPF_Edit)    
};

// ScriptStruct Engine.CurveEdPresetCurve.PresetGeneratedPoint
// Size: 0x0018 (0x0015 PropertySize + 0x0003 padding to satisfy MinAlignment of 4)
struct FPresetGeneratedPoint
{
	float                                              KeyIn;                                         // 0x0000 (0x0004) [0x0000000000000000]               
	float                                              KeyOut;                                        // 0x0004 (0x0004) [0x0000000000000000]               
	uint32_t                                           TangentsValid : 1;                             // 0x0008 (0x0004) [0x0000000000000000] [0x00000001] 
	float                                              TangentIn;                                     // 0x000C (0x0004) [0x0000000000000000]               
	float                                              TangentOut;                                    // 0x0010 (0x0004) [0x0000000000000000]               
	uint8_t                                            IntepMode;                                     // 0x0014 (0x0001) [0x0000000000000000]               
	uint8_t                                          MinAlignmentPadding[0x3];                      // 0x0015 (0x0003) PADDING FOR MINALIGNMENT
};

// ScriptStruct Engine.DataStoreClient.PlayerDataStoreGroup
// Size: 0x0018
struct FPlayerDataStoreGroup
{
	class ULocalPlayer*                                PlayerOwner;                                   // 0x0000 (0x0008) [0x0000000000102002] (CPF_Const | CPF_Transient)
	class TArray<class UUIDataStore*>                  DataStores;                                    // 0x0008 (0x0010) [0x0000000000502002] (CPF_Const | CPF_Transient | CPF_NeedCtorLink)
};

// ScriptStruct Engine.DateTime.DateTimeStruct
// Size: 0x0020 (0x001D PropertySize + 0x0003 padding to satisfy MinAlignment of 4)
struct FDateTimeStruct
{
	int32_t                                            Year;                                          // 0x0000 (0x0004) [0x0000000040000000] (CPF_DataBinding)
	int32_t                                            Month;                                         // 0x0004 (0x0004) [0x0000000040000000] (CPF_DataBinding)
	int32_t                                            Day;                                           // 0x0008 (0x0004) [0x0000000040000000] (CPF_DataBinding)
	int32_t                                            WeekDay;                                       // 0x000C (0x0004) [0x0000000040000000] (CPF_DataBinding)
	int32_t                                            Hour;                                          // 0x0010 (0x0004) [0x0000000040000000] (CPF_DataBinding)
	int32_t                                            Minute;                                        // 0x0014 (0x0004) [0x0000000040000000] (CPF_DataBinding)
	int32_t                                            Second;                                        // 0x0018 (0x0004) [0x0000000040000000] (CPF_DataBinding)
	uint8_t                                            TimeZone;                                      // 0x001C (0x0001) [0x0000000040000000] (CPF_DataBinding)
	uint8_t                                          MinAlignmentPadding[0x3];                      // 0x001D (0x0003) PADDING FOR MINALIGNMENT
};

// ScriptStruct Engine.DecalComponent.DecalReceiver
// Size: 0x0010
struct FDecalReceiver
{
	class UPrimitiveComponent*                         Component;                                     // 0x0000 (0x0008) [0x000000000408000A] (CPF_Const | CPF_ExportObject | CPF_Component | CPF_EditInline)
	struct FPointer                                    RenderData;                                    // 0x0008 (0x0008) [0x0000000000001002] (CPF_Const | CPF_Native)
};

// ScriptStruct Engine.DecalManager.ActiveDecalInfo
// Size: 0x0010 (0x000C PropertySize + 0x0004 padding to satisfy MinAlignment of 8)
struct FActiveDecalInfo
{
	class UDecalComponent*                             Decal;                                         // 0x0000 (0x0008) [0x0000000004080008] (CPF_ExportObject | CPF_Component | CPF_EditInline)
	float                                              LifetimeRemaining;                             // 0x0008 (0x0004) [0x0000000000000000]               
	uint8_t                                          MinAlignmentPadding[0x4];                      // 0x000C (0x0004) PADDING FOR MINALIGNMENT
};

// ScriptStruct Engine.MaterialInterface.LightmassMaterialInterfaceSettings
// Size: 0x001C
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
// Size: 0x0038
struct FMaterialInput
{
	class UMaterialExpression*                         Expression;                                    // 0x0000 (0x0008) [0x0000000000000000]               
	int32_t                                            OutputIndex;                                   // 0x0008 (0x0004) [0x0000000000000000]               
	uint8_t                                          UnknownData00[0x4];                            // 0x000C (0x0004) MISSED OFFSET
	class FString                                      InputName;                                     // 0x0010 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	int32_t                                            Mask;                                          // 0x0020 (0x0004) [0x0000000000000000]               
	int32_t                                            MaskR;                                         // 0x0024 (0x0004) [0x0000000000000000]               
	int32_t                                            MaskG;                                         // 0x0028 (0x0004) [0x0000000000000000]               
	int32_t                                            MaskB;                                         // 0x002C (0x0004) [0x0000000000000000]               
	int32_t                                            MaskA;                                         // 0x0030 (0x0004) [0x0000000000000000]               
	int32_t                                            GCC64_Padding;                                 // 0x0034 (0x0004) [0x0000000000000000]               
};

// ScriptStruct Engine.Material.MaterialFunctionInfo
// Size: 0x0018
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
	uint8_t                                          MinAlignmentPadding[0x4];                      // 0x0044 (0x0004) PADDING FOR MINALIGNMENT
};

// ScriptStruct Engine.PhysicsVolume.CheckpointRecord
// Size: 0x0004
struct APhysicsVolume_FCheckpointRecord
{
	uint32_t                                           bActive : 1;                                   // 0x0000 (0x0004) [0x0000000000000000] [0x00000001] 
};

// ScriptStruct Engine.DistributionVectorConstantCurveParticleParameter.CurveParameterPoint
// Size: 0x0034 (0x0031 PropertySize + 0x0003 padding to satisfy MinAlignment of 4)
struct FCurveParameterPoint
{
	class FName                                        ParameterName;                                 // 0x0000 (0x0008) [0x0000000000000001] (CPF_Edit)    
	float                                              InVal;                                         // 0x0008 (0x0004) [0x0000000000000001] (CPF_Edit)    
	struct FVector                                     OutVal;                                        // 0x000C (0x000C) [0x0000000000000001] (CPF_Edit)    
	struct FVector                                     LeaveTangent;                                  // 0x0018 (0x000C) [0x0000000000000001] (CPF_Edit)    
	struct FVector                                     ArriveTangent;                                 // 0x0024 (0x000C) [0x0000000000000001] (CPF_Edit)    
	uint8_t                                            InterpMode;                                    // 0x0030 (0x0001) [0x0000000000000001] (CPF_Edit)    
	uint8_t                                          MinAlignmentPadding[0x3];                      // 0x0031 (0x0003) PADDING FOR MINALIGNMENT
};

// ScriptStruct Engine.OnlineSubsystem.OnlineProfile
// Size: 0x0078
struct FOnlineProfile
{
	class FString                                      UserId;                                        // 0x0000 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	uint8_t                                            AccountTier;                                   // 0x0010 (0x0001) [0x0000000000000000]               
	uint8_t                                          UnknownData00[0x3];                            // 0x0011 (0x0003) MISSED OFFSET
	int32_t                                            Gamerscore;                                    // 0x0014 (0x0004) [0x0000000000000000]               
	class FString                                      ApplicationDisplayName;                        // 0x0018 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	class FString                                      GameDisplayName;                               // 0x0028 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	class FString                                      DisplayPictureURL;                             // 0x0038 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	class FString                                      ApplicationDisplayPictureResizeURL;            // 0x0048 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	class FString                                      PublicGamerPictureURL;                         // 0x0058 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	class FString                                      GameDisplayPictureResizeURL;                   // 0x0068 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
};

// ScriptStruct Engine.OnlineSubsystem.UniqueLobbyId
// Size: 0x0010 (0x0009 PropertySize + 0x0007 padding to satisfy MinAlignment of 8)
struct FUniqueLobbyId
{
	uint64_t                                           Uid;                                           // 0x0000 (0x0008) [0x0000000000000000]               
	uint8_t                                            Platform;                                      // 0x0008 (0x0001) [0x0000000000000000]               
	uint8_t                                          MinAlignmentPadding[0x7];                      // 0x0009 (0x0007) PADDING FOR MINALIGNMENT
};

// ScriptStruct Engine.OnlineSubsystem.OnlineRegistrant
// Size: 0x0048
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
	uint8_t                                          MinAlignmentPadding[0x4];                      // 0x0054 (0x0004) PADDING FOR MINALIGNMENT
};

// ScriptStruct Engine.OnlineSubsystem.NamedSession
// Size: 0x0038
struct FNamedSession
{
	class FName                                        SessionName;                                   // 0x0000 (0x0008) [0x0000000000000000]               
	struct FPointer                                    SessionInfo;                                   // 0x0008 (0x0008) [0x0000000000003002] (CPF_Const | CPF_Native | CPF_Transient)
	class UOnlineGameSettings*                         GameSettings;                                  // 0x0010 (0x0008) [0x0000000000000000]               
	class TArray<struct FOnlineRegistrant>             Registrants;                                   // 0x0018 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	class TArray<struct FOnlineArbitrationRegistrant>  ArbitrationRegistrants;                        // 0x0028 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
};

// ScriptStruct Engine.OnlineSubsystem.FriendHistoryKey
// Size: 0x0020
struct FFriendHistoryKey
{
	class TArray<uint8_t>                              Key;                                           // 0x0000 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	class FString                                      Name;                                          // 0x0010 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
};

// ScriptStruct Engine.OnlineSubsystem.NamedInterface
// Size: 0x0010
struct FNamedInterface
{
	class FName                                        InterfaceName;                                 // 0x0000 (0x0008) [0x0000000000000000]               
	class UObject*                                     InterfaceObject;                               // 0x0008 (0x0008) [0x0000000000000000]               
};

// ScriptStruct Engine.OnlineSubsystem.SocialPostImageFlags
// Size: 0x0004
struct FSocialPostImageFlags
{
	uint32_t                                           bIsUserGeneratedImage : 1;                     // 0x0000 (0x0004) [0x0000000000000000] [0x00000001] 
	uint32_t                                           bIsGameGeneratedImage : 1;                     // 0x0000 (0x0004) [0x0000000000000000] [0x00000002] 
	uint32_t                                           bIsAchievementImage : 1;                       // 0x0000 (0x0004) [0x0000000000000000] [0x00000004] 
	uint32_t                                           bIsMediaImage : 1;                             // 0x0000 (0x0004) [0x0000000000000000] [0x00000008] 
};

// ScriptStruct Engine.OnlineSubsystem.SocialPostImageInfo
// Size: 0x0048
struct FSocialPostImageInfo
{
	struct FSocialPostImageFlags                       Flags;                                         // 0x0000 (0x0004) [0x0000000000000000]               
	uint8_t                                          UnknownData00[0x4];                            // 0x0004 (0x0004) MISSED OFFSET
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
// Size: 0x00D0
struct FDownloadedWorkshopData
{
	uint64_t                                           ItemID;                                        // 0x0000 (0x0008) [0x0000000040000000] (CPF_DataBinding)
	class FString                                      Title;                                         // 0x0008 (0x0010) [0x0000000040400000] (CPF_NeedCtorLink | CPF_DataBinding)
	class FString                                      AuthorName;                                    // 0x0018 (0x0010) [0x0000000040400000] (CPF_NeedCtorLink | CPF_DataBinding)
	struct FUniqueNetId                                AuthorNetID;                                   // 0x0028 (0x0048) [0x0000000000400000] (CPF_NeedCtorLink)
	class UTexture2DDynamic*                           Preview;                                       // 0x0070 (0x0008) [0x0000000040000000] (CPF_DataBinding)
	class UTexture*                                    Avatar;                                        // 0x0078 (0x0008) [0x0000000040000000] (CPF_DataBinding)
	class FString                                      Description;                                   // 0x0080 (0x0010) [0x0000000040400000] (CPF_NeedCtorLink | CPF_DataBinding)
	class FString                                      PreviewURL;                                    // 0x0090 (0x0010) [0x0000000040400000] (CPF_NeedCtorLink | CPF_DataBinding)
	class FString                                      ItemPath;                                      // 0x00A0 (0x0010) [0x0000000040400000] (CPF_NeedCtorLink | CPF_DataBinding)
	class FString                                      Filename;                                      // 0x00B0 (0x0010) [0x0000000040400000] (CPF_NeedCtorLink | CPF_DataBinding)
	class FString                                      FullPath;                                      // 0x00C0 (0x0010) [0x0000000040400000] (CPF_NeedCtorLink | CPF_DataBinding)
};

// ScriptStruct Engine.OnlineSubsystem.SocialPostPrivileges
// Size: 0x0004
struct FSocialPostPrivileges
{
	uint32_t                                           bCanPostImage : 1;                             // 0x0000 (0x0004) [0x0000000000000002] [0x00000001] (CPF_Const)
	uint32_t                                           bCanPostLink : 1;                              // 0x0000 (0x0004) [0x0000000000000002] [0x00000002] (CPF_Const)
};

// ScriptStruct Engine.OnlineSubsystem.OnlinePartyMember
// Size: 0x0080
struct FOnlinePartyMember
{
	struct FUniqueNetId                                UniqueId;                                      // 0x0000 (0x0048) [0x0000000000400002] (CPF_Const | CPF_NeedCtorLink)
	class FString                                      NickName;                                      // 0x0048 (0x0010) [0x0000000000400002] (CPF_Const | CPF_NeedCtorLink)
	uint8_t                                            LocalUserNum;                                  // 0x0058 (0x0001) [0x0000000000000002] (CPF_Const)   
	uint8_t                                            NatType;                                       // 0x0059 (0x0001) [0x0000000000000002] (CPF_Const)   
	uint8_t                                          UnknownData00[0x2];                            // 0x005A (0x0002) MISSED OFFSET
	int32_t                                            TitleId;                                       // 0x005C (0x0004) [0x0000000000000002] (CPF_Const)   
	uint32_t                                           bIsLocal : 1;                                  // 0x0060 (0x0004) [0x0000000000000002] [0x00000001] (CPF_Const)
	uint32_t                                           bIsInPartyVoice : 1;                           // 0x0060 (0x0004) [0x0000000000000002] [0x00000002] (CPF_Const)
	uint32_t                                           bIsTalking : 1;                                // 0x0060 (0x0004) [0x0000000000000002] [0x00000004] (CPF_Const)
	uint32_t                                           bIsInGameSession : 1;                          // 0x0060 (0x0004) [0x0000000000000002] [0x00000008] (CPF_Const)
	uint32_t                                           bIsPlayingThisGame : 1;                        // 0x0060 (0x0004) [0x0000000000000002] [0x00000010] (CPF_Const)
	uint8_t                                          UnknownData01[0x4];                            // 0x0064 (0x0004) MISSED OFFSET
	uint64_t                                           SessionId;                                     // 0x0068 (0x0008) [0x0000000000000002] (CPF_Const)   
	int32_t                                            Data1;                                         // 0x0070 (0x0004) [0x0000000000000002] (CPF_Const)   
	int32_t                                            Data2;                                         // 0x0074 (0x0004) [0x0000000000000002] (CPF_Const)   
	int32_t                                            Data3;                                         // 0x0078 (0x0004) [0x0000000000000002] (CPF_Const)   
	int32_t                                            Data4;                                         // 0x007C (0x0004) [0x0000000000000002] (CPF_Const)   
};

// ScriptStruct Engine.OnlineSubsystem.SessionMemberInfo
// Size: 0x0050 (0x0049 PropertySize + 0x0007 padding to satisfy MinAlignment of 8)
struct FSessionMemberInfo
{
	struct FUniqueNetId                                PlayerNetId;                                   // 0x0000 (0x0048) [0x0000000000400000] (CPF_NeedCtorLink)
	uint8_t                                            MemberStatus;                                  // 0x0048 (0x0001) [0x0000000000000000]               
	uint8_t                                          MinAlignmentPadding[0x7];                      // 0x0049 (0x0007) PADDING FOR MINALIGNMENT
};

// ScriptStruct Engine.OnlineSubsystem.MarketplaceInventoryItem
// Size: 0x0068
struct FMarketplaceInventoryItem
{
	class FString                                      ProductID;                                     // 0x0000 (0x0010) [0x0000000000400002] (CPF_Const | CPF_NeedCtorLink)
	uint8_t                                            MediaItemType;                                 // 0x0010 (0x0001) [0x0000000000000002] (CPF_Const)   
	uint8_t                                            ItemState;                                     // 0x0011 (0x0001) [0x0000000000000002] (CPF_Const)   
	uint8_t                                          UnknownData00[0x2];                            // 0x0012 (0x0002) MISSED OFFSET
	int32_t                                            ConsumableBalance;                             // 0x0014 (0x0004) [0x0000000000000002] (CPF_Const)   
	int32_t                                            TitleId;                                       // 0x0018 (0x0004) [0x0000000000000002] (CPF_Const)   
	uint8_t                                          UnknownData01[0x4];                            // 0x001C (0x0004) MISSED OFFSET
	class TArray<class FString>                        ContainerIds;                                  // 0x0020 (0x0010) [0x0000000000400002] (CPF_Const | CPF_NeedCtorLink)
	uint64_t                                           StartDate;                                     // 0x0030 (0x0008) [0x0000000000000002] (CPF_Const)   
	uint64_t                                           EndDate;                                       // 0x0038 (0x0008) [0x0000000000000002] (CPF_Const)   
	uint64_t                                           RightsObtainedDate;                            // 0x0040 (0x0008) [0x0000000000000002] (CPF_Const)   
	class FString                                      URL;                                           // 0x0048 (0x0010) [0x0000000000400002] (CPF_Const | CPF_NeedCtorLink)
	class FString                                      ConsumableUrl;                                 // 0x0058 (0x0010) [0x0000000000400002] (CPF_Const | CPF_NeedCtorLink)
};

// ScriptStruct Engine.OnlineSubsystem.MarketplaceProductImage
// Size: 0x0048
struct FMarketplaceProductImage
{
	class FString                                      Id;                                            // 0x0000 (0x0010) [0x0000000000400002] (CPF_Const | CPF_NeedCtorLink)
	int32_t                                            Height;                                        // 0x0010 (0x0004) [0x0000000000000002] (CPF_Const)   
	int32_t                                            Width;                                         // 0x0014 (0x0004) [0x0000000000000002] (CPF_Const)   
	class FString                                      Purpose;                                       // 0x0018 (0x0010) [0x0000000000400002] (CPF_Const | CPF_NeedCtorLink)
	class TArray<class FString>                        Purposes;                                      // 0x0028 (0x0010) [0x0000000000400002] (CPF_Const | CPF_NeedCtorLink)
	class FString                                      ResizeURL;                                     // 0x0038 (0x0010) [0x0000000000400002] (CPF_Const | CPF_NeedCtorLink)
};

// ScriptStruct Engine.OnlineSubsystem.MarketplaceProductAvailability
// Size: 0x00A0
struct FMarketplaceProductAvailability
{
	class TArray<class FString>                        AcceptablePaymentInstrumentTypes;              // 0x0000 (0x0010) [0x0000000000400002] (CPF_Const | CPF_NeedCtorLink)
	class FString                                      Description;                                   // 0x0010 (0x0010) [0x0000000000400002] (CPF_Const | CPF_NeedCtorLink)
	class FString                                      ContentId;                                     // 0x0020 (0x0010) [0x0000000000400002] (CPF_Const | CPF_NeedCtorLink)
	class FString                                      CurrencyCode;                                  // 0x0030 (0x0010) [0x0000000000400002] (CPF_Const | CPF_NeedCtorLink)
	class FString                                      DisplayListPrice;                              // 0x0040 (0x0010) [0x0000000000400002] (CPF_Const | CPF_NeedCtorLink)
	class FString                                      DisplayPrice;                                  // 0x0050 (0x0010) [0x0000000000400002] (CPF_Const | CPF_NeedCtorLink)
	class FString                                      DistributionType;                              // 0x0060 (0x0010) [0x0000000000400002] (CPF_Const | CPF_NeedCtorLink)
	uint32_t                                           bIsPurchasable : 1;                            // 0x0070 (0x0004) [0x0000000000000002] [0x00000001] (CPF_Const)
	float                                              ListPrice;                                     // 0x0074 (0x0004) [0x0000000000000002] (CPF_Const)   
	float                                              Price;                                         // 0x0078 (0x0004) [0x0000000000000002] (CPF_Const)   
	uint8_t                                          UnknownData00[0x4];                            // 0x007C (0x0004) MISSED OFFSET
	class FString                                      PromotionalText;                               // 0x0080 (0x0010) [0x0000000000400002] (CPF_Const | CPF_NeedCtorLink)
	class FString                                      SignedOffer;                                   // 0x0090 (0x0010) [0x0000000000400002] (CPF_Const | CPF_NeedCtorLink)
};

// ScriptStruct Engine.OnlineSubsystem.MarketplaceProductDetails
// Size: 0x0090
struct FMarketplaceProductDetails
{
	class FString                                      StandardId;                                    // 0x0000 (0x0010) [0x0000000000400002] (CPF_Const | CPF_NeedCtorLink)
	uint8_t                                            MediaItemType;                                 // 0x0010 (0x0001) [0x0000000000000002] (CPF_Const)   
	uint8_t                                          UnknownData00[0x7];                            // 0x0011 (0x0007) MISSED OFFSET
	class FString                                      ProductName;                                   // 0x0018 (0x0010) [0x0000000000400002] (CPF_Const | CPF_NeedCtorLink)
	class FString                                      ProductID;                                     // 0x0028 (0x0010) [0x0000000000400002] (CPF_Const | CPF_NeedCtorLink)
	uint64_t                                           ReleaseDate;                                   // 0x0038 (0x0008) [0x0000000000000002] (CPF_Const)   
	class FString                                      SandboxId;                                     // 0x0040 (0x0010) [0x0000000000400002] (CPF_Const | CPF_NeedCtorLink)
	int32_t                                            TitleId;                                       // 0x0050 (0x0004) [0x0000000000000002] (CPF_Const)   
	uint8_t                                          UnknownData01[0x4];                            // 0x0054 (0x0004) MISSED OFFSET
	class TArray<struct FMarketplaceProductImage>      Images;                                        // 0x0058 (0x0010) [0x0000000000400002] (CPF_Const | CPF_NeedCtorLink)
	uint8_t                                            DetailsReadState;                              // 0x0068 (0x0001) [0x0000000000000000]               
	uint8_t                                          UnknownData02[0x7];                            // 0x0069 (0x0007) MISSED OFFSET
	class TArray<struct FMarketplaceProductAvailability> Availabilities;                                // 0x0070 (0x0010) [0x0000000000400002] (CPF_Const | CPF_NeedCtorLink)
	class FString                                      ProductDescription;                            // 0x0080 (0x0010) [0x0000000000400002] (CPF_Const | CPF_NeedCtorLink)
};

// ScriptStruct Engine.OnlineSubsystem.AchievementReward
// Size: 0x0038 (0x0031 PropertySize + 0x0007 padding to satisfy MinAlignment of 8)
struct FAchievementReward
{
	class FString                                      RewardName;                                    // 0x0000 (0x0010) [0x0000000000400002] (CPF_Const | CPF_NeedCtorLink)
	class FString                                      Description;                                   // 0x0010 (0x0010) [0x0000000000400002] (CPF_Const | CPF_NeedCtorLink)
	class FString                                      Data;                                          // 0x0020 (0x0010) [0x0000000000400002] (CPF_Const | CPF_NeedCtorLink)
	uint8_t                                            RewardType;                                    // 0x0030 (0x0001) [0x0000000000000002] (CPF_Const)   
	uint8_t                                          MinAlignmentPadding[0x7];                      // 0x0031 (0x0007) PADDING FOR MINALIGNMENT
};

// ScriptStruct Engine.OnlineSubsystem.AchievementMediaAsset
// Size: 0x0028
struct FAchievementMediaAsset
{
	class FString                                      AssetName;                                     // 0x0000 (0x0010) [0x0000000000400002] (CPF_Const | CPF_NeedCtorLink)
	uint8_t                                            AssetType;                                     // 0x0010 (0x0001) [0x0000000000000002] (CPF_Const)   
	uint8_t                                          UnknownData00[0x7];                            // 0x0011 (0x0007) MISSED OFFSET
	class FString                                      AssetURL;                                      // 0x0018 (0x0010) [0x0000000000400002] (CPF_Const | CPF_NeedCtorLink)
};

// ScriptStruct Engine.OnlineSubsystem.AchievementTitleAssociation
// Size: 0x0018 (0x0014 PropertySize + 0x0004 padding to satisfy MinAlignment of 8)
struct FAchievementTitleAssociation
{
	class FString                                      LocalizedTitleName;                            // 0x0000 (0x0010) [0x0000000000400002] (CPF_Const | CPF_NeedCtorLink)
	int32_t                                            TitleId;                                       // 0x0010 (0x0004) [0x0000000000000002] (CPF_Const)   
	uint8_t                                          MinAlignmentPadding[0x4];                      // 0x0014 (0x0004) PADDING FOR MINALIGNMENT
};

// ScriptStruct Engine.OnlineSubsystem.AchievementDetails
// Size: 0x00F8
struct FAchievementDetails
{
	int32_t                                            Id;                                            // 0x0000 (0x0004) [0x0000000000000002] (CPF_Const)   
	uint8_t                                          UnknownData00[0x4];                            // 0x0004 (0x0004) MISSED OFFSET
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
	uint8_t                                          UnknownData01[0x3];                            // 0x005D (0x0003) MISSED OFFSET
	uint64_t                                           ChallengeWindowBegin;                          // 0x0060 (0x0008) [0x0000000000000002] (CPF_Const)   
	uint64_t                                           ChallengeWindowEnd;                            // 0x0068 (0x0008) [0x0000000000000002] (CPF_Const)   
	class FString                                      DeepLink;                                      // 0x0070 (0x0010) [0x0000000000400002] (CPF_Const | CPF_NeedCtorLink)
	uint64_t                                           EstimatedUnlockTime;                           // 0x0080 (0x0008) [0x0000000000000002] (CPF_Const)   
	uint32_t                                           bIsRevoked : 1;                                // 0x0088 (0x0004) [0x0000000000000002] [0x00000001] (CPF_Const)
	uint8_t                                            ParticipationType;                             // 0x008C (0x0001) [0x0000000000000002] (CPF_Const)   
	uint8_t                                          UnknownData02[0x3];                            // 0x008D (0x0003) MISSED OFFSET
	class TArray<class FString>                        PlatformsAvailableOn;                          // 0x0090 (0x0010) [0x0000000000400002] (CPF_Const | CPF_NeedCtorLink)
	uint8_t                                            ProgressState;                                 // 0x00A0 (0x0001) [0x0000000000000002] (CPF_Const)   
	uint8_t                                          UnknownData03[0x7];                            // 0x00A1 (0x0007) MISSED OFFSET
	class TArray<struct FAchievementReward>            Rewards;                                       // 0x00A8 (0x0010) [0x0000000000400002] (CPF_Const | CPF_NeedCtorLink)
	class TArray<struct FAchievementMediaAsset>        MediaAssets;                                   // 0x00B8 (0x0010) [0x0000000000400002] (CPF_Const | CPF_NeedCtorLink)
	class FString                                      ProductID;                                     // 0x00C8 (0x0010) [0x0000000000400002] (CPF_Const | CPF_NeedCtorLink)
	class FString                                      ServiceConfigurationID;                        // 0x00D8 (0x0010) [0x0000000000400002] (CPF_Const | CPF_NeedCtorLink)
	class TArray<struct FAchievementTitleAssociation>  TitleAssociations;                             // 0x00E8 (0x0010) [0x0000000000400002] (CPF_Const | CPF_NeedCtorLink)
};

// ScriptStruct Engine.Settings.SettingsData
// Size: 0x0010
struct FSettingsData
{
	uint8_t                                            Type;                                          // 0x0000 (0x0001) [0x0000000000000002] (CPF_Const)   
	uint8_t                                          UnknownData00[0x3];                            // 0x0001 (0x0003) MISSED OFFSET
	int32_t                                            Value1;                                        // 0x0004 (0x0004) [0x0000000000000002] (CPF_Const)   
	struct FPointer                                    Value2;                                        // 0x0008 (0x0008) [0x0000000000003002] (CPF_Const | CPF_Native | CPF_Transient)
};

// ScriptStruct Engine.Settings.SettingsProperty
// Size: 0x0020 (0x0019 PropertySize + 0x0007 padding to satisfy MinAlignment of 8)
struct FSettingsProperty
{
	int32_t                                            PropertyId;                                    // 0x0000 (0x0004) [0x0000000000000000]               
	uint8_t                                          UnknownData00[0x4];                            // 0x0004 (0x0004) MISSED OFFSET
	struct FSettingsData                               Data;                                          // 0x0008 (0x0010) [0x0000000000000000]               
	uint8_t                                            AdvertisementType;                             // 0x0018 (0x0001) [0x0000000000000000]               
	uint8_t                                          MinAlignmentPadding[0x7];                      // 0x0019 (0x0007) PADDING FOR MINALIGNMENT
};

// ScriptStruct Engine.OnlineSubsystem.CommunityContentMetadata
// Size: 0x0038
struct FCommunityContentMetadata
{
	int32_t                                            ContentType;                                   // 0x0000 (0x0004) [0x0000000000000000]               
	uint8_t                                          UnknownData00[0x4];                            // 0x0004 (0x0004) MISSED OFFSET
	class TArray<struct FSettingsProperty>             MetadataItems;                                 // 0x0008 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	class FString                                      RemotePath;                                    // 0x0018 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	class FString                                      DisplayName;                                   // 0x0028 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
};

// ScriptStruct Engine.OnlineSubsystem.CommunityContentFile
// Size: 0x0090
struct FCommunityContentFile
{
	int32_t                                            ContentId;                                     // 0x0000 (0x0004) [0x0000000000000000]               
	uint8_t                                          UnknownData00[0x4];                            // 0x0004 (0x0004) MISSED OFFSET
	class FString                                      RemoteContentPath;                             // 0x0008 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	int32_t                                            FileId;                                        // 0x0018 (0x0004) [0x0000000000000000]               
	int32_t                                            ContentType;                                   // 0x001C (0x0004) [0x0000000000000000]               
	int32_t                                            FileSize;                                      // 0x0020 (0x0004) [0x0000000000000000]               
	uint8_t                                          UnknownData01[0x4];                            // 0x0024 (0x0004) MISSED OFFSET
	struct FUniqueNetId                                Owner;                                         // 0x0028 (0x0048) [0x0000000000400000] (CPF_NeedCtorLink)
	int32_t                                            DownloadCount;                                 // 0x0070 (0x0004) [0x0000000000000000]               
	float                                              AverageRating;                                 // 0x0074 (0x0004) [0x0000000000000000]               
	int32_t                                            RatingCount;                                   // 0x0078 (0x0004) [0x0000000000000000]               
	int32_t                                            LastRatingGiven;                               // 0x007C (0x0004) [0x0000000000000000]               
	class FString                                      LocalFilePath;                                 // 0x0080 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
};

// ScriptStruct Engine.Settings.LocalizedStringSetting
// Size: 0x000C (0x0009 PropertySize + 0x0003 padding to satisfy MinAlignment of 4)
struct FLocalizedStringSetting
{
	int32_t                                            Id;                                            // 0x0000 (0x0004) [0x0000000000000000]               
	int32_t                                            ValueIndex;                                    // 0x0004 (0x0004) [0x0000000000000000]               
	uint8_t                                            AdvertisementType;                             // 0x0008 (0x0001) [0x0000000000000000]               
	uint8_t                                          MinAlignmentPadding[0x3];                      // 0x0009 (0x0003) PADDING FOR MINALIGNMENT
};

// ScriptStruct Engine.OnlineSubsystem.TitleFile
// Size: 0x0028
struct FTitleFile
{
	class FString                                      Filename;                                      // 0x0000 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	uint8_t                                            AsyncState;                                    // 0x0010 (0x0001) [0x0000000000000000]               
	uint8_t                                          UnknownData00[0x7];                            // 0x0011 (0x0007) MISSED OFFSET
	class TArray<uint8_t>                              Data;                                          // 0x0018 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
};

// ScriptStruct Engine.OnlineSubsystem.EmsFile
// Size: 0x0038 (0x0034 PropertySize + 0x0004 padding to satisfy MinAlignment of 8)
struct FEmsFile
{
	class FString                                      Hash;                                          // 0x0000 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	class FString                                      DLName;                                        // 0x0010 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	class FString                                      Filename;                                      // 0x0020 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	int32_t                                            FileSize;                                      // 0x0030 (0x0004) [0x0000000000000000]               
	uint8_t                                          MinAlignmentPadding[0x4];                      // 0x0034 (0x0004) PADDING FOR MINALIGNMENT
};

// ScriptStruct Engine.OnlineSubsystem.NamedInterfaceDef
// Size: 0x0018
struct FNamedInterfaceDef
{
	class FName                                        InterfaceName;                                 // 0x0000 (0x0008) [0x0000000000000000]               
	class FString                                      InterfaceClassName;                            // 0x0008 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
};

// ScriptStruct Engine.OnlineSubsystem.OnlineFriendMessage
// Size: 0x0070
struct FOnlineFriendMessage
{
	struct FUniqueNetId                                SendingPlayerId;                               // 0x0000 (0x0048) [0x0000000000400000] (CPF_NeedCtorLink)
	class FString                                      SendingPlayerNick;                             // 0x0048 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	uint32_t                                           bIsFriendInvite : 1;                           // 0x0058 (0x0004) [0x0000000000000000] [0x00000001] 
	uint32_t                                           bIsGameInvite : 1;                             // 0x0058 (0x0004) [0x0000000000000000] [0x00000002] 
	uint32_t                                           bWasAccepted : 1;                              // 0x0058 (0x0004) [0x0000000000000000] [0x00000004] 
	uint32_t                                           bWasDenied : 1;                                // 0x0058 (0x0004) [0x0000000000000000] [0x00000008] 
	uint8_t                                          UnknownData00[0x4];                            // 0x005C (0x0004) MISSED OFFSET
	class FString                                      Message;                                       // 0x0060 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
};

// ScriptStruct Engine.OnlineSubsystem.RemoteTalker
// Size: 0x0050
struct FRemoteTalker
{
	struct FUniqueNetId                                TalkerId;                                      // 0x0000 (0x0048) [0x0000000000400000] (CPF_NeedCtorLink)
	float                                              LastNotificationTime;                          // 0x0048 (0x0004) [0x0000000000000000]               
	uint32_t                                           bWasTalking : 1;                               // 0x004C (0x0004) [0x0000000000000000] [0x00000001] 
	uint32_t                                           bIsTalking : 1;                                // 0x004C (0x0004) [0x0000000000000000] [0x00000002] 
	uint32_t                                           bIsRegistered : 1;                             // 0x004C (0x0004) [0x0000000000000000] [0x00000004] 
};

// ScriptStruct Engine.OnlineSubsystem.LocalTalker
// Size: 0x0050 (0x004C PropertySize + 0x0004 padding to satisfy MinAlignment of 8)
struct FLocalTalker
{
	struct FUniqueNetId                                TalkerId;                                      // 0x0000 (0x0048) [0x0000000000400000] (CPF_NeedCtorLink)
	uint32_t                                           bHasVoice : 1;                                 // 0x0048 (0x0004) [0x0000000000000000] [0x00000001] 
	uint32_t                                           bHasNetworkedVoice : 1;                        // 0x0048 (0x0004) [0x0000000000000000] [0x00000002] 
	uint32_t                                           bIsRecognizingSpeech : 1;                      // 0x0048 (0x0004) [0x0000000000000000] [0x00000004] 
	uint32_t                                           bWasTalking : 1;                               // 0x0048 (0x0004) [0x0000000000000000] [0x00000008] 
	uint32_t                                           bIsTalking : 1;                                // 0x0048 (0x0004) [0x0000000000000000] [0x00000010] 
	uint32_t                                           bIsRegistered : 1;                             // 0x0048 (0x0004) [0x0000000000000000] [0x00000020] 
	uint8_t                                          MinAlignmentPadding[0x4];                      // 0x004C (0x0004) PADDING FOR MINALIGNMENT
};

// ScriptStruct Engine.OnlineSubsystem.OnlinePlayerScore
// Size: 0x0050
struct FOnlinePlayerScore
{
	struct FUniqueNetId                                PlayerID;                                      // 0x0000 (0x0048) [0x0000000000400000] (CPF_NeedCtorLink)
	int32_t                                            TeamID;                                        // 0x0048 (0x0004) [0x0000000000000000]               
	int32_t                                            Score;                                         // 0x004C (0x0004) [0x0000000000000000]               
};

// ScriptStruct Engine.OnlineSubsystem.SpeechRecognizedWord
// Size: 0x0020 (0x001C PropertySize + 0x0004 padding to satisfy MinAlignment of 8)
struct FSpeechRecognizedWord
{
	int32_t                                            WordId;                                        // 0x0000 (0x0004) [0x0000000000000000]               
	uint8_t                                          UnknownData00[0x4];                            // 0x0004 (0x0004) MISSED OFFSET
	class FString                                      WordText;                                      // 0x0008 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	float                                              Confidence;                                    // 0x0018 (0x0004) [0x0000000000000000]               
	uint8_t                                          MinAlignmentPadding[0x4];                      // 0x001C (0x0004) PADDING FOR MINALIGNMENT
};

// ScriptStruct Engine.OnlineSubsystem.OnlineContent
// Size: 0x0060
struct FOnlineContent
{
	uint8_t                                            ContentType;                                   // 0x0000 (0x0001) [0x0000000000000000]               
	uint8_t                                            UserIndex;                                     // 0x0001 (0x0001) [0x0000000000000000]               
	uint8_t                                          UnknownData00[0x2];                            // 0x0002 (0x0002) MISSED OFFSET
	uint32_t                                           bIsCorrupt : 1;                                // 0x0004 (0x0004) [0x0000000000000000] [0x00000001] 
	int32_t                                            DeviceID;                                      // 0x0008 (0x0004) [0x0000000000000000]               
	int32_t                                            LicenseMask;                                   // 0x000C (0x0004) [0x0000000000000000]               
	class FString                                      FriendlyName;                                  // 0x0010 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	class FString                                      Filename;                                      // 0x0020 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	class FString                                      ContentPath;                                   // 0x0030 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	class TArray<class FString>                        ContentPackages;                               // 0x0040 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	class TArray<class FString>                        ContentFiles;                                  // 0x0050 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
};

// ScriptStruct Engine.OnlineSubsystem.OnlineCrossTitleContent
// 0x0004 (0x0060 - 0x0064)
struct FOnlineCrossTitleContent : FOnlineContent
{
	int32_t                                            TitleId;                                       // 0x0060 (0x0004) [0x0000000000000000]               
	uint8_t                                          MinAlignmentPadding[0x4];                      // 0x0064 (0x0004) PADDING FOR MINALIGNMENT
};

// ScriptStruct Engine.OnlineSubsystem.OnlineUser
// Size: 0x0078
struct FOnlineUser
{
	struct FUniqueNetId                                UniqueId;                                      // 0x0000 (0x0048) [0x0000000000400002] (CPF_Const | CPF_NeedCtorLink)
	class FString                                      NickName;                                      // 0x0048 (0x0010) [0x0000000000400002] (CPF_Const | CPF_NeedCtorLink)
	class TArray<class FString>                        AttrName;                                      // 0x0058 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	class TArray<class FString>                        AttrValue;                                     // 0x0068 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
};

// ScriptStruct Engine.OnlineSubsystem.OnlineFriend
// 0x009C (0x0078 - 0x0114)
struct FOnlineFriend : FOnlineUser
{
	struct FUniqueNetId                                PlayerID;                                      // 0x0078 (0x0048) [0x0000000000400000] (CPF_NeedCtorLink)
	uint64_t                                           SessionId;                                     // 0x00C0 (0x0008) [0x0000000000000000]               
	uint8_t                                            PlatformOverride;                              // 0x00C8 (0x0001) [0x0000000000000000]               
	uint8_t                                          UnknownData00[0x7];                            // 0x00C9 (0x0007) MISSED OFFSET
	class FString                                      PlayerName;                                    // 0x00D0 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	class FString                                      SecondaryPlayerName;                           // 0x00E0 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	uint8_t                                            SecondaryPlatform;                             // 0x00F0 (0x0001) [0x0000000000000000]               
	uint8_t                                          UnknownData01[0x7];                            // 0x00F1 (0x0007) MISSED OFFSET
	class FString                                      PresenceInfo;                                  // 0x00F8 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	uint8_t                                            FriendState;                                   // 0x0108 (0x0001) [0x0000000000000000]               
	uint8_t                                          UnknownData02[0x3];                            // 0x0109 (0x0003) MISSED OFFSET
	uint32_t                                           bIsOnline : 1;                                 // 0x010C (0x0004) [0x0000000000000000] [0x00000001] 
	uint32_t                                           bIsPlaying : 1;                                // 0x010C (0x0004) [0x0000000000000000] [0x00000002] 
	uint32_t                                           bIsPlayingThisGame : 1;                        // 0x010C (0x0004) [0x0000000000000000] [0x00000004] 
	uint32_t                                           bIsJoinable : 1;                               // 0x010C (0x0004) [0x0000000000000000] [0x00000008] 
	uint32_t                                           bHasVoiceSupport : 1;                          // 0x010C (0x0004) [0x0000000000000000] [0x00000010] 
	uint32_t                                           bHaveInvited : 1;                              // 0x010C (0x0004) [0x0000000000000000] [0x00000020] 
	uint32_t                                           bHasInvitedYou : 1;                            // 0x010C (0x0004) [0x0000000000000000] [0x00000040] 
	int32_t                                            GroupId;                                       // 0x0110 (0x0004) [0x0000000000000002] (CPF_Const)   
	uint8_t                                          MinAlignmentPadding[0x4];                      // 0x0114 (0x0004) PADDING FOR MINALIGNMENT
};

// ScriptStruct Engine.OnlineSubsystem.FriendsQuery
// Size: 0x0050 (0x004C PropertySize + 0x0004 padding to satisfy MinAlignment of 8)
struct FFriendsQuery
{
	struct FUniqueNetId                                UniqueId;                                      // 0x0000 (0x0048) [0x0000000000400000] (CPF_NeedCtorLink)
	uint32_t                                           bIsFriend : 1;                                 // 0x0048 (0x0004) [0x0000000000000000] [0x00000001] 
	uint8_t                                          MinAlignmentPadding[0x4];                      // 0x004C (0x0004) PADDING FOR MINALIGNMENT
};

// ScriptStruct Engine.OnlineSubsystem.WordFilterResult
// Size: 0x0038
struct FWordFilterResult
{
	uint8_t                                            Censorship;                                    // 0x0000 (0x0001) [0x0000000000000000]               
	uint8_t                                          UnknownData00[0x7];                            // 0x0001 (0x0007) MISSED OFFSET
	class FString                                      Original;                                      // 0x0008 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	class FString                                      Sanitized;                                     // 0x0018 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	class FString                                      ErrorMessage;                                  // 0x0028 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
};

// ScriptStruct Engine.OnlineSubsystem.EpicDLCInfo
// Size: 0x0018
struct FEpicDLCInfo
{
	class FString                                      Key;                                           // 0x0000 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	class FName                                        Value;                                         // 0x0010 (0x0008) [0x0000000000000000]               
};

// ScriptStruct Engine.OnlineSubsystem.SwitchDLCInfo
// Size: 0x0018
struct FSwitchDLCInfo
{
	class FString                                      Key;                                           // 0x0000 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	class FName                                        Value;                                         // 0x0010 (0x0008) [0x0000000000000000]               
};

// ScriptStruct Engine.OnlineSubsystem.XboxOneDLCInfo
// Size: 0x0020 (0x001C PropertySize + 0x0004 padding to satisfy MinAlignment of 8)
struct FXboxOneDLCInfo
{
	class FString                                      Key;                                           // 0x0000 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	class FName                                        Value;                                         // 0x0010 (0x0008) [0x0000000000000000]               
	uint32_t                                           bDiscUnlock : 1;                               // 0x0018 (0x0004) [0x0000000000000000] [0x00000001] 
	uint8_t                                          MinAlignmentPadding[0x4];                      // 0x001C (0x0004) PADDING FOR MINALIGNMENT
};

// ScriptStruct Engine.OnlineSubsystem.PS4DLCInfo
// Size: 0x0018
struct FPS4DLCInfo
{
	class FString                                      Key;                                           // 0x0000 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	class FName                                        Value;                                         // 0x0010 (0x0008) [0x0000000000000000]               
};

// ScriptStruct Engine.OnlineSubsystem.SteamDLCInfo
// Size: 0x0010
struct FSteamDLCInfo
{
	uint64_t                                           AppID;                                         // 0x0000 (0x0008) [0x0000000000000000]               
	class FName                                        Value;                                         // 0x0008 (0x0008) [0x0000000000000000]               
};

// ScriptStruct Engine.DynamicBlockingVolume.CheckpointRecord
// Size: 0x001C
struct ADynamicBlockingVolume_FCheckpointRecord
{
	struct FVector                                     Location;                                      // 0x0000 (0x000C) [0x0000000000000000]               
	struct FRotator                                    Rotation;                                      // 0x000C (0x000C) [0x0000000000000000]               
	uint32_t                                           bCollideActors : 1;                            // 0x0018 (0x0004) [0x0000000000000000] [0x00000001] 
	uint32_t                                           bBlockActors : 1;                              // 0x0018 (0x0004) [0x0000000000000000] [0x00000002] 
	uint32_t                                           bNeedsReplication : 1;                         // 0x0018 (0x0004) [0x0000000000000000] [0x00000004] 
};

// ScriptStruct Engine.ParticleSystemComponent.ViewParticleEmitterInstanceMotionBlurInfo
// Size: 0x0050
struct FViewParticleEmitterInstanceMotionBlurInfo
{
	struct FMap_Mirror                                 EmitterInstanceMBInfoMap;                      // 0x0000 (0x0050) [0x0000000000003002] (CPF_Const | CPF_Native | CPF_Transient)
};

// ScriptStruct Engine.ParticleSystemComponent.ParticleSysParam
// Size: 0x0048
struct FParticleSysParam
{
	class FName                                        Name;                                          // 0x0000 (0x0008) [0x0000000000000001] (CPF_Edit)    
	uint8_t                                            ParamType;                                     // 0x0008 (0x0001) [0x0000000000000001] (CPF_Edit)    
	uint8_t                                          UnknownData00[0x3];                            // 0x0009 (0x0003) MISSED OFFSET
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
// Size: 0x0034
struct FParticleEventData
{
	int32_t                                            Type;                                          // 0x0000 (0x0004) [0x0000000000000000]               
	class FName                                        EventName;                                     // 0x0004 (0x0008) [0x0000000000000000]               
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
	class FName                                        BoneName;                                      // 0x004C (0x0008) [0x0000000000000000]               
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
// Size: 0x0050
struct FParticleEmitterInstanceMotionBlurInfo
{
	struct FMap_Mirror                                 ParticleMBInfoMap;                             // 0x0000 (0x0050) [0x0000000000003002] (CPF_Const | CPF_Native | CPF_Transient)
};

// ScriptStruct Engine.ParticleSystemComponent.ParticleEmitterInstance
// Size: 0x0000
struct FParticleEmitterInstance
{
};

// ScriptStruct Engine.Emitter.CheckpointRecord
// Size: 0x0004
struct AEmitter_FCheckpointRecord
{
	uint32_t                                           bIsActive : 1;                                 // 0x0000 (0x0004) [0x0000000000000000] [0x00000001] 
};

// ScriptStruct Engine.EmitterPool.EmitterBaseInfo
// Size: 0x0030 (0x002C PropertySize + 0x0004 padding to satisfy MinAlignment of 8)
struct FEmitterBaseInfo
{
	class UParticleSystemComponent*                    PSC;                                           // 0x0000 (0x0008) [0x0000000004080008] (CPF_ExportObject | CPF_Component | CPF_EditInline)
	class AActor*                                      Base;                                          // 0x0008 (0x0008) [0x0000000000000000]               
	struct FVector                                     RelativeLocation;                              // 0x0010 (0x000C) [0x0000000000000000]               
	struct FRotator                                    RelativeRotation;                              // 0x001C (0x000C) [0x0000000000000000]               
	uint32_t                                           bInheritBaseScale : 1;                         // 0x0028 (0x0004) [0x0000000000000000] [0x00000001] 
	uint8_t                                          MinAlignmentPadding[0x4];                      // 0x002C (0x0004) PADDING FOR MINALIGNMENT
};

// ScriptStruct Engine.Engine.StatColorMapEntry
// Size: 0x0008
struct FStatColorMapEntry
{
	float                                              In;                                            // 0x0000 (0x0004) [0x0000000000044000] (CPF_Config | CPF_GlobalConfig)
	struct FColor                                      Out;                                           // 0x0004 (0x0004) [0x0000000000044000] (CPF_Config | CPF_GlobalConfig)
};

// ScriptStruct Engine.Engine.StatColorMapping
// Size: 0x0028 (0x0024 PropertySize + 0x0004 padding to satisfy MinAlignment of 8)
struct FStatColorMapping
{
	class FString                                      StatName;                                      // 0x0000 (0x0010) [0x0000000000444000] (CPF_Config | CPF_GlobalConfig | CPF_NeedCtorLink)
	class TArray<struct FStatColorMapEntry>            ColorMap;                                      // 0x0010 (0x0010) [0x0000000000444000] (CPF_Config | CPF_GlobalConfig | CPF_NeedCtorLink)
	uint32_t                                           DisableBlend : 1;                              // 0x0020 (0x0004) [0x0000000000044000] [0x00000001] (CPF_Config | CPF_GlobalConfig)
	uint8_t                                          MinAlignmentPadding[0x4];                      // 0x0024 (0x0004) PADDING FOR MINALIGNMENT
};

// ScriptStruct Engine.Engine.DropNoteInfo
// Size: 0x0028
struct FDropNoteInfo
{
	struct FVector                                     Location;                                      // 0x0000 (0x000C) [0x0000000000000000]               
	struct FRotator                                    Rotation;                                      // 0x000C (0x000C) [0x0000000000000000]               
	class FString                                      Comment;                                       // 0x0018 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
};

// ScriptStruct Engine.EngineTypes.PrimitiveMaterialRef
// Size: 0x0010 (0x000C PropertySize + 0x0004 padding to satisfy MinAlignment of 8)
struct FPrimitiveMaterialRef
{
	class UPrimitiveComponent*                         Primitive;                                     // 0x0000 (0x0008) [0x0000000004080008] (CPF_ExportObject | CPF_Component | CPF_EditInline)
	int32_t                                            MaterialIndex;                                 // 0x0008 (0x0004) [0x0000000000000000]               
	uint8_t                                          MinAlignmentPadding[0x4];                      // 0x000C (0x0004) PADDING FOR MINALIGNMENT
};

// ScriptStruct Engine.EngineTypes.PostProcessMaterialRef
// Size: 0x0008
struct FPostProcessMaterialRef
{
	class UMaterialEffect*                             Effect;                                        // 0x0000 (0x0008) [0x0000000000000000]               
};

// ScriptStruct Engine.EngineTypes.MaterialReferenceList
// Size: 0x0028
struct FMaterialReferenceList
{
	class UMaterialInterface*                          TargetMaterial;                                // 0x0000 (0x0008) [0x0000000000000001] (CPF_Edit)    
	class TArray<struct FPrimitiveMaterialRef>         AffectedMaterialRefs;                          // 0x0008 (0x0010) [0x0000020000480000] (CPF_Component | CPF_NeedCtorLink | CPF_EditHide)
	class TArray<struct FPostProcessMaterialRef>       AffectedPPChainMaterialRefs;                   // 0x0018 (0x0010) [0x0000020000400000] (CPF_NeedCtorLink | CPF_EditHide)
};

// ScriptStruct Engine.EngineTypes.VelocityObstacleStat
// Size: 0x0020
struct FVelocityObstacleStat
{
	struct FVector                                     Position;                                      // 0x0000 (0x000C) [0x0000000000000000]               
	struct FVector                                     Velocity;                                      // 0x000C (0x000C) [0x0000000000000000]               
	float                                              Radius;                                        // 0x0018 (0x0004) [0x0000000000000000]               
	int32_t                                            Priority;                                      // 0x001C (0x0004) [0x0000000000000000]               
};

// ScriptStruct Engine.FacebookIntegration.FacebookFriend
// Size: 0x0020
struct FFacebookFriend
{
	class FString                                      Name;                                          // 0x0000 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	class FString                                      Id;                                            // 0x0010 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
};

// ScriptStruct Engine.FogVolumeDensityInfo.CheckpointRecord
// Size: 0x0004
struct AFogVolumeDensityInfo_FCheckpointRecord
{
	uint32_t                                           bEnabled : 1;                                  // 0x0000 (0x0004) [0x0000000000000000] [0x00000001] 
};

// ScriptStruct Engine.FontImportOptions.FontImportOptionsData
// Size: 0x00B0 (0x00AC PropertySize + 0x0004 padding to satisfy MinAlignment of 8)
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
	uint8_t                                          UnknownData00[0x7];                            // 0x0019 (0x0007) MISSED OFFSET
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
	uint8_t                                          MinAlignmentPadding[0x4];                      // 0x00AC (0x0004) PADDING FOR MINALIGNMENT
};

// ScriptStruct Engine.Font.FontCharacter
// Size: 0x0018
struct FFontCharacter
{
	int32_t                                            StartU;                                        // 0x0000 (0x0004) [0x0000000000000001] (CPF_Edit)    
	int32_t                                            StartV;                                        // 0x0004 (0x0004) [0x0000000000000001] (CPF_Edit)    
	int32_t                                            USize;                                         // 0x0008 (0x0004) [0x0000000000000001] (CPF_Edit)    
	int32_t                                            VSize;                                         // 0x000C (0x0004) [0x0000000000000001] (CPF_Edit)    
	uint8_t                                            TextureIndex;                                  // 0x0010 (0x0001) [0x0000000000000001] (CPF_Edit)    
	uint8_t                                          UnknownData00[0x3];                            // 0x0011 (0x0003) MISSED OFFSET
	int32_t                                            VerticalOffset;                                // 0x0014 (0x0004) [0x0000000000000001] (CPF_Edit)    
};

// ScriptStruct Engine.ForceFeedbackWaveform.WaveformSample
// Size: 0x000C
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
// Size: 0x0018 (0x0014 PropertySize + 0x0004 padding to satisfy MinAlignment of 8)
struct FFragmentGroup
{
	class TArray<int32_t>                              FragmentIndices;                               // 0x0000 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	uint32_t                                           bGroupIsRooted : 1;                            // 0x0010 (0x0004) [0x0000000000000000] [0x00000001] 
	uint8_t                                          MinAlignmentPadding[0x4];                      // 0x0014 (0x0004) PADDING FOR MINALIGNMENT
};

// ScriptStruct Engine.FracturedStaticMeshActor.DeferredPartToSpawn
// Size: 0x0024
struct FDeferredPartToSpawn
{
	int32_t                                            ChunkIndex;                                    // 0x0000 (0x0004) [0x0000000000000000]               
	struct FVector                                     InitialVel;                                    // 0x0004 (0x000C) [0x0000000000000000]               
	struct FVector                                     InitialAngVel;                                 // 0x0010 (0x000C) [0x0000000000000000]               
	float                                              RelativeScale;                                 // 0x001C (0x0004) [0x0000000000000000]               
	uint32_t                                           bExplosion : 1;                                // 0x0020 (0x0004) [0x0000000000000000] [0x00000001] 
};

// ScriptStruct Engine.FracturedStaticMeshActor.CheckpointRecord
// Size: 0x0018
struct AFracturedStaticMeshActor_FCheckpointRecord
{
	uint32_t                                           bIsShutdown : 1;                               // 0x0000 (0x0004) [0x0000000000000000] [0x00000001] 
	uint8_t                                          UnknownData00[0x4];                            // 0x0004 (0x0004) MISSED OFFSET
	class TArray<uint8_t>                              FragmentVis;                                   // 0x0008 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
};

// ScriptStruct Engine.GameEngine.LevelStreamingStatus
// Size: 0x000C
struct FLevelStreamingStatus
{
	class FName                                        PackageName;                                   // 0x0000 (0x0008) [0x0000000000000000]               
	uint32_t                                           bShouldBeLoaded : 1;                           // 0x0008 (0x0004) [0x0000000000000000] [0x00000001] 
	uint32_t                                           bShouldBeVisible : 1;                          // 0x0008 (0x0004) [0x0000000000000000] [0x00000002] 
};

// ScriptStruct Engine.GameEngine.FullyLoadedPackagesInfo
// Size: 0x0038
struct FFullyLoadedPackagesInfo
{
	uint8_t                                            FullyLoadType;                                 // 0x0000 (0x0001) [0x0000000000000000]               
	uint8_t                                          UnknownData00[0x7];                            // 0x0001 (0x0007) MISSED OFFSET
	class FString                                      Tag;                                           // 0x0008 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	class TArray<class FName>                          PackagesToLoad;                                // 0x0018 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	class TArray<class UObject*>                       LoadedObjects;                                 // 0x0028 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
};

// ScriptStruct Engine.GameEngine.NamedNetDriver
// Size: 0x0010
struct FNamedNetDriver
{
	class FName                                        NetDriverName;                                 // 0x0000 (0x0008) [0x0000000000000000]               
	struct FPointer                                    NetDriver;                                     // 0x0008 (0x0008) [0x0000000000001002] (CPF_Const | CPF_Native)
};

// ScriptStruct Engine.GameEngine.AnimTag
// Size: 0x0020
struct FAnimTag
{
	class FString                                      Tag;                                           // 0x0000 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	class TArray<class FString>                        Contains;                                      // 0x0010 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
};

// ScriptStruct Engine.GameEngine.URL
// Size: 0x0060 (0x005C PropertySize + 0x0004 padding to satisfy MinAlignment of 8)
struct FURL
{
	class FString                                      Protocol;                                      // 0x0000 (0x0010) [0x0000000000500000] (CPF_NeedCtorLink)
	class FString                                      Host;                                          // 0x0010 (0x0010) [0x0000000000500000] (CPF_NeedCtorLink)
	int32_t                                            Port;                                          // 0x0020 (0x0004) [0x0000000000100000]               
	uint8_t                                          UnknownData00[0x4];                            // 0x0024 (0x0004) MISSED OFFSET
	class FString                                      Map;                                           // 0x0028 (0x0010) [0x0000000000500000] (CPF_NeedCtorLink)
	class TArray<class FString>                        Op;                                            // 0x0038 (0x0010) [0x0000000000500000] (CPF_NeedCtorLink)
	class FString                                      Portal;                                        // 0x0048 (0x0010) [0x0000000000500000] (CPF_NeedCtorLink)
	int32_t                                            Valid;                                         // 0x0058 (0x0004) [0x0000000000100000]               
	uint8_t                                          MinAlignmentPadding[0x4];                      // 0x005C (0x0004) PADDING FOR MINALIGNMENT
};

// ScriptStruct Engine.GameInfo.GameClassShortName
// Size: 0x0020
struct FGameClassShortName
{
	class FString                                      ShortName;                                     // 0x0000 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	class FString                                      GameClassName;                                 // 0x0010 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
};

// ScriptStruct Engine.GameInfo.GameTypePrefix
// Size: 0x0048
struct FGameTypePrefix
{
	class FString                                      Prefix;                                        // 0x0000 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	uint32_t                                           bUsesCommonPackage : 1;                        // 0x0010 (0x0004) [0x0000000000000000] [0x00000001] 
	uint8_t                                          UnknownData00[0x4];                            // 0x0014 (0x0004) MISSED OFFSET
	class FString                                      GameType;                                      // 0x0018 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	class TArray<class FString>                        AdditionalGameTypes;                           // 0x0028 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	class TArray<class FString>                        ForcedObjects;                                 // 0x0038 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
};

// ScriptStruct Engine.GameplayEvents.PlayerInformation
// Size: 0x0068 (0x0064 PropertySize + 0x0004 padding to satisfy MinAlignment of 8)
struct FPlayerInformation
{
	class FName                                        ControllerName;                                // 0x0000 (0x0008) [0x0000000000000000]               
	class FString                                      PlayerName;                                    // 0x0008 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FUniqueNetId                                UniqueId;                                      // 0x0018 (0x0048) [0x0000000000400000] (CPF_NeedCtorLink)
	uint32_t                                           bIsBot : 1;                                    // 0x0060 (0x0004) [0x0000000000000000] [0x00000001] 
	uint8_t                                          MinAlignmentPadding[0x4];                      // 0x0064 (0x0004) PADDING FOR MINALIGNMENT
};

// ScriptStruct Engine.GameplayEvents.TeamInformation
// Size: 0x0020
struct FTeamInformation
{
	int32_t                                            TeamIndex;                                     // 0x0000 (0x0004) [0x0000000000000000]               
	uint8_t                                          UnknownData00[0x4];                            // 0x0004 (0x0004) MISSED OFFSET
	class FString                                      TeamName;                                      // 0x0008 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FColor                                      TeamColor;                                     // 0x0018 (0x0004) [0x0000000000000000]               
	int32_t                                            MaxSize;                                       // 0x001C (0x0004) [0x0000000000000000]               
};

// ScriptStruct Engine.GameplayEvents.GameStatGroup
// Size: 0x0008
struct FGameStatGroup
{
	uint8_t                                            Group;                                         // 0x0000 (0x0001) [0x0000000000000000]               
	uint8_t                                          UnknownData00[0x3];                            // 0x0001 (0x0003) MISSED OFFSET
	int32_t                                            Level;                                         // 0x0004 (0x0004) [0x0000000000000000]               
};

// ScriptStruct Engine.GameplayEvents.GameplayEventMetaData
// Size: 0x0018
struct FGameplayEventMetaData
{
	int32_t                                            EventID;                                       // 0x0000 (0x0004) [0x0000000000000002] (CPF_Const)   
	class FName                                        EventName;                                     // 0x0004 (0x0008) [0x0000000000000002] (CPF_Const)   
	struct FGameStatGroup                              StatGroup;                                     // 0x000C (0x0008) [0x0000000000000002] (CPF_Const)   
	int32_t                                            EventDataType;                                 // 0x0014 (0x0004) [0x0000000000000002] (CPF_Const)   
};

// ScriptStruct Engine.GameplayEvents.WeaponClassEventData
// Size: 0x0008
struct FWeaponClassEventData
{
	class FName                                        WeaponClassName;                               // 0x0000 (0x0008) [0x0000000000000000]               
};

// ScriptStruct Engine.GameplayEvents.DamageClassEventData
// Size: 0x0008
struct FDamageClassEventData
{
	class FName                                        DamageClassName;                               // 0x0000 (0x0008) [0x0000000000000000]               
};

// ScriptStruct Engine.GameplayEvents.ProjectileClassEventData
// Size: 0x0008
struct FProjectileClassEventData
{
	class FName                                        ProjectileClassName;                           // 0x0000 (0x0008) [0x0000000000000000]               
};

// ScriptStruct Engine.GameplayEvents.PawnClassEventData
// Size: 0x0008
struct FPawnClassEventData
{
	class FName                                        PawnClassName;                                 // 0x0000 (0x0008) [0x0000000000000000]               
};

// ScriptStruct Engine.GameplayEvents.GameplayEventsHeader
// Size: 0x0038 (0x0034 PropertySize + 0x0004 padding to satisfy MinAlignment of 8)
struct FGameplayEventsHeader
{
	int32_t                                            EngineVersion;                                 // 0x0000 (0x0004) [0x0000000000000002] (CPF_Const)   
	int32_t                                            StatsWriterVersion;                            // 0x0004 (0x0004) [0x0000000000000002] (CPF_Const)   
	int32_t                                            StreamOffset;                                  // 0x0008 (0x0004) [0x0000000000000002] (CPF_Const)   
	int32_t                                            AggregateOffset;                               // 0x000C (0x0004) [0x0000000000000002] (CPF_Const)   
	int32_t                                            FooterOffset;                                  // 0x0010 (0x0004) [0x0000000000000002] (CPF_Const)   
	int32_t                                            TotalStreamSize;                               // 0x0014 (0x0004) [0x0000000000000002] (CPF_Const)   
	int32_t                                            FileSize;                                      // 0x0018 (0x0004) [0x0000000000000002] (CPF_Const)   
	uint8_t                                          UnknownData00[0x4];                            // 0x001C (0x0004) MISSED OFFSET
	class FString                                      FilterClass;                                   // 0x0020 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	int32_t                                            Flags;                                         // 0x0030 (0x0004) [0x0000000000000000]               
	uint8_t                                          MinAlignmentPadding[0x4];                      // 0x0034 (0x0004) PADDING FOR MINALIGNMENT
};

// ScriptStruct Engine.GameplayEvents.GameSessionInformation
// Size: 0x00D0 (0x00CC PropertySize + 0x0004 padding to satisfy MinAlignment of 8)
struct FGameSessionInformation
{
	int32_t                                            AppTitleID;                                    // 0x0000 (0x0004) [0x0000000000000000]               
	int32_t                                            PlatformType;                                  // 0x0004 (0x0004) [0x0000000000000000]               
	class FString                                      Language;                                      // 0x0008 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	class FString                                      GameplaySessionTimestamp;                      // 0x0018 (0x0010) [0x0000000000400002] (CPF_Const | CPF_NeedCtorLink)
	float                                              GameplaySessionStartTime;                      // 0x0028 (0x0004) [0x0000000000000002] (CPF_Const)   
	float                                              GameplaySessionEndTime;                        // 0x002C (0x0004) [0x0000000000000002] (CPF_Const)   
	uint32_t                                           bGameplaySessionInProgress : 1;                // 0x0030 (0x0004) [0x0000000000000002] [0x00000001] (CPF_Const)
	uint8_t                                          UnknownData00[0x4];                            // 0x0034 (0x0004) MISSED OFFSET
	class FString                                      GameplaySessionID;                             // 0x0038 (0x0010) [0x0000000000400002] (CPF_Const | CPF_NeedCtorLink)
	class FString                                      GameClassName;                                 // 0x0048 (0x0010) [0x0000000000400002] (CPF_Const | CPF_NeedCtorLink)
	class FString                                      MapName;                                       // 0x0058 (0x0010) [0x0000000000400002] (CPF_Const | CPF_NeedCtorLink)
	class FString                                      MapURL;                                        // 0x0068 (0x0010) [0x0000000000400002] (CPF_Const | CPF_NeedCtorLink)
	int32_t                                            SessionInstance;                               // 0x0078 (0x0004) [0x0000000000000002] (CPF_Const)   
	int32_t                                            GameTypeId;                                    // 0x007C (0x0004) [0x0000000000000002] (CPF_Const)   
	struct FUniqueNetId                                OwningNetId;                                   // 0x0080 (0x0048) [0x0000000000400002] (CPF_Const | CPF_NeedCtorLink)
	int32_t                                            PlaylistId;                                    // 0x00C8 (0x0004) [0x0000000000000000]               
	uint8_t                                          MinAlignmentPadding[0x4];                      // 0x00CC (0x0004) PADDING FOR MINALIGNMENT
};

// ScriptStruct Engine.WorldInfo.NavMeshPathGoalEvaluatorCacheDatum
// Size: 0x0030
struct FNavMeshPathGoalEvaluatorCacheDatum
{
	int32_t                                            ListIdx;                                       // 0x0000 (0x0004) [0x0000000000000000]               
	uint8_t                                          UnknownData00[0x4];                            // 0x0004 (0x0004) MISSED OFFSET
	class UNavMeshPathGoalEvaluator*                   List[5];                                       // 0x0008 (0x0028) [0x0000000000000000]               
};

// ScriptStruct Engine.WorldInfo.PhysXEmitterVerticalProperties
// Size: 0x0018
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
// Size: 0x0018
struct FPhysXVerticalProperties
{
	struct FPhysXEmitterVerticalProperties             Emitters;                                      // 0x0000 (0x0018) [0x0000000004000001] (CPF_Edit | CPF_EditInline)
};

// ScriptStruct Engine.WorldInfo.HostMigrationState
// Size: 0x0028 (0x0024 PropertySize + 0x0004 padding to satisfy MinAlignment of 8)
struct FHostMigrationState
{
	uint8_t                                            HostMigrationProgress;                         // 0x0000 (0x0001) [0x0000000000000000]               
	uint8_t                                          UnknownData00[0x3];                            // 0x0001 (0x0003) MISSED OFFSET
	float                                              HostMigrationElapsedTime;                      // 0x0004 (0x0004) [0x0000000000000000]               
	float                                              HostMigrationTravelCountdown;                  // 0x0008 (0x0004) [0x0000000000000000]               
	uint8_t                                          UnknownData01[0x4];                            // 0x000C (0x0004) MISSED OFFSET
	class FString                                      HostMigrationTravelURL;                        // 0x0010 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	uint32_t                                           bHostMigrationEnabled : 1;                     // 0x0020 (0x0004) [0x0000000000000000] [0x00000001] 
	uint8_t                                          MinAlignmentPadding[0x4];                      // 0x0024 (0x0004) PADDING FOR MINALIGNMENT
};

// ScriptStruct Engine.MusicTrackDataStructures.MusicTrackStruct
// Size: 0x0030
struct FMusicTrackStruct
{
	class USoundCue*                                   TheSoundCue;                                   // 0x0000 (0x0008) [0x0000000000000001] (CPF_Edit)    
	uint32_t                                           bAutoPlay : 1;                                 // 0x0008 (0x0004) [0x0000000000000001] [0x00000001] (CPF_Edit)
	uint32_t                                           bPersistentAcrossLevels : 1;                   // 0x0008 (0x0004) [0x0000000000000001] [0x00000002] (CPF_Edit)
	float                                              FadeInTime;                                    // 0x000C (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              FadeInVolumeLevel;                             // 0x0010 (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              FadeOutTime;                                   // 0x0014 (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              FadeOutVolumeLevel;                            // 0x0018 (0x0004) [0x0000000000000001] (CPF_Edit)    
	uint8_t                                          UnknownData00[0x4];                            // 0x001C (0x0004) MISSED OFFSET
	class FString                                      MP3Filename;                                   // 0x0020 (0x0010) [0x0000000000400001] (CPF_Edit | CPF_NeedCtorLink)
};

// ScriptStruct Engine.WorldInfo.WorldFractureSettings
// Size: 0x001C
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
// Size: 0x0030
struct FNavMeshPathConstraintCacheDatum
{
	int32_t                                            ListIdx;                                       // 0x0000 (0x0004) [0x0000000000000000]               
	uint8_t                                          UnknownData00[0x4];                            // 0x0004 (0x0004) MISSED OFFSET
	class UNavMeshPathConstraint*                      List[5];                                       // 0x0008 (0x0028) [0x0000000000000000]               
};

// ScriptStruct Engine.WorldInfo.LightmassWorldInfoSettings
// Size: 0x0058
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
// Size: 0x0028 (0x0024 PropertySize + 0x0004 padding to satisfy MinAlignment of 8)
struct FScreenMessageString
{
	uint64_t                                           Key;                                           // 0x0000 (0x0008) [0x0000000000102000] (CPF_Transient)
	class FString                                      ScreenMessage;                                 // 0x0008 (0x0010) [0x0000000000502000] (CPF_Transient | CPF_NeedCtorLink)
	struct FColor                                      DisplayColor;                                  // 0x0018 (0x0004) [0x0000000000102000] (CPF_Transient)
	float                                              TimeToDisplay;                                 // 0x001C (0x0004) [0x0000000000102000] (CPF_Transient)
	float                                              CurrentTimeDisplayed;                          // 0x0020 (0x0004) [0x0000000000102000] (CPF_Transient)
	uint8_t                                          MinAlignmentPadding[0x4];                      // 0x0024 (0x0004) PADDING FOR MINALIGNMENT
};

// ScriptStruct Engine.WorldInfo.ApexModuleDestructibleSettings
// Size: 0x0014
struct FApexModuleDestructibleSettings
{
	int32_t                                            MaxChunkIslandCount;                           // 0x0000 (0x0004) [0x0000000000000001] (CPF_Edit)    
	int32_t                                            MaxShapeCount;                                 // 0x0004 (0x0004) [0x0000000000000001] (CPF_Edit)    
	int32_t                                            MaxRrbActorCount;                              // 0x0008 (0x0004) [0x0000000000000000]               
	float                                              MaxChunkSeparationLOD;                         // 0x000C (0x0004) [0x0000000000000001] (CPF_Edit)    
	uint32_t                                           bOverrideMaxChunkSeparationLOD : 1;            // 0x0010 (0x0004) [0x0000000000000001] [0x00000001] (CPF_Edit)
};

// ScriptStruct Engine.WorldInfo.PhysXSimulationProperties
// Size: 0x000C
struct FPhysXSimulationProperties
{
	uint32_t                                           bUseHardware : 1;                              // 0x0000 (0x0004) [0x0000000000000001] [0x00000001] (CPF_Edit)
	uint32_t                                           bFixedTimeStep : 1;                            // 0x0000 (0x0004) [0x0000000000000001] [0x00000002] (CPF_Edit)
	float                                              TimeStep;                                      // 0x0004 (0x0004) [0x0000000000000001] (CPF_Edit)    
	int32_t                                            MaxSubSteps;                                   // 0x0008 (0x0004) [0x0000000000000001] (CPF_Edit)    
};

// ScriptStruct Engine.WorldInfo.PhysXSceneProperties
// Size: 0x003C
struct FPhysXSceneProperties
{
	struct FPhysXSimulationProperties                  PrimaryScene;                                  // 0x0000 (0x000C) [0x0000000004000001] (CPF_Edit | CPF_EditInline)
	struct FPhysXSimulationProperties                  CompartmentRigidBody;                          // 0x000C (0x000C) [0x0000000004000001] (CPF_Edit | CPF_EditInline)
	struct FPhysXSimulationProperties                  CompartmentFluid;                              // 0x0018 (0x000C) [0x0000000004000001] (CPF_Edit | CPF_EditInline)
	struct FPhysXSimulationProperties                  CompartmentCloth;                              // 0x0024 (0x000C) [0x0000000004000001] (CPF_Edit | CPF_EditInline)
	struct FPhysXSimulationProperties                  CompartmentSoftBody;                           // 0x0030 (0x000C) [0x0000000004000001] (CPF_Edit | CPF_EditInline)
};

// ScriptStruct Engine.WorldInfo.CompartmentRunList
// Size: 0x0004
struct FCompartmentRunList
{
	uint32_t                                           RigidBody : 1;                                 // 0x0000 (0x0004) [0x0000000000000001] [0x00000001] (CPF_Edit)
	uint32_t                                           Fluid : 1;                                     // 0x0000 (0x0004) [0x0000000000000001] [0x00000002] (CPF_Edit)
	uint32_t                                           Cloth : 1;                                     // 0x0000 (0x0004) [0x0000000000000001] [0x00000004] (CPF_Edit)
	uint32_t                                           SoftBody : 1;                                  // 0x0000 (0x0004) [0x0000000000000001] [0x00000008] (CPF_Edit)
};

// ScriptStruct Engine.WorldInfo.NetViewer
// Size: 0x0028
struct FNetViewer
{
	class APlayerController*                           InViewer;                                      // 0x0000 (0x0008) [0x0000000000000000]               
	class AActor*                                      Viewer;                                        // 0x0008 (0x0008) [0x0000000000000000]               
	struct FVector                                     ViewLocation;                                  // 0x0010 (0x000C) [0x0000000000000000]               
	struct FVector                                     ViewDir;                                       // 0x001C (0x000C) [0x0000000000000000]               
};

// ScriptStruct Engine.Settings.IdToStringMapping
// Size: 0x000C
struct FIdToStringMapping
{
	int32_t                                            Id;                                            // 0x0000 (0x0004) [0x0000000000000002] (CPF_Const)   
	class FName                                        Name;                                          // 0x0004 (0x0008) [0x0000000000008002] (CPF_Const | CPF_Localized)
};

// ScriptStruct Engine.Settings.StringIdToStringMapping
// Size: 0x0010
struct FStringIdToStringMapping
{
	int32_t                                            Id;                                            // 0x0000 (0x0004) [0x0000000000000002] (CPF_Const)   
	class FName                                        Name;                                          // 0x0004 (0x0008) [0x0000000000008002] (CPF_Const | CPF_Localized)
	uint32_t                                           bIsWildcard : 1;                               // 0x000C (0x0004) [0x0000000000000002] [0x00000001] (CPF_Const)
};

// ScriptStruct Engine.Settings.LocalizedStringSettingMetaData
// Size: 0x0030
struct FLocalizedStringSettingMetaData
{
	int32_t                                            Id;                                            // 0x0000 (0x0004) [0x0000000000000002] (CPF_Const)   
	class FName                                        Name;                                          // 0x0004 (0x0008) [0x0000000000000002] (CPF_Const)   
	uint8_t                                          UnknownData00[0x4];                            // 0x000C (0x0004) MISSED OFFSET
	class FString                                      ColumnHeaderText;                              // 0x0010 (0x0010) [0x0000000000408002] (CPF_Const | CPF_Localized | CPF_NeedCtorLink)
	class TArray<struct FStringIdToStringMapping>      ValueMappings;                                 // 0x0020 (0x0010) [0x0000000000400002] (CPF_Const | CPF_NeedCtorLink)
};

// ScriptStruct Engine.Settings.SettingsPropertyPropertyMetaData
// Size: 0x0058 (0x0054 PropertySize + 0x0004 padding to satisfy MinAlignment of 8)
struct FSettingsPropertyPropertyMetaData
{
	int32_t                                            Id;                                            // 0x0000 (0x0004) [0x0000000000000002] (CPF_Const)   
	class FName                                        Name;                                          // 0x0004 (0x0008) [0x0000000000000002] (CPF_Const)   
	uint8_t                                          UnknownData00[0x4];                            // 0x000C (0x0004) MISSED OFFSET
	class FString                                      ColumnHeaderText;                              // 0x0010 (0x0010) [0x0000000000408002] (CPF_Const | CPF_Localized | CPF_NeedCtorLink)
	uint8_t                                            MappingType;                                   // 0x0020 (0x0001) [0x0000000000000002] (CPF_Const)   
	uint8_t                                          UnknownData01[0x7];                            // 0x0021 (0x0007) MISSED OFFSET
	class TArray<struct FIdToStringMapping>            ValueMappings;                                 // 0x0028 (0x0010) [0x0000000000400002] (CPF_Const | CPF_NeedCtorLink)
	class TArray<struct FSettingsData>                 PredefinedValues;                              // 0x0038 (0x0010) [0x0000000000400002] (CPF_Const | CPF_NeedCtorLink)
	float                                              MinVal;                                        // 0x0048 (0x0004) [0x0000000000000002] (CPF_Const)   
	float                                              MaxVal;                                        // 0x004C (0x0004) [0x0000000000000002] (CPF_Const)   
	float                                              RangeIncrement;                                // 0x0050 (0x0004) [0x0000000000000002] (CPF_Const)   
	uint8_t                                          MinAlignmentPadding[0x4];                      // 0x0054 (0x0004) PADDING FOR MINALIGNMENT
};

// ScriptStruct Engine.OnlineGameSearch.OnlineGameSearchParameter
// Size: 0x0010 (0x000E PropertySize + 0x0002 padding to satisfy MinAlignment of 4)
struct FOnlineGameSearchParameter
{
	int32_t                                            EntryId;                                       // 0x0000 (0x0004) [0x0000000000000000]               
	class FName                                        ObjectPropertyName;                            // 0x0004 (0x0008) [0x0000000000000000]               
	uint8_t                                            EntryType;                                     // 0x000C (0x0001) [0x0000000000000000]               
	uint8_t                                            ComparisonType;                                // 0x000D (0x0001) [0x0000000000000000]               
	uint8_t                                          MinAlignmentPadding[0x2];                      // 0x000E (0x0002) PADDING FOR MINALIGNMENT
};

// ScriptStruct Engine.OnlineGameSearch.OnlineGameSearchORClause
// Size: 0x0010
struct FOnlineGameSearchORClause
{
	class TArray<struct FOnlineGameSearchParameter>    OrParams;                                      // 0x0000 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
};

// ScriptStruct Engine.OnlineGameSearch.OnlineGameSearchSortClause
// Size: 0x0010 (0x000E PropertySize + 0x0002 padding to satisfy MinAlignment of 4)
struct FOnlineGameSearchSortClause
{
	int32_t                                            EntryId;                                       // 0x0000 (0x0004) [0x0000000000000000]               
	class FName                                        ObjectPropertyName;                            // 0x0004 (0x0008) [0x0000000000000000]               
	uint8_t                                            EntryType;                                     // 0x000C (0x0001) [0x0000000000000000]               
	uint8_t                                            SortType;                                      // 0x000D (0x0001) [0x0000000000000000]               
	uint8_t                                          MinAlignmentPadding[0x2];                      // 0x000E (0x0002) PADDING FOR MINALIGNMENT
};

// ScriptStruct Engine.OnlineGameSearch.OnlineGameSearchQuery
// Size: 0x0020
struct FOnlineGameSearchQuery
{
	class TArray<struct FOnlineGameSearchORClause>     OrClauses;                                     // 0x0000 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	class TArray<struct FOnlineGameSearchSortClause>   SortClauses;                                   // 0x0010 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
};

// ScriptStruct Engine.OnlineGameSearch.OverrideSkill
// Size: 0x0038
struct FOverrideSkill
{
	int32_t                                            LeaderboardId;                                 // 0x0000 (0x0004) [0x0000000000000000]               
	uint8_t                                          UnknownData00[0x4];                            // 0x0004 (0x0004) MISSED OFFSET
	class TArray<struct FUniqueNetId>                  Players;                                       // 0x0008 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	class TArray<struct FDouble>                       Mus;                                           // 0x0018 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	class TArray<struct FDouble>                       Sigmas;                                        // 0x0028 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
};

// ScriptStruct Engine.OnlineGameSearch.NamedObjectProperty
// Size: 0x0018
struct FNamedObjectProperty
{
	class FName                                        ObjectPropertyName;                            // 0x0000 (0x0008) [0x0000000000000000]               
	class FString                                      ObjectPropertyValue;                           // 0x0008 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
};

// ScriptStruct Engine.OnlineGameSearch.OnlineGameSearchResult
// Size: 0x0010
struct FOnlineGameSearchResult
{
	class UOnlineGameSettings*                         GameSettings;                                  // 0x0000 (0x0008) [0x0000000000000002] (CPF_Const)   
	struct FPointer                                    PlatformData;                                  // 0x0008 (0x0008) [0x0000000000001002] (CPF_Const | CPF_Native)
};

// ScriptStruct Engine.PlayerController.ConnectedPeerInfo
// Size: 0x0050
struct FConnectedPeerInfo
{
	struct FUniqueNetId                                PlayerID;                                      // 0x0000 (0x0048) [0x0000000000400000] (CPF_NeedCtorLink)
	uint8_t                                            NatType;                                       // 0x0048 (0x0001) [0x0000000000000000]               
	uint8_t                                          UnknownData00[0x3];                            // 0x0049 (0x0003) MISSED OFFSET
	uint32_t                                           bLostConnectionToHost : 1;                     // 0x004C (0x0004) [0x0000000000000000] [0x00000001] 
};

// ScriptStruct Engine.PlayerController.ClientAdjustment
// Size: 0x0038 (0x0035 PropertySize + 0x0003 padding to satisfy MinAlignment of 8)
struct FClientAdjustment
{
	float                                              TimeStamp;                                     // 0x0000 (0x0004) [0x0000000000000000]               
	uint8_t                                            newPhysics;                                    // 0x0004 (0x0001) [0x0000000000000000]               
	uint8_t                                          UnknownData00[0x3];                            // 0x0005 (0x0003) MISSED OFFSET
	struct FVector                                     NewLoc;                                        // 0x0008 (0x000C) [0x0000000000000000]               
	struct FVector                                     NewVel;                                        // 0x0014 (0x000C) [0x0000000000000000]               
	class AActor*                                      NewBase;                                       // 0x0020 (0x0008) [0x0000000000000000]               
	struct FVector                                     NewFloor;                                      // 0x0028 (0x000C) [0x0000000000000000]               
	uint8_t                                            bAckGoodMove;                                  // 0x0034 (0x0001) [0x0000000000000000]               
	uint8_t                                          MinAlignmentPadding[0x3];                      // 0x0035 (0x0003) PADDING FOR MINALIGNMENT
};

// ScriptStruct Engine.PlayerReplicationInfo.ClientConnectionStats
// Size: 0x0058
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
// Size: 0x0060
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
	uint8_t                                          UnknownData00[0x4];                            // 0x004C (0x0004) MISSED OFFSET
	class UFont*                                       Font;                                          // 0x0050 (0x0008) [0x0000000000000000]               
	struct FVector2D                                   TextScale;                                     // 0x0058 (0x0008) [0x0000000000000000]               
};

// ScriptStruct Engine.HUD.KismetDrawTextInfo
// Size: 0x0040
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
// Size: 0x0020
struct FConsoleMessage
{
	class FString                                      Text;                                          // 0x0000 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FColor                                      TextColor;                                     // 0x0010 (0x0004) [0x0000000000000000]               
	float                                              MessageLife;                                   // 0x0014 (0x0004) [0x0000000000000000]               
	class APlayerReplicationInfo*                      PRI;                                           // 0x0018 (0x0008) [0x0000000000000000]               
};

// ScriptStruct Engine.PlayerController.InputEntry
// Size: 0x0010 (0x000D PropertySize + 0x0003 padding to satisfy MinAlignment of 4)
struct FInputEntry
{
	uint8_t                                            Type;                                          // 0x0000 (0x0001) [0x0000000000000000]               
	uint8_t                                          UnknownData00[0x3];                            // 0x0001 (0x0003) MISSED OFFSET
	float                                              Value;                                         // 0x0004 (0x0004) [0x0000000000000000]               
	float                                              TimeDelta;                                     // 0x0008 (0x0004) [0x0000000000000000]               
	uint8_t                                            Action;                                        // 0x000C (0x0001) [0x0000000000000000]               
	uint8_t                                          MinAlignmentPadding[0x3];                      // 0x000D (0x0003) PADDING FOR MINALIGNMENT
};

// ScriptStruct Engine.PlayerController.InputMatchRequest
// Size: 0x0050
struct FInputMatchRequest
{
	class TArray<struct FInputEntry>                   Inputs;                                        // 0x0000 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	class AActor*                                      MatchActor;                                    // 0x0010 (0x0008) [0x0000000000000000]               
	class FName                                        MatchFuncName;                                 // 0x0018 (0x0008) [0x0000000000000000]               
	struct FScriptDelegate                             MatchDelegate;                                 // 0x0020 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
	class FName                                        FailedFuncName;                                // 0x0038 (0x0008) [0x0000000000000000]               
	class FName                                        RequestName;                                   // 0x0040 (0x0008) [0x0000000000000000]               
	int32_t                                            MatchIdx;                                      // 0x0048 (0x0004) [0x0000000000002000] (CPF_Transient)
	float                                              LastMatchTime;                                 // 0x004C (0x0004) [0x0000000000002000] (CPF_Transient)
};

// ScriptStruct Engine.GameViewportClient.GamepadInfo
// Size: 0x0008
struct FGamepadInfo
{
	uint8_t                                            InputAPI;                                      // 0x0000 (0x0001) [0x0000000000000000]               
	uint8_t                                          UnknownData00[0x3];                            // 0x0001 (0x0003) MISSED OFFSET
	uint32_t                                           bConnected : 1;                                // 0x0004 (0x0004) [0x0000000000000000] [0x00000001] 
};

// ScriptStruct Engine.GameViewportClient.PerPlayerSplitscreenData
// Size: 0x0010
struct FPerPlayerSplitscreenData
{
	float                                              SizeX;                                         // 0x0000 (0x0004) [0x0000000000000000]               
	float                                              SizeY;                                         // 0x0004 (0x0004) [0x0000000000000000]               
	float                                              OriginX;                                       // 0x0008 (0x0004) [0x0000000000000000]               
	float                                              OriginY;                                       // 0x000C (0x0004) [0x0000000000000000]               
};

// ScriptStruct Engine.GameViewportClient.SplitscreenData
// Size: 0x0010
struct FSplitscreenData
{
	class TArray<struct FPerPlayerSplitscreenData>     PlayerData;                                    // 0x0000 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
};

// ScriptStruct Engine.GameViewportClient.DebugDisplayProperty
// Size: 0x0018 (0x0014 PropertySize + 0x0004 padding to satisfy MinAlignment of 8)
struct FDebugDisplayProperty
{
	class UObject*                                     Obj;                                           // 0x0000 (0x0008) [0x0000000000000000]               
	class FName                                        PropertyName;                                  // 0x0008 (0x0008) [0x0000000000000000]               
	uint32_t                                           bSpecialProperty : 1;                          // 0x0010 (0x0004) [0x0000000000000000] [0x00000001] 
	uint8_t                                          MinAlignmentPadding[0x4];                      // 0x0014 (0x0004) PADDING FOR MINALIGNMENT
};

// ScriptStruct Engine.GameViewportClient.TitleSafeZoneArea
// Size: 0x0010
struct FTitleSafeZoneArea
{
	float                                              MaxPercentX;                                   // 0x0000 (0x0004) [0x0000000000000000]               
	float                                              MaxPercentY;                                   // 0x0004 (0x0004) [0x0000000000000000]               
	float                                              RecommendedPercentX;                           // 0x0008 (0x0004) [0x0000000000000000]               
	float                                              RecommendedPercentY;                           // 0x000C (0x0004) [0x0000000000000000]               
};

// ScriptStruct Engine.GameViewportClient.ShowFlags_Mirror
// Size: 0x0010
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
// Size: 0x0020 (0x001C PropertySize + 0x0004 padding to satisfy MinAlignment of 8)
struct FActorToLookAt
{
	class AActor*                                      Actor;                                         // 0x0000 (0x0008) [0x0000000000000000]               
	float                                              Rating;                                        // 0x0008 (0x0004) [0x0000000000000000]               
	float                                              EnteredTime;                                   // 0x000C (0x0004) [0x0000000000000000]               
	float                                              LastKnownDistance;                             // 0x0010 (0x0004) [0x0000000000000000]               
	float                                              StartTimeBeingLookedAt;                        // 0x0014 (0x0004) [0x0000000000000000]               
	uint32_t                                           CurrentlyBeingLookedAt : 1;                    // 0x0018 (0x0004) [0x0000000000000000] [0x00000001] 
	uint8_t                                          MinAlignmentPadding[0x4];                      // 0x001C (0x0004) PADDING FOR MINALIGNMENT
};

// ScriptStruct Engine.IniLocPatcher.IniLocFileEntry
// Size: 0x0038 (0x0035 PropertySize + 0x0003 padding to satisfy MinAlignment of 8)
struct FIniLocFileEntry
{
	class FString                                      Filename;                                      // 0x0000 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	class FString                                      DLName;                                        // 0x0010 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	class FString                                      HashCode;                                      // 0x0020 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	uint32_t                                           bIsUnicode : 1;                                // 0x0030 (0x0004) [0x0000000000000000] [0x00000001] 
	uint8_t                                            ReadState;                                     // 0x0034 (0x0001) [0x0000000000000000]               
	uint8_t                                          MinAlignmentPadding[0x3];                      // 0x0035 (0x0003) PADDING FOR MINALIGNMENT
};

// ScriptStruct Engine.Input.KeyBind
// Size: 0x0020 (0x001C PropertySize + 0x0004 padding to satisfy MinAlignment of 8)
struct FKeyBind
{
	class FName                                        Name;                                          // 0x0000 (0x0008) [0x0000000000000000]               
	class FString                                      Command;                                       // 0x0008 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	uint32_t                                           Control : 1;                                   // 0x0018 (0x0004) [0x0000000000000000] [0x00000001] 
	uint32_t                                           Shift : 1;                                     // 0x0018 (0x0004) [0x0000000000000000] [0x00000002] 
	uint32_t                                           Alt : 1;                                       // 0x0018 (0x0004) [0x0000000000000000] [0x00000004] 
	uint32_t                                           bIgnoreCtrl : 1;                               // 0x0018 (0x0004) [0x0000000000000000] [0x00000008] 
	uint32_t                                           bIgnoreShift : 1;                              // 0x0018 (0x0004) [0x0000000000000000] [0x00000010] 
	uint32_t                                           bIgnoreAlt : 1;                                // 0x0018 (0x0004) [0x0000000000000000] [0x00000020] 
	uint8_t                                          MinAlignmentPadding[0x4];                      // 0x001C (0x0004) PADDING FOR MINALIGNMENT
};

// ScriptStruct Engine.Input.TouchTracker
// Size: 0x0018
struct FTouchTracker
{
	int32_t                                            Handle;                                        // 0x0000 (0x0004) [0x0000000000000000]               
	int32_t                                            TouchpadIndex;                                 // 0x0004 (0x0004) [0x0000000000000000]               
	struct FVector2D                                   Location;                                      // 0x0008 (0x0008) [0x0000000000000000]               
	uint8_t                                            EventType;                                     // 0x0010 (0x0001) [0x0000000000000000]               
	uint8_t                                          UnknownData00[0x3];                            // 0x0011 (0x0003) MISSED OFFSET
	uint32_t                                           bTrapInput : 1;                                // 0x0014 (0x0004) [0x0000000000000000] [0x00000001] 
};

// ScriptStruct Engine.InstancedStaticMeshComponent.InstancedStaticMeshInstanceData
// Size: 0x0050
struct FInstancedStaticMeshInstanceData
{
	struct FMatrix                                     Transform;                                     // 0x0000 (0x0040) [0x0000000000000000]               
	struct FVector2D                                   LightmapUVBias;                                // 0x0040 (0x0008) [0x0000000000000000]               
	struct FVector2D                                   ShadowmapUVBias;                               // 0x0048 (0x0008) [0x0000000000000000]               
};

// ScriptStruct Engine.InstancedStaticMeshComponent.InstancedStaticMeshMappingInfo
// Size: 0x0020
struct FInstancedStaticMeshMappingInfo
{
	struct FPointer                                    Mapping;                                       // 0x0000 (0x0008) [0x0000000000001000] (CPF_Native)  
	struct FPointer                                    LightMap;                                      // 0x0008 (0x0008) [0x0000000000001000] (CPF_Native)  
	class UTexture2D*                                  LightmapTexture;                               // 0x0010 (0x0008) [0x0000000000000000]               
	class UShadowMap2D*                                ShadowmapTexture;                              // 0x0018 (0x0008) [0x0000000000000000]               
};

// ScriptStruct Engine.StaticMeshActor.PreCombinedStaticMeshActor
// Size: 0x0048
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
// Size: 0x0020
struct AInterpActor_FCheckpointRecord
{
	struct FVector                                     Location;                                      // 0x0000 (0x000C) [0x0000000000000000]               
	struct FRotator                                    Rotation;                                      // 0x000C (0x000C) [0x0000000000000000]               
	uint8_t                                            CollisionType;                                 // 0x0018 (0x0001) [0x0000000000000000]               
	uint8_t                                          UnknownData00[0x3];                            // 0x0019 (0x0003) MISSED OFFSET
	uint32_t                                           bHidden : 1;                                   // 0x001C (0x0004) [0x0000000000000000] [0x00000001] 
	uint32_t                                           bIsShutdown : 1;                               // 0x001C (0x0004) [0x0000000000000000] [0x00000002] 
	uint32_t                                           bNeedsPositionReplication : 1;                 // 0x001C (0x0004) [0x0000000000000000] [0x00000004] 
};

// ScriptStruct Engine.InterpCurveEdSetup.CurveEdEntry
// Size: 0x0038
struct FCurveEdEntry
{
	class UObject*                                     CurveObject;                                   // 0x0000 (0x0008) [0x0000000000000000]               
	struct FColor                                      CurveColor;                                    // 0x0008 (0x0004) [0x0000000000000000]               
	uint8_t                                          UnknownData00[0x4];                            // 0x000C (0x0004) MISSED OFFSET
	class FString                                      CurveName;                                     // 0x0010 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	int32_t                                            bHideCurve;                                    // 0x0020 (0x0004) [0x0000000000000000]               
	int32_t                                            bColorCurve;                                   // 0x0024 (0x0004) [0x0000000000000000]               
	int32_t                                            bFloatingPointColorCurve;                      // 0x0028 (0x0004) [0x0000000000000000]               
	int32_t                                            bClamp;                                        // 0x002C (0x0004) [0x0000000000000000]               
	float                                              ClampLow;                                      // 0x0030 (0x0004) [0x0000000000000000]               
	float                                              ClampHigh;                                     // 0x0034 (0x0004) [0x0000000000000000]               
};

// ScriptStruct Engine.InterpCurveEdSetup.CurveEdTab
// Size: 0x0030
struct FCurveEdTab
{
	class FString                                      TabName;                                       // 0x0000 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	class TArray<struct FCurveEdEntry>                 Curves;                                        // 0x0010 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	float                                              ViewStartInput;                                // 0x0020 (0x0004) [0x0000000000000000]               
	float                                              ViewEndInput;                                  // 0x0024 (0x0004) [0x0000000000000000]               
	float                                              ViewStartOutput;                               // 0x0028 (0x0004) [0x0000000000000000]               
	float                                              ViewEndOutput;                                 // 0x002C (0x0004) [0x0000000000000000]               
};

// ScriptStruct Engine.InterpData.AnimSetBakeAndPruneStatus
// Size: 0x0018 (0x0014 PropertySize + 0x0004 padding to satisfy MinAlignment of 8)
struct FAnimSetBakeAndPruneStatus
{
	class FString                                      AnimSetName;                                   // 0x0000 (0x0010) [0x0000000000420001] (CPF_Edit | CPF_EditConst | CPF_NeedCtorLink)
	uint32_t                                           bReferencedButUnused : 1;                      // 0x0010 (0x0004) [0x0000000000020001] [0x00000001] (CPF_Edit | CPF_EditConst)
	uint32_t                                           bSkipBakeAndPrune : 1;                         // 0x0010 (0x0004) [0x0000000000000001] [0x00000002] (CPF_Edit)
	uint32_t                                           bSkipCooking : 1;                              // 0x0010 (0x0004) [0x0000000000000001] [0x00000004] (CPF_Edit)
	uint8_t                                          MinAlignmentPadding[0x4];                      // 0x0014 (0x0004) PADDING FOR MINALIGNMENT
};

// ScriptStruct Engine.InterpGroup.InterpEdSelKey
// Size: 0x0018
struct FInterpEdSelKey
{
	class UInterpGroup*                                Group;                                         // 0x0000 (0x0008) [0x0000000000000000]               
	class UInterpTrack*                                Track;                                         // 0x0008 (0x0008) [0x0000000000000000]               
	int32_t                                            KeyIndex;                                      // 0x0010 (0x0004) [0x0000000000000000]               
	float                                              UnsnappedPosition;                             // 0x0014 (0x0004) [0x0000000000000000]               
};

// ScriptStruct Engine.InterpGroupCamera.CameraPreviewInfo
// Size: 0x0040
struct FCameraPreviewInfo
{
	class UClass*                                      PawnClass;                                     // 0x0000 (0x0008) [0x0000000000000001] (CPF_Edit)    
	class TArray<class UAnimSet*>                      PreviewAnimSets;                               // 0x0008 (0x0010) [0x0000000000400001] (CPF_Edit | CPF_NeedCtorLink)
	class FName                                        AnimSeqName;                                   // 0x0018 (0x0008) [0x0000000000000001] (CPF_Edit)    
	struct FVector                                     Location;                                      // 0x0020 (0x000C) [0x0000000000020000] (CPF_EditConst)
	struct FRotator                                    Rotation;                                      // 0x002C (0x000C) [0x0000000000020000] (CPF_EditConst)
	class APawn*                                       PawnInst;                                      // 0x0038 (0x0008) [0x0000000000002000] (CPF_Transient)
};

// ScriptStruct Engine.InterpTrack.SubTrackGroup
// Size: 0x0028 (0x0024 PropertySize + 0x0004 padding to satisfy MinAlignment of 8)
struct FSubTrackGroup
{
	class FString                                      GroupName;                                     // 0x0000 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	class TArray<int32_t>                              TrackIndices;                                  // 0x0010 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	uint32_t                                           bIsCollapsed : 1;                              // 0x0020 (0x0004) [0x0000000000000000] [0x00000001] 
	uint32_t                                           bIsSelected : 1;                               // 0x0020 (0x0004) [0x0000000000002000] [0x00000002] (CPF_Transient)
	uint8_t                                          MinAlignmentPadding[0x4];                      // 0x0024 (0x0004) PADDING FOR MINALIGNMENT
};

// ScriptStruct Engine.InterpTrack.SupportedSubTrackInfo
// Size: 0x0020 (0x001C PropertySize + 0x0004 padding to satisfy MinAlignment of 8)
struct FSupportedSubTrackInfo
{
	class UClass*                                      SupportedClass;                                // 0x0000 (0x0008) [0x0000000000000000]               
	class FString                                      SubTrackName;                                  // 0x0008 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	int32_t                                            GroupIndex;                                    // 0x0018 (0x0004) [0x0000000000000000]               
	uint8_t                                          MinAlignmentPadding[0x4];                      // 0x001C (0x0004) PADDING FOR MINALIGNMENT
};

// ScriptStruct Engine.InterpTrackAnimControl.AnimControlTrackKey
// Size: 0x001C
struct FAnimControlTrackKey
{
	float                                              StartTime;                                     // 0x0000 (0x0004) [0x0000000000000000]               
	class FName                                        AnimSeqName;                                   // 0x0004 (0x0008) [0x0000000000000000]               
	float                                              AnimStartOffset;                               // 0x000C (0x0004) [0x0000000000000000]               
	float                                              AnimEndOffset;                                 // 0x0010 (0x0004) [0x0000000000000000]               
	float                                              AnimPlayRate;                                  // 0x0014 (0x0004) [0x0000000000000000]               
	uint32_t                                           bLooping : 1;                                  // 0x0018 (0x0004) [0x0000000000000000] [0x00000001] 
	uint32_t                                           bReverse : 1;                                  // 0x0018 (0x0004) [0x0000000000000000] [0x00000002] 
};

// ScriptStruct Engine.InterpTrackBoolProp.BoolTrackKey
// Size: 0x0008
struct FBoolTrackKey
{
	float                                              Time;                                          // 0x0000 (0x0004) [0x0000000000000000]               
	uint32_t                                           Value : 1;                                     // 0x0004 (0x0004) [0x0000000000000001] [0x00000001] (CPF_Edit)
};

// ScriptStruct Engine.InterpTrackDirector.DirectorTrackCut
// Size: 0x0014
struct FDirectorTrackCut
{
	float                                              Time;                                          // 0x0000 (0x0004) [0x0000000000000000]               
	float                                              TransitionTime;                                // 0x0004 (0x0004) [0x0000000000000000]               
	class FName                                        TargetCamGroup;                                // 0x0008 (0x0008) [0x0000000000000001] (CPF_Edit)    
	int32_t                                            ShotNumber;                                    // 0x0010 (0x0004) [0x0000000000000000]               
};

// ScriptStruct Engine.InterpTrackEvent.EventTrackKey
// Size: 0x000C
struct FEventTrackKey
{
	float                                              Time;                                          // 0x0000 (0x0004) [0x0000000000000000]               
	class FName                                        EventName;                                     // 0x0004 (0x0008) [0x0000000000000001] (CPF_Edit)    
};

// ScriptStruct Engine.InterpTrackFaceFX.FaceFXTrackKey
// Size: 0x0028
struct FFaceFXTrackKey
{
	float                                              StartTime;                                     // 0x0000 (0x0004) [0x0000000000000000]               
	uint8_t                                          UnknownData00[0x4];                            // 0x0004 (0x0004) MISSED OFFSET
	class FString                                      FaceFXGroupName;                               // 0x0008 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	class FString                                      FaceFXSeqName;                                 // 0x0018 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
};

// ScriptStruct Engine.InterpTrackFaceFX.FaceFXSoundCueKey
// Size: 0x0010
struct FFaceFXSoundCueKey
{
	class USoundCue*                                   FaceFXSoundCue;                                // 0x0000 (0x0008) [0x0000000000000002] (CPF_Const)   
	class UAkEvent*                                    FaceFXAkEvent;                                 // 0x0008 (0x0008) [0x0000000000000002] (CPF_Const)   
};

// ScriptStruct Engine.InterpTrackHeadTracking.HeadTrackingKey
// Size: 0x0008 (0x0005 PropertySize + 0x0003 padding to satisfy MinAlignment of 4)
struct FHeadTrackingKey
{
	float                                              Time;                                          // 0x0000 (0x0004) [0x0000000000000000]               
	uint8_t                                            Action;                                        // 0x0004 (0x0001) [0x0000000000000001] (CPF_Edit)    
	uint8_t                                          MinAlignmentPadding[0x3];                      // 0x0005 (0x0003) PADDING FOR MINALIGNMENT
};

// ScriptStruct Engine.InterpTrackInstFloatMaterialParam.FloatMaterialParamMICData
// Size: 0x0020
struct FFloatMaterialParamMICData
{
	class TArray<class UMaterialInstanceConstant*>     MICs;                                          // 0x0000 (0x0010) [0x0000000000400002] (CPF_Const | CPF_NeedCtorLink)
	class TArray<float>                                MICResetFloats;                                // 0x0010 (0x0010) [0x0000000000400002] (CPF_Const | CPF_NeedCtorLink)
};

// ScriptStruct Engine.InterpTrackToggle.ToggleTrackKey
// Size: 0x0008 (0x0005 PropertySize + 0x0003 padding to satisfy MinAlignment of 4)
struct FToggleTrackKey
{
	float                                              Time;                                          // 0x0000 (0x0004) [0x0000000000000000]               
	uint8_t                                            ToggleAction;                                  // 0x0004 (0x0001) [0x0000000000000001] (CPF_Edit)    
	uint8_t                                          MinAlignmentPadding[0x3];                      // 0x0005 (0x0003) PADDING FOR MINALIGNMENT
};

// ScriptStruct Engine.InterpTrackInstVectorMaterialParam.VectorMaterialParamMICData
// Size: 0x0020
struct FVectorMaterialParamMICData
{
	class TArray<class UMaterialInstanceConstant*>     MICs;                                          // 0x0000 (0x0010) [0x0000000000400002] (CPF_Const | CPF_NeedCtorLink)
	class TArray<struct FVector>                       MICResetVectors;                               // 0x0010 (0x0010) [0x0000000000400002] (CPF_Const | CPF_NeedCtorLink)
};

// ScriptStruct Engine.InterpTrackVisibility.VisibilityTrackKey
// Size: 0x0008 (0x0006 PropertySize + 0x0002 padding to satisfy MinAlignment of 4)
struct FVisibilityTrackKey
{
	float                                              Time;                                          // 0x0000 (0x0004) [0x0000000000000000]               
	uint8_t                                            Action;                                        // 0x0004 (0x0001) [0x0000000000000001] (CPF_Edit)    
	uint8_t                                            ActiveCondition;                               // 0x0005 (0x0001) [0x0000000000000000]               
	uint8_t                                          MinAlignmentPadding[0x2];                      // 0x0006 (0x0002) PADDING FOR MINALIGNMENT
};

// ScriptStruct Engine.InterpTrackMove.InterpLookupPoint
// Size: 0x000C
struct FInterpLookupPoint
{
	class FName                                        GroupName;                                     // 0x0000 (0x0008) [0x0000000000000000]               
	float                                              Time;                                          // 0x0008 (0x0004) [0x0000000000000000]               
};

// ScriptStruct Engine.InterpTrackMove.InterpLookupTrack
// Size: 0x0010
struct FInterpLookupTrack
{
	class TArray<struct FInterpLookupPoint>            Points;                                        // 0x0000 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
};

// ScriptStruct Engine.InterpTrackNotify.NotifyTrackKey
// Size: 0x0010
struct FNotifyTrackKey
{
	float                                              Time;                                          // 0x0000 (0x0004) [0x0000000000000000]               
	uint8_t                                          UnknownData00[0x4];                            // 0x0004 (0x0004) MISSED OFFSET
	class UAnimNotify*                                 Notify;                                        // 0x0008 (0x0008) [0x0000000000000000]               
};

// ScriptStruct Engine.InterpTrackParticleReplay.ParticleReplayTrackKey
// Size: 0x000C
struct FParticleReplayTrackKey
{
	float                                              Time;                                          // 0x0000 (0x0004) [0x0000000000000000]               
	float                                              Duration;                                      // 0x0004 (0x0004) [0x0000000000000001] (CPF_Edit)    
	int32_t                                            ClipIDNumber;                                  // 0x0008 (0x0004) [0x0000000000000001] (CPF_Edit)    
};

// ScriptStruct Engine.InterpTrackSound.SoundTrackKey
// Size: 0x0018
struct FSoundTrackKey
{
	float                                              Time;                                          // 0x0000 (0x0004) [0x0000000000000000]               
	float                                              Volume;                                        // 0x0004 (0x0004) [0x0000000000000000]               
	float                                              Pitch;                                         // 0x0008 (0x0004) [0x0000000000000000]               
	uint8_t                                          UnknownData00[0x4];                            // 0x000C (0x0004) MISSED OFFSET
	class USoundCue*                                   Sound;                                         // 0x0010 (0x0008) [0x0000000000000001] (CPF_Edit)    
};

// ScriptStruct Engine.LandscapeProxy.LandscapeLayerStruct
// Size: 0x0030
struct FLandscapeLayerStruct
{
	class ULandscapeLayerInfoObject*                   LayerInfoObj;                                  // 0x0000 (0x0008) [0x0000000000000000]               
	class UMaterialInstanceConstant*                   ThumbnailMIC;                                  // 0x0008 (0x0008) [0x0000000800000000] (CPF_EditorOnly)
	class ALandscapeProxy*                             Owner;                                         // 0x0010 (0x0008) [0x0000000800000000] (CPF_EditorOnly)
	int32_t                                            DebugColorChannel;                             // 0x0018 (0x0004) [0x0000000800002000] (CPF_Transient | CPF_EditorOnly)
	uint32_t                                           bSelected : 1;                                 // 0x001C (0x0004) [0x0000000800002000] [0x00000001] (CPF_Transient | CPF_EditorOnly)
	class FString                                      SourceFilePath;                                // 0x0020 (0x0010) [0x0000000800400000] (CPF_NeedCtorLink | CPF_EditorOnly)
};

// ScriptStruct Engine.LandscapeProxy.LandscapeWeightmapUsage
// Size: 0x0020
struct FLandscapeWeightmapUsage
{
	class ULandscapeComponent*                         ChannelUsage[4];                               // 0x0000 (0x0020) [0x0000000004080008] (CPF_ExportObject | CPF_Component | CPF_EditInline)
};

// ScriptStruct Engine.Landscape.LandscapeLayerInfo
// Size: 0x0038
struct FLandscapeLayerInfo
{
	class FName                                        LayerName;                                     // 0x0000 (0x0008) [0x0000000000000001] (CPF_Edit)    
	float                                              Hardness;                                      // 0x0008 (0x0004) [0x0000000000000001] (CPF_Edit)    
	uint32_t                                           bNoWeightBlend : 1;                            // 0x000C (0x0004) [0x0000000800000000] [0x00000001] (CPF_EditorOnly)
	class UPhysicalMaterial*                           PhysMaterial;                                  // 0x0010 (0x0008) [0x0000000000000001] (CPF_Edit)    
	class UMaterialInstanceConstant*                   ThumbnailMIC;                                  // 0x0018 (0x0008) [0x0000000800000000] (CPF_EditorOnly)
	uint32_t                                           bSelected : 1;                                 // 0x0020 (0x0004) [0x0000000800002000] [0x00000001] (CPF_Transient | CPF_EditorOnly)
	int32_t                                            DebugColorChannel;                             // 0x0024 (0x0004) [0x0000000800002000] (CPF_Transient | CPF_EditorOnly)
	class FString                                      LayerSourceFile;                               // 0x0028 (0x0010) [0x0000000800402000] (CPF_Transient | CPF_NeedCtorLink | CPF_EditorOnly)
};

// ScriptStruct Engine.LandscapeComponent.WeightmapLayerAllocationInfo
// Size: 0x000C (0x000A PropertySize + 0x0002 padding to satisfy MinAlignment of 4)
struct FWeightmapLayerAllocationInfo
{
	class FName                                        LayerName;                                     // 0x0000 (0x0008) [0x0000000000000000]               
	uint8_t                                            WeightmapTextureIndex;                         // 0x0008 (0x0001) [0x0000000000000000]               
	uint8_t                                            WeightmapTextureChannel;                       // 0x0009 (0x0001) [0x0000000000000000]               
	uint8_t                                          MinAlignmentPadding[0x2];                      // 0x000A (0x0002) PADDING FOR MINALIGNMENT
};

// ScriptStruct Engine.LandscapeGizmoActiveActor.GizmoSelectData
// Size: 0x0058
struct FGizmoSelectData
{
	float                                              Ratio;                                         // 0x0000 (0x0004) [0x0000000800000000] (CPF_EditorOnly)
	float                                              HeightData;                                    // 0x0004 (0x0004) [0x0000000800000000] (CPF_EditorOnly)
	uint8_t                                          UnknownData00[0x50];                          // 0x0008 (0x0050) MISSED OFFSET
};

// ScriptStruct Engine.LandscapeInfo.LandscapeAddCollision
// Size: 0x0030
struct FLandscapeAddCollision
{
	struct FVector                                     Corners[4];                                    // 0x0000 (0x0030) [0x0000000800000000] (CPF_EditorOnly)
};

// ScriptStruct Engine.MaterialInstance.FontParameterValue
// Size: 0x0028 (0x0024 PropertySize + 0x0004 padding to satisfy MinAlignment of 8)
struct FFontParameterValue
{
	class FName                                        ParameterName;                                 // 0x0000 (0x0008) [0x0000000000000001] (CPF_Edit)    
	class UFont*                                       FontValue;                                     // 0x0008 (0x0008) [0x0000000000000001] (CPF_Edit)    
	int32_t                                            FontPage;                                      // 0x0010 (0x0004) [0x0000000000000001] (CPF_Edit)    
	struct FGuid                                       ExpressionGUID;                                // 0x0014 (0x0010) [0x0000000000000000]               
	uint8_t                                          MinAlignmentPadding[0x4];                      // 0x0024 (0x0004) PADDING FOR MINALIGNMENT
};

// ScriptStruct Engine.MaterialInstance.ScalarParameterValue
// Size: 0x001C
struct FScalarParameterValue
{
	class FName                                        ParameterName;                                 // 0x0000 (0x0008) [0x0000000000000001] (CPF_Edit)    
	float                                              ParameterValue;                                // 0x0008 (0x0004) [0x0000000000000001] (CPF_Edit)    
	struct FGuid                                       ExpressionGUID;                                // 0x000C (0x0010) [0x0000000000000000]               
};

// ScriptStruct Engine.MaterialInstance.TextureParameterValue
// Size: 0x0020
struct FTextureParameterValue
{
	class FName                                        ParameterName;                                 // 0x0000 (0x0008) [0x0000000000000001] (CPF_Edit)    
	class UTexture*                                    ParameterValue;                                // 0x0008 (0x0008) [0x0000000000000001] (CPF_Edit)    
	struct FGuid                                       ExpressionGUID;                                // 0x0010 (0x0010) [0x0000000000000000]               
};

// ScriptStruct Engine.MaterialInstance.VectorParameterValue
// Size: 0x0028
struct FVectorParameterValue
{
	class FName                                        ParameterName;                                 // 0x0000 (0x0008) [0x0000000000000001] (CPF_Edit)    
	struct FLinearColor                                ParameterValue;                                // 0x0008 (0x0010) [0x0000000000000001] (CPF_Edit)    
	struct FGuid                                       ExpressionGUID;                                // 0x0018 (0x0010) [0x0000000000000000]               
};

// ScriptStruct Engine.LensFlare.LensFlareElement
// Size: 0x01C8
struct FLensFlareElement
{
	class FName                                        ElementName;                                   // 0x0000 (0x0008) [0x0000000000000001] (CPF_Edit)    
	float                                              RayDistance;                                   // 0x0008 (0x0004) [0x0000000000000001] (CPF_Edit)    
	uint32_t                                           bIsEnabled : 1;                                // 0x000C (0x0004) [0x0000000000000001] [0x00000001] (CPF_Edit)
	uint32_t                                           bUseSourceDistance : 1;                        // 0x000C (0x0004) [0x0000000000000001] [0x00000002] (CPF_Edit)
	uint32_t                                           bNormalizeRadialDistance : 1;                  // 0x000C (0x0004) [0x0000000000000001] [0x00000004] (CPF_Edit)
	uint32_t                                           bModulateColorBySource : 1;                    // 0x000C (0x0004) [0x0000000000000001] [0x00000008] (CPF_Edit)
	struct FVector                                     Size;                                          // 0x0010 (0x000C) [0x0000000000000001] (CPF_Edit)    
	uint8_t                                          UnknownData00[0x4];                            // 0x001C (0x0004) MISSED OFFSET
	class TArray<class UMaterialInterface*>            LFMaterials;                                   // 0x0020 (0x0010) [0x0000000000400001] (CPF_Edit | CPF_NeedCtorLink)
	struct FRawDistributionFloat                       LFMaterialIndex;                               // 0x0030 (0x0028) [0x0000000000480001] (CPF_Edit | CPF_Component | CPF_NeedCtorLink)
	struct FRawDistributionFloat                       Scaling;                                       // 0x0058 (0x0028) [0x0000000000480001] (CPF_Edit | CPF_Component | CPF_NeedCtorLink)
	struct FRawDistributionVector                      AxisScaling;                                   // 0x0080 (0x0028) [0x0000000000480001] (CPF_Edit | CPF_Component | CPF_NeedCtorLink)
	struct FRawDistributionFloat                       Rotation;                                      // 0x00A8 (0x0028) [0x0000000000480001] (CPF_Edit | CPF_Component | CPF_NeedCtorLink)
	uint32_t                                           bOrientTowardsSource : 1;                      // 0x00D0 (0x0004) [0x0000000000000001] [0x00000001] (CPF_Edit)
	uint8_t                                          UnknownData01[0x4];                            // 0x00D4 (0x0004) MISSED OFFSET
	struct FRawDistributionVector                      Color;                                         // 0x00D8 (0x0028) [0x0000000000480001] (CPF_Edit | CPF_Component | CPF_NeedCtorLink)
	struct FRawDistributionFloat                       Alpha;                                         // 0x0100 (0x0028) [0x0000000000480001] (CPF_Edit | CPF_Component | CPF_NeedCtorLink)
	struct FRawDistributionVector                      Offset;                                        // 0x0128 (0x0028) [0x0000000000480001] (CPF_Edit | CPF_Component | CPF_NeedCtorLink)
	struct FRawDistributionVector                      DistMap_Scale;                                 // 0x0150 (0x0028) [0x0000000000480001] (CPF_Edit | CPF_Component | CPF_NeedCtorLink)
	struct FRawDistributionVector                      DistMap_Color;                                 // 0x0178 (0x0028) [0x0000000000480001] (CPF_Edit | CPF_Component | CPF_NeedCtorLink)
	struct FRawDistributionFloat                       DistMap_Alpha;                                 // 0x01A0 (0x0028) [0x0000000000480001] (CPF_Edit | CPF_Component | CPF_NeedCtorLink)
};

// ScriptStruct Engine.LensFlare.LensFlareElementCurvePair
// Size: 0x0018
struct FLensFlareElementCurvePair
{
	class FString                                      CurveName;                                     // 0x0000 (0x0010) [0x0000000000500000] (CPF_NeedCtorLink)
	class UObject*                                     CurveObject;                                   // 0x0010 (0x0008) [0x0000000000100000]               
};

// ScriptStruct Engine.LensFlareComponent.LensFlareElementMaterials
// Size: 0x0010
struct FLensFlareElementMaterials
{
	class TArray<class UMaterialInterface*>            ElementMaterials;                              // 0x0000 (0x0010) [0x0000000000400001] (CPF_Edit | CPF_NeedCtorLink)
};

// ScriptStruct Engine.LensFlareComponent.LensFlareElementInstance
// Size: 0x0000
struct FLensFlareElementInstance
{
};

// ScriptStruct Engine.LevelGridVolume.LevelGridCellCoordinate
// Size: 0x000C
struct FLevelGridCellCoordinate
{
	int32_t                                            X;                                             // 0x0000 (0x0004) [0x0000000000000000]               
	int32_t                                            Y;                                             // 0x0004 (0x0004) [0x0000000000000000]               
	int32_t                                            Z;                                             // 0x0008 (0x0004) [0x0000000000000000]               
};

// ScriptStruct Engine.LevelStreamingVolume.CheckpointRecord
// Size: 0x0004
struct ALevelStreamingVolume_FCheckpointRecord
{
	uint32_t                                           bDisabled : 1;                                 // 0x0000 (0x0004) [0x0000000000000000] [0x00000001] 
};

// ScriptStruct Engine.LinkedAccountDetails.LinkedAccountData
// Size: 0x00A8
struct FLinkedAccountData
{
	uint32_t                                           bSuccess : 1;                                  // 0x0000 (0x0004) [0x0000000000000000] [0x00000001] 
	uint8_t                                          UnknownData00[0x4];                            // 0x0004 (0x0004) MISSED OFFSET
	struct FUniqueNetId                                OriginalId;                                    // 0x0008 (0x0048) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FUniqueNetId                                LinkedId;                                      // 0x0050 (0x0048) [0x0000000000400000] (CPF_NeedCtorLink)
	class FString                                      LinkedDisplayName;                             // 0x0098 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
};

// ScriptStruct Engine.OnlineAuthInterface.BaseAuthSession
// Size: 0x0060
struct FBaseAuthSession
{
	struct FIpAddr                                     EndPointIP;                                    // 0x0000 (0x0014) [0x0000000000000002] (CPF_Const)   
	int32_t                                            EndPointPort;                                  // 0x0014 (0x0004) [0x0000000000000002] (CPF_Const)   
	struct FUniqueNetId                                EndPointUID;                                   // 0x0018 (0x0048) [0x0000000000400002] (CPF_Const | CPF_NeedCtorLink)
};

// ScriptStruct Engine.LocalPlayer.PostProcessSettingsOverride
// Size: 0x0198
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
// Size: 0x0178
struct FCurrentPostProcessVolumeInfo
{
	struct FPostProcessSettings                        LastSettings;                                  // 0x0000 (0x0168) [0x0000000000400000] (CPF_NeedCtorLink)
	class APostProcessVolume*                          LastVolumeUsed;                                // 0x0168 (0x0008) [0x0000000000000000]               
	float                                              BlendStartTime;                                // 0x0170 (0x0004) [0x0000000000000000]               
	float                                              LastBlendTime;                                 // 0x0174 (0x0004) [0x0000000000000000]               
};

// ScriptStruct Engine.LocalPlayer.SynchronizedActorVisibilityHistory
// Size: 0x0010
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
	uint8_t                                          UnknownData00[0x3];                            // 0x0061 (0x0003) MISSED OFFSET
	int32_t                                            AuthTicketUID;                                 // 0x0064 (0x0004) [0x0000000000000002] (CPF_Const)   
};

// ScriptStruct Engine.OnlineAuthInterface.LocalAuthSession
// 0x0004 (0x0060 - 0x0064)
struct FLocalAuthSession : FBaseAuthSession
{
	int32_t                                            SessionUID;                                    // 0x0060 (0x0004) [0x0000000000000002] (CPF_Const)   
	uint8_t                                          MinAlignmentPadding[0x4];                      // 0x0064 (0x0004) PADDING FOR MINALIGNMENT
};

// ScriptStruct Engine.MaterialExpression.ExpressionOutput
// Size: 0x0028 (0x0024 PropertySize + 0x0004 padding to satisfy MinAlignment of 8)
struct FExpressionOutput
{
	class FString                                      OutputName;                                    // 0x0000 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	int32_t                                            Mask;                                          // 0x0010 (0x0004) [0x0000000000000000]               
	int32_t                                            MaskR;                                         // 0x0014 (0x0004) [0x0000000000000000]               
	int32_t                                            MaskG;                                         // 0x0018 (0x0004) [0x0000000000000000]               
	int32_t                                            MaskB;                                         // 0x001C (0x0004) [0x0000000000000000]               
	int32_t                                            MaskA;                                         // 0x0020 (0x0004) [0x0000000000000000]               
	uint8_t                                          MinAlignmentPadding[0x4];                      // 0x0024 (0x0004) PADDING FOR MINALIGNMENT
};

// ScriptStruct Engine.MaterialExpression.ExpressionInput
// Size: 0x0038
struct FExpressionInput
{
	class UMaterialExpression*                         Expression;                                    // 0x0000 (0x0008) [0x0000000000000000]               
	int32_t                                            OutputIndex;                                   // 0x0008 (0x0004) [0x0000000000000000]               
	uint8_t                                          UnknownData00[0x4];                            // 0x000C (0x0004) MISSED OFFSET
	class FString                                      InputName;                                     // 0x0010 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	int32_t                                            Mask;                                          // 0x0020 (0x0004) [0x0000000000000000]               
	int32_t                                            MaskR;                                         // 0x0024 (0x0004) [0x0000000000000000]               
	int32_t                                            MaskG;                                         // 0x0028 (0x0004) [0x0000000000000000]               
	int32_t                                            MaskB;                                         // 0x002C (0x0004) [0x0000000000000000]               
	int32_t                                            MaskA;                                         // 0x0030 (0x0004) [0x0000000000000000]               
	int32_t                                            GCC64_Padding;                                 // 0x0034 (0x0004) [0x0000000000000000]               
};

// ScriptStruct Engine.MaterialExpressionCustom.CustomInput
// Size: 0x0048
struct FCustomInput
{
	class FString                                      InputName;                                     // 0x0000 (0x0010) [0x0000000000400001] (CPF_Edit | CPF_NeedCtorLink)
	struct FExpressionInput                            Input;                                         // 0x0010 (0x0038) [0x0000020000400000] (CPF_NeedCtorLink | CPF_EditHide)
};

// ScriptStruct Engine.MaterialExpressionLandscapeLayerBlend.LayerBlendInput
// Size: 0x0090
struct FLayerBlendInput
{
	class FName                                        LayerName;                                     // 0x0000 (0x0008) [0x0000000000000001] (CPF_Edit)    
	uint8_t                                            BlendType;                                     // 0x0008 (0x0001) [0x0000000000000001] (CPF_Edit)    
	uint8_t                                          UnknownData00[0x7];                            // 0x0009 (0x0007) MISSED OFFSET
	struct FExpressionInput                            LayerInput;                                    // 0x0010 (0x0038) [0x0000020000400000] (CPF_NeedCtorLink | CPF_EditHide)
	struct FExpressionInput                            HeightInput;                                   // 0x0048 (0x0038) [0x0000020000400000] (CPF_NeedCtorLink | CPF_EditHide)
	float                                              PreviewWeight;                                 // 0x0080 (0x0004) [0x0000000000000001] (CPF_Edit)    
	uint8_t                                          UnknownData01[0x4];                            // 0x0084 (0x0004) MISSED OFFSET
	struct FPointer                                    InstanceOverride;                              // 0x0088 (0x0008) [0x0000000000003002] (CPF_Const | CPF_Native | CPF_Transient)
};

// ScriptStruct Engine.MaterialExpressionMaterialFunctionCall.FunctionExpressionInput
// Size: 0x0050
struct FFunctionExpressionInput
{
	class UMaterialExpressionFunctionInput*            ExpressionInput;                               // 0x0000 (0x0008) [0x0000000000002000] (CPF_Transient)
	struct FGuid                                       ExpressionInputId;                             // 0x0008 (0x0010) [0x0000000000000000]               
	struct FExpressionInput                            Input;                                         // 0x0018 (0x0038) [0x0000000000400000] (CPF_NeedCtorLink)
};

// ScriptStruct Engine.MaterialExpressionMaterialFunctionCall.FunctionExpressionOutput
// Size: 0x0040
struct FFunctionExpressionOutput
{
	class UMaterialExpressionFunctionOutput*           ExpressionOutput;                              // 0x0000 (0x0008) [0x0000000000002000] (CPF_Transient)
	struct FGuid                                       ExpressionOutputId;                            // 0x0008 (0x0010) [0x0000000000000000]               
	struct FExpressionOutput                           Output;                                        // 0x0018 (0x0028) [0x0000000000400000] (CPF_NeedCtorLink)
};

// ScriptStruct Engine.MaterialInstanceTimeVarying.ParameterValueOverTime
// Size: 0x0030
struct FParameterValueOverTime
{
	struct FGuid                                       ExpressionGUID;                                // 0x0000 (0x0010) [0x0000000000000000]               
	float                                              StartTime;                                     // 0x0010 (0x0004) [0x0000000000000000]               
	class FName                                        ParameterName;                                 // 0x0014 (0x0008) [0x0000000000000001] (CPF_Edit)    
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
	uint8_t                                          MinAlignmentPadding[0x4];                      // 0x003C (0x0004) PADDING FOR MINALIGNMENT
};

// ScriptStruct Engine.MaterialInstanceTimeVarying.ScalarParameterValueOverTime
// 0x0020 (0x0030 - 0x0050)
struct FScalarParameterValueOverTime : FParameterValueOverTime
{
	float                                              ParameterValue;                                // 0x0030 (0x0004) [0x0000000000000001] (CPF_Edit)    
	uint8_t                                          UnknownData00[0x4];                            // 0x0034 (0x0004) MISSED OFFSET
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
// Size: 0x0050
struct FPurchaseInfo
{
	class FString                                      Identifier;                                    // 0x0000 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	class FString                                      DisplayName;                                   // 0x0010 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	class FString                                      DisplayDescription;                            // 0x0020 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	class FString                                      DisplayPrice;                                  // 0x0030 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	class FString                                      CurrencyType;                                  // 0x0040 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
};

// ScriptStruct Engine.MorphNodeWeightBase.MorphNodeConn
// Size: 0x0020 (0x001C PropertySize + 0x0004 padding to satisfy MinAlignment of 8)
struct FMorphNodeConn
{
	class TArray<class UMorphNodeBase*>                ChildNodes;                                    // 0x0000 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	class FName                                        ConnName;                                      // 0x0010 (0x0008) [0x0000000000000000]               
	int32_t                                            DrawY;                                         // 0x0018 (0x0004) [0x0000000000000000]               
	uint8_t                                          MinAlignmentPadding[0x4];                      // 0x001C (0x0004) PADDING FOR MINALIGNMENT
};

// ScriptStruct Engine.MorphNodeWeightByBoneAngle.BoneAngleMorph
// Size: 0x0008
struct FBoneAngleMorph
{
	float                                              Angle;                                         // 0x0000 (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              TargetWeight;                                  // 0x0004 (0x0004) [0x0000000000000001] (CPF_Edit)    
};

// ScriptStruct Engine.NavigationHandle.PolySegmentSpan
// Size: 0x0020
struct FPolySegmentSpan
{
	struct FPointer                                    Poly;                                          // 0x0000 (0x0008) [0x0000000000001000] (CPF_Native)  
	struct FVector                                     P1;                                            // 0x0008 (0x000C) [0x0000000000000000]               
	struct FVector                                     P2;                                            // 0x0014 (0x000C) [0x0000000000000000]               
};

// ScriptStruct Engine.NavigationHandle.NavMeshPathParams
// Size: 0x0038 (0x0034 PropertySize + 0x0004 padding to satisfy MinAlignment of 8)
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
	uint8_t                                          MinAlignmentPadding[0x4];                      // 0x0034 (0x0004) PADDING FOR MINALIGNMENT
};

// ScriptStruct Engine.NavigationHandle.EdgePointer
// Size: 0x0008
struct FEdgePointer
{
	struct FPointer                                    Dummy;                                         // 0x0000 (0x0008) [0x0000000000001002] (CPF_Const | CPF_Native)
};

// ScriptStruct Engine.NavigationHandle.PathStore
// Size: 0x0010
struct FPathStore
{
	class TArray<struct FEdgePointer>                  EdgeList;                                      // 0x0000 (0x0010) [0x0000000000001000] (CPF_Native)  
};

// ScriptStruct Engine.NavMeshPathGoalEvaluator.BiasedGoalActor
// Size: 0x0010 (0x000C PropertySize + 0x0004 padding to satisfy MinAlignment of 8)
struct FBiasedGoalActor
{
	class AActor*                                      Goal;                                          // 0x0000 (0x0008) [0x0000000000000000]               
	int32_t                                            ExtraCost;                                     // 0x0008 (0x0004) [0x0000000000000000]               
	uint8_t                                          MinAlignmentPadding[0x4];                      // 0x000C (0x0004) PADDING FOR MINALIGNMENT
};

// ScriptStruct Engine.NavMeshObstacle.CheckpointRecord
// Size: 0x0004
struct ANavMeshObstacle_FCheckpointRecord
{
	uint32_t                                           bEnabled : 1;                                  // 0x0000 (0x0004) [0x0000000000000000] [0x00000001] 
};

// ScriptStruct Engine.OnlineLobbySettings.LobbyMetaData
// Size: 0x0020
struct FLobbyMetaData
{
	class FString                                      Key;                                           // 0x0000 (0x0010) [0x0000000000500000] (CPF_NeedCtorLink)
	class FString                                      Value;                                         // 0x0010 (0x0010) [0x0000000000500000] (CPF_NeedCtorLink)
};

// ScriptStruct Engine.OnlineLobbySettings.BasicLobbyInfo
// Size: 0x0020
struct FBasicLobbyInfo
{
	struct FUniqueLobbyId                              LobbyUID;                                      // 0x0000 (0x0010) [0x0000000000000000]               
	class TArray<struct FLobbyMetaData>                LobbySettings;                                 // 0x0010 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
};

// ScriptStruct Engine.OnlineLobbySettings.LobbyMember
// Size: 0x0068
struct FLobbyMember
{
	struct FUniqueNetId                                PlayerUID;                                     // 0x0000 (0x0048) [0x0000000000400000] (CPF_NeedCtorLink)
	class TArray<struct FLobbyMetaData>                PlayerSettings;                                // 0x0048 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	class FString                                      OnlineName;                                    // 0x0058 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
};

// ScriptStruct Engine.OnlineLobbySettings.ActiveLobbyInfo
// 0x0010 (0x0020 - 0x0030)
struct FActiveLobbyInfo : FBasicLobbyInfo
{
	class TArray<struct FLobbyMember>                  Members;                                       // 0x0020 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
};

// ScriptStruct Engine.OnlineLobbySettings.LobbyFilter
// Size: 0x0028
struct FLobbyFilter
{
	class FString                                      Key;                                           // 0x0000 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	class FString                                      Value;                                         // 0x0010 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	uint8_t                                            Operator;                                      // 0x0020 (0x0001) [0x0000000000000000]               
	uint8_t                                          UnknownData00[0x3];                            // 0x0021 (0x0003) MISSED OFFSET
	uint32_t                                           bNumeric : 1;                                  // 0x0024 (0x0004) [0x0000000000000000] [0x00000001] 
};

// ScriptStruct Engine.OnlineLobbySettings.LobbySortFilter
// Size: 0x0018 (0x0014 PropertySize + 0x0004 padding to satisfy MinAlignment of 8)
struct FLobbySortFilter
{
	class FString                                      Key;                                           // 0x0000 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	int32_t                                            TargetValue;                                   // 0x0010 (0x0004) [0x0000000000000000]               
	uint8_t                                          MinAlignmentPadding[0x4];                      // 0x0014 (0x0004) PADDING FOR MINALIGNMENT
};

// ScriptStruct Engine.OnlineMatchmakingStats.MMStats_Timer
// Size: 0x0010
struct FMMStats_Timer
{
	uint32_t                                           bInProgress : 1;                               // 0x0000 (0x0004) [0x0000000000000000] [0x00000001] 
	uint8_t                                          UnknownData00[0x4];                            // 0x0004 (0x0004) MISSED OFFSET
	struct FDouble                                     MSecs;                                         // 0x0008 (0x0008) [0x0000000000000000]               
};

// ScriptStruct Engine.OnlinePlayerStorage.OnlineProfileSetting
// Size: 0x0028
struct FOnlineProfileSetting
{
	uint8_t                                            Owner;                                         // 0x0000 (0x0001) [0x0000000000000000]               
	uint8_t                                          UnknownData00[0x7];                            // 0x0001 (0x0007) MISSED OFFSET
	struct FSettingsProperty                           ProfileSetting;                                // 0x0008 (0x0020) [0x0000000000000000]               
};

// ScriptStruct Engine.OnlineRecentPlayersList.RecentParty
// Size: 0x0058
struct FRecentParty
{
	struct FUniqueNetId                                PartyLeader;                                   // 0x0000 (0x0048) [0x0000000000400000] (CPF_NeedCtorLink)
	class TArray<struct FUniqueNetId>                  PartyMembers;                                  // 0x0048 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
};

// ScriptStruct Engine.OnlineRecentPlayersList.CurrentPlayerMet
// Size: 0x0050
struct FCurrentPlayerMet
{
	int32_t                                            TeamNum;                                       // 0x0000 (0x0004) [0x0000000000000000]               
	int32_t                                            Skill;                                         // 0x0004 (0x0004) [0x0000000000000000]               
	struct FUniqueNetId                                NetId;                                         // 0x0008 (0x0048) [0x0000000000400000] (CPF_NeedCtorLink)
};

// ScriptStruct Engine.OnlineStatsRead.OnlineStatsColumn
// Size: 0x0018
struct FOnlineStatsColumn
{
	int32_t                                            ColumnNo;                                      // 0x0000 (0x0004) [0x0000000000000000]               
	uint8_t                                          UnknownData00[0x4];                            // 0x0004 (0x0004) MISSED OFFSET
	struct FSettingsData                               StatValue;                                     // 0x0008 (0x0010) [0x0000000000000000]               
};

// ScriptStruct Engine.OnlineStatsRead.OnlineStatsRow
// Size: 0x0088
struct FOnlineStatsRow
{
	struct FUniqueNetId                                PlayerID;                                      // 0x0000 (0x0048) [0x0000000000400002] (CPF_Const | CPF_NeedCtorLink)
	struct FSettingsData                               Rank;                                          // 0x0048 (0x0010) [0x0000000000000002] (CPF_Const)   
	class FString                                      NickName;                                      // 0x0058 (0x0010) [0x0000000000400002] (CPF_Const | CPF_NeedCtorLink)
	class TArray<struct FOnlineStatsColumn>            Columns;                                       // 0x0068 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	class TArray<struct FSettingsData>                 StatValues;                                    // 0x0078 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
};

// ScriptStruct Engine.OnlineStatsRead.ColumnMetaData
// Size: 0x0028
struct FColumnMetaData
{
	int32_t                                            Id;                                            // 0x0000 (0x0004) [0x0000000000000002] (CPF_Const)   
	uint8_t                                          UnknownData00[0x4];                            // 0x0004 (0x0004) MISSED OFFSET
	class FString                                      Name;                                          // 0x0008 (0x0010) [0x0000000000400002] (CPF_Const | CPF_NeedCtorLink)
	class FString                                      ColumnName;                                    // 0x0018 (0x0010) [0x0000000000408002] (CPF_Const | CPF_Localized | CPF_NeedCtorLink)
};

// ScriptStruct Engine.ORS.TimerOptions
// Size: 0x0004
struct FTimerOptions
{
	uint32_t                                           bLooping : 1;                                  // 0x0000 (0x0004) [0x0000000000000000] [0x00000001] 
};

// ScriptStruct Engine.ParticleEmitter.ParticleBurst
// Size: 0x000C
struct FParticleBurst
{
	int32_t                                            Count;                                         // 0x0000 (0x0004) [0x0000000000000001] (CPF_Edit)    
	int32_t                                            CountLow;                                      // 0x0004 (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              Time;                                          // 0x0008 (0x0004) [0x0000000000000001] (CPF_Edit)    
};

// ScriptStruct Engine.ParticleModule.ParticleCurvePair
// Size: 0x0018
struct FParticleCurvePair
{
	class FString                                      CurveName;                                     // 0x0000 (0x0010) [0x0000000000500000] (CPF_NeedCtorLink)
	class UObject*                                     CurveObject;                                   // 0x0010 (0x0008) [0x0000000000100000]               
};

// ScriptStruct Engine.ParticleModule.ParticleRandomSeedInfo
// Size: 0x0020
struct FParticleRandomSeedInfo
{
	class FName                                        ParameterName;                                 // 0x0000 (0x0008) [0x0000000000000001] (CPF_Edit)    
	uint32_t                                           bGetSeedFromInstance : 1;                      // 0x0008 (0x0004) [0x0000000000000001] [0x00000001] (CPF_Edit)
	uint32_t                                           bInstanceSeedIsIndex : 1;                      // 0x0008 (0x0004) [0x0000000000000001] [0x00000002] (CPF_Edit)
	uint32_t                                           bResetSeedOnEmitterLooping : 1;                // 0x0008 (0x0004) [0x0000000000000001] [0x00000004] (CPF_Edit)
	uint8_t                                          UnknownData00[0x4];                            // 0x000C (0x0004) MISSED OFFSET
	class TArray<int32_t>                              RandomSeeds;                                   // 0x0010 (0x0010) [0x0000000000400001] (CPF_Edit | CPF_NeedCtorLink)
};

// ScriptStruct Engine.ParticleModuleAttractorBoneSocket.AttractLocationBoneSocketInfo
// Size: 0x0014
struct FAttractLocationBoneSocketInfo
{
	class FName                                        BoneSocketName;                                // 0x0000 (0x0008) [0x0000000000000001] (CPF_Edit)    
	struct FVector                                     Offset;                                        // 0x0008 (0x000C) [0x0000000000000001] (CPF_Edit)    
};

// ScriptStruct Engine.ParticleModuleBeamModifier.BeamModifierOptions
// Size: 0x0004
struct FBeamModifierOptions
{
	uint32_t                                           bModify : 1;                                   // 0x0000 (0x0004) [0x0000000000000001] [0x00000001] (CPF_Edit)
	uint32_t                                           bScale : 1;                                    // 0x0000 (0x0004) [0x0000000000000001] [0x00000002] (CPF_Edit)
	uint32_t                                           bLock : 1;                                     // 0x0000 (0x0004) [0x0000000000000001] [0x00000004] (CPF_Edit)
};

// ScriptStruct Engine.ParticleModuleCollision.ParticleAttractorCollisionAction
// Size: 0x0018
struct FParticleAttractorCollisionAction
{
	uint8_t                                            Type;                                          // 0x0000 (0x0001) [0x0000000000000001] (CPF_Edit)    
	uint8_t                                          UnknownData00[0x7];                            // 0x0001 (0x0007) MISSED OFFSET
	class FString                                      EventName;                                     // 0x0008 (0x0010) [0x0000000000400001] (CPF_Edit | CPF_NeedCtorLink)
};

// ScriptStruct Engine.ParticleModuleEventGenerator.ParticleEvent_GenerateInfo
// Size: 0x0030
struct FParticleEvent_GenerateInfo
{
	uint8_t                                            Type;                                          // 0x0000 (0x0001) [0x0000000000000001] (CPF_Edit)    
	uint8_t                                          UnknownData00[0x3];                            // 0x0001 (0x0003) MISSED OFFSET
	int32_t                                            Frequency;                                     // 0x0004 (0x0004) [0x0000000000000001] (CPF_Edit)    
	int32_t                                            LowFreq;                                       // 0x0008 (0x0004) [0x0000000000000001] (CPF_Edit)    
	int32_t                                            ParticleFrequency;                             // 0x000C (0x0004) [0x0000000000000001] (CPF_Edit)    
	uint32_t                                           FirstTimeOnly : 1;                             // 0x0010 (0x0004) [0x0000000000000001] [0x00000001] (CPF_Edit)
	uint32_t                                           LastTimeOnly : 1;                              // 0x0010 (0x0004) [0x0000000000000001] [0x00000002] (CPF_Edit)
	uint32_t                                           UseReflectedImpactVector : 1;                  // 0x0010 (0x0004) [0x0000000000000001] [0x00000004] (CPF_Edit)
	class FName                                        CustomName;                                    // 0x0014 (0x0008) [0x0000000000000001] (CPF_Edit)    
	uint8_t                                          UnknownData01[0x4];                            // 0x001C (0x0004) MISSED OFFSET
	class TArray<class UParticleModuleEventSendToGame*> ParticleModuleEventsToSendToGame;              // 0x0020 (0x0010) [0x0000000004400001] (CPF_Edit | CPF_NeedCtorLink | CPF_EditInline)
};

// ScriptStruct Engine.ParticleModuleLocationBoneSocket.LocationBoneSocketInfo
// Size: 0x0014
struct FLocationBoneSocketInfo
{
	class FName                                        BoneSocketName;                                // 0x0000 (0x0008) [0x0000000000000001] (CPF_Edit)    
	struct FVector                                     Offset;                                        // 0x0008 (0x000C) [0x0000000000000001] (CPF_Edit)    
};

// ScriptStruct Engine.ParticleModuleOrbit.OrbitOptions
// Size: 0x0004
struct FOrbitOptions
{
	uint32_t                                           bProcessDuringSpawn : 1;                       // 0x0000 (0x0004) [0x0000000000000001] [0x00000001] (CPF_Edit)
	uint32_t                                           bProcessDuringUpdate : 1;                      // 0x0000 (0x0004) [0x0000000000000001] [0x00000002] (CPF_Edit)
	uint32_t                                           bUseEmitterTime : 1;                           // 0x0000 (0x0004) [0x0000000000000001] [0x00000004] (CPF_Edit)
};

// ScriptStruct Engine.ParticleModuleParameterDynamic.EmitterDynamicParameter
// Size: 0x0040
struct FEmitterDynamicParameter
{
	class FName                                        ParamName;                                     // 0x0000 (0x0008) [0x0000000000020001] (CPF_Edit | CPF_EditConst)
	uint32_t                                           bUseEmitterTime : 1;                           // 0x0008 (0x0004) [0x0000000000000001] [0x00000001] (CPF_Edit)
	uint32_t                                           bSpawnTimeOnly : 1;                            // 0x0008 (0x0004) [0x0000000000000001] [0x00000002] (CPF_Edit)
	uint8_t                                            ValueMethod;                                   // 0x000C (0x0001) [0x0000000000000001] (CPF_Edit)    
	uint8_t                                          UnknownData00[0x3];                            // 0x000D (0x0003) MISSED OFFSET
	uint32_t                                           bScaleVelocityByParamValue : 1;                // 0x0010 (0x0004) [0x0000000000000001] [0x00000001] (CPF_Edit)
	uint8_t                                          UnknownData01[0x4];                            // 0x0014 (0x0004) MISSED OFFSET
	struct FRawDistributionFloat                       ParamValue;                                    // 0x0018 (0x0028) [0x0000000000480001] (CPF_Edit | CPF_Component | CPF_NeedCtorLink)
};

// ScriptStruct Engine.ParticleModuleTypeDataBeam2.BeamTargetData
// Size: 0x000C
struct FBeamTargetData
{
	class FName                                        TargetName;                                    // 0x0000 (0x0008) [0x0000000000000001] (CPF_Edit)    
	float                                              TargetPercentage;                              // 0x0008 (0x0004) [0x0000000000000001] (CPF_Edit)    
};

// ScriptStruct Engine.ParticleModuleTypeDataPhysX.PhysXEmitterVerticalLodProperties
// Size: 0x0010
struct FPhysXEmitterVerticalLodProperties
{
	float                                              WeightForFifo;                                 // 0x0000 (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              WeightForSpawnLod;                             // 0x0004 (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              SpawnLodRateVsLifeBias;                        // 0x0008 (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              RelativeFadeoutTime;                           // 0x000C (0x0004) [0x0000000000000001] (CPF_Edit)    
};

// ScriptStruct Engine.ParticleSystem.ParticleSystemLOD
// Size: 0x0004
struct FParticleSystemLOD
{
	uint32_t                                           bLit : 1;                                      // 0x0000 (0x0004) [0x0000000000000001] [0x00000001] (CPF_Edit)
};

// ScriptStruct Engine.ParticleSystem.LODSoloTrack
// Size: 0x0010
struct FLODSoloTrack
{
	class TArray<uint8_t>                              SoloEnableSetting;                             // 0x0000 (0x0010) [0x0000000000402000] (CPF_Transient | CPF_NeedCtorLink)
};

// ScriptStruct Engine.ParticleSystemReplay.ParticleEmitterReplayFrame
// Size: 0x0010
struct FParticleEmitterReplayFrame
{
	int32_t                                            EmitterType;                                   // 0x0000 (0x0004) [0x0000000000001002] (CPF_Const | CPF_Native)
	int32_t                                            OriginalEmitterIndex;                          // 0x0004 (0x0004) [0x0000000000001002] (CPF_Const | CPF_Native)
	struct FPointer                                    FrameState;                                    // 0x0008 (0x0008) [0x0000000000001002] (CPF_Const | CPF_Native)
};

// ScriptStruct Engine.ParticleSystemReplay.ParticleSystemReplayFrame
// Size: 0x0010
struct FParticleSystemReplayFrame
{
	class TArray<struct FParticleEmitterReplayFrame>   Emitters;                                      // 0x0000 (0x0010) [0x0000000000001002] (CPF_Const | CPF_Native)
};

// ScriptStruct Engine.PBRuleNodeBase.PBRuleLink
// Size: 0x0018 (0x0014 PropertySize + 0x0004 padding to satisfy MinAlignment of 8)
struct FPBRuleLink
{
	class UPBRuleNodeBase*                             NextRule;                                      // 0x0000 (0x0008) [0x0000000004400009] (CPF_Edit | CPF_ExportObject | CPF_NeedCtorLink | CPF_EditInline)
	class FName                                        LinkName;                                      // 0x0008 (0x0008) [0x0000000000000001] (CPF_Edit)    
	int32_t                                            DrawY;                                         // 0x0010 (0x0004) [0x0000000800000000] (CPF_EditorOnly)
	uint8_t                                          MinAlignmentPadding[0x4];                      // 0x0014 (0x0004) PADDING FOR MINALIGNMENT
};

// ScriptStruct Engine.ProcBuilding.PBMaterialParam
// Size: 0x0018
struct FPBMaterialParam
{
	class FName                                        ParamName;                                     // 0x0000 (0x0008) [0x0000000000000001] (CPF_Edit)    
	struct FLinearColor                                Color;                                         // 0x0008 (0x0010) [0x0000000000000001] (CPF_Edit)    
};

// ScriptStruct Engine.ProcBuildingRuleset.PBParamSwatch
// Size: 0x0018
struct FPBParamSwatch
{
	class FName                                        SwatchName;                                    // 0x0000 (0x0008) [0x0000000000000001] (CPF_Edit)    
	class TArray<struct FPBMaterialParam>              Params;                                        // 0x0008 (0x0010) [0x0000000000400001] (CPF_Edit | CPF_NeedCtorLink)
};

// ScriptStruct Engine.ProcBuildingRuleset.PBVariationInfo
// Size: 0x000C
struct FPBVariationInfo
{
	class FName                                        VariationName;                                 // 0x0000 (0x0008) [0x0000000000000001] (CPF_Edit)    
	uint32_t                                           bMeshOnTopOfFacePoly : 1;                      // 0x0008 (0x0004) [0x0000000000000001] [0x00000001] (CPF_Edit)
};

// ScriptStruct Engine.ProcBuilding.PBFracMeshCompInfo
// Size: 0x0010 (0x000C PropertySize + 0x0004 padding to satisfy MinAlignment of 8)
struct FPBFracMeshCompInfo
{
	class UFracturedStaticMeshComponent*               FracMeshComp;                                  // 0x0000 (0x0008) [0x0000000004080008] (CPF_ExportObject | CPF_Component | CPF_EditInline)
	int32_t                                            TopLevelScopeIndex;                            // 0x0008 (0x0004) [0x0000000000000000]               
	uint8_t                                          MinAlignmentPadding[0x4];                      // 0x000C (0x0004) PADDING FOR MINALIGNMENT
};

// ScriptStruct Engine.ProcBuilding.PBFaceUVInfo
// Size: 0x0010
struct FPBFaceUVInfo
{
	struct FVector2D                                   Offset;                                        // 0x0000 (0x0008) [0x0000000000000000]               
	struct FVector2D                                   Size;                                          // 0x0008 (0x0008) [0x0000000000000000]               
};

// ScriptStruct Engine.ProcBuilding.PBMemUsageInfo
// Size: 0x0030 (0x002C PropertySize + 0x0004 padding to satisfy MinAlignment of 8)
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
	uint8_t                                          MinAlignmentPadding[0x4];                      // 0x002C (0x0004) PADDING FOR MINALIGNMENT
};

// ScriptStruct Engine.ProcBuilding.PBMeshCompInfo
// Size: 0x0010 (0x000C PropertySize + 0x0004 padding to satisfy MinAlignment of 8)
struct FPBMeshCompInfo
{
	class UStaticMeshComponent*                        MeshComp;                                      // 0x0000 (0x0008) [0x0000000004080008] (CPF_ExportObject | CPF_Component | CPF_EditInline)
	int32_t                                            TopLevelScopeIndex;                            // 0x0008 (0x0004) [0x0000000000000000]               
	uint8_t                                          MinAlignmentPadding[0x4];                      // 0x000C (0x0004) PADDING FOR MINALIGNMENT
};

// ScriptStruct Engine.ProcBuilding.PBScopeProcessInfo
// Size: 0x0020 (0x001C PropertySize + 0x0004 padding to satisfy MinAlignment of 8)
struct FPBScopeProcessInfo
{
	class AProcBuilding*                               OwningBuilding;                                // 0x0000 (0x0008) [0x0000000000000000]               
	class UProcBuildingRuleset*                        Ruleset;                                       // 0x0008 (0x0008) [0x0000000000000000]               
	class FName                                        RulesetVariation;                              // 0x0010 (0x0008) [0x0000000000000000]               
	uint32_t                                           bGenerateLODPoly : 1;                          // 0x0018 (0x0004) [0x0000000000000000] [0x00000001] 
	uint32_t                                           bPartOfNonRect : 1;                            // 0x0018 (0x0004) [0x0000000000000000] [0x00000002] 
	uint8_t                                          MinAlignmentPadding[0x4];                      // 0x001C (0x0004) PADDING FOR MINALIGNMENT
};

// ScriptStruct Engine.ProcBuilding.PBScope2D
// Size: 0x0050 (0x0048 PropertySize + 0x0008 padding to satisfy MinAlignment of 16)
struct FPBScope2D
{
	struct FMatrix                                     ScopeFrame;                                    // 0x0000 (0x0040) [0x0000000000000000]               
	float                                              DimX;                                          // 0x0040 (0x0004) [0x0000000000000000]               
	float                                              DimZ;                                          // 0x0044 (0x0004) [0x0000000000000000]               
	uint8_t                                          MinAlignmentPadding[0x8];                      // 0x0048 (0x0008) PADDING FOR MINALIGNMENT
};

// ScriptStruct Engine.ProcBuilding.PBEdgeInfo
// Size: 0x002C
struct FPBEdgeInfo
{
	struct FVector                                     EdgeEnd;                                       // 0x0000 (0x000C) [0x0000000000000000]               
	struct FVector                                     EdgeStart;                                     // 0x000C (0x000C) [0x0000000000000000]               
	int32_t                                            ScopeAIndex;                                   // 0x0018 (0x0004) [0x0000000000000000]               
	uint8_t                                            ScopeAEdge;                                    // 0x001C (0x0001) [0x0000000000000000]               
	uint8_t                                          UnknownData00[0x3];                            // 0x001D (0x0003) MISSED OFFSET
	int32_t                                            ScopeBIndex;                                   // 0x0020 (0x0004) [0x0000000000000000]               
	uint8_t                                            ScopeBEdge;                                    // 0x0024 (0x0001) [0x0000000000000000]               
	uint8_t                                          UnknownData01[0x3];                            // 0x0025 (0x0003) MISSED OFFSET
	float                                              EdgeAngle;                                     // 0x0028 (0x0004) [0x0000000000000000]               
};

// ScriptStruct Engine.PBRuleNodeCorner.RBCornerAngleInfo
// Size: 0x0008
struct FRBCornerAngleInfo
{
	float                                              Angle;                                         // 0x0000 (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              CornerSize;                                    // 0x0004 (0x0004) [0x0000000000000001] (CPF_Edit)    
};

// ScriptStruct Engine.PBRuleNodeEdgeAngle.RBEdgeAngleInfo
// Size: 0x0004
struct FRBEdgeAngleInfo
{
	float                                              Angle;                                         // 0x0000 (0x0004) [0x0000000000000001] (CPF_Edit)    
};

// ScriptStruct Engine.PBRuleNodeMesh.BuildingMatOverrides
// Size: 0x0010
struct FBuildingMatOverrides
{
	class TArray<class UMaterialInterface*>            MaterialOptions;                               // 0x0000 (0x0010) [0x0000000000400001] (CPF_Edit | CPF_NeedCtorLink)
};

// ScriptStruct Engine.PBRuleNodeMesh.BuildingMeshInfo
// Size: 0x0050
struct FBuildingMeshInfo
{
	class UStaticMesh*                                 Mesh;                                          // 0x0000 (0x0008) [0x0000000000000001] (CPF_Edit)    
	float                                              DimX;                                          // 0x0008 (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              DimZ;                                          // 0x000C (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              Chance;                                        // 0x0010 (0x0004) [0x0000000000000001] (CPF_Edit)    
	uint8_t                                          UnknownData00[0x4];                            // 0x0014 (0x0004) MISSED OFFSET
	class UDistributionVector*                         Translation;                                   // 0x0018 (0x0008) [0x0000000004080009] (CPF_Edit | CPF_ExportObject | CPF_Component | CPF_EditInline)
	class UDistributionVector*                         Rotation;                                      // 0x0020 (0x0008) [0x0000000004080009] (CPF_Edit | CPF_ExportObject | CPF_Component | CPF_EditInline)
	uint32_t                                           bMeshScaleTranslation : 1;                     // 0x0028 (0x0004) [0x0000000000000001] [0x00000001] (CPF_Edit)
	uint32_t                                           bOverrideMeshLightMapRes : 1;                  // 0x0028 (0x0004) [0x0000000000000001] [0x00000002] (CPF_Edit)
	int32_t                                            OverriddenMeshLightMapRes;                     // 0x002C (0x0004) [0x0000000000000001] (CPF_Edit)    
	class TArray<class UMaterialInterface*>            MaterialOverrides;                             // 0x0030 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	class TArray<struct FBuildingMatOverrides>         SectionOverrides;                              // 0x0040 (0x0010) [0x0000000000400001] (CPF_Edit | CPF_NeedCtorLink)
};

// ScriptStruct Engine.PBRuleNodeSplit.RBSplitInfo
// Size: 0x0014
struct FRBSplitInfo
{
	uint32_t                                           bFixSize : 1;                                  // 0x0000 (0x0004) [0x0000000000000001] [0x00000001] (CPF_Edit)
	float                                              FixedSize;                                     // 0x0004 (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              ExpandRatio;                                   // 0x0008 (0x0004) [0x0000000000000001] (CPF_Edit)    
	class FName                                        SplitName;                                     // 0x000C (0x0008) [0x0000000000000001] (CPF_Edit)    
};

// ScriptStruct Engine.PitchTekSettings.PitchTekTextureDecalSettings
// Size: 0x0020
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
// Size: 0x0010
struct FPitchTekClearSettings
{
	uint32_t                                           bClearColorTargetEveryFrame : 1;               // 0x0000 (0x0004) [0x0000000000000001] [0x00000001] (CPF_Edit)
	struct FColor                                      ColorTargetClearColor;                         // 0x0004 (0x0004) [0x0000000000000001] (CPF_Edit)    
	uint32_t                                           bClearDataTargetEveryFrame : 1;                // 0x0008 (0x0004) [0x0000000000000001] [0x00000001] (CPF_Edit)
	struct FColor                                      DataTargetClearColor;                          // 0x000C (0x0004) [0x0000000000000001] (CPF_Edit)    
};

// ScriptStruct Engine.PlayerReplicationInfo.PRIRemoteUserData
// Size: 0x0010
struct FPRIRemoteUserData
{
	class FString                                      UserId;                                        // 0x0000 (0x0010) [0x0000000000500000] (CPF_NeedCtorLink)
};

// ScriptStruct Engine.PlayerReplicationInfo.NetPacketStats
// Size: 0x001C
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
// Size: 0x0004
struct APointLightToggleable_FCheckpointRecord
{
	uint32_t                                           bEnabled : 1;                                  // 0x0000 (0x0004) [0x0000000000000000] [0x00000001] 
};

// ScriptStruct Engine.Sequence.ActivateOp
// Size: 0x0018
struct FActivateOp
{
	class USequenceOp*                                 ActivatorOp;                                   // 0x0000 (0x0008) [0x0000000000000000]               
	class USequenceOp*                                 Op;                                            // 0x0008 (0x0008) [0x0000000000000000]               
	int32_t                                            InputIdx;                                      // 0x0010 (0x0004) [0x0000000000000000]               
	float                                              RemainingDelay;                                // 0x0014 (0x0004) [0x0000000000000000]               
};

// ScriptStruct Engine.Sequence.QueuedActivationInfo
// Size: 0x0030 (0x002C PropertySize + 0x0004 padding to satisfy MinAlignment of 8)
struct FQueuedActivationInfo
{
	class USequenceEvent*                              ActivatedEvent;                                // 0x0000 (0x0008) [0x0000000000000000]               
	class AActor*                                      InOriginator;                                  // 0x0008 (0x0008) [0x0000000000000000]               
	class AActor*                                      InInstigator;                                  // 0x0010 (0x0008) [0x0000000000000000]               
	class TArray<int32_t>                              ActivateIndices;                               // 0x0018 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	uint32_t                                           bPushTop : 1;                                  // 0x0028 (0x0004) [0x0000000000000000] [0x00000001] 
	uint8_t                                          MinAlignmentPadding[0x4];                      // 0x002C (0x0004) PADDING FOR MINALIGNMENT
};

// ScriptStruct Engine.RB_BodyInstance.BulletBodyData
// Size: 0x0010
struct FBulletBodyData
{
	int32_t                                            SceneIndex;                                    // 0x0000 (0x0004) [0x0000000000000000]               
	uint8_t                                          UnknownData00[0x4];                            // 0x0004 (0x0004) MISSED OFFSET
	struct FPointer                                    Body;                                          // 0x0008 (0x0008) [0x0000000000000000]               
};

// ScriptStruct Engine.RB_BodySetup.KCachedConvexDataElement
// Size: 0x0010
struct FKCachedConvexDataElement
{
	class TArray<uint8_t>                              ConvexElementData;                             // 0x0000 (0x0010) [0x0000000000001000] (CPF_Native)  
};

// ScriptStruct Engine.RB_BodySetup.KCachedConvexData
// Size: 0x0010
struct FKCachedConvexData
{
	class TArray<struct FKCachedConvexDataElement>     CachedConvexElements;                          // 0x0000 (0x0010) [0x0000000000001000] (CPF_Native)  
};

// ScriptStruct Engine.RB_ConstraintSetup.LinearDOFSetup
// Size: 0x0008
struct FLinearDOFSetup
{
	uint8_t                                            bLimited;                                      // 0x0000 (0x0001) [0x0000000000000001] (CPF_Edit)    
	uint8_t                                          UnknownData00[0x3];                            // 0x0001 (0x0003) MISSED OFFSET
	float                                              LimitSize;                                     // 0x0004 (0x0004) [0x0000000000000001] (CPF_Edit)    
};

// ScriptStruct Engine.SeqAct_Interp.CameraCutInfo
// Size: 0x0010
struct FCameraCutInfo
{
	struct FVector                                     Location;                                      // 0x0000 (0x000C) [0x0000000000000000]               
	float                                              TimeStamp;                                     // 0x000C (0x0004) [0x0000000000000000]               
};

// ScriptStruct Engine.SeqAct_Interp.SavedTransform
// Size: 0x0018
struct FSavedTransform
{
	struct FVector                                     Location;                                      // 0x0000 (0x000C) [0x0000000000000000]               
	struct FRotator                                    Rotation;                                      // 0x000C (0x000C) [0x0000000000000000]               
};

// ScriptStruct Engine.SeqAct_MultiLevelStreaming.LevelStreamingNameCombo
// Size: 0x0010
struct FLevelStreamingNameCombo
{
	class ULevelStreaming*                             Level;                                         // 0x0000 (0x0008) [0x0000000000000002] (CPF_Const)   
	class FName                                        LevelName;                                     // 0x0008 (0x0008) [0x0000000000000003] (CPF_Edit | CPF_Const)
};

// ScriptStruct Engine.SeqAct_RangeSwitch.SwitchRange
// Size: 0x0008
struct FSwitchRange
{
	int32_t                                            Min;                                           // 0x0000 (0x0004) [0x0000000000000001] (CPF_Edit)    
	int32_t                                            Max;                                           // 0x0004 (0x0004) [0x0000000000000001] (CPF_Edit)    
};

// ScriptStruct Engine.WorldAttractor.WorldAttractorData
// Size: 0x0020
struct FWorldAttractorData
{
	uint32_t                                           bEnabled : 1;                                  // 0x0000 (0x0004) [0x0000000000000000] [0x00000001] 
	struct FVector                                     Location;                                      // 0x0004 (0x000C) [0x0000000000000000]               
	uint8_t                                            FalloffType;                                   // 0x0010 (0x0001) [0x0000000000000000]               
	uint8_t                                          UnknownData00[0x3];                            // 0x0011 (0x0003) MISSED OFFSET
	float                                              FalloffExponent;                               // 0x0014 (0x0004) [0x0000000000000000]               
	float                                              Range;                                         // 0x0018 (0x0004) [0x0000000000000000]               
	float                                              Strength;                                      // 0x001C (0x0004) [0x0000000000000000]               
};

// ScriptStruct Engine.SeqCond_SwitchClass.SwitchClassInfo
// Size: 0x000C (0x0009 PropertySize + 0x0003 padding to satisfy MinAlignment of 4)
struct FSwitchClassInfo
{
	class FName                                        ClassName;                                     // 0x0000 (0x0008) [0x0000000000000001] (CPF_Edit)    
	uint8_t                                            bFallThru;                                     // 0x0008 (0x0001) [0x0000000000000001] (CPF_Edit)    
	uint8_t                                          MinAlignmentPadding[0x3];                      // 0x0009 (0x0003) PADDING FOR MINALIGNMENT
};

// ScriptStruct Engine.SeqCond_SwitchObject.SwitchObjectCase
// Size: 0x0010 (0x000C PropertySize + 0x0004 padding to satisfy MinAlignment of 8)
struct FSwitchObjectCase
{
	class UObject*                                     ObjectValue;                                   // 0x0000 (0x0008) [0x0000000000000001] (CPF_Edit)    
	uint32_t                                           bFallThru : 1;                                 // 0x0008 (0x0004) [0x0000000000000001] [0x00000001] (CPF_Edit)
	uint32_t                                           bDefaultValue : 1;                             // 0x0008 (0x0004) [0x0000000000000001] [0x00000002] (CPF_Edit)
	uint8_t                                          MinAlignmentPadding[0x4];                      // 0x000C (0x0004) PADDING FOR MINALIGNMENT
};

// ScriptStruct Engine.SkeletalMesh.SoftBodyTetraLink
// Size: 0x0010
struct FSoftBodyTetraLink
{
	int32_t                                            Index;                                         // 0x0000 (0x0004) [0x0000000000000000]               
	struct FVector                                     Bary;                                          // 0x0004 (0x000C) [0x0000000000000000]               
};

// ScriptStruct Engine.SkeletalMesh.SoftBodySpecialBoneInfo
// Size: 0x0020
struct FSoftBodySpecialBoneInfo
{
	class FName                                        BoneName;                                      // 0x0000 (0x0008) [0x0000000000000001] (CPF_Edit)    
	uint8_t                                            BoneType;                                      // 0x0008 (0x0001) [0x0000000000000001] (CPF_Edit)    
	uint8_t                                          UnknownData00[0x7];                            // 0x0009 (0x0007) MISSED OFFSET
	class TArray<int32_t>                              AttachedVertexIndices;                         // 0x0010 (0x0010) [0x0000000000400002] (CPF_Const | CPF_NeedCtorLink)
};

// ScriptStruct Engine.SkeletalMesh.ClothSpecialBoneInfo
// Size: 0x0020
struct FClothSpecialBoneInfo
{
	class FName                                        BoneName;                                      // 0x0000 (0x0008) [0x0000000000000001] (CPF_Edit)    
	uint8_t                                            BoneType;                                      // 0x0008 (0x0001) [0x0000000000000001] (CPF_Edit)    
	uint8_t                                          UnknownData00[0x7];                            // 0x0009 (0x0007) MISSED OFFSET
	class TArray<int32_t>                              AttachedVertexIndices;                         // 0x0010 (0x0010) [0x0000000000400002] (CPF_Const | CPF_NeedCtorLink)
};

// ScriptStruct Engine.SkeletalMesh.SkeletalMeshOptimizationSettings
// Size: 0x0028
struct FSkeletalMeshOptimizationSettings
{
	float                                              MaxDeviationPercentage;                        // 0x0000 (0x0004) [0x0000000000000000]               
	uint8_t                                            SilhouetteImportance;                          // 0x0004 (0x0001) [0x0000000000000000]               
	uint8_t                                            TextureImportance;                             // 0x0005 (0x0001) [0x0000000000000000]               
	uint8_t                                            ShadingImportance;                             // 0x0006 (0x0001) [0x0000000000000000]               
	uint8_t                                            SkinningImportance;                            // 0x0007 (0x0001) [0x0000000000000000]               
	uint8_t                                            NormalMode;                                    // 0x0008 (0x0001) [0x0000000020000000]  CPF_Deprecated)
	uint8_t                                          UnknownData00[0x3];                            // 0x0009 (0x0003) MISSED OFFSET
	float                                              BoneReductionRatio;                            // 0x000C (0x0004) [0x0000000000000000]               
	int32_t                                            MaxBonesPerVertex;                             // 0x0010 (0x0004) [0x0000000000000000]               
	uint8_t                                            ReductionMethod;                               // 0x0014 (0x0001) [0x0000000000000000]               
	uint8_t                                          UnknownData01[0x3];                            // 0x0015 (0x0003) MISSED OFFSET
	float                                              NumOfTrianglesPercentage;                      // 0x0018 (0x0004) [0x0000000000000000]               
	float                                              WeldingThreshold;                              // 0x001C (0x0004) [0x0000000000000000]               
	uint32_t                                           bRecalcNormals : 1;                            // 0x0020 (0x0004) [0x0000000000000000] [0x00000001] 
	float                                              NormalsThreshold;                              // 0x0024 (0x0004) [0x0000000000000000]               
};

// ScriptStruct Engine.SkeletalMesh.SkeletalMeshLODDistanceInfo
// Size: 0x0008
struct FSkeletalMeshLODDistanceInfo
{
	float                                              DisplayFactor;                                 // 0x0000 (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              LODHysteresis;                                 // 0x0004 (0x0004) [0x0000000000000001] (CPF_Edit)    
};

// ScriptStruct Engine.SkeletalMesh.TriangleSortSettings
// Size: 0x000C
struct FTriangleSortSettings
{
	uint8_t                                            TriangleSorting;                               // 0x0000 (0x0001) [0x0000000000000001] (CPF_Edit)    
	uint8_t                                            CustomLeftRightAxis;                           // 0x0001 (0x0001) [0x0000000000000001] (CPF_Edit)    
	uint8_t                                          UnknownData00[0x2];                            // 0x0002 (0x0002) MISSED OFFSET
	class FName                                        CustomLeftRightBoneName;                       // 0x0004 (0x0008) [0x0000000000000001] (CPF_Edit)    
};

// ScriptStruct Engine.SkeletalMesh.SkeletalMeshLODInfo
// Size: 0x0050 (0x004C PropertySize + 0x0004 padding to satisfy MinAlignment of 8)
struct FSkeletalMeshLODInfo
{
	float                                              DisplayFactor;                                 // 0x0000 (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              LODHysteresis;                                 // 0x0004 (0x0004) [0x0000000000000001] (CPF_Edit)    
	class TArray<int32_t>                              LODMaterialMap;                                // 0x0008 (0x0010) [0x0000000000400041] (CPF_Edit | CPF_EditFixedSize | CPF_NeedCtorLink)
	class TArray<uint32_t>                             bEnableShadowCasting;                          // 0x0018 (0x0010) [0x0000000000400041] (CPF_Edit | CPF_EditFixedSize | CPF_NeedCtorLink)
	class TArray<uint8_t>                              TriangleSorting;                               // 0x0028 (0x0010) [0x0000000020400000] (CPF_NeedCtorLink | CPF_Deprecated)
	class TArray<struct FTriangleSortSettings>         TriangleSortSettings;                          // 0x0038 (0x0010) [0x0000000000400041] (CPF_Edit | CPF_EditFixedSize | CPF_NeedCtorLink)
	uint32_t                                           bDisableCompressions : 1;                      // 0x0048 (0x0004) [0x0000000000000001] [0x00000001] (CPF_Edit)
	uint32_t                                           bHasBeenSimplified : 1;                        // 0x0048 (0x0004) [0x0000000000000000] [0x00000002] 
	uint8_t                                          MinAlignmentPadding[0x4];                      // 0x004C (0x0004) PADDING FOR MINALIGNMENT
};

// ScriptStruct Engine.SkeletalMesh.BoneMirrorExport
// Size: 0x0014 (0x0011 PropertySize + 0x0003 padding to satisfy MinAlignment of 4)
struct FBoneMirrorExport
{
	class FName                                        BoneName;                                      // 0x0000 (0x0008) [0x0000000000000001] (CPF_Edit)    
	class FName                                        SourceBoneName;                                // 0x0008 (0x0008) [0x0000000000000001] (CPF_Edit)    
	uint8_t                                            BoneFlipAxis;                                  // 0x0010 (0x0001) [0x0000000000000001] (CPF_Edit)    
	uint8_t                                          MinAlignmentPadding[0x3];                      // 0x0011 (0x0003) PADDING FOR MINALIGNMENT
};

// ScriptStruct Engine.SkeletalMesh.BoneMirrorInfo
// Size: 0x0008 (0x0005 PropertySize + 0x0003 padding to satisfy MinAlignment of 4)
struct FBoneMirrorInfo
{
	int32_t                                            SourceIndex;                                   // 0x0000 (0x0004) [0x0000000000000001] (CPF_Edit)    
	uint8_t                                            BoneFlipAxis;                                  // 0x0004 (0x0001) [0x0000000000000001] (CPF_Edit)    
	uint8_t                                          MinAlignmentPadding[0x3];                      // 0x0005 (0x0003) PADDING FOR MINALIGNMENT
};

// ScriptStruct Engine.SkeletalMesh.ApexClothingLodInfo
// Size: 0x0010
struct FApexClothingLodInfo
{
	class TArray<int32_t>                              ClothingSectionInfo;                           // 0x0000 (0x0010) [0x0000000000400041] (CPF_Edit | CPF_EditFixedSize | CPF_NeedCtorLink)
};

// ScriptStruct Engine.SkeletalMesh.ApexClothingAssetInfo
// Size: 0x0018
struct FApexClothingAssetInfo
{
	class TArray<struct FApexClothingLodInfo>          ClothingLodInfo;                               // 0x0000 (0x0010) [0x0000000000400041] (CPF_Edit | CPF_EditFixedSize | CPF_NeedCtorLink)
	class FName                                        ClothingAssetName;                             // 0x0010 (0x0008) [0x0000000000000000]               
};

// ScriptStruct Engine.SkeletalMeshActor.SkelMeshActorControlTarget
// Size: 0x0010
struct FSkelMeshActorControlTarget
{
	class FName                                        ControlName;                                   // 0x0000 (0x0008) [0x0000000000000001] (CPF_Edit)    
	class AActor*                                      TargetActor;                                   // 0x0008 (0x0008) [0x0000000000000001] (CPF_Edit)    
};

// ScriptStruct Engine.SkeletalMeshActor.CheckpointRecord
// Size: 0x001C
struct ASkeletalMeshActor_FCheckpointRecord
{
	uint32_t                                           bReplicated : 1;                               // 0x0000 (0x0004) [0x0000000000000000] [0x00000001] 
	uint32_t                                           bHidden : 1;                                   // 0x0000 (0x0004) [0x0000000000000000] [0x00000002] 
	uint32_t                                           bSavedPosition : 1;                            // 0x0000 (0x0004) [0x0000000000000000] [0x00000004] 
	struct FVector                                     Location;                                      // 0x0004 (0x000C) [0x0000000000000000]               
	struct FRotator                                    Rotation;                                      // 0x0010 (0x000C) [0x0000000000000000]               
};

// ScriptStruct Engine.SkeletalMeshActorBasedOnExtremeContent.SkelMaterialSetterDatum
// Size: 0x0010
struct FSkelMaterialSetterDatum
{
	int32_t                                            MaterialIndex;                                 // 0x0000 (0x0004) [0x0000000000000001] (CPF_Edit)    
	uint8_t                                          UnknownData00[0x4];                            // 0x0004 (0x0004) MISSED OFFSET
	class UMaterialInterface*                          TheMaterial;                                   // 0x0008 (0x0008) [0x0000000000000001] (CPF_Edit)    
};

// ScriptStruct Engine.SoundClass.SoundClassEditorData
// Size: 0x0008
struct FSoundClassEditorData
{
	int32_t                                            NodePosX;                                      // 0x0000 (0x0004) [0x0000000000001002] (CPF_Const | CPF_Native)
	int32_t                                            NodePosY;                                      // 0x0004 (0x0004) [0x0000000000001002] (CPF_Const | CPF_Native)
};

// ScriptStruct Engine.SoundClass.SoundClassProperties
// Size: 0x0020
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
// Size: 0x001C
struct FSoundClassAdjuster
{
	uint8_t                                            SoundClassName;                                // 0x0000 (0x0001) [0x0000000000002001] (CPF_Edit | CPF_Transient)
	uint8_t                                          UnknownData00[0x3];                            // 0x0001 (0x0003) MISSED OFFSET
	class FName                                        SoundClass;                                    // 0x0004 (0x0008) [0x0000000000020001] (CPF_Edit | CPF_EditConst)
	float                                              VolumeAdjuster;                                // 0x000C (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              PitchAdjuster;                                 // 0x0010 (0x0004) [0x0000000000000001] (CPF_Edit)    
	uint32_t                                           bApplyToChildren : 1;                          // 0x0014 (0x0004) [0x0000000000000001] [0x00000001] (CPF_Edit)
	float                                              VoiceCenterChannelVolumeAdjuster;              // 0x0018 (0x0004) [0x0000000000000001] (CPF_Edit)    
};

// ScriptStruct Engine.SoundMode.AudioEQEffect
// Size: 0x0028 (0x0024 PropertySize + 0x0004 padding to satisfy MinAlignment of 8)
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
	uint8_t                                          MinAlignmentPadding[0x4];                      // 0x0024 (0x0004) PADDING FOR MINALIGNMENT
};

// ScriptStruct Engine.SoundNodeDistanceCrossFade.DistanceDatum
// Size: 0x0068
struct FDistanceDatum
{
	float                                              FadeInDistanceStart;                           // 0x0000 (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              FadeInDistanceEnd;                             // 0x0004 (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              FadeOutDistanceStart;                          // 0x0008 (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              FadeOutDistanceEnd;                            // 0x000C (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              Volume;                                        // 0x0010 (0x0004) [0x0000000000000001] (CPF_Edit)    
	uint8_t                                          UnknownData00[0x4];                            // 0x0014 (0x0004) MISSED OFFSET
	struct FRawDistributionFloat                       FadeInDistance;                                // 0x0018 (0x0028) [0x0000000020480000] (CPF_Component | CPF_NeedCtorLink | CPF_Deprecated)
	struct FRawDistributionFloat                       FadeOutDistance;                               // 0x0040 (0x0028) [0x0000000020480000] (CPF_Component | CPF_NeedCtorLink | CPF_Deprecated)
};

// ScriptStruct Engine.SpeechRecognition.RecognisableWord
// Size: 0x0028
struct FRecognisableWord
{
	int32_t                                            Id;                                            // 0x0000 (0x0004) [0x0000000000000001] (CPF_Edit)    
	uint8_t                                          UnknownData00[0x4];                            // 0x0004 (0x0004) MISSED OFFSET
	class FString                                      ReferenceWord;                                 // 0x0008 (0x0010) [0x0000000000400001] (CPF_Edit | CPF_NeedCtorLink)
	class FString                                      PhoneticWord;                                  // 0x0018 (0x0010) [0x0000000000400001] (CPF_Edit | CPF_NeedCtorLink)
};

// ScriptStruct Engine.SpeechRecognition.RecogVocabulary
// Size: 0x0060
struct FRecogVocabulary
{
	class TArray<struct FRecognisableWord>             WhoDictionary;                                 // 0x0000 (0x0010) [0x0000000000400001] (CPF_Edit | CPF_NeedCtorLink)
	class TArray<struct FRecognisableWord>             WhatDictionary;                                // 0x0010 (0x0010) [0x0000000000400001] (CPF_Edit | CPF_NeedCtorLink)
	class TArray<struct FRecognisableWord>             WhereDictionary;                               // 0x0020 (0x0010) [0x0000000000400001] (CPF_Edit | CPF_NeedCtorLink)
	class FString                                      VocabName;                                     // 0x0030 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	class TArray<uint8_t>                              VocabData;                                     // 0x0040 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	class TArray<uint8_t>                              WorkingVocabData;                              // 0x0050 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
};

// ScriptStruct Engine.SpeechRecognition.RecogUserData
// Size: 0x0018
struct FRecogUserData
{
	int32_t                                            ActiveVocabularies;                            // 0x0000 (0x0004) [0x0000000000000000]               
	uint8_t                                          UnknownData00[0x4];                            // 0x0004 (0x0004) MISSED OFFSET
	class TArray<uint8_t>                              UserData;                                      // 0x0008 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
};

// ScriptStruct Engine.SpeedTreeComponent.SpeedTreeStaticLight
// Size: 0x0038
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
// Size: 0x0010
struct FSplineConnection
{
	class USplineComponent*                            SplineComponent;                               // 0x0000 (0x0008) [0x0000000004080009] (CPF_Edit | CPF_ExportObject | CPF_Component | CPF_EditInline)
	class ASplineActor*                                ConnectTo;                                     // 0x0008 (0x0008) [0x0000000000000001] (CPF_Edit)    
};

// ScriptStruct Engine.SplineMeshComponent.SplineMeshParams
// Size: 0x0058
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
// Size: 0x0004
struct ASpotLightToggleable_FCheckpointRecord
{
	uint32_t                                           bEnabled : 1;                                  // 0x0000 (0x0004) [0x0000000000000000] [0x00000001] 
};

// ScriptStruct Engine.StaticMeshActorBasedOnExtremeContent.SMMaterialSetterDatum
// Size: 0x0010
struct FSMMaterialSetterDatum
{
	int32_t                                            MaterialIndex;                                 // 0x0000 (0x0004) [0x0000000000000001] (CPF_Edit)    
	uint8_t                                          UnknownData00[0x4];                            // 0x0004 (0x0004) MISSED OFFSET
	class UMaterialInterface*                          TheMaterial;                                   // 0x0008 (0x0008) [0x0000000000000001] (CPF_Edit)    
};

// ScriptStruct Engine.Terrain.TerrainHeight
// Size: 0x0000
struct FTerrainHeight
{
};

// ScriptStruct Engine.Terrain.TerrainInfoData
// Size: 0x0000
struct FTerrainInfoData
{
};

// ScriptStruct Engine.Terrain.TerrainLayer
// Size: 0x0038
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
// Size: 0x0018
struct FTerrainDecorationInstance
{
	class UPrimitiveComponent*                         Component;                                     // 0x0000 (0x0008) [0x0000000004080008] (CPF_ExportObject | CPF_Component | CPF_EditInline)
	float                                              X;                                             // 0x0008 (0x0004) [0x0000000000000000]               
	float                                              Y;                                             // 0x000C (0x0004) [0x0000000000000000]               
	float                                              Scale;                                         // 0x0010 (0x0004) [0x0000000000000000]               
	int32_t                                            Yaw;                                           // 0x0014 (0x0004) [0x0000000000000000]               
};

// ScriptStruct Engine.Terrain.TerrainDecoration
// Size: 0x0030
struct FTerrainDecoration
{
	class UPrimitiveComponentFactory*                  Factory;                                       // 0x0000 (0x0008) [0x0000000004000001] (CPF_Edit | CPF_EditInline)
	float                                              MinScale;                                      // 0x0008 (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              MaxScale;                                      // 0x000C (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              Density;                                       // 0x0010 (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              SlopeRotationBlend;                            // 0x0014 (0x0004) [0x0000000000000001] (CPF_Edit)    
	int32_t                                            RandSeed;                                      // 0x0018 (0x0004) [0x0000000000000001] (CPF_Edit)    
	uint8_t                                          UnknownData00[0x4];                            // 0x001C (0x0004) MISSED OFFSET
	class TArray<struct FTerrainDecorationInstance>    Instances;                                     // 0x0020 (0x0010) [0x0000000000480000] (CPF_Component | CPF_NeedCtorLink)
};

// ScriptStruct Engine.Terrain.TerrainDecoLayer
// Size: 0x0028 (0x0024 PropertySize + 0x0004 padding to satisfy MinAlignment of 8)
struct FTerrainDecoLayer
{
	class FString                                      Name;                                          // 0x0000 (0x0010) [0x0000000000400001] (CPF_Edit | CPF_NeedCtorLink)
	class TArray<struct FTerrainDecoration>            Decorations;                                   // 0x0010 (0x0010) [0x0000000000480001] (CPF_Edit | CPF_Component | CPF_NeedCtorLink)
	int32_t                                            AlphaMapIndex;                                 // 0x0020 (0x0004) [0x0000000000000000]               
	uint8_t                                          MinAlignmentPadding[0x4];                      // 0x0024 (0x0004) PADDING FOR MINALIGNMENT
};

// ScriptStruct Engine.Terrain.AlphaMap
// Size: 0x0000
struct FAlphaMap
{
};

// ScriptStruct Engine.Terrain.TerrainWeightedMaterial
// Size: 0x0000
struct ATerrain_FTerrainWeightedMaterial
{
};

// ScriptStruct Engine.Terrain.SelectedTerrainVertex
// Size: 0x000C
struct FSelectedTerrainVertex
{
	int32_t                                            X;                                             // 0x0000 (0x0004) [0x0000000000000000]               
	int32_t                                            Y;                                             // 0x0004 (0x0004) [0x0000000000000000]               
	int32_t                                            Weight;                                        // 0x0008 (0x0004) [0x0000000000000000]               
};

// ScriptStruct Engine.Terrain.TerrainMaterialResource
// Size: 0x0000
struct FTerrainMaterialResource
{
};

// ScriptStruct Engine.Terrain.CachedTerrainMaterialArray
// Size: 0x0010
struct FCachedTerrainMaterialArray
{
	class TArray<struct FPointer>                      CachedMaterials;                               // 0x0000 (0x0010) [0x0000000000001002] (CPF_Const | CPF_Native)
};

// ScriptStruct Engine.TerrainComponent.TerrainPatchBounds
// Size: 0x000C
struct FTerrainPatchBounds
{
	float                                              MinHeight;                                     // 0x0000 (0x0004) [0x0000000000000000]               
	float                                              MaxHeight;                                     // 0x0004 (0x0004) [0x0000000000000000]               
	float                                              MaxDisplacement;                               // 0x0008 (0x0004) [0x0000000000000000]               
};

// ScriptStruct Engine.TerrainComponent.TerrainMaterialMask
// Size: 0x0010 (0x000C PropertySize + 0x0004 padding to satisfy MinAlignment of 8)
struct FTerrainMaterialMask
{
	uint64_t                                           BitMask;                                       // 0x0000 (0x0008) [0x0000000000000000]               
	int32_t                                            NumBits;                                       // 0x0008 (0x0004) [0x0000000000000000]               
	uint8_t                                          MinAlignmentPadding[0x4];                      // 0x000C (0x0004) PADDING FOR MINALIGNMENT
};

// ScriptStruct Engine.TerrainComponent.TerrainBVTree
// Size: 0x0010
struct FTerrainBVTree
{
	class TArray<int32_t>                              Nodes;                                         // 0x0000 (0x0010) [0x0000000000001002] (CPF_Const | CPF_Native)
};

// ScriptStruct Engine.TerrainLayerSetup.FilterLimit
// Size: 0x0010
struct FFilterLimit
{
	uint32_t                                           Enabled : 1;                                   // 0x0000 (0x0004) [0x0000000000000001] [0x00000001] (CPF_Edit)
	float                                              Base;                                          // 0x0004 (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              NoiseScale;                                    // 0x0008 (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              NoiseAmount;                                   // 0x000C (0x0004) [0x0000000000000001] (CPF_Edit)    
};

// ScriptStruct Engine.TerrainLayerSetup.TerrainFilteredMaterial
// Size: 0x0058
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
// Size: 0x0000
struct UTerrainWeightMapTexture_FTerrainWeightedMaterial
{
};

// ScriptStruct Engine.Texture2DComposite.SourceTexture2DRegion
// Size: 0x0020
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
// Size: 0x0018
struct FImageLayout
{
	class TArray<uint8_t>                              Data;                                          // 0x0000 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	int32_t                                            SizeX;                                         // 0x0010 (0x0004) [0x0000000000000000]               
	int32_t                                            SizeY;                                         // 0x0014 (0x0004) [0x0000000000000000]               
};

// ScriptStruct Engine.Trigger.CheckpointRecord
// Size: 0x0004
struct ATrigger_FCheckpointRecord
{
	uint32_t                                           bCollideActors : 1;                            // 0x0000 (0x0004) [0x0000000000000000] [0x00000001] 
};

// ScriptStruct Engine.TriggerStreamingLevel.LevelStreamingData
// Size: 0x0010
struct FLevelStreamingData
{
	uint32_t                                           bShouldBeLoaded : 1;                           // 0x0000 (0x0004) [0x0000000000000001] [0x00000001] (CPF_Edit)
	uint32_t                                           bShouldBeVisible : 1;                          // 0x0000 (0x0004) [0x0000000000000001] [0x00000002] (CPF_Edit)
	uint32_t                                           bShouldBlockOnLoad : 1;                        // 0x0000 (0x0004) [0x0000000000000001] [0x00000004] (CPF_Edit)
	uint8_t                                          UnknownData00[0x4];                            // 0x0004 (0x0004) MISSED OFFSET
	class ULevelStreaming*                             Level;                                         // 0x0008 (0x0008) [0x0000000000000001] (CPF_Edit)    
};

// ScriptStruct Engine.UIDataProvider_OnlinePlayerStorage.PlayerStorageArrayProvider
// Size: 0x0010
struct FPlayerStorageArrayProvider
{
	int32_t                                            PlayerStorageId;                               // 0x0000 (0x0004) [0x0000000000000000]               
	uint8_t                                          UnknownData00[0x4];                            // 0x0004 (0x0004) MISSED OFFSET
	class UUIDataProvider_OnlinePlayerStorageArray*    Provider;                                      // 0x0008 (0x0008) [0x0000000000000000]               
};

// ScriptStruct Engine.UIDataStore_DynamicResource.DynamicResourceProviderDefinition
// Size: 0x0020
struct FDynamicResourceProviderDefinition
{
	class FName                                        ProviderTag;                                   // 0x0000 (0x0008) [0x0000000000004000] (CPF_Config)  
	class FString                                      ProviderClassName;                             // 0x0008 (0x0010) [0x0000000000404000] (CPF_Config | CPF_NeedCtorLink)
	class UClass*                                      ProviderClass;                                 // 0x0018 (0x0008) [0x0000000000002000] (CPF_Transient)
};

// ScriptStruct Engine.UIDataStore_GameResource.GameResourceDataProvider
// Size: 0x0028
struct FGameResourceDataProvider
{
	class FName                                        ProviderTag;                                   // 0x0000 (0x0008) [0x0000000000004000] (CPF_Config)  
	class FString                                      ProviderClassName;                             // 0x0008 (0x0010) [0x0000000000404000] (CPF_Config | CPF_NeedCtorLink)
	uint32_t                                           bExpandProviders : 1;                          // 0x0018 (0x0004) [0x0000000000004000] [0x00000001] (CPF_Config)
	uint8_t                                          UnknownData00[0x4];                            // 0x001C (0x0004) MISSED OFFSET
	class UClass*                                      ProviderClass;                                 // 0x0020 (0x0008) [0x0000000000002000] (CPF_Transient)
};

// ScriptStruct Engine.UIDataStore_InputAlias.UIInputKeyData
// Size: 0x0020
struct FUIInputKeyData
{
	struct FRawInputKeyEventData                       InputKeyData;                                  // 0x0000 (0x000C) [0x0000000000004000] (CPF_Config)  
	uint8_t                                          UnknownData00[0x4];                            // 0x000C (0x0004) MISSED OFFSET
	class FString                                      ButtonFontMarkupString;                        // 0x0010 (0x0010) [0x0000000000404000] (CPF_Config | CPF_NeedCtorLink)
};

// ScriptStruct Engine.UIDataStore_InputAlias.UIDataStoreInputAlias
// Size: 0x00E8
struct FUIDataStoreInputAlias
{
	class FName                                        AliasName;                                     // 0x0000 (0x0008) [0x0000000000004000] (CPF_Config)  
	struct FUIInputKeyData                             PlatformInputKeys[7];                          // 0x0008 (0x00E0) [0x0000000000404000] (CPF_Config | CPF_NeedCtorLink)
};

// ScriptStruct Engine.UIDataStore_OnlineGameSearch.GameSearchCfg
// Size: 0x0030
struct FGameSearchCfg
{
	class UClass*                                      GameSearchClass;                               // 0x0000 (0x0008) [0x0000000000000000]               
	class UClass*                                      DefaultGameSettingsClass;                      // 0x0008 (0x0008) [0x0000000000000000]               
	class UClass*                                      SearchResultsProviderClass;                    // 0x0010 (0x0008) [0x0000000000000000]               
	class UUIDataProvider_Settings*                    DesiredSettingsProvider;                       // 0x0018 (0x0008) [0x0000000000000000]               
	class UOnlineGameSearch*                           Search;                                        // 0x0020 (0x0008) [0x0000000000000000]               
	class FName                                        SearchName;                                    // 0x0028 (0x0008) [0x0000000000000000]               
};

// ScriptStruct Engine.UIDataStore_OnlineGameSettings.GameSettingsCfg
// Size: 0x0020
struct FGameSettingsCfg
{
	class UClass*                                      GameSettingsClass;                             // 0x0000 (0x0008) [0x0000000000000000]               
	class UUIDataProvider_Settings*                    Provider;                                      // 0x0008 (0x0008) [0x0000000000000000]               
	class UOnlineGameSettings*                         GameSettings;                                  // 0x0010 (0x0008) [0x0000000000000000]               
	class FName                                        SettingsName;                                  // 0x0018 (0x0008) [0x0000000000000000]               
};

// ScriptStruct Engine.UIDataStore_OnlineStats.RankMetaData
// Size: 0x0018
struct FRankMetaData
{
	class FName                                        RankName;                                      // 0x0000 (0x0008) [0x0000000000000002] (CPF_Const)   
	class FString                                      RankColumnName;                                // 0x0008 (0x0010) [0x0000000000408002] (CPF_Const | CPF_Localized | CPF_NeedCtorLink)
};

// ScriptStruct Engine.UIDataStore_OnlineStats.PlayerNickMetaData
// Size: 0x0018
struct FPlayerNickMetaData
{
	class FName                                        PlayerNickName;                                // 0x0000 (0x0008) [0x0000000000000002] (CPF_Const)   
	class FString                                      PlayerNickColumnName;                          // 0x0008 (0x0010) [0x0000000000408002] (CPF_Const | CPF_Localized | CPF_NeedCtorLink)
};

// ScriptStruct Engine.UIDataStore_Registry.RegistryKeyValuePair
// Size: 0x0020
struct FRegistryKeyValuePair
{
	class FString                                      Key;                                           // 0x0000 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	class FString                                      Value;                                         // 0x0010 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
};

// ScriptStruct Engine.UIDataStore_StringAliasMap.UIMenuInputMap
// Size: 0x0020
struct FUIMenuInputMap
{
	class FName                                        FieldName;                                     // 0x0000 (0x0008) [0x0000000000000000]               
	class FName                                        Set;                                           // 0x0008 (0x0008) [0x0000000000000000]               
	class FString                                      MappedText;                                    // 0x0010 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
};

// ScriptStruct Engine.UIInteraction.UIKeyRepeatData
// Size: 0x0010
struct FUIKeyRepeatData
{
	class FName                                        CurrentRepeatKey;                              // 0x0000 (0x0008) [0x0000000000100000]               
	struct FDouble                                     NextRepeatTime;                                // 0x0008 (0x0008) [0x0000000000100000]               
};

// ScriptStruct Engine.UIInteraction.UIAxisEmulationData
// 0x0004 (0x0010 - 0x0014)
struct FUIAxisEmulationData : FUIKeyRepeatData
{
	uint32_t                                           bEnabled : 1;                                  // 0x0010 (0x0004) [0x0000000000100000] [0x00000001] 
	uint8_t                                          MinAlignmentPadding[0x4];                      // 0x0014 (0x0004) PADDING FOR MINALIGNMENT
};

// ScriptStruct Engine.UISoundTheme.SoundEventMapping
// Size: 0x0010
struct FSoundEventMapping
{
	class FName                                        SoundEventName;                                // 0x0000 (0x0008) [0x0000000000000001] (CPF_Edit)    
	class USoundCue*                                   SoundToPlay;                                   // 0x0008 (0x0008) [0x0000000000000001] (CPF_Edit)    
};

// ScriptStruct Engine.StaticMesh.StaticMeshLODElement
// Size: 0x0018
struct FStaticMeshLODElement
{
	class UMaterialInterface*                          Material;                                      // 0x0000 (0x0008) [0x0000000000000001] (CPF_Edit)    
	uint32_t                                           bEnableShadowCasting : 1;                      // 0x0008 (0x0004) [0x0000000000001001] [0x00000001] (CPF_Edit | CPF_Native)
	uint8_t                                          UnknownData00[0x4];                            // 0x000C (0x0004) MISSED OFFSET
	uint32_t                                           bEnableCollision : 1;                          // 0x0010 (0x0004) [0x0000000000001001] [0x00000001] (CPF_Edit | CPF_Native)
	uint8_t                                          UnknownData01[0x4];                            // 0x0014 (0x0004) MISSED OFFSET
};

// ScriptStruct Engine.StaticMesh.StaticMeshLODInfo
// Size: 0x0010
struct FStaticMeshLODInfo
{
	class TArray<struct FStaticMeshLODElement>         Elements;                                      // 0x0000 (0x0010) [0x0000000000001041] (CPF_Edit | CPF_EditFixedSize | CPF_Native)
};

/*
# ========================================================================================= #
#
# ========================================================================================= #
*/

#ifdef _MSC_VER
#pragma pack(pop)
#endif
