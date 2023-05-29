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
	 * BlueprintGeneratedClass Purlovia_Character_BP.Purlovia_Character_BP_C
	 * Size -> 0x07F0 (FullSize[0x2A78] - InheritedSize[0x2288])
	 */
	class APurlovia_Character_BP_C : public ADino_Character_BP_C
	{
	public:
		class UStaticMeshComponent*                                BuryMesh;                                                // 0x2288(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		class UDinoCharacterStatusComponent_BP_Purlovia_C*         DinoCharacterStatus_BP_Purlovia_C1;                      // 0x2290(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		bool                                                       isBuried;                                                // 0x2298(0x0001) Edit, BlueprintVisible, Net, ZeroConstructor, SaveGame, IsPlainOldData, RepNotify, NoDestructor, NativeAccessSpecifierPublic
		bool                                                       isBurying;                                               // 0x2299(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_P0GI[0x6];                                   // 0x229A(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		double                                                     lastTookDamageBuried;                                    // 0x22A0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      jumpAttackImpulseForward;                                // 0x22A8(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		float                                                      zBaseJumpImpulse;                                        // 0x22AC(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		bool                                                       isBuriedJumping;                                         // 0x22B0(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       isNormalJumping;                                         // 0x22B1(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_D3V8[0x2];                                   // 0x22B2(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      buriedWaterSubmergedDepthThreshold;                      // 0x22B4(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		float                                                      zSlopeMultiplier;                                        // 0x22B8(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		float                                                      buryAttackDownImpulseMultiplier;                         // 0x22BC(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		float                                                      buryAttackUpImpulse;                                     // 0x22C0(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		float                                                      zJumpImpulseMultiplier;                                  // 0x22C4(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		int32_t                                                    BuryAttackRange;                                         // 0x22C8(0x0004) Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, SaveGame, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		bool                                                       isForcedBury;                                            // 0x22CC(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, SaveGame, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_DDXT[0x3];                                   // 0x22CD(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		double                                                     lastTimeBuried;                                          // 0x22D0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		double                                                     lastTimeUnburied;                                        // 0x22D8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		double                                                     lastTimeJumped;                                          // 0x22E0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      attackCooldownAfterNormalJump;                           // 0x22E8(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_LETS[0x4];                                   // 0x22EC(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		double                                                     lastTimeNormalJumped;                                    // 0x22F0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		double                                                     lastTimeBuriedJumped;                                    // 0x22F8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      attackCooldownAfterBuriedJump;                           // 0x2300(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_8BAA[0x4];                                   // 0x2304(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class UClass*>                                      unburrowDamageTypes;                                     // 0x2308(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance
		float                                                      chanceToBuryOnUnstasis;                                  // 0x2318(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		struct FVector                                             buryMeshOffsetWild;                                      // 0x231C(0x000C) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		struct FVector                                             targetLocOnJumpStart;                                    // 0x2328(0x000C) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       needsInitializeServer;                                   // 0x2334(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_ML06[0x3];                                   // 0x2335(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UClass*                                              buffForBuryAttack;                                       // 0x2338(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		float                                                      maxWeightForStun;                                        // 0x2340(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_XY9X[0xC];                                   // 0x2344(0x000C) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct UObject_FTransform                                  currentBuryMeshTransform;                                // 0x2350(0x0030) Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       isBuryingClientAndServer;                                // 0x2380(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       failsafeActivated;                                       // 0x2381(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       pendingShowBury;                                         // 0x2382(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       pendingHideBury;                                         // 0x2383(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       IsProcessingDamage;                                      // 0x2384(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       isInitialized;                                           // 0x2385(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_IsServer_ReturnValue;                           // 0x2386(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_Y307[0x1];                                   // 0x2387(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FRotator                                            CallFunc_K2_GetActorRotation_ReturnValue;                // 0x2388(0x000C) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		float                                                      CallFunc_BreakRot_Pitch;                                 // 0x2394(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		float                                                      CallFunc_BreakRot_Yaw;                                   // 0x2398(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		float                                                      CallFunc_BreakRot_Roll;                                  // 0x239C(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		struct FVector                                             CallFunc_K2_GetActorLocation_ReturnValue;                // 0x23A0(0x000C) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_TBGD[0x4];                                   // 0x23AC(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class AController*                                         CallFunc_GetController_ReturnValue;                      // 0x23B0(0x0008) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		struct FVector                                             CallFunc_K2_GetActorLocation_ReturnValue2;               // 0x23B8(0x000C) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_G0CA[0x4];                                   // 0x23C4(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class APrimalDinoAIController*                             K2Node_DynamicCast_AsPrimalDinoAIController;             // 0x23C8(0x0008) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       K2Node_DynamicCast_CastSuccess;                          // 0x23D0(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_FPJ9[0x3];                                   // 0x23D1(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FRotator                                            CallFunc_FindLookAtRotation_ReturnValue;                 // 0x23D4(0x000C) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		float                                                      CallFunc_BreakRot_Pitch2;                                // 0x23E0(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		float                                                      CallFunc_BreakRot_Yaw2;                                  // 0x23E4(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		float                                                      CallFunc_BreakRot_Roll2;                                 // 0x23E8(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		struct FRotator                                            CallFunc_MakeRot_ReturnValue;                            // 0x23EC(0x000C) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		class APrimalBuff*                                         CallFunc_StaticAddBuff_ReturnValue;                      // 0x23F8(0x0008) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_SetActorRotation_ReturnValue;                   // 0x2400(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_OLOG[0x3];                                   // 0x2401(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    K2Node_CustomEvent_range;                                // 0x2404(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		class FName                                                K2Node_Event_CustomEventName;                            // 0x2408(0x0008) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		class USkeletalMeshComponent*                              K2Node_Event_MeshComp;                                   // 0x2410(0x0008) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		class UAnimSequenceBase*                                   K2Node_Event_Animation;                                  // 0x2418(0x0008) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		class UAnimNotify*                                         K2Node_Event_AnimNotifyObject;                           // 0x2420(0x0008) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_EqualEqual_IntInt_ReturnValue;                  // 0x2428(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_EqualEqual_NameName_ReturnValue;                // 0x2429(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_EqualEqual_NameName_ReturnValue2;               // 0x242A(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_EqualEqual_NameName_ReturnValue3;               // 0x242B(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		struct FVector                                             CallFunc_Get_Buried_Attack_Down_Impulse_impulse;         // 0x242C(0x000C) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		struct FVector                                             CallFunc_Get_Buried_Attack_Up_Impulse_upImpulse;         // 0x2438(0x000C) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_EqualEqual_ByteByte_ReturnValue;                // 0x2444(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_230A[0x3];                                   // 0x2445(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    K2Node_CustomEvent_range2;                               // 0x2448(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_GQEI[0x4];                                   // 0x244C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		double                                                     CallFunc_GetGameTimeInSeconds_ReturnValue;               // 0x2450(0x0008) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		double                                                     CallFunc_GetGameTimeInSeconds_ReturnValue2;              // 0x2458(0x0008) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		float                                                      CallFunc_PlayAnimEx_ReturnValue;                         // 0x2460(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_IsServer_ReturnValue2;                          // 0x2464(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_IsServer_ReturnValue3;                          // 0x2465(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_2LWQ[0x2];                                   // 0x2466(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FVector                                             CallFunc_K2_GetActorLocation_ReturnValue3;               // 0x2468(0x000C) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_MV21[0x4];                                   // 0x2474(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class AController*                                         CallFunc_GetController_ReturnValue2;                     // 0x2478(0x0008) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		struct FDinoAttackInfo                                     CallFunc_Array_Get_Item;                                 // 0x2480(0x0130) Transient, DuplicateTransient
		float                                                      CallFunc_Conv_IntToFloat_ReturnValue;                    // 0x25B0(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_7SIU[0x4];                                   // 0x25B4(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class AActor*>                                      K2Node_MakeArray_Array;                                  // 0x25B8(0x0010) ZeroConstructor, Transient, DuplicateTransient
		bool                                                       CallFunc_ApplyRadialDamage_ReturnValue;                  // 0x25C8(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_QK6V[0x3];                                   // 0x25C9(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FVector                                             CallFunc_K2_GetActorLocation_ReturnValue4;               // 0x25CC(0x000C) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		class AController*                                         CallFunc_GetController_ReturnValue3;                     // 0x25D8(0x0008) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		struct FDinoAttackInfo                                     CallFunc_Array_Get_Item2;                                // 0x25E0(0x0130) Transient, DuplicateTransient
		TArray<class AActor*>                                      K2Node_MakeArray_Array2;                                 // 0x2710(0x0010) ZeroConstructor, Transient, DuplicateTransient
		bool                                                       CallFunc_IsServer_ReturnValue4;                          // 0x2720(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_BPIsTamed_ReturnValue;                          // 0x2721(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_BooleanOR_ReturnValue;                          // 0x2722(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_0GHE[0x5];                                   // 0x2723(0x0005) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UAnimInstance*                                       CallFunc_GetAnimInstance_ReturnValue;                    // 0x2728(0x0008) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		struct FVector                                             CallFunc_K2_GetActorLocation_ReturnValue5;               // 0x2730(0x000C) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_0LW8[0x4];                                   // 0x273C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UAnimMontage*                                        CallFunc_GetCurrentMontage_ReturnValue;                  // 0x2740(0x0008) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		float                                                      CallFunc_PlayAnimEx_ReturnValue2;                        // 0x2748(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_Can_Unbury_canComeOut;                          // 0x274C(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_IsServer_ReturnValue5;                          // 0x274D(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_2V1U[0x2];                                   // 0x274E(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FDinoAttackInfo                                     CallFunc_Array_Get_Item3;                                // 0x2750(0x0130) Transient, DuplicateTransient
		struct FDinoAttackInfo                                     K2Node_Select_ReturnValue;                               // 0x2880(0x0130) Transient, DuplicateTransient
		bool                                                       K2Node_Select_CmpSuccess;                                // 0x29B0(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_IsServer_ReturnValue6;                          // 0x29B1(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_1BNC[0x2];                                   // 0x29B2(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      CallFunc_Conv_IntToFloat_ReturnValue2;                   // 0x29B4(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_ApplyRadialDamage_ReturnValue2;                 // 0x29B8(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_EQ7L[0x7];                                   // 0x29B9(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class AController*                                         CallFunc_GetController_ReturnValue4;                     // 0x29C0(0x0008) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		class APrimalDinoAIController*                             K2Node_DynamicCast_AsPrimalDinoAIController2;            // 0x29C8(0x0008) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       K2Node_DynamicCast2_CastSuccess;                         // 0x29D0(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_IsValid_ReturnValue;                            // 0x29D1(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       K2Node_CustomEvent_playAnim;                             // 0x29D2(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       K2Node_CustomEvent_forceUnbury;                          // 0x29D3(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_IsServer_ReturnValue7;                          // 0x29D4(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_Should_Show_Bury_Mound_shouldShowMesh;          // 0x29D5(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_IsDedicatedServer_ReturnValue;                  // 0x29D6(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_Not_PreBool_ReturnValue;                        // 0x29D7(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_Not_PreBool_ReturnValue2;                       // 0x29D8(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_Not_PreBool_ReturnValue3;                       // 0x29D9(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_IsDedicatedServer_ReturnValue2;                 // 0x29DA(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_BooleanAND_ReturnValue;                         // 0x29DB(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_Not_PreBool_ReturnValue4;                       // 0x29DC(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_IsDedicatedServer_ReturnValue3;                 // 0x29DD(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_Not_PreBool_ReturnValue5;                       // 0x29DE(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_Not_PreBool_ReturnValue6;                       // 0x29DF(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_BooleanAND_ReturnValue2;                        // 0x29E0(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_XZTQ[0x3];                                   // 0x29E1(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      CallFunc_PlayAnimEx_ReturnValue3;                        // 0x29E4(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       K2Node_CustomEvent_playAnim2;                            // 0x29E8(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_IsServer_ReturnValue8;                          // 0x29E9(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_QKCQ[0x6];                                   // 0x29EA(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UAnimInstance*                                       CallFunc_GetAnimInstance_ReturnValue2;                   // 0x29F0(0x0008) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_IsVisible_ReturnValue;                          // 0x29F8(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_Not_PreBool_ReturnValue7;                       // 0x29F9(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_BooleanAND_ReturnValue3;                        // 0x29FA(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_IsVisible_ReturnValue2;                         // 0x29FB(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_Not_PreBool_ReturnValue8;                       // 0x29FC(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_IsVisible_ReturnValue3;                         // 0x29FD(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_Not_PreBool_ReturnValue9;                       // 0x29FE(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_CanUnburyNormal_can;                            // 0x29FF(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_BooleanOR_ReturnValue2;                         // 0x2A00(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_BPIsTamed_ReturnValue2;                         // 0x2A01(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_IsServer_ReturnValue9;                          // 0x2A02(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_EK24[0x1];                                   // 0x2A03(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      CallFunc_PlayAnimEx_ReturnValue4;                        // 0x2A04(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		int32_t                                                    K2Node_CustomEvent_range3;                               // 0x2A08(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       K2Node_SwitchInteger_CmpSuccess;                         // 0x2A0C(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_US84[0x3];                                   // 0x2A0D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      CallFunc_RandomFloat_ReturnValue;                        // 0x2A10(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_TryBury_couldBury;                              // 0x2A14(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_LessEqual_FloatFloat_ReturnValue;               // 0x2A15(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_SD5J[0x2];                                   // 0x2A16(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class APrimalBuff*                                         CallFunc_StaticAddBuff_ReturnValue2;                     // 0x2A18(0x0008) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_TryBury_couldBury2;                             // 0x2A20(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_IIL4[0x7];                                   // 0x2A21(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class APrimalBuff*                                         CallFunc_StaticAddBuff_ReturnValue3;                     // 0x2A28(0x0008) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       K2Node_CustomEvent_PlayAnim3;                            // 0x2A30(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_BPIsTamed_ReturnValue3;                         // 0x2A31(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_Z6TS[0x6];                                   // 0x2A32(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class AActor*>                                      CallFunc_LineTraceSingle_NEW_ActorsToIgnore_RefProperty; // 0x2A38(0x0010) OutParm, ZeroConstructor, Transient, DuplicateTransient, ReferenceParm
		TArray<class AActor*>                                      CallFunc_LineTraceSingle_NEW_ActorsToIgnore2_RefProperty; // 0x2A48(0x0010) OutParm, ZeroConstructor, Transient, DuplicateTransient, ReferenceParm
		TArray<class AActor*>                                      CallFunc_LineTraceSingle_NEW_ActorsToIgnore3_RefProperty; // 0x2A58(0x0010) OutParm, ZeroConstructor, Transient, DuplicateTransient, ReferenceParm
		TArray<class AActor*>                                      CallFunc_LineTraceSingle_NEW_ActorsToIgnore4_RefProperty; // 0x2A68(0x0010) OutParm, ZeroConstructor, Transient, DuplicateTransient, ReferenceParm

	public:
		bool HasSelfBuried();
		bool BPIsHidden();
		void UpdateCollisions(bool Buried);
		void CanUnburyNormal(bool* Can);
		void ShowMoundOutParticles();
		void BPTimerNonDedicated();
		void UpdateBuryMeshTransformVariable(bool updateMeshLocation);
		void ShowMoundInParticles();
		void ShowBuryMoundIfNeeded();
		void HideBuryMound();
		void RotateToTarget();
		void IsValidTarget(bool DoWeightCheck, class AActor* Target, bool* Valid);
		float BlueprintAdjustOutputDamage(int32_t AttackIndex, float OriginalDamageAmount, class AActor* HitActor, class UClass** OutDamageType, float* OutDamageImpulse);
		void isBuryAttack(int32_t AttackIndex, bool* isBuryAttack);
		void BPDoAttack(int32_t AttackIndex);
		void TryBury(bool PlayAnim, bool skipBuriedCheck, bool* couldBury);
		void ShouldShowBuryMound(bool* shouldShowMesh);
		float BPAdjustDamage(float IncomingDamage, const struct FDamageEvent& TheDamageEvent, class AController* EventInstigator, class AActor* DamageCauser, bool bIsPointDamage, const struct FHitResult& PointHitInfo);
		void IsValidSurface(bool* IsValid);
		void BPCharacterSleeped();
		void BPOnAnimPlayedNotify(class UAnimMontage* AnimMontage, float InPlayRate, const class FName& StartSectionName, bool bReplicate, bool bReplicateToOwner, bool bForceTickPoseAndServerUpdateMesh, bool bForceTickPoseOnServer);
		void FinishBuriedJump();
		void CalculateBuryMeshTransform(struct UObject_FTransform* Transform);
		void BlueprintDrawFloatingHUD(class AShooterHUD* HUD, float CenterX, float CenterY, float DrawScale);
		void GetBuriedAttackUpImpulse(struct FVector* UpImpulse);
		void GetBuriedAttackDownImpulse(struct FVector* Impulse);
		void OnRep_isBuried();
		void IsDinoInWater(bool* onWater);
		void FinishNormalJump();
		void ApplyNormalJumpImpulse();
		void OnJumped();
		bool BlueprintCanAttack(int32_t AttackIndex, float Distance, float attackRangeOffset, class AActor* OtherTarget);
		void BPOnMovementModeChangedNotify(EMovementMode PrevMovementMode, unsigned char PreviousCustomMode);
		void BPNotifyBumpedPawn(class APrimalCharacter* BumpedPawn);
		void CanUnbury(bool* canComeOut);
		void ShouldComeOut(bool* comeOut);
		void HasConflictwithAI(bool* hasConflict);
		void canBury(bool forceBury, bool* canBury);
		void CanPlayBuryAnim(bool* canPlayBury);
		void CanJumpAtTarget(bool* FoundTarget);
		void BPTimerServer();
		TArray<struct FMultiUseEntry> BPGetMultiUseEntries(class APlayerController* ForPC, TArray<struct FMultiUseEntry>* MultiUseEntries);
		bool BPTryMultiUse(class APlayerController* ForPC, int32_t UseIndex);
		void UserConstructionScript();
		void Bury(bool PlayAnim);
		void ComeOut_Attack(int32_t Range);
		void ComeOut_Normal(bool PlayAnim);
		void TryComeOutAttack(int32_t Range);
		void OnComeOut();
		void OnNormalJump();
		void BPUnstasis();
		void OnMovementChanged();
		void BlueprintAnimNotifyCustomEvent(const class FName& CustomEventName, class USkeletalMeshComponent* MeshComp, class UAnimSequenceBase* Animation, class UAnimNotify* AnimNotifyObject);
		void UpdateMeshesAfterDelay();
		void ComeOutShortRange();
		void ComeOutLongRange(int32_t Range);
		void OnPurloviaSleeped();
		void PreComeOutActions();
		void TryComeOutNormal(bool PlayAnim, bool forceUnbury);
		void OnBuried();
		void ShowBuryMeshAfterDelay();
		void HideBuryMeshAfterDelay();
		void FastBury();
		void OnClientConnect();
		void OnWildServerConnect();
		void OnTamedServerConnect();
		void ReceiveBeginPlay();
		void ExecuteUbergraph_Purlovia_Character_BP(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
