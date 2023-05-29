#pragma once

/**
 * Name: Ark_Survival_Evolved
 * Version: Patch_357.9
 */

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace CG
{
	// --------------------------------------------------
	// # Classes
	// --------------------------------------------------
	/**
	 * BlueprintGeneratedClass ForestKaiju_Character_BP.ForestKaiju_Character_BP_C
	 * Size -> 0x13C0 (FullSize[0x36B8] - InheritedSize[0x22F8])
	 */
	class AForestKaiju_Character_BP_C : public ADino_Character_BP_RootMotion_C
	{
	public:
		class UBoxComponent*                                       PlatformSaddleBuildArea;                                 // 0x22F8(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		class USceneComponent*                                     Target_Head;                                             // 0x2300(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		class USceneComponent*                                     Target_Core;                                             // 0x2308(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		class USceneComponent*                                     Target_Left;                                             // 0x2310(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		class USceneComponent*                                     Target_Right;                                            // 0x2318(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		class USkeletalMeshComponent*                              SpawnInMesh;                                             // 0x2320(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		class UStaticMeshComponent*                                DeathMesh;                                               // 0x2328(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		class UStaticMeshComponent*                                RootRadiusField;                                         // 0x2330(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		class UParticleSystemComponent*                            RootRadiusRing;                                          // 0x2338(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		class USkeletalMeshComponent*                              Shield_RightArm;                                         // 0x2340(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		class USkeletalMeshComponent*                              Shield_LeftArm;                                          // 0x2348(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		class USkeletalMeshComponent*                              Shield_Body;                                             // 0x2350(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		class USkeletalMeshComponent*                              CorruptNodes;                                            // 0x2358(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		class USkeletalMeshComponent*                              RightArm;                                                // 0x2360(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		class USkeletalMeshComponent*                              LeftArm;                                                 // 0x2368(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		class UStaticMeshComponent*                                CenterControlNode;                                       // 0x2370(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		class UStaticMeshComponent*                                RightControlNode;                                        // 0x2378(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		class UStaticMeshComponent*                                LeftControlNode;                                         // 0x2380(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		class UDinoCharacterStatusComponent_ForestKaiju_C*         DinoCharacterStatus_ForestKaiju_C1;                      // 0x2388(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		EForestKaijuMovementMode                                   MovementMode_1;                                          // 0x2390(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		EForestKaijuMovementMode                                   DesiredMovementMode_1;                                   // 0x2391(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_4XVL[0x6];                                   // 0x2392(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UAnimMontage*                                        MovementMontage_1;                                       // 0x2398(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       HadRequestedVelocity_1;                                  // 0x23A0(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       TurnKaijuToFaceActor;                                    // 0x23A1(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       TurnKaijuToFaceLoc;                                      // 0x23A2(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_RLR1[0x5];                                   // 0x23A3(0x0005) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class AActor*                                              KaijuTargetActorToTurn;                                  // 0x23A8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor
		struct FVector                                             KaijuTurnToFaceLoc;                                      // 0x23B0(0x000C) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       RightNodeDestroyed;                                      // 0x23BC(0x0001) Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       LeftNodeDestroyed;                                       // 0x23BD(0x0001) Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       CenterNodeDestroyed;                                     // 0x23BE(0x0001) Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       RightNodeHidden;                                         // 0x23BF(0x0001) Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       LeftNodeHidden;                                          // 0x23C0(0x0001) Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       CenterNodeHidden;                                        // 0x23C1(0x0001) Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_AU8U[0x2];                                   // 0x23C2(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      LeftNodeHealth;                                          // 0x23C4(0x0004) Edit, BlueprintVisible, Net, ZeroConstructor, IsPlainOldData, NoDestructor
		float                                                      LeftNodeHealth_MAX;                                      // 0x23C8(0x0004) Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      RightNodeHealth;                                         // 0x23CC(0x0004) Edit, BlueprintVisible, Net, ZeroConstructor, IsPlainOldData, NoDestructor
		float                                                      RightNodeHealth_MAX;                                     // 0x23D0(0x0004) Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      CenterNodeHealth;                                        // 0x23D4(0x0004) Edit, BlueprintVisible, Net, ZeroConstructor, IsPlainOldData, NoDestructor
		float                                                      CenterNodeHealth_MAX;                                    // 0x23D8(0x0004) Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_66MY[0x4];                                   // 0x23DC(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UMaterialInstanceDynamic*                            CenterNodeDynamicMAT;                                    // 0x23E0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		class UMaterialInstanceDynamic*                            RightNodeDynamicMAT;                                     // 0x23E8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		class UMaterialInstanceDynamic*                            LeftNodeDynamicMAT;                                      // 0x23F0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		struct FLinearColor                                        NodeUnhealthyColor;                                      // 0x23F8(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		struct FLinearColor                                        NodeHealthyColor;                                        // 0x2408(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		struct FVector                                             RiderTPVOffset;                                          // 0x2418(0x000C) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       RiderTPVRight;                                           // 0x2424(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       ServerIsFirstPerson;                                     // 0x2425(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_D9OJ[0x2];                                   // 0x2426(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FVector                                             PrevCameraLocation;                                      // 0x2428(0x000C) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_U8SB[0x4];                                   // 0x2434(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		double                                                     LastTPVCamSwitchTime;                                    // 0x2438(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		struct FVector                                             RiderTPVOffsetDefault;                                   // 0x2440(0x000C) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       GrabAttacking;                                           // 0x244C(0x0001) Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_FII6[0x3];                                   // 0x244D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		double                                                     GrabAttackStartTime;                                     // 0x2450(0x0008) Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      MaxGrabTime;                                             // 0x2458(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      MaxDistanceGrab;                                         // 0x245C(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       HoldingDownRightClick;                                   // 0x2460(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_PZ5P[0x3];                                   // 0x2461(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      GrabAimLimit;                                            // 0x2464(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       GroundTraceHit;                                          // 0x2468(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_B6DO[0x3];                                   // 0x2469(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FVector                                             GroundTraceLoc;                                          // 0x246C(0x000C) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		struct FVector                                             GrabHitBoxStartLoc;                                      // 0x2478(0x000C) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       Fighting;                                                // 0x2484(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_L8VP[0x3];                                   // 0x2485(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      DifficultyLevel;                                         // 0x2488(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       IsTorpid;                                                // 0x248C(0x0001) Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_YLFE[0x3];                                   // 0x248D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      TorpidLife;                                              // 0x2490(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_8BUF[0x4];                                   // 0x2494(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		double                                                     TamedTime;                                               // 0x2498(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       StartLifeSpan;                                           // 0x24A0(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_3K3P[0x3];                                   // 0x24A1(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FLinearColor                                        NodeInactiveColor;                                       // 0x24A4(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       RightNodeActive;                                         // 0x24B4(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       LeftNodeActive;                                          // 0x24B5(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       CenterNodeActive;                                        // 0x24B6(0x0001) Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_JR2Q[0x1];                                   // 0x24B7(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      NodeActiveTime;                                          // 0x24B8(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		bool                                                       HoldingCrouch;                                           // 0x24BC(0x0001) Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_7IHX[0x3];                                   // 0x24BD(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		double                                                     StartTimeHoldingCrouch;                                  // 0x24C0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		TArray<class UAnimMontage*>                                PreventLocomotionAnimMontageList;                        // 0x24C8(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance
		float                                                      MaxRootAttackChargeTime;                                 // 0x24D8(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_M7R4[0x4];                                   // 0x24DC(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		double                                                     LastTimeTamedRootAttack;                                 // 0x24E0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      TamedRootAttackCooldown;                                 // 0x24E8(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_ATOV[0x4];                                   // 0x24EC(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FHUDElement                                         RootAttackChargingHUDEle;                                // 0x24F0(0x0150) Edit, BlueprintVisible, DisableEditOnInstance
		float                                                      ClientRootChargeAmount;                                  // 0x2640(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      RootChargeAmount;                                        // 0x2644(0x0004) Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      MinRootRadius;                                           // 0x2648(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		float                                                      MaxRootRadius;                                           // 0x264C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		float                                                      MinRootedTargets;                                        // 0x2650(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		float                                                      MaxRootedTargets;                                        // 0x2654(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		TArray<class AActor*>                                      RootTargets;                                             // 0x2658(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance
		TArray<class AActor*>                                      RootedAOEBuffs;                                          // 0x2668(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance
		bool                                                       TooCloseToAnotherBuff;                                   // 0x2678(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       EndAIRoot;                                               // 0x2679(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_J01D[0x2];                                   // 0x267A(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FVector                                             LeftArmScale;                                            // 0x267C(0x000C) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		struct FVector                                             RightArmScale;                                           // 0x2688(0x000C) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      RegrowAppendageDelay;                                    // 0x2694(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      AppendageRegrowthRate;                                   // 0x2698(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       ImmuneToDamage;                                          // 0x269C(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       LeftNodeReacted;                                         // 0x269D(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       RightNodeReacted;                                        // 0x269E(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       RightArmCanAttack;                                       // 0x269F(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       LeftArmCanAttack;                                        // 0x26A0(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       DebugMode;                                               // 0x26A1(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_NY9V[0x2];                                   // 0x26A2(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FVector                                             GrabAttackSocketLocation;                                // 0x26A4(0x000C) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      ExplosionDmgTypeMultiplier;                              // 0x26B0(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		float                                                      CrossairAlpha;                                           // 0x26B4(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      MinPlayerGrabAttackRange;                                // 0x26B8(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      MaxPlayerGrabAttackRange;                                // 0x26BC(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		struct FVector                                             LastPlayerGrabAttackTargetLocation;                      // 0x26C0(0x000C) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       ShakeOff;                                                // 0x26CC(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_CSEC[0x3];                                   // 0x26CD(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		double                                                     LastTimeHurtLeftNode;                                    // 0x26D0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      AccumulatedLeftNodeDamage;                               // 0x26D8(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      AccumulatedRightNodeDamage;                              // 0x26DC(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		double                                                     LastTimeHurtRightNode;                                   // 0x26E0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      AccumulatedCenterNodeDamage;                             // 0x26E8(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_R2R2[0x4];                                   // 0x26EC(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		double                                                     LastTimeHurtCenterNode;                                  // 0x26F0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       FollowControlRotation;                                   // 0x26F8(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_HDRF[0x3];                                   // 0x26F9(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FRotator                                            LastDesiredRotation;                                     // 0x26FC(0x000C) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       GrabAttackUseRightArm;                                   // 0x2708(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_ZP48[0x7];                                   // 0x2709(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class AProjPoisonTreeSeed_C*                               ProjPoisonTree;                                          // 0x2710(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       FoundTreeNear;                                           // 0x2718(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_22CZ[0x3];                                   // 0x2719(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FVector                                             ProjectedSeedLoc;                                        // 0x271C(0x000C) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      ProjectedTreeLevelIncrease;                              // 0x2728(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		struct FLinearColor                                        NodeDamageColor;                                         // 0x272C(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_QUNB[0x4];                                   // 0x273C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		double                                                     LeftDamageNodeTime;                                      // 0x2740(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		double                                                     RightDamageNodeTime;                                     // 0x2748(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		double                                                     CenterDamageNodeTime;                                    // 0x2750(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      BlinkNodeInterpDuration;                                 // 0x2758(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_FOX4[0x4];                                   // 0x275C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UAnimMontage*                                        MoveMontage_FwdSprint;                                   // 0x2760(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		class UAnimMontage*                                        MoveMontage_Fwd;                                         // 0x2768(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		class UAnimMontage*                                        MoveMontage_LftSprint;                                   // 0x2770(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		class UAnimMontage*                                        MoveMontage_Lft;                                         // 0x2778(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		class UAnimMontage*                                        MoveMontage_RitSprint;                                   // 0x2780(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		class UAnimMontage*                                        MoveMontage_Rit;                                         // 0x2788(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		class UAnimMontage*                                        MoveMontage_BackSprint;                                  // 0x2790(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		class UAnimMontage*                                        MoveMontage_Back;                                        // 0x2798(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       Protecting;                                              // 0x27A0(0x0001) Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       DoingRootAttack;                                         // 0x27A1(0x0001) Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_0LPZ[0x2];                                   // 0x27A2(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      GrabAttackBlendSpaceLeftRight;                           // 0x27A4(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      GrabAttackBlendSpaceUpDown;                              // 0x27A8(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       GrabAttackStartedAnim;                                   // 0x27AC(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       GrabAttackVinesRetracted;                                // 0x27AD(0x0001) Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_UBMV[0x2];                                   // 0x27AE(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UAnimMontage*                                        MoveMontage_FwdProtect;                                  // 0x27B0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		TArray<struct FSpawnVineRequestData>                       SpawnVineRequests;                                       // 0x27B8(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance
		class UAnimMontage*                                        MoveMontage_IdleProtect;                                 // 0x27C8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		class UAnimMontage*                                        MoveMontage_BackProtect;                                 // 0x27D0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		class UAnimMontage*                                        MoveMontage_MoveLftProtect;                              // 0x27D8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		class UAnimMontage*                                        MoveMontage_MoveRitProtect;                              // 0x27E0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		class UAnimMontage*                                        MoveMontage_TurnLeftProtect;                             // 0x27E8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		class UAnimMontage*                                        MoveMontage_TurnRightProtect;                            // 0x27F0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		class UAnimMontage*                                        MoveMontage_TurnRight;                                   // 0x27F8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		class UAnimMontage*                                        MoveMontage_TurnLeft;                                    // 0x2800(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		class UAnimMontage*                                        MoveMontage_Idle;                                        // 0x2808(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		int32_t                                                    NumSpawnedVines;                                         // 0x2810(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       Stunned;                                                 // 0x2814(0x0001) Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              CurrentAttackIndexReplicated;                            // 0x2815(0x0001) Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, RepNotify, NoDestructor
		bool                                                       UsedRightNodeProtect;                                    // 0x2816(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       UsedLeftNodeProtect;                                     // 0x2817(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       UsedCentralNodeProtect;                                  // 0x2818(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_BJ6J[0x3];                                   // 0x2819(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FVector                                             SpawnLoc;                                                // 0x281C(0x000C) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       GrabAttackPanCamera;                                     // 0x2828(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_N7AZ[0x7];                                   // 0x2829(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UAnimMontage*                                        MoveMontage_TurnSmallLeft;                               // 0x2830(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		class UAnimMontage*                                        MoveMontage_TurnSmallLeftProtect;                        // 0x2838(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		class UAnimMontage*                                        MoveMontage_TurnSmallRight;                              // 0x2840(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		class UAnimMontage*                                        MoveMontage_TurnSmallRightProtect;                       // 0x2848(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		class UParticleSystem*                                     ProtectShieldLoopingFX;                                  // 0x2850(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		class UParticleSystem*                                     ProtectShieldOneShotFX;                                  // 0x2858(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		class UParticleSystemComponent*                            CurrentProtectShieldLoopingFX;                           // 0x2860(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		class UMaterialInstanceDynamic*                            BodyDynamicMAT;                                          // 0x2868(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		class UMaterialInstanceDynamic*                            LegsDynamicMAT;                                          // 0x2870(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		class UMaterialInstanceDynamic*                            NodeDynamicMAT;                                          // 0x2878(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		class UMaterialInstanceDynamic*                            NodeCorruptionDynamicMAT;                                // 0x2880(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      LeftNodeActiveState;                                     // 0x2888(0x0004) Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      RightNodeActiveState;                                    // 0x288C(0x0004) Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      CentralNodeActiveState;                                  // 0x2890(0x0004) Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       RepWantsToRun;                                           // 0x2894(0x0001) Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_BQ9L[0x3];                                   // 0x2895(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UMaterialInstanceDynamic*                            Shield_Body_DynamicMAT;                                  // 0x2898(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		class UMaterialInstanceDynamic*                            Shield_RightArm_DynamicMAT;                              // 0x28A0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		class UMaterialInstanceDynamic*                            Shield_LeftArm_DynamicMAT;                               // 0x28A8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      CurrentShieldStatusInterp;                               // 0x28B0(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_PR4G[0x4];                                   // 0x28B4(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UAnimMontage*                                        MoveMontage_MoveFwdOutToIdle;                            // 0x28B8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		class UAnimMontage*                                        MoveMontage_IdleInToMoveFwd;                             // 0x28C0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		class UAnimMontage*                                        MoveMontage_MoveFwdOutToIdleProtect;                     // 0x28C8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		class UAnimMontage*                                        MoveMontage_IdleInToMoveFwdProtect;                      // 0x28D0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		class UAnimMontage*                                        MoveMontage_MoveBackOutToIdle;                           // 0x28D8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		class UAnimMontage*                                        MoveMontage_IdleInToMoveBack;                            // 0x28E0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		class UAnimMontage*                                        MoveMontage_MoveBackOutToIdleProtect;                    // 0x28E8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		class UAnimMontage*                                        MoveMontage_IdleInToMoveBackProtect;                     // 0x28F0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		struct FVector                                             TPVOffsetGrabAttack;                                     // 0x28F8(0x000C) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      AccumulatedDamageDuringProtecting;                       // 0x2904(0x0004) Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      LeftArmDissolvePercent;                                  // 0x2908(0x0004) Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_6WZY[0x4];                                   // 0x290C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UMaterialInstanceDynamic*                            LeftArmMat1;                                             // 0x2910(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		class USkeletalMeshComponent*                              DissolvingLeftArm;                                       // 0x2918(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		class USkeletalMeshComponent*                              DissolvingRightArm;                                      // 0x2920(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		class UMaterialInstanceDynamic*                            LeftArmMat2;                                             // 0x2928(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		class UMaterialInstanceDynamic*                            RightArmMat2;                                            // 0x2930(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      RightArmDissolvePercent;                                 // 0x2938(0x0004) Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_13JM[0x4];                                   // 0x293C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UMaterialInstanceDynamic*                            RightArmMat1;                                            // 0x2940(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       GrabAttackGrabbedTargets;                                // 0x2948(0x0001) Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_8P0N[0x3];                                   // 0x2949(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    RandomRootTargetInt;                                     // 0x294C(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		class UMaterialInstanceDynamic*                            RootRadiusRingDynamicMAT;                                // 0x2950(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      CurrentRootRingRadius;                                   // 0x2958(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       ShowRootRadius;                                          // 0x295C(0x0001) Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       PlayingIntro;                                            // 0x295D(0x0001) Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, SaveGame, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_JV5U[0x2];                                   // 0x295E(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      TekShieldDamageMultiplier;                               // 0x2960(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      TameEffectivenessMinHealthAddition;                      // 0x2964(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		float                                                      TameEffectivenessMaxHealthAddition;                      // 0x2968(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		float                                                      KingKaijuOutputDamageMultiplier;                         // 0x296C(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      FireDmgTypeMultiplier;                                   // 0x2970(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_GHKL[0x4];                                   // 0x2974(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UMaterialInstanceDynamic*                            DeathMeshDynamicMAT;                                     // 0x2978(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       BeginDying;                                              // 0x2980(0x0001) Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_595L[0x3];                                   // 0x2981(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      DeathMeshMaterialValue;                                  // 0x2984(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		class UMaterialInstanceDynamic*                            RightArmDynamicMIC;                                      // 0x2988(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		class UMaterialInstanceDynamic*                            LeftArmDynamicMIC;                                       // 0x2990(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		class UMaterialInstanceDynamic*                            FurDynamicMIC;                                           // 0x2998(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		class UMaterialInstanceDynamic*                            DeathMeshArmStatusDynamicMIC;                            // 0x29A0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		class UMaterialInstanceDynamic*                            SpawnInDynamicMIC;                                       // 0x29A8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      SpawnInDynamicMICValue;                                  // 0x29B0(0x0004) Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_2HMV[0x4];                                   // 0x29B4(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UMaterialInstanceDynamic*                            LeftArmSpawnDynamicMIC;                                  // 0x29B8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		class UMaterialInstanceDynamic*                            RightArmSpawnDynamicMIC;                                 // 0x29C0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		class UMaterialInstanceDynamic*                            RightArmFurDynamicMIC;                                   // 0x29C8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		class UMaterialInstanceDynamic*                            LeftArmFurDynamicMIC;                                    // 0x29D0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		class ATargetPoint*                                        LeashActor;                                              // 0x29D8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       TargetIsInAggroList;                                     // 0x29E0(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_MZK8[0x3];                                   // 0x29E1(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    VineGrabAttackIndex;                                     // 0x29E4(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       RequestingGrabAttack;                                    // 0x29E8(0x0001) Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_15JU[0x3];                                   // 0x29E9(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    NumRootTargets;                                          // 0x29EC(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		int32_t                                                    CurrentRootTargetIndex;                                  // 0x29F0(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      DamageMultiplierForSinglePlayer;                         // 0x29F4(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      TimeBeforeDestroyWhenNoTarget;                           // 0x29F8(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		bool                                                       Despawning;                                              // 0x29FC(0x0001) Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_9VLZ[0x3];                                   // 0x29FD(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      DamageMultiplierFromTurretDamage;                        // 0x2A00(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		float                                                      VerticalDistanceThresholdToDamageKaiju;                  // 0x2A04(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		double                                                     GrabAttackStartedAnimTime;                               // 0x2A08(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		class AActor*                                              ArenaManager;                                            // 0x2A10(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      KKEleNodeMultiplier;                                     // 0x2A18(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       OneTimeOnly;                                             // 0x2A1C(0x0001) Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, SaveGame, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_LHVE[0x3];                                   // 0x2A1D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      HorizontalDistanceToDamageKaijuThreshold;                // 0x2A20(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      GrabAttackStamPercentCost;                               // 0x2A24(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		double                                                     LastTimeDamageThrottleCheck;                             // 0x2A28(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      AccumulatedDmgSinceLastThrottle;                         // 0x2A30(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      MaxPercentHealthThrottledPerCheck;                       // 0x2A34(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       UseTamedPhysics;                                         // 0x2A38(0x0001) Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, RepNotify, NoDestructor
		unsigned char                                              UnknownData_YZVX[0x3];                                   // 0x2A39(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    SavedTamingEffectivenessLvl;                             // 0x2A3C(0x0004) Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, SaveGame, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		bool                                                       CompletedFirstTameSetup;                                 // 0x2A40(0x0001) Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, SaveGame, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_05JF[0x3];                                   // 0x2A41(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      TotalAccumulatedDamage;                                  // 0x2A44(0x0004) Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, SaveGame, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		float                                                      WildKaijuDmgMultiplierToTamedKaiju;                      // 0x2A48(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       LeftArmDetached;                                         // 0x2A4C(0x0001) Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       RightArmDetached;                                        // 0x2A4D(0x0001) Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_NCCU[0x2];                                   // 0x2A4E(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      DownloadSicknessDamageMultiplier;                        // 0x2A50(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		int32_t                                                    Temp_int_Loop_Counter_Variable;                          // 0x2A54(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		int32_t                                                    CallFunc_Add_IntInt_ReturnValue;                         // 0x2A58(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_EqualEqual_BoolBool_ReturnValue;                // 0x2A5C(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_EqualEqual_BoolBool_ReturnValue2;               // 0x2A5D(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_EqualEqual_BoolBool_ReturnValue3;               // 0x2A5E(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_EqualEqual_FloatFloat_ReturnValue;              // 0x2A5F(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_EqualEqual_BoolBool_ReturnValue4;               // 0x2A60(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_EqualEqual_BoolBool_ReturnValue5;               // 0x2A61(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_EqualEqual_BoolBool_ReturnValue6;               // 0x2A62(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_EqualEqual_BoolBool_ReturnValue7;               // 0x2A63(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_EqualEqual_BoolBool_ReturnValue8;               // 0x2A64(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_EqualEqual_BoolBool_ReturnValue9;               // 0x2A65(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_EqualEqual_BoolBool_ReturnValue10;              // 0x2A66(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_EqualEqual_BoolBool_ReturnValue11;              // 0x2A67(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_EqualEqual_FloatFloat_ReturnValue2;             // 0x2A68(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_EqualEqual_BoolBool_ReturnValue12;              // 0x2A69(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_EqualEqual_BoolBool_ReturnValue13;              // 0x2A6A(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_EqualEqual_BoolBool_ReturnValue14;              // 0x2A6B(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_EqualEqual_BoolBool_ReturnValue15;              // 0x2A6C(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_722X[0x3];                                   // 0x2A6D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    Temp_int_Variable;                                       // 0x2A70(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		int32_t                                                    CallFunc_Add_IntInt_ReturnValue2;                        // 0x2A74(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		int32_t                                                    Temp_int_Variable2;                                      // 0x2A78(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       K2Node_SwitchInteger_CmpSuccess;                         // 0x2A7C(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_EGYS[0x3];                                   // 0x2A7D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    CallFunc_Add_IntInt_ReturnValue3;                        // 0x2A80(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		int32_t                                                    Temp_int_Loop_Counter_Variable2;                         // 0x2A84(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		int32_t                                                    Temp_int_Variable3;                                      // 0x2A88(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		int32_t                                                    CallFunc_Add_IntInt_ReturnValue4;                        // 0x2A8C(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       K2Node_SwitchInteger2_CmpSuccess;                        // 0x2A90(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_XH8W[0x3];                                   // 0x2A91(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    CallFunc_Add_IntInt_ReturnValue5;                        // 0x2A94(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		int32_t                                                    Temp_int_Loop_Counter_Variable3;                         // 0x2A98(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		int32_t                                                    Temp_int_Variable4;                                      // 0x2A9C(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		int32_t                                                    CallFunc_Add_IntInt_ReturnValue6;                        // 0x2AA0(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		int32_t                                                    CallFunc_Add_IntInt_ReturnValue7;                        // 0x2AA4(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       Temp_bool_Variable;                                      // 0x2AA8(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_Not_PreBool_ReturnValue;                        // 0x2AA9(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_XQH0[0x6];                                   // 0x2AAA(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class AActor*                                              K2Node_Event_ArenaManager;                               // 0x2AB0(0x0008) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		float                                                      K2Node_Event_DeltaSeconds;                               // 0x2AB8(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		float                                                      CallFunc_Add_FloatFloat_ReturnValue;                     // 0x2ABC(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		float                                                      CallFunc_FClamp_ReturnValue;                             // 0x2AC0(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_EqualEqual_FloatFloat_ReturnValue3;             // 0x2AC4(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_IVNC[0x3];                                   // 0x2AC5(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UMaterialInstanceDynamic*                            CallFunc_CreateDynamicMaterialInstance_ReturnValue;      // 0x2AC8(0x0008) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		class UMaterialInstanceDynamic*                            CallFunc_CreateDynamicMaterialInstance_ReturnValue2;     // 0x2AD0(0x0008) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		int32_t                                                    K2Node_CustomEvent_Node4;                                // 0x2AD8(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		float                                                      K2Node_CustomEvent_Alpha;                                // 0x2ADC(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       K2Node_CustomEvent_Activated;                            // 0x2AE0(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       K2Node_CustomEvent_DamageNode;                           // 0x2AE1(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_MRPB[0x6];                                   // 0x2AE2(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UMaterialInstanceDynamic*                            CallFunc_CreateDynamicMaterialInstance_ReturnValue3;     // 0x2AE8(0x0008) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		struct FLinearColor                                        CallFunc_LinearColorLerp_ReturnValue;                    // 0x2AF0(0x0010) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       K2Node_CustomEvent_Hide;                                 // 0x2B00(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       K2Node_CustomEvent_Right;                                // 0x2B01(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_6UMZ[0x6];                                   // 0x2B02(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UMaterialInstanceDynamic*                            K2Node_Select_ReturnValue;                               // 0x2B08(0x0008) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       K2Node_Select_CmpSuccess;                                // 0x2B10(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       K2Node_CustomEvent_IsFirstPerson;                        // 0x2B11(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_09FY[0x2];                                   // 0x2B12(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FVector                                             K2Node_CustomEvent_CameraLocation;                       // 0x2B14(0x000C) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_IsServer_ReturnValue;                           // 0x2B20(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_6WJC[0x7];                                   // 0x2B21(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<EObjectTypeQuery>                                   K2Node_MakeArray_Array;                                  // 0x2B28(0x0010) ZeroConstructor, Transient, DuplicateTransient
		struct FVector                                             CallFunc_GetSocketLocation_ReturnValue;                  // 0x2B38(0x000C) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_8UPQ[0x4];                                   // 0x2B44(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UWorld*                                              CallFunc_K2_GetWorld_ReturnValue;                        // 0x2B48(0x0008) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		float                                                      CallFunc_TimeSince_ReturnValue;                          // 0x2B50(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		float                                                      CallFunc_FClamp_ReturnValue2;                            // 0x2B54(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		float                                                      CallFunc_Divide_FloatFloat_ReturnValue;                  // 0x2B58(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_DoAttack_ReturnValue;                           // 0x2B5C(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_H59N[0x3];                                   // 0x2B5D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      CallFunc_Lerp_ReturnValue;                               // 0x2B60(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		struct FVector                                             K2Node_CustomEvent_AimLoc;                               // 0x2B64(0x000C) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       K2Node_CustomEvent_AimHit;                               // 0x2B70(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_ACN8[0x3];                                   // 0x2B71(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FVector                                             CallFunc_Subtract_VectorVector_ReturnValue;              // 0x2B74(0x000C) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		struct FVector                                             CallFunc_Normal_ReturnValue;                             // 0x2B80(0x000C) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		EDesertKaiju_ControlNodes                                  K2Node_CustomEvent_Node3;                                // 0x2B8C(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       K2Node_CustomEvent_Expose;                               // 0x2B8D(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_0875[0x2];                                   // 0x2B8E(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FVector                                             CallFunc_Multiply_VectorFloat_ReturnValue;               // 0x2B90(0x000C) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       K2Node_SwitchEnum_CmpSuccess;                            // 0x2B9C(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_YMPS[0x3];                                   // 0x2B9D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FVector                                             CallFunc_Add_VectorVector_ReturnValue;                   // 0x2BA0(0x000C) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_VXPT[0x4];                                   // 0x2BAC(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class AActor*>                                      CallFunc_BoxTraceSingleForObjects_ActorsToIgnore_RefProperty; // 0x2BB0(0x0010) OutParm, ZeroConstructor, Transient, DuplicateTransient, ReferenceParm
		struct FHitResult                                          CallFunc_BoxTraceSingleForObjects_OutHit;                // 0x2BC0(0x0088) Transient, DuplicateTransient
		bool                                                       CallFunc_BoxTraceSingleForObjects_ReturnValue;           // 0x2C48(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		EDesertKaiju_ControlNodes                                  K2Node_CustomEvent_Node2;                                // 0x2C49(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_UJL4[0x2];                                   // 0x2C4A(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    CallFunc_Conv_ByteToInt_ReturnValue;                     // 0x2C4C(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       K2Node_SwitchEnum2_CmpSuccess;                           // 0x2C50(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_R64F[0x3];                                   // 0x2C51(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      CallFunc_Divide_FloatFloat_ReturnValue2;                 // 0x2C54(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		float                                                      CallFunc_Divide_FloatFloat_ReturnValue3;                 // 0x2C58(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		float                                                      CallFunc_Divide_FloatFloat_ReturnValue4;                 // 0x2C5C(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		ENetworkModeResult                                         CallFunc_IsRunningOnServer_OutNetworkMode;               // 0x2C60(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       K2Node_SwitchEnum3_CmpSuccess;                           // 0x2C61(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_DoAttack_ReturnValue2;                          // 0x2C62(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_C9GT[0x5];                                   // 0x2C63(0x0005) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		double                                                     CallFunc_GetGameTimeInSeconds_ReturnValue;               // 0x2C68(0x0008) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		class UWorld*                                              CallFunc_K2_GetWorld_ReturnValue2;                       // 0x2C70(0x0008) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		double                                                     CallFunc_GetGameTimeInSeconds_ReturnValue2;              // 0x2C78(0x0008) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_IsTimeSince_ReturnValue;                        // 0x2C80(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_1URS[0x7];                                   // 0x2C81(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		double                                                     CallFunc_GetGameTimeInSeconds_ReturnValue3;              // 0x2C88(0x0008) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       K2Node_CustomEvent_Prevent;                              // 0x2C90(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_2AUI[0x7];                                   // 0x2C91(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		double                                                     CallFunc_GetGameTimeInSeconds_ReturnValue4;              // 0x2C98(0x0008) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		ENetworkModeResult                                         CallFunc_CanRunCosmeticEvents_OutNetworkMode;            // 0x2CA0(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       K2Node_SwitchEnum4_CmpSuccess;                           // 0x2CA1(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_MWGI[0x6];                                   // 0x2CA2(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UWorld*                                              CallFunc_K2_GetWorld_ReturnValue3;                       // 0x2CA8(0x0008) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_IsTimeSince_ReturnValue2;                       // 0x2CB0(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_Is_Root_Attacking_IsAttacking;                  // 0x2CB1(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_Not_PreBool_ReturnValue2;                       // 0x2CB2(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_IsServer_ReturnValue2;                          // 0x2CB3(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_BooleanAND_ReturnValue;                         // 0x2CB4(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_T9Z1[0x3];                                   // 0x2CB5(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      CallFunc_GetRootAttackChargeLEvel_Value;                 // 0x2CB8(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		float                                                      CallFunc_GetRootAttackChargeLEvel_Percent;               // 0x2CBC(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_BooleanAND_ReturnValue2;                        // 0x2CC0(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_IsServer_ReturnValue3;                          // 0x2CC1(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_523N[0x2];                                   // 0x2CC2(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      CallFunc_FInterpTo_ReturnValue;                          // 0x2CC4(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		class UWorld*                                              CallFunc_K2_GetWorld_ReturnValue4;                       // 0x2CC8(0x0008) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		struct FVector                                             CallFunc_K2_GetActorLocation_ReturnValue;                // 0x2CD0(0x000C) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		float                                                      CallFunc_GetRootAttackChargeLEvel_Value2;                // 0x2CDC(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		float                                                      CallFunc_GetRootAttackChargeLEvel_Percent2;              // 0x2CE0(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		float                                                      CallFunc_Lerp_ReturnValue2;                              // 0x2CE4(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		TArray<class AActor*>                                      CallFunc_ServerOctreeOverlapActors_ReturnValue;          // 0x2CE8(0x0010) ZeroConstructor, Transient, DuplicateTransient
		int32_t                                                    CallFunc_Array_Length_ReturnValue;                       // 0x2CF8(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_0VU6[0x4];                                   // 0x2CFC(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class AActor*                                              CallFunc_Array_Get_Item;                                 // 0x2D00(0x0008) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_Less_IntInt_ReturnValue;                        // 0x2D08(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_DAHB[0x7];                                   // 0x2D09(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class APrimalCharacter*                                    K2Node_DynamicCast_AsPrimalCharacter;                    // 0x2D10(0x0008) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       K2Node_DynamicCast_CastSuccess;                          // 0x2D18(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_BOM2[0x7];                                   // 0x2D19(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class APrimalDinoCharacter*                                K2Node_DynamicCast_AsPrimalDinoCharacter;                // 0x2D20(0x0008) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       K2Node_DynamicCast2_CastSuccess;                         // 0x2D28(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_556F[0x7];                                   // 0x2D29(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class AShooterCharacter*                                   K2Node_DynamicCast_AsShooterCharacter;                   // 0x2D30(0x0008) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       K2Node_DynamicCast3_CastSuccess;                         // 0x2D38(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_BPIsTamed_ReturnValue;                          // 0x2D39(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_HasCantRootBuff_ReturnValue;                    // 0x2D3A(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_XJN2[0x5];                                   // 0x2D3B(0x0005) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class APrimalDinoCharacter*                                K2Node_DynamicCast_AsPrimalDinoCharacter2;               // 0x2D40(0x0008) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       K2Node_DynamicCast4_CastSuccess;                         // 0x2D48(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_Array_RemoveItem_ReturnValue;                   // 0x2D49(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_Array_RemoveItem_ReturnValue2;                  // 0x2D4A(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_O6U4[0x1];                                   // 0x2D4B(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      CallFunc_GetRootAttackChargeLEvel_Value3;                // 0x2D4C(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		float                                                      CallFunc_GetRootAttackChargeLEvel_Percent3;              // 0x2D50(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		float                                                      CallFunc_Lerp_ReturnValue3;                              // 0x2D54(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		int32_t                                                    CallFunc_FFloor_ReturnValue;                             // 0x2D58(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		int32_t                                                    CallFunc_Array_Length_ReturnValue2;                      // 0x2D5C(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_LessEqual_IntInt_ReturnValue;                   // 0x2D60(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_IsCurrentlyPlayingAttackAnimation_ReturnValue;  // 0x2D61(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_Not_PreBool_ReturnValue3;                       // 0x2D62(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_BooleanAND_ReturnValue3;                        // 0x2D63(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_EqualEqual_ObjectObject_ReturnValue;            // 0x2D64(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_Array_RemoveItem_ReturnValue3;                  // 0x2D65(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_EqualEqual_IntInt_ReturnValue;                  // 0x2D66(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_BooleanOR_ReturnValue;                          // 0x2D67(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		TArray<class AActor*>                                      CallFunc_SortActorsByDistance_ReturnValue;               // 0x2D68(0x0010) ZeroConstructor, Transient, DuplicateTransient
		int32_t                                                    CallFunc_Array_Length_ReturnValue3;                      // 0x2D78(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_EqualEqual_IntInt_ReturnValue2;                 // 0x2D7C(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_EqualEqual_ObjectObject_ReturnValue2;           // 0x2D7D(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_IsServer_ReturnValue4;                          // 0x2D7E(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_Array_Contains_ReturnValue;                     // 0x2D7F(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_Array_RemoveItem_ReturnValue4;                  // 0x2D80(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_Array_Contains_ReturnValue2;                    // 0x2D81(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_LRVQ[0x6];                                   // 0x2D82(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UWorld*                                              CallFunc_K2_GetWorld_ReturnValue5;                       // 0x2D88(0x0008) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		struct FVector                                             CallFunc_MakeVector_ReturnValue;                         // 0x2D90(0x000C) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		struct FVector                                             CallFunc_MakeVector_ReturnValue2;                        // 0x2D9C(0x000C) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		int32_t                                                    CallFunc_Array_Length_ReturnValue4;                      // 0x2DA8(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_P0OF[0x4];                                   // 0x2DAC(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class AActor*                                              CallFunc_Array_Get_Item2;                                // 0x2DB0(0x0008) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_Less_IntInt_ReturnValue2;                       // 0x2DB8(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_BYNM[0x3];                                   // 0x2DB9(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FVector                                             CallFunc_K2_GetActorLocation_ReturnValue2;               // 0x2DBC(0x000C) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		int32_t                                                    CallFunc_Array_Length_ReturnValue5;                      // 0x2DC8(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_Greater_IntInt_ReturnValue;                     // 0x2DCC(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_DoAttack_ReturnValue3;                          // 0x2DCD(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_42OB[0x2];                                   // 0x2DCE(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		double                                                     CallFunc_GetGameTimeInSeconds_ReturnValue5;              // 0x2DD0(0x0008) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		struct FVector                                             CallFunc_RegrowTick_OutScale;                            // 0x2DD8(0x000C) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_RegrowTick_Complete;                            // 0x2DE4(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       K2Node_CustomEvent_LeftArm2;                             // 0x2DE5(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_2ELJ[0x2];                                   // 0x2DE6(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FVector                                             CallFunc_RegrowTick_OutScale2;                           // 0x2DE8(0x000C) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_RegrowTick_Complete2;                           // 0x2DF4(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_YRRL[0x3];                                   // 0x2DF5(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UPrimalAIState*                                      CallFunc_GetActiveState_ReturnValue;                     // 0x2DF8(0x0008) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		class UForestKaiju_AttackAIState_Grab_C*                   K2Node_DynamicCast_AsForestKaiju_AttackAIState_Grab_C;   // 0x2E00(0x0008) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       K2Node_DynamicCast5_CastSuccess;                         // 0x2E08(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_LYLR[0x7];                                   // 0x2E09(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UPrimalAIState*                                      CallFunc_GetActiveState_ReturnValue2;                    // 0x2E10(0x0008) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		class UForestKaiju_AttackAIState_Grab_C*                   K2Node_DynamicCast_AsForestKaiju_AttackAIState_Grab_C2;  // 0x2E18(0x0008) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       K2Node_DynamicCast6_CastSuccess;                         // 0x2E20(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_XRFI[0x3];                                   // 0x2E21(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FVector                                             K2Node_CustomEvent_Start2;                               // 0x2E24(0x000C) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		struct FVector                                             K2Node_CustomEvent_end2;                                 // 0x2E30(0x000C) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		struct FLinearColor                                        K2Node_CustomEvent_Color6;                               // 0x2E3C(0x0010) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		float                                                      K2Node_CustomEvent_DurationSeconds2;                     // 0x2E4C(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		struct FVector                                             K2Node_CustomEvent_Start;                                // 0x2E50(0x000C) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		struct FVector                                             K2Node_CustomEvent_End;                                  // 0x2E5C(0x000C) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		struct FLinearColor                                        K2Node_CustomEvent_Color5;                               // 0x2E68(0x0010) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		float                                                      K2Node_CustomEvent_DurationSeconds;                      // 0x2E78(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_IsClient_ReturnValue;                           // 0x2E7C(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_IsStandalone_ReturnValue;                       // 0x2E7D(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_BooleanOR_ReturnValue2;                         // 0x2E7E(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_7784[0x1];                                   // 0x2E7F(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class APlayerController*                                   CallFunc_GetPlayerController_ReturnValue;                // 0x2E80(0x0008) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       K2Node_CustomEvent_TPVRight;                             // 0x2E88(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_JQWX[0x3];                                   // 0x2E89(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FVector                                             CallFunc_GetCameraLocation_ReturnValue;                  // 0x2E8C(0x000C) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_Not_PreBool_ReturnValue4;                       // 0x2E98(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_BooleanAND_ReturnValue4;                        // 0x2E99(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_Not_PreBool_ReturnValue5;                       // 0x2E9A(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_BooleanAND_ReturnValue5;                        // 0x2E9B(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_BooleanOR_ReturnValue3;                         // 0x2E9C(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_EXKW[0x3];                                   // 0x2E9D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FRotator                                            CallFunc_GetControlRotation_ReturnValue;                 // 0x2EA0(0x000C) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		struct FVector                                             K2Node_CustomEvent_Location;                             // 0x2EAC(0x000C) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		class UPrimalAIState*                                      CallFunc_GetActiveState_ReturnValue3;                    // 0x2EB8(0x0008) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		class UForestKaiju_AttackState_AttackRoot_C*               K2Node_DynamicCast_AsForestKaiju_AttackState_AttackRoot_C; // 0x2EC0(0x0008) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       K2Node_DynamicCast7_CastSuccess;                         // 0x2EC8(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_LPF4[0x7];                                   // 0x2EC9(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UPrimalAIState*                                      CallFunc_GetActiveState_ReturnValue4;                    // 0x2ED0(0x0008) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		class UPrimalAIState*                                      CallFunc_GetActiveState_ReturnValue5;                    // 0x2ED8(0x0008) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		class UForestKaiju_AttackState_AttackRoot_C*               K2Node_DynamicCast_AsForestKaiju_AttackState_AttackRoot_C2; // 0x2EE0(0x0008) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       K2Node_DynamicCast8_CastSuccess;                         // 0x2EE8(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_5J11[0x7];                                   // 0x2EE9(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UForestKaiju_AttackState_AttackRoot_C*               K2Node_DynamicCast_AsForestKaiju_AttackState_AttackRoot_C3; // 0x2EF0(0x0008) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       K2Node_DynamicCast9_CastSuccess;                         // 0x2EF8(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_CLUK[0x3];                                   // 0x2EF9(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      K2Node_CustomEvent_Count;                                // 0x2EFC(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		struct FVector                                             K2Node_CustomEvent_Loc2;                                 // 0x2F00(0x000C) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		EDesertKaiju_ControlNodes                                  K2Node_CustomEvent_Node;                                 // 0x2F0C(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_YP54[0x3];                                   // 0x2F0D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UParticleSystemComponent*                            CallFunc_SpawnEmitterAttached_ReturnValue;               // 0x2F10(0x0008) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		int32_t                                                    CallFunc_Conv_ByteToInt_ReturnValue2;                    // 0x2F18(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       K2Node_SwitchEnum5_CmpSuccess;                           // 0x2F1C(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_IsServer_ReturnValue5;                          // 0x2F1D(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_VM9L[0x2];                                   // 0x2F1E(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FLinearColor                                        K2Node_CustomEvent_Color4;                               // 0x2F20(0x0010) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		struct FLinearColor                                        K2Node_CustomEvent_Color3;                               // 0x2F30(0x0010) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		struct FLinearColor                                        K2Node_CustomEvent_Color2;                               // 0x2F40(0x0010) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       K2Node_CustomEvent_Protecting2;                          // 0x2F50(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_Not_PreBool_ReturnValue6;                       // 0x2F51(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_EqualEqual_BoolBool_ReturnValue16;              // 0x2F52(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_IsCurrentlyPlayingAttackAnimation_ReturnValue2; // 0x2F53(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_BooleanOR_ReturnValue4;                         // 0x2F54(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       K2Node_CustomEvent_Value4;                               // 0x2F55(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_BooleanOR_ReturnValue5;                         // 0x2F56(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_EqualEqual_BoolBool_ReturnValue17;              // 0x2F57(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       K2Node_CustomEvent_RightArm;                             // 0x2F58(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_X4PA[0x3];                                   // 0x2F59(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      K2Node_CustomEvent_LeftRight;                            // 0x2F5C(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		float                                                      K2Node_CustomEvent_UpDown;                               // 0x2F60(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_1EXO[0x4];                                   // 0x2F64(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class APrimalCharacter*>                            K2Node_CustomEvent_Targets2;                             // 0x2F68(0x0010) ZeroConstructor, Transient, DuplicateTransient
		int32_t                                                    CallFunc_Array_Length_ReturnValue6;                      // 0x2F78(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_5CVC[0x4];                                   // 0x2F7C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		double                                                     CallFunc_GetGameTimeInSeconds_ReturnValue6;              // 0x2F80(0x0008) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_EqualEqual_DoubleDouble_ReturnValue;            // 0x2F88(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_S5UI[0x3];                                   // 0x2F89(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FName                                                CallFunc_GetGrabAttackVineSocketName_Name;               // 0x2F8C(0x0008) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		struct FVector                                             CallFunc_GetSocketLocation_ReturnValue2;                 // 0x2F94(0x000C) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		int32_t                                                    Temp_int_Loop_Counter_Variable4;                         // 0x2FA0(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_Less_IntInt_ReturnValue3;                       // 0x2FA4(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_W3BZ[0x3];                                   // 0x2FA5(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class APrimalCharacter*                                    CallFunc_Array_Get_Item3;                                // 0x2FA8(0x0008) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		int32_t                                                    CallFunc_Add_IntInt_ReturnValue8;                        // 0x2FB0(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_IsServer_ReturnValue6;                          // 0x2FB4(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_IsValid_ReturnValue;                            // 0x2FB5(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_OOJ2[0x2];                                   // 0x2FB6(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UAnimMontage*                                        CallFunc_GetCurrentMontage_ReturnValue;                  // 0x2FB8(0x0008) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		float                                                      CallFunc_PlayAnimEx_ReturnValue;                         // 0x2FC0(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_5HHQ[0x4];                                   // 0x2FC4(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class AController*                                         CallFunc_GetController_ReturnValue;                      // 0x2FC8(0x0008) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		class FName                                                CallFunc_MakeLiteralName_ReturnValue;                    // 0x2FD0(0x0008) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		class AForestKaiju_AIController_BP_C*                      K2Node_DynamicCast_AsForestKaiju_AIController_BP_C;      // 0x2FD8(0x0008) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       K2Node_DynamicCast10_CastSuccess;                        // 0x2FE0(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_35E4[0x7];                                   // 0x2FE1(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UBlackboardComponent*                                CallFunc_GetBlackboard_ReturnValue;                      // 0x2FE8(0x0008) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_EqualEqual_ByteByte_ReturnValue;                // 0x2FF0(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_NotEqual_ByteByte_ReturnValue;                  // 0x2FF1(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_6I2P[0x2];                                   // 0x2FF2(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      CallFunc_PlayAnimEx_ReturnValue2;                        // 0x2FF4(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		float                                                      CallFunc_PlayAnimEx_ReturnValue3;                        // 0x2FF8(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_SCYX[0x4];                                   // 0x2FFC(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UAnimMontage*                                        CallFunc_GetCurrentMontage_ReturnValue2;                 // 0x3000(0x0008) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_IsValid_ReturnValue2;                           // 0x3008(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_EqualEqual_ObjectObject_ReturnValue3;           // 0x3009(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       K2Node_CustomEvent_Protecting;                           // 0x300A(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_IsValid_ReturnValue3;                           // 0x300B(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_Not_PreBool_ReturnValue7;                       // 0x300C(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_EqualEqual_BoolBool_ReturnValue18;              // 0x300D(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_Not_PreBool_ReturnValue8;                       // 0x300E(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_BooleanAND_ReturnValue6;                        // 0x300F(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		struct FLinearColor                                        K2Node_CustomEvent_color;                                // 0x3010(0x0010) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       K2Node_Event_bNewIsRunning;                              // 0x3020(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_EqualEqual_BoolBool_ReturnValue19;              // 0x3021(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_CFA9[0x2];                                   // 0x3022(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      CallFunc_PlayAnimEx_ReturnValue4;                        // 0x3024(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		float                                                      CallFunc_PlayAnimEx_ReturnValue5;                        // 0x3028(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_BooleanOR_ReturnValue6;                         // 0x302C(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_3ROA[0x3];                                   // 0x302D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UAnimMontage*                                        CallFunc_GetCurrentMontage_ReturnValue3;                 // 0x3030(0x0008) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_EqualEqual_ObjectObject_ReturnValue4;           // 0x3038(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_EqualEqual_ObjectObject_ReturnValue5;           // 0x3039(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_EqualEqual_ObjectObject_ReturnValue6;           // 0x303A(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_EqualEqual_ObjectObject_ReturnValue7;           // 0x303B(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_BooleanOR_ReturnValue7;                         // 0x303C(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_BooleanOR_ReturnValue8;                         // 0x303D(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_EqualEqual_ObjectObject_ReturnValue8;           // 0x303E(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_BooleanOR_ReturnValue9;                         // 0x303F(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_EqualEqual_ObjectObject_ReturnValue9;           // 0x3040(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_BooleanOR_ReturnValue10;                        // 0x3041(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_EqualEqual_ObjectObject_ReturnValue10;          // 0x3042(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_BooleanOR_ReturnValue11;                        // 0x3043(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_EqualEqual_ObjectObject_ReturnValue11;          // 0x3044(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_BooleanOR_ReturnValue12;                        // 0x3045(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_EqualEqual_ObjectObject_ReturnValue12;          // 0x3046(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_BooleanOR_ReturnValue13;                        // 0x3047(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_EqualEqual_ObjectObject_ReturnValue13;          // 0x3048(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_BooleanOR_ReturnValue14;                        // 0x3049(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_SZ2G[0x2];                                   // 0x304A(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      CallFunc_SelectFloat_ReturnValue;                        // 0x304C(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		class FString                                              CallFunc_MakeLiteralString_ReturnValue;                  // 0x3050(0x0010) ZeroConstructor, Transient, DuplicateTransient
		class APlayerPawnTest_C*                                   K2Node_DynamicCast_AsPlayerPawnTest_C;                   // 0x3060(0x0008) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       K2Node_DynamicCast11_CastSuccess;                        // 0x3068(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_Not_PreBool_ReturnValue9;                       // 0x3069(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_2AQ5[0x6];                                   // 0x306A(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class AController*                                         CallFunc_GetController_ReturnValue2;                     // 0x3070(0x0008) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_BooleanOR_ReturnValue15;                        // 0x3078(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_ALVZ[0x7];                                   // 0x3079(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class AShooterPlayerController*                            K2Node_DynamicCast_AsShooterPlayerController;            // 0x3080(0x0008) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       K2Node_DynamicCast12_CastSuccess;                        // 0x3088(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_RA6U[0x7];                                   // 0x3089(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FVineTargetData>                             K2Node_CustomEvent_Targets;                              // 0x3090(0x0010) ZeroConstructor, Transient, DuplicateTransient
		bool                                                       CallFunc_Not_PreBool_ReturnValue10;                      // 0x30A0(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_A399[0x3];                                   // 0x30A1(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    CallFunc_Array_Length_ReturnValue7;                      // 0x30A4(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_BooleanOR_ReturnValue16;                        // 0x30A8(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_Less_IntInt_ReturnValue4;                       // 0x30A9(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_BooleanOR_ReturnValue17;                        // 0x30AA(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_BooleanOR_ReturnValue18;                        // 0x30AB(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_G7G4[0x4];                                   // 0x30AC(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FVineTargetData                                     CallFunc_Array_Get_Item4;                                // 0x30B0(0x0018) Transient, DuplicateTransient
		class FString                                              CallFunc_SelectString_ReturnValue;                       // 0x30C8(0x0010) ZeroConstructor, Transient, DuplicateTransient
		class FString                                              CallFunc_Concat_StrStr_ReturnValue;                      // 0x30D8(0x0010) ZeroConstructor, Transient, DuplicateTransient
		class USceneComponent*                                     CallFunc_GetAttachParent_ReturnValue;                    // 0x30E8(0x0008) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		class AActor*                                              CallFunc_GetOwner_ReturnValue;                           // 0x30F0(0x0008) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       K2Node_CustomEvent_Value3;                               // 0x30F8(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_EqualEqual_ObjectObject_ReturnValue14;          // 0x30F9(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_EqualEqual_BoolBool_ReturnValue20;              // 0x30FA(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_989E[0x5];                                   // 0x30FB(0x0005) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UMaterialInterface*                                  CallFunc_GetMaterial_ReturnValue;                        // 0x3100(0x0008) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		int32_t                                                    CallFunc_GetNumMaterials_ReturnValue;                    // 0x3108(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_TNKP[0x4];                                   // 0x310C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UMaterialInstanceDynamic*                            K2Node_DynamicCast_AsMaterialInstanceDynamic;            // 0x3110(0x0008) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       K2Node_DynamicCast13_CastSuccess;                        // 0x3118(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_LessEqual_IntInt_ReturnValue2;                  // 0x3119(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       K2Node_CustomEvent_LeftArm;                              // 0x311A(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_M65I[0x5];                                   // 0x311B(0x0005) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UMaterialInterface*                                  CallFunc_GetMaterial_ReturnValue2;                       // 0x3120(0x0008) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		class UMaterialInterface*                                  CallFunc_GetMaterial_ReturnValue3;                       // 0x3128(0x0008) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		class UMaterialInstanceDynamic*                            CallFunc_CreateDynamicMaterialInstance_ReturnValue4;     // 0x3130(0x0008) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		class UMaterialInstanceDynamic*                            CallFunc_CreateDynamicMaterialInstance_ReturnValue5;     // 0x3138(0x0008) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		int32_t                                                    CallFunc_GetNumMaterials_ReturnValue2;                   // 0x3140(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_LessEqual_IntInt_ReturnValue3;                  // 0x3144(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_4H5K[0x3];                                   // 0x3145(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UMaterialInterface*                                  CallFunc_GetMaterial_ReturnValue4;                       // 0x3148(0x0008) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		class UMaterialInstanceDynamic*                            CallFunc_CreateDynamicMaterialInstance_ReturnValue6;     // 0x3150(0x0008) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		class UMaterialInterface*                                  CallFunc_GetMaterial_ReturnValue5;                       // 0x3158(0x0008) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		class UMaterialInstanceDynamic*                            CallFunc_CreateDynamicMaterialInstance_ReturnValue7;     // 0x3160(0x0008) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		int32_t                                                    CallFunc_GetNumMaterials_ReturnValue3;                   // 0x3168(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_LessEqual_IntInt_ReturnValue4;                  // 0x316C(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_PVUK[0x3];                                   // 0x316D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FName                                                CallFunc_Get_Grab_Attack_Vine_AttachTargetsSocket_Name_Name; // 0x3170(0x0008) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_Not_PreBool_ReturnValue11;                      // 0x3178(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       Temp_bool_True_if_break_was_hit_Variable;                // 0x3179(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_BooleanOR_ReturnValue19;                        // 0x317A(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_BooleanAND_ReturnValue7;                        // 0x317B(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_Not_PreBool_ReturnValue12;                      // 0x317C(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_BooleanOR_ReturnValue20;                        // 0x317D(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_BooleanAND_ReturnValue8;                        // 0x317E(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_XCQE[0x1];                                   // 0x317F(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FVector                                             CallFunc_SelectVector_ReturnValue;                       // 0x3180(0x000C) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		float                                                      CallFunc_BreakVector_X;                                  // 0x318C(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		float                                                      CallFunc_BreakVector_Y;                                  // 0x3190(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		float                                                      CallFunc_BreakVector_Z;                                  // 0x3194(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		float                                                      CallFunc_Multiply_FloatFloat_ReturnValue;                // 0x3198(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		struct FVector                                             CallFunc_MakeVector_ReturnValue3;                        // 0x319C(0x000C) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		class AActor*                                              CallFunc_Array_Get_Item5;                                // 0x31A8(0x0008) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		struct FVector                                             CallFunc_K2_GetActorLocation_ReturnValue3;               // 0x31B0(0x000C) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_6E49[0x4];                                   // 0x31BC(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct UObject_FTransform                                  CallFunc_GetTransform_ReturnValue;                       // 0x31C0(0x0030) Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		struct FVector                                             CallFunc_GetGroundLocation_theGroundLoc;                 // 0x31F0(0x000C) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_GetGroundLocation_ReturnValue;                  // 0x31FC(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_26QW[0x3];                                   // 0x31FD(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FVector                                             CallFunc_BreakTransform_Location;                        // 0x3200(0x000C) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		struct FRotator                                            CallFunc_BreakTransform_Rotation;                        // 0x320C(0x000C) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		struct FVector                                             CallFunc_BreakTransform_Scale;                           // 0x3218(0x000C) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_V9LK[0xC];                                   // 0x3224(0x000C) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct UObject_FTransform                                  CallFunc_MakeTransform_ReturnValue;                      // 0x3230(0x0030) Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		struct FVector                                             CallFunc_Subtract_VectorVector_ReturnValue2;             // 0x3260(0x000C) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_7BPV[0x4];                                   // 0x326C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class AActor*                                              CallFunc_BeginSpawningActorFromClass_ReturnValue;        // 0x3270(0x0008) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		float                                                      CallFunc_VSize_ReturnValue;                              // 0x3278(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_LessEqual_FloatFloat_ReturnValue;               // 0x327C(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_4V4X[0x3];                                   // 0x327D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class ABuff_RootedAOE_ForestKaiju_C*                       CallFunc_FinishSpawningActor_ReturnValue;                // 0x3280(0x0008) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		class FString                                              CallFunc_Conv_ObjectToString_ReturnValue;                // 0x3288(0x0010) ZeroConstructor, Transient, DuplicateTransient
		int32_t                                                    CallFunc_Array_Add_ReturnValue;                          // 0x3298(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_Array_RemoveItem_ReturnValue5;                  // 0x329C(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_NBBJ[0x3];                                   // 0x329D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class APrimalCharacter*                                    K2Node_DynamicCast_AsPrimalCharacter2;                   // 0x32A0(0x0008) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       K2Node_DynamicCast14_CastSuccess;                        // 0x32A8(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_9P0Q[0x7];                                   // 0x32A9(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class AShooterCharacter*                                   K2Node_DynamicCast_AsShooterCharacter2;                  // 0x32B0(0x0008) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       K2Node_DynamicCast15_CastSuccess;                        // 0x32B8(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_98S7[0x7];                                   // 0x32B9(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class APlayerController*                                   CallFunc_GetOwnerController_ReturnValue;                 // 0x32C0(0x0008) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		class APlayerPawnTest_C*                                   K2Node_DynamicCast_AsPlayerPawnTest_C2;                  // 0x32C8(0x0008) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       K2Node_DynamicCast16_CastSuccess;                        // 0x32D0(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       K2Node_CustomEvent_Value2;                               // 0x32D1(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_CO0W[0x6];                                   // 0x32D2(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class AController*                                         CallFunc_GetController_ReturnValue3;                     // 0x32D8(0x0008) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		class AShooterPlayerController*                            K2Node_DynamicCast_AsShooterPlayerController2;           // 0x32E0(0x0008) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       K2Node_DynamicCast17_CastSuccess;                        // 0x32E8(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_EqualEqual_BoolBool_ReturnValue21;              // 0x32E9(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_BPIsTamed_ReturnValue2;                         // 0x32EA(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_BooleanOR_ReturnValue21;                        // 0x32EB(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		float                                                      CallFunc_SelectFloat_ReturnValue2;                       // 0x32EC(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		double                                                     CallFunc_GetGameTimeInSeconds_ReturnValue7;              // 0x32F0(0x0008) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		struct FVector                                             K2Node_CustomEvent_Loc;                                  // 0x32F8(0x000C) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_KA51[0x4];                                   // 0x3304(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UParticleSystemComponent*                            CallFunc_SpawnEmitterAtLocation_ReturnValue;             // 0x3308(0x0008) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		float                                                      CallFunc_PlayAnimEx_ReturnValue6;                        // 0x3310(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_3DDW[0x4];                                   // 0x3314(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UMaterialInstanceDynamic*                            CallFunc_CreateDynamicMaterialInstance_ReturnValue8;     // 0x3318(0x0008) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		class UMaterialInstanceDynamic*                            CallFunc_CreateDynamicMaterialInstance_ReturnValue9;     // 0x3320(0x0008) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		float                                                      CallFunc_SelectFloat_ReturnValue3;                       // 0x3328(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		float                                                      CallFunc_SelectFloat_ReturnValue4;                       // 0x332C(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		struct FLinearColor                                        CallFunc_MakeColor_ReturnValue;                          // 0x3330(0x0010) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		class AController*                                         CallFunc_GetController_ReturnValue4;                     // 0x3340(0x0008) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_IsValid_ReturnValue4;                           // 0x3348(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_QGW4[0x3];                                   // 0x3349(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FVector                                             CallFunc_MakeVector_ReturnValue4;                        // 0x334C(0x000C) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		class UPrimalItem*                                         CallFunc_GetEquippedItemOfType_ReturnValue;              // 0x3358(0x0008) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_IsValid_ReturnValue5;                           // 0x3360(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_BPIsTamed_ReturnValue3;                         // 0x3361(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_P155[0x2];                                   // 0x3362(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FVector                                             CallFunc_K2_GetActorLocation_ReturnValue4;               // 0x3364(0x000C) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		struct UObject_FTransform                                  CallFunc_Conv_VectorToTransform_ReturnValue;             // 0x3370(0x0030) Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		class AActor*                                              CallFunc_BeginSpawningActorFromClass_ReturnValue2;       // 0x33A0(0x0008) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_BPIsTamed_ReturnValue4;                         // 0x33A8(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_FEB1[0x7];                                   // 0x33A9(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class ATargetPoint*                                        CallFunc_FinishSpawningActor_ReturnValue2;               // 0x33B0(0x0008) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_BPIsTamed_ReturnValue5;                         // 0x33B8(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_HYS0[0x7];                                   // 0x33B9(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class AController*                                         CallFunc_GetController_ReturnValue5;                     // 0x33C0(0x0008) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       K2Node_SwitchInteger3_CmpSuccess;                        // 0x33C8(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_LKTC[0x7];                                   // 0x33C9(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class APrimalDinoAIController*                             K2Node_DynamicCast_AsPrimalDinoAIController;             // 0x33D0(0x0008) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       K2Node_DynamicCast18_CastSuccess;                        // 0x33D8(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_5O2Q[0x7];                                   // 0x33D9(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class AActor*                                              CallFunc_GetAggroEntriesAttackerAtIndex_ReturnValue;     // 0x33E0(0x0008) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		int32_t                                                    CallFunc_GetAggroEntriesCount_ReturnValue;               // 0x33E8(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_EqualEqual_ObjectObject_ReturnValue15;          // 0x33EC(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_JCD3[0x3];                                   // 0x33ED(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    CallFunc_Subtract_IntInt_ReturnValue;                    // 0x33F0(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_LessEqual_IntInt_ReturnValue5;                  // 0x33F4(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_BooleanAND_ReturnValue9;                        // 0x33F5(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_Array_RemoveItem_ReturnValue6;                  // 0x33F6(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_Array_Contains_ReturnValue3;                    // 0x33F7(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		class UPrimalAIState*                                      CallFunc_GetActiveState_ReturnValue6;                    // 0x33F8(0x0008) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		class UForestKaiju_AttackAIState_Grab_C*                   K2Node_DynamicCast_AsForestKaiju_AttackAIState_Grab_C3;  // 0x3400(0x0008) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       K2Node_DynamicCast19_CastSuccess;                        // 0x3408(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_Not_PreBool_ReturnValue13;                      // 0x3409(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_BooleanAND_ReturnValue10;                       // 0x340A(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       K2Node_CustomEvent_Value;                                // 0x340B(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_EqualEqual_BoolBool_ReturnValue22;              // 0x340C(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_Greater_IntInt_ReturnValue2;                    // 0x340D(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_GL4Y[0x2];                                   // 0x340E(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    CallFunc_Add_IntInt_ReturnValue9;                        // 0x3410(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_IsServer_ReturnValue7;                          // 0x3414(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_TYGE[0x3];                                   // 0x3415(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      CallFunc_PlayAnimEx_ReturnValue7;                        // 0x3418(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_Not_PreBool_ReturnValue14;                      // 0x341C(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_BooleanAND_ReturnValue11;                       // 0x341D(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_G1YN[0x2];                                   // 0x341E(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UAnimMontage*                                        CallFunc_GetCurrentMontage_ReturnValue4;                 // 0x3420(0x0008) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		class FString                                              CallFunc_Conv_ObjectToString_ReturnValue2;               // 0x3428(0x0010) ZeroConstructor, Transient, DuplicateTransient
		double                                                     CallFunc_GetNetworkTimeInSeconds_ReturnValue;            // 0x3438(0x0008) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_IsLocallyControlledByPlayer_ReturnValue;        // 0x3440(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_UURC[0x7];                                   // 0x3441(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UWorld*                                              CallFunc_K2_GetWorld_ReturnValue6;                       // 0x3448(0x0008) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_IsTimeSince_Network_ReturnValue;                // 0x3450(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_863G[0x7];                                   // 0x3451(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class AGameState*                                          CallFunc_GetGameState_ReturnValue;                       // 0x3458(0x0008) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		class AShooterGameState*                                   K2Node_DynamicCast_AsShooterGameState;                   // 0x3460(0x0008) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       K2Node_DynamicCast20_CastSuccess;                        // 0x3468(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_Array_RemoveItem_ReturnValue7;                  // 0x3469(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_BPIsTamed_ReturnValue6;                         // 0x346A(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_IsServer_ReturnValue8;                          // 0x346B(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_Not_PreBool_ReturnValue15;                      // 0x346C(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_IsStandalone_ReturnValue2;                      // 0x346D(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_BooleanOR_ReturnValue22;                        // 0x346E(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_BooleanAND_ReturnValue12;                       // 0x346F(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_BooleanOR_ReturnValue23;                        // 0x3470(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_PKBK[0x3];                                   // 0x3471(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      CallFunc_PlayAnimEx_ReturnValue8;                        // 0x3474(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_BooleanAND_ReturnValue13;                       // 0x3478(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_THP5[0x7];                                   // 0x3479(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UAudioComponent*                                     CallFunc_PlaySoundAttached_ReturnValue;                  // 0x3480(0x0008) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		class UAudioComponent*                                     CallFunc_PlaySoundAttached_ReturnValue2;                 // 0x3488(0x0008) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		class UAudioComponent*                                     CallFunc_PlaySoundAttached_ReturnValue3;                 // 0x3490(0x0008) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		class AActor*                                              K2Node_ComponentBoundEvent_OtherActor2;                  // 0x3498(0x0008) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		class UPrimitiveComponent*                                 K2Node_ComponentBoundEvent_OtherComp2;                   // 0x34A0(0x0008) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		struct FVector                                             K2Node_ComponentBoundEvent_NormalImpulse2;               // 0x34A8(0x000C) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_VBUQ[0x4];                                   // 0x34B4(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FHitResult                                          K2Node_ComponentBoundEvent_Hit2;                         // 0x34B8(0x0088) OutParm, Transient, DuplicateTransient, ReferenceParm
		bool                                                       CallFunc_BPIsA_ReturnValue;                              // 0x3540(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_ATPJ[0x7];                                   // 0x3541(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class AActor*                                              K2Node_ComponentBoundEvent_OtherActor;                   // 0x3548(0x0008) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		class UPrimitiveComponent*                                 K2Node_ComponentBoundEvent_OtherComp;                    // 0x3550(0x0008) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		struct FVector                                             K2Node_ComponentBoundEvent_NormalImpulse;                // 0x3558(0x000C) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_3QM3[0x4];                                   // 0x3564(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FHitResult                                          K2Node_ComponentBoundEvent_Hit;                          // 0x3568(0x0088) OutParm, Transient, DuplicateTransient, ReferenceParm
		bool                                                       CallFunc_BPIsA_ReturnValue2;                             // 0x35F0(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_IsServer_ReturnValue9;                          // 0x35F1(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_BPIsTamed_ReturnValue7;                         // 0x35F2(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_IsServer_ReturnValue10;                         // 0x35F3(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_Not_PreBool_ReturnValue16;                      // 0x35F4(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_BPIsTamed_ReturnValue8;                         // 0x35F5(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_BooleanAND_ReturnValue14;                       // 0x35F6(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_Not_PreBool_ReturnValue17;                      // 0x35F7(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_BooleanAND_ReturnValue15;                       // 0x35F8(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_M585[0x3];                                   // 0x35F9(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      CallFunc_Multiply_FloatFloat_ReturnValue2;               // 0x35FC(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		float                                                      CallFunc_ModifyCurrentStatusValue_ReturnValue;           // 0x3600(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_KMB0[0x4];                                   // 0x3604(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UWorld*                                              CallFunc_K2_GetWorld_ReturnValue7;                       // 0x3608(0x0008) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		struct FVector                                             CallFunc_K2_GetActorLocation_ReturnValue5;               // 0x3610(0x000C) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_H7PE[0x4];                                   // 0x361C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class ADayCycleManager*                                    CallFunc_GetDayCycleManager_ReturnValue;                 // 0x3620(0x0008) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		unsigned char                                              K2Node_DynamicCast_AsExtinctionDayCycle_Interface_C[0x10]; // 0x3628(0x0010) UNKNOWN PROPERTY: InterfaceProperty ForestKaiju_Character_BP.ForestKaiju_Character_BP_C.K2Node_DynamicCast_AsExtinctionDayCycle_Interface_C
		bool                                                       K2Node_DynamicCast21_CastSuccess;                        // 0x3638(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_DoesImplementInterface_ReturnValue;             // 0x3639(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_RNXM[0x6];                                   // 0x363A(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class AActor*                                              CallFunc_GetVar_FKArenaLoc_ServerPoint;                  // 0x3640(0x0008) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		struct FVector                                             CallFunc_K2_GetActorLocation_ReturnValue6;               // 0x3648(0x000C) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_6MNY[0x4];                                   // 0x3654(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UPrimalItem*                                         CallFunc_GiveSaddle_ReturnValue;                         // 0x3658(0x0008) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_IsListenServer_ReturnValue;                     // 0x3660(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_BooleanOR_ReturnValue24;                        // 0x3661(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_BooleanAND_ReturnValue16;                       // 0x3662(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_IsValid_ReturnValue6;                           // 0x3663(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_IsValid_ReturnValue7;                           // 0x3664(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_NearlyEqual_VectorVector_ReturnValue;           // 0x3665(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_IsDistanceLessThan_ReturnValue;                 // 0x3666(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_1YHH[0x1];                                   // 0x3667(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FVector                                             CallFunc_K2_GetActorLocation_ReturnValue7;               // 0x3668(0x000C) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_IsDistanceLessThan_ReturnValue2;                // 0x3674(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_BooleanAND_ReturnValue17;                       // 0x3675(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_BooleanOR_ReturnValue25;                        // 0x3676(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_O6AW[0x1];                                   // 0x3677(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class AActor*>                                      CallFunc_SphereTraceSingle_NEW_ActorsToIgnore_RefProperty; // 0x3678(0x0010) OutParm, ZeroConstructor, Transient, DuplicateTransient, ReferenceParm
		TArray<class AActor*>                                      CallFunc_LineTraceSingle_NEW_ActorsToIgnore_RefProperty; // 0x3688(0x0010) OutParm, ZeroConstructor, Transient, DuplicateTransient, ReferenceParm
		TArray<class AActor*>                                      CallFunc_LineTraceSingle_NEW_ActorsToIgnore2_RefProperty; // 0x3698(0x0010) OutParm, ZeroConstructor, Transient, DuplicateTransient, ReferenceParm
		TArray<class AActor*>                                      CallFunc_LineTraceSingle_NEW_ActorsToIgnore3_RefProperty; // 0x36A8(0x0010) OutParm, ZeroConstructor, Transient, DuplicateTransient, ReferenceParm

	public:
		void GetVar_IsProtecting(bool* Value);
		float BPOverrideHealthBarOffset(class APlayerController* ForPC);
		bool BPPreventRiding(class AShooterCharacter* ByPawn, bool bDontCheckDistance);
		void BPDinoARKDownloadedBegin();
		class FString BPGetDebugInfoString();
		bool BPCanBaseOnCharacter(class APrimalCharacter* BaseCharacter);
		void ActorIsKaiju(class AActor* Actor, bool* IsKaiju);
		void BPDinoARKDownloadedEnd();
		void OnRep_UseTamedPhysics();
		class USoundBase* BPOverrideCharacterSound(class USoundBase* SoundIn);
		void HealNodesAndHealthFromLeashing();
		struct FHitMarkerSettings BPOverrideDamageCauserHitMarker(class AShooterPlayerController* DamageCauserController, bool bHitFriendlyTarget, float PreDamageHealth, float DamageAmount, struct FDamageEvent* DamageEvent, bool bIsPointDamage, struct FHitResult* PointDamageHitResult);
		void BPOnDinoCheat(const class FName& CheatName, bool bSetValue, float Value);
		bool HasCantRootBuff(class APrimalCharacter* Target);
		void RidingTick(float DeltaSeconds);
		void K2_OnMovementModeChanged(EMovementMode PrevMovementMode, EMovementMode NewMovementMode, unsigned char PrevCustomMode, unsigned char NewCustomMode);
		struct FVector BPOverrideCharacterNewFallVelocity(struct FVector* InitialVelocity, struct FVector* Gravity, float DeltaTime);
		struct FVector BPGetRiderUnboardLocation(class APrimalCharacter* RidingCharacter);
		void InterpSpawnInMesh(float Delta);
		void CanFit(const struct FVector& Location, float VerticalOffset, float Angle, float HorizontalOffset, float Radius, float HalfHeight, class AActor* IgnoreActor, bool* Can, struct FVector* NewLocation);
		void LerpDyingMaterials(float Delta);
		float BlueprintAdjustOutputDamage(int32_t AttackIndex, float OriginalDamageAmount, class AActor* HitActor, class UClass** OutDamageType, float* OutDamageImpulse);
		void MaybeShowRootRadiusRing();
		void ShowRootRadiusRing(bool ShowRing);
		bool BP_InterceptMoveForward(float AxisValue);
		void GetGrabAttackVineAttachTargetsSocketName(class FName* Name);
		void DissolveArm(float Delta);
		void IsLocationValidVineAttackRange(const struct FVector& Loc, bool* Ret);
		void MaybeLoseArmWhileProtecting(class AActor* DamageCauser, float Damage);
		void DestroyAllNearbyPoisonTrees();
		void BPSetupTamed(bool bWasJustTamed);
		void GetMovementMontageSection();
		void InterpProtectShieldStatus(float Delta);
		void InterpNodeStates(float Delta);
		void CreateDynamicMats();
		void BPOnAnimPlayedNotify(class UAnimMontage* AnimMontage, float InPlayRate, const class FName& StartSectionName, bool bReplicate, bool bReplicateToOwner, bool bForceTickPoseAndServerUpdateMesh, bool bForceTickPoseOnServer);
		struct FRotator BPModifyRootMotionDeltaRotation(struct FRotator* Delta);
		void WantsLocomotionTransition(bool* WantsTransition);
		void IsLocomotionBlocked(bool* bLocked);
		void GetMovementMontage(ERootMotionMovementMode Mode, class UAnimMontage** Montage);
		void PlayAIProtectSelfBriefly();
		void OnRep_CurrentAttackIndexReplicated();
		void SpawnMaxVinesThisFrame();
		void SpawnVineInternal(const struct FVector& Start, const struct FVector& End);
		bool BlueprintCanRiderAttack(int32_t AttackIndex);
		bool BlueprintCanAttack(int32_t AttackIndex, float Distance, float attackRangeOffset, class AActor* OtherTarget);
		void BPNotifyClearRider(class AShooterCharacter* RiderClearing);
		void BP_OnSetDeath();
		void BlinkDamageNodeInterp(float Delta);
		void SpawnPoisonTreeSeeds(float TreeCount);
		void SetLastPlayerGrabAttackTargetLocation(const struct FVector& Location);
		void OnRep_FollowControlRotation();
		void OnRep_GrabAttacking();
		void TurnOffAttackBBKeys();
		bool BPCanBeBaseForCharacter(class APawn* Pawn);
		void IsRightArmGrabAttack(bool* RightArmGrabAttack);
		void CanPlayerGrabAttack(bool* GrabAttack, bool* Hit);
		struct FLinearColor BPGetCrosshairColor();
		void GetGrabAttackVineSocketName(class FName* Name);
		void SpawnVine(const struct FVector& Start, const struct FVector& End);
		void GetGrabAttackVineStartLocation(struct FVector* Location);
		void InitVars();
		void VineGrabHit();
		void VineGrabMissed();
		TArray<struct FMultiUseEntry> BPGetMultiUseEntries(class APlayerController* ForPC, TArray<struct FMultiUseEntry>* MultiUseEntries);
		bool BPTryMultiUse(class APlayerController* ForPC, int32_t UseIndex);
		void RegrowRightComplete();
		void RegrowLeftComplete();
		void RegrowTick(class USkeletalMeshComponent* Appendage, const struct FVector& currentScale, struct FVector* OutScale, bool* Complete);
		void Regrow(bool LeftArm);
		void Dismember(class USkeletalMeshComponent* Appendage);
		void IsRootAttacking(bool* IsAttacking);
		void GetRootAttackChargeLEvel(bool SmoothedValues, float* Value, float* Percent);
		void BPGetHUDElements(class APlayerController* ForPC, TArray<struct FHUDElement>* OutElements);
		bool BPPreventInputType(EPrimalCharacterInputType inputType);
		bool PreventLocomotion();
		void MaybeExposeNode(class AActor* DmgCauser, EDesertKaiju_ControlNodes Node);
		void StartTorpid();
		void SpawnPoisonTree(class AActor* SpawnOnEnemy, bool* Success);
		void BPTimerServer();
		bool BPHandleOnStopTargeting();
		void ShortestAngleDistance(float AngleCurrent, float AngleTarget, float* Difference);
		void GetClampedLookDir(bool LimitLowerPitch, struct FVector* _return_);
		bool BPHandleControllerInitiatedAttack(int32_t AttackIndex);
		void GrabTrace();
		int32_t BPAdjustAttackIndex(int32_t AttackIndex);
		void BPGetOverrideCameraInterpSpeed(float DefaultTPVCameraSpeedInterpolationMultiplier, float DefaultTPVOffsetInterpSpeed, float* TPVCameraSpeedInterpolationMultiplier, float* TPVOffsetInterpSpeed);
		bool BP_InterceptMoveRight(float AxisValue);
		void SwitchTPVCamView();
		void IsFirstPersonView(bool* Result);
		void BPTimerNonDedicated();
		void DestroyCenterNode();
		void DamageCenterNode(float Damage);
		void DestroyRightNode();
		void DamageRightNode(float Damage);
		void ExposeNode(bool Hide, bool Right);
		void DestroyLeftNode();
		void DamageLeftNode(float Damage);
		float BPAdjustDamage(float IncomingDamage, const struct FDamageEvent& TheDamageEvent, class AController* EventInstigator, class AActor* DamageCauser, bool bIsPointDamage, const struct FHitResult& PointHitInfo);
		bool BPCanTargetCorpse();
		void UserConstructionScript();
		void InpActEvt_Crouch_K2Node_InputActionEvent_186();
		void InpActEvt_Crouch_K2Node_InputActionEvent_185();
		void InpActEvt_GamepadRightThumbstick_K2Node_InputActionEvent_184();
		void InpActEvt_GamepadRightThumbstick_K2Node_InputActionEvent_183();
		void CallFunc_StunKaiju();
		void SetVar_FKArenaManager(class AActor* ArenaManager);
		void ReceiveTick(float DeltaSeconds);
		void ReceiveBeginPlay();
		void Multi_SetNodeColor(int32_t Node, float Alpha, bool Activated, bool DamageNode);
		void Rep_ExposeLeftRightNodes(bool Hide, bool Right);
		void ReplicateCameraDataTPVToServer(bool IsFirstPerson, const struct FVector& CameraLocation);
		void ServerExecuteGrab();
		void Server_GrabTraceTargetDir(const struct FVector& AimLoc, bool AimHit);
		void Multi_ExposeNodes(EDesertKaiju_ControlNodes Node, bool expose);
		void ActivateNode(EDesertKaiju_ControlNodes Node);
		void Deactivate_LeftNode();
		void Deactivate_RightNode();
		void Deactivate_CenterNode();
		void CtS_StartAttackRoot();
		void CtS_ExecuteAttackRoot();
		void AnimNotify_EndRootAttack();
		void Multi_PreventInput(bool Prevent);
		void ExecuteAttackRoot();
		void AnimNotify_RootTargets();
		void AI_StartAttackRoot();
		void AI_EndAttackRoot();
		void RegrowRightArmTick();
		void RegrowLeftArmTick();
		void Multi_Dismember(bool LeftArm);
		void RegrowLeft();
		void RegrowRight();
		void EndGrabAIState();
		void AnimNotify_GrabAttackSmash();
		void MULTI_DebugDrawLine(const struct FVector& Start, const struct FVector& End, const struct FLinearColor& Color, float DurationSeconds);
		void DebugDrawLine(const struct FVector& Start, const struct FVector& End, const struct FLinearColor& Color, float DurationSeconds);
		void ReplicateRiderTPVRight(bool TPVRight);
		void MULTI_GrabAttackStateStart();
		void MULTI_GrabAttackStateEnd();
		void ReplicatePlayerGrabAttackTargetLocation(const struct FVector& Location);
		void SpawnPoisonSeeds(float Count);
		void Multi_PlaySeedSpawnVFX(const struct FVector& Loc);
		void DamageNodeBlink(EDesertKaiju_ControlNodes Node);
		void Multi_InterpLeftNode(const struct FLinearColor& Color);
		void Multi_InterpRightNode(const struct FLinearColor& Color);
		void Multi_InterpCenterNode(const struct FLinearColor& Color);
		void BP_OnJumpPressed();
		void BP_OnJumpReleased();
		void Server_SetProtecting(bool Protecting);
		void Client_SetDoingRootAttack(bool Value);
		void MULTI_StartGrabAttackAnim(bool RightArm, float LeftRight, float UpDown);
		void GrabAttackDetachActors(TArray<class APrimalCharacter*>* Targets);
		void GrabAttackTick();
		void StunForestKaiju();
		void AnimNotify_GrabAttackPanCamera();
		void AnimNotify_EndShieldFX();
		void Multi_SetProtecting(bool Protecting);
		void Multi_InterpNodeDamage(const struct FLinearColor& Color);
		void BP_OnSetRunning(bool bNewIsRunning);
		void Multi_DelayedCorruptionDestroy();
		void UpdateGrabAttackTPVOffset();
		void GrabAttackAttachActors(TArray<struct FVineTargetData>* Targets);
		void CtS_SetDoingRootAttack(bool Value);
		void DissolveLeft();
		void Multi_CreateDissolvingArmDynamicMATs(bool LeftArm);
		void Multi_ShowRootRadius(bool Value);
		void Multi_SetRootchargeAmount();
		void StC_SetLastTimeRootAttack();
		void Multi_PlayNodeDestroyFX(const struct FVector& Loc);
		void AnimNotify_BeginDying();
		void Multi_ApplyFallingDownForce();
		void EquipSaddle();
		void AnimNotify_GrabAttackSpawnVines();
		void Multi_SetDoingRootAttack(bool Value);
		void StaggeredRootTargets();
		void SERVER_GrabAttackSpawnVines();
		void AnimNotify_CheckForProtect();
		void BndEvt__Mesh_K2Node_ComponentBoundEvent_280_ComponentHitSignature__DelegateSignature(class AActor* OtherActor, class UPrimitiveComponent* OtherComp, const struct FVector& NormalImpulse, struct FHitResult* Hit);
		void BndEvt__CapsuleComponent_K2Node_ComponentBoundEvent_283_ComponentHitSignature__DelegateSignature(class AActor* OtherActor, class UPrimitiveComponent* OtherComp, const struct FVector& NormalImpulse, struct FHitResult* Hit);
		void UpdateSaddlePhysics();
		void Multi_DelayedTurnOffHealthRegen();
		void Multi_CleanArms();
		void ExecuteUbergraph_ForestKaiju_Character_BP(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
