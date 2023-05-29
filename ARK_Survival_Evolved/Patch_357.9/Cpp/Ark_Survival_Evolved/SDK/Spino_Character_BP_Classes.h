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
	 * BlueprintGeneratedClass Spino_Character_BP.Spino_Character_BP_C
	 * Size -> 0x01EB (FullSize[0x2473] - InheritedSize[0x2288])
	 */
	class ASpino_Character_BP_C : public ADino_Character_BP_C
	{
	public:
		class UDinoCharacterStatusComponent_BP_Spino_C*            DinoCharacterStatus_BP_Spino_C1;                         // 0x2288(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		bool                                                       bIsBiped;                                                // 0x2290(0x0001) Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, RepNotify, NoDestructor
		unsigned char                                              UnknownData_KMKQ[0x7];                                   // 0x2291(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		double                                                     LastTimeSinceStanceSwitch;                               // 0x2298(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      stanceSwitchDelay;                                       // 0x22A0(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       bIsSwitchingStances;                                     // 0x22A4(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_WI36[0x3];                                   // 0x22A5(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      stanceSwitchBlendTime;                                   // 0x22A8(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       bWantsToSwitchStance;                                    // 0x22AC(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       bWantsToAttack;                                          // 0x22AD(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_AQ8S[0x2];                                   // 0x22AE(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      BipedRunSpeedMultiplier;                                 // 0x22B0(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		float                                                      BipedMeleeMultiplier;                                    // 0x22B4(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		class UAnimSequence*                                       Ref_BipedAnim_MoveFwd;                                   // 0x22B8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		class UAnimSequence*                                       Ref_BipedAnim_RunFwd;                                    // 0x22C0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		class UAnimSequence*                                       Ref_BipedAnim_MoveLeft;                                  // 0x22C8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		class UAnimSequence*                                       Ref_BipedAnim_RunLeft;                                   // 0x22D0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		class UAnimSequence*                                       Ref_BipedAnim_MoveRight;                                 // 0x22D8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		class UAnimSequence*                                       Ref_BipedAnim_RunRight;                                  // 0x22E0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		class UAnimSequence*                                       Ref_BipedAnim_Idle;                                      // 0x22E8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		class UAnimMontage*                                        Ref_BipedAnim_Startled;                                  // 0x22F0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		class UAnimMontage*                                        Ref_BipedAnim_Hurt;                                      // 0x22F8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		class UAnimMontage*                                        Ref_BipedAnim_QuadToBiped_Move;                          // 0x2300(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		class UAnimMontage*                                        Ref_BipedAnim_QuadToBiped_Run;                           // 0x2308(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		class UAnimMontage*                                        Ref_BipedAnim_QuadToBiped_Idle;                          // 0x2310(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		class UAnimMontage*                                        Ref_BipedAnim_BipedToQuad_Move;                          // 0x2318(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		class UAnimMontage*                                        Ref_BipedAnim_BipedToQuad_Run;                           // 0x2320(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		class UAnimMontage*                                        Ref_BipedAnim_BipedToQuad_Idle;                          // 0x2328(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      BipedMaxWalkSpeedMultiplier;                             // 0x2330(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      BipedRotationMultiplier;                                 // 0x2334(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      Biped_TamedRunningRotationRateModifier;                  // 0x2338(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_NJCJ[0x4];                                   // 0x233C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UClass*                                              AquaticBuffClass;                                        // 0x2340(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		double                                                     LastTimeSinceInWater;                                    // 0x2348(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      BuffTimeExpiration;                                      // 0x2350(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       bIsAquatic;                                              // 0x2354(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_R37F[0x3];                                   // 0x2355(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FName                                                StanceSwitchNotifyName;                                  // 0x2358(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		class UAnimMontage*                                        Ref_BipedAnim_BipedTorpid;                               // 0x2360(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		TArray<class UAnimMontage*>                                AdditiveAnims_Quad;                                      // 0x2368(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance
		TArray<class UAnimMontage*>                                AdditiveAnims_Biped;                                     // 0x2378(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance
		float                                                      AIStanceSwitchCooldown;                                  // 0x2388(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      K2Node_CustomEvent_delay;                                // 0x238C(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_IsServer_ReturnValue;                           // 0x2390(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_DoAttack_ReturnValue;                           // 0x2391(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_BooleanAND_ReturnValue;                         // 0x2392(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_0TDQ[0x5];                                   // 0x2393(0x0005) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class AActor*                                              K2Node_Event_OtherActor2;                                // 0x2398(0x0008) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		class APhysicsVolume*                                      K2Node_DynamicCast_AsPhysicsVolume;                      // 0x23A0(0x0008) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       K2Node_DynamicCast_CastSuccess;                          // 0x23A8(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_HasBuff_ReturnValue;                            // 0x23A9(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_Not_PreBool_ReturnValue;                        // 0x23AA(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_3UPH[0x5];                                   // 0x23AB(0x0005) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class AActor*                                              K2Node_Event_OtherActor;                                 // 0x23B0(0x0008) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		class APhysicsVolume*                                      K2Node_DynamicCast_AsPhysicsVolume2;                     // 0x23B8(0x0008) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       K2Node_DynamicCast2_CastSuccess;                         // 0x23C0(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_HasBuff_ReturnValue2;                           // 0x23C1(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_IsServer_ReturnValue2;                          // 0x23C2(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       K2Node_CustomEvent_bIsActive;                            // 0x23C3(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_I08T[0x4];                                   // 0x23C4(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class APrimalBuff*                                         CallFunc_GetBuff_ReturnValue;                            // 0x23C8(0x0008) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		class ABuff_SpinoAqua_C*                                   K2Node_DynamicCast_AsBuff_SpinoAqua_C;                   // 0x23D0(0x0008) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       K2Node_DynamicCast3_CastSuccess;                         // 0x23D8(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_W840[0x7];                                   // 0x23D9(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class APrimalBuff*                                         CallFunc_StaticAddBuff_ReturnValue;                      // 0x23E0(0x0008) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_ResetBuffStart_ReturnValue;                     // 0x23E8(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_U6FW[0x7];                                   // 0x23E9(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UAnimMontage*                                        CallFunc_Array_Get_Item;                                 // 0x23F0(0x0008) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		class UAnimMontage*                                        CallFunc_Array_Get_Item2;                                // 0x23F8(0x0008) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		float                                                      CallFunc_PlayAnimEx_ReturnValue;                         // 0x2400(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		float                                                      CallFunc_PlayAnimEx_ReturnValue2;                        // 0x2404(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		class UAnimMontage*                                        CallFunc_Array_Get_Item3;                                // 0x2408(0x0008) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		class UAnimInstance*                                       CallFunc_GetAnimInstance_ReturnValue;                    // 0x2410(0x0008) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		float                                                      CallFunc_PlayAnimEx_ReturnValue3;                        // 0x2418(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_HB24[0x4];                                   // 0x241C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class USpinoBipedAnimBlueprint_C*                          K2Node_DynamicCast_AsSpinoBipedAnimBlueprint_C;          // 0x2420(0x0008) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       K2Node_DynamicCast4_CastSuccess;                         // 0x2428(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_10BX[0x7];                                   // 0x2429(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UAnimMontage*                                        CallFunc_Array_Get_Item4;                                // 0x2430(0x0008) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		float                                                      CallFunc_PlayAnimEx_ReturnValue4;                        // 0x2438(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_7NF9[0x4];                                   // 0x243C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UAnimMontage*                                        CallFunc_Array_Get_Item5;                                // 0x2440(0x0008) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		float                                                      CallFunc_PlayAnimEx_ReturnValue5;                        // 0x2448(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_IY1A[0x4];                                   // 0x244C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UAnimMontage*                                        CallFunc_GetCurrentMontage_ReturnValue;                  // 0x2450(0x0008) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		class UAnimMontage*                                        CallFunc_Array_Get_Item6;                                // 0x2458(0x0008) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		float                                                      CallFunc_PlayAnimEx_ReturnValue6;                        // 0x2460(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		int32_t                                                    CallFunc_Array_Find_ReturnValue;                         // 0x2464(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_GreaterEqual_IntInt_ReturnValue;                // 0x2468(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_BM06[0x3];                                   // 0x2469(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    CallFunc_Array_Find_ReturnValue2;                        // 0x246C(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_GreaterEqual_IntInt_ReturnValue2;               // 0x2470(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_BooleanOR_ReturnValue;                          // 0x2471(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_Not_PreBool_ReturnValue2;                       // 0x2472(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor

	public:
		class FName GetSocketForMeleeTraceForHitBlockers(int32_t AttackIndex);
		bool BlueprintCanAttack(int32_t AttackIndex, float Distance, float attackRangeOffset, class AActor* OtherTarget);
		void BPDoAttack(int32_t AttackIndex);
		void CanSwitchStances(bool isBiped, bool* canSwitch);
		bool BlueprintCanRiderAttack(int32_t AttackIndex);
		void GetStanceSwitchAnim(class UAnimMontage** AnimMontage);
		void SS_SetCurrentStance(bool isBiped, bool bUseCooldown);
		void ToggleStance();
		void BPTimerServer();
		void PreInit_SwitchStance();
		void K2_OnMovementModeChanged(EMovementMode PrevMovementMode, EMovementMode NewMovementMode, unsigned char PrevCustomMode, unsigned char NewCustomMode);
		void GetDefaultDino(class ASpino_Character_BP_C** Dino);
		void UpdateMoveSpeed();
		void UpdateStance();
		void OnRep_bIsBiped();
		void CS_SetBipedState(bool isBiped);
		void UserConstructionScript();
		void SS_RequestStanceSwitch();
		void StanceSwitch_Delay(float Delay);
		void ReceiveActorBeginOverlap(class AActor* OtherActor);
		void ReceiveActorEndOverlap(class AActor* OtherActor);
		void Multi_UpdateBuffTime(bool bIsActive);
		void AdditiveRoar();
		void ExecuteUbergraph_Spino_Character_BP(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
