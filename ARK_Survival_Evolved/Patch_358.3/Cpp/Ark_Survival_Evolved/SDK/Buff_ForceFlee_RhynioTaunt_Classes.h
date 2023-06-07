#pragma once

/**
 * Name: Ark_Survival_Evolved
 * Version: Patch_358.3
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
	 * BlueprintGeneratedClass Buff_ForceFlee_RhynioTaunt.Buff_ForceFlee_RhynioTaunt_C
	 * Size -> 0x0060 (FullSize[0x0A08] - InheritedSize[0x09A8])
	 */
	class ABuff_ForceFlee_RhynioTaunt_C : public ABuff_ForceFlee_Base_C
	{
	public:
		float                                                      WildDeactivateAfterTime;                                 // 0x09A8(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      LastPPIntensity;                                         // 0x09AC(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		double                                                     LastTryAttackMessageTime;                                // 0x09B0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		class APlayerController*                                   LastRidingPC;                                            // 0x09B8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor
		struct FVector                                             K2Node_CustomEvent_Loc;                                  // 0x09C0(0x000C) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       K2Node_CustomEvent_ForAttack;                            // 0x09CC(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_NotEqual_VectorVector_ReturnValue;              // 0x09CD(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_CEPX[0x2];                                   // 0x09CE(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UWorld*                                              CallFunc_K2_GetWorld_ReturnValue;                        // 0x09D0(0x0008) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		double                                                     CallFunc_GetGameTimeInSeconds_ReturnValue;               // 0x09D8(0x0008) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_IsTimeSince_ReturnValue;                        // 0x09E0(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_JK6F[0x7];                                   // 0x09E1(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class APlayerController*                                   K2Node_CustomEvent_PC;                                   // 0x09E8(0x0008) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       K2Node_CustomEvent_Enable;                               // 0x09F0(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_IsLocalPlayerController_ReturnValue;            // 0x09F1(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_Q5X3[0x6];                                   // 0x09F2(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class AActor*>                                      CallFunc_LineTraceSingle_NEW_ActorsToIgnore_RefProperty; // 0x09F8(0x0010) OutParm, ZeroConstructor, Transient, DuplicateTransient, ReferenceParm

	public:
		bool BPCustomAllowAddBuff(class APrimalCharacter* forCharacter, class AActor* DamageCauser);
		void DinoInstigatorClearedRider();
		float GetBuffPostprocessIntensity();
		void DinoInstigatorReceivedRider(class AShooterCharacter* Rider);
		void DisplayRiderNotif(bool ForAttack);
		void BuffTickServer(float DeltaTime);
		void RefreshStaticFleeing();
		void BPSetupForInstigator(class AActor* ForInstigator);
		void UserConstructionScript();
		void InpActEvt_Fire_K2Node_InputActionEvent_430();
		void InpActEvt_Targeting_K2Node_InputActionEvent_429();
		void InpActEvt_Crouch_K2Node_InputActionEvent_428();
		void InpActEvt_Jump_K2Node_InputActionEvent_427();
		void Multi_SetStaticFleeDest(const struct FVector& Loc);
		void Client_DisplayRiderNotif(bool ForAttack);
		void Multi_UpdateRiderInput(class APlayerController* PC, bool Enable);
		void ExecuteUbergraph_Buff_ForceFlee_RhynioTaunt(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
