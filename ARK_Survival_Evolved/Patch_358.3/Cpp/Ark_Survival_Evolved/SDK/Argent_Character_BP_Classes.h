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
	 * BlueprintGeneratedClass Argent_Character_BP.Argent_Character_BP_C
	 * Size -> 0x0060 (FullSize[0x22E8] - InheritedSize[0x2288])
	 */
	class AArgent_Character_BP_C : public ADino_Character_BP_C
	{
	public:
		class UDinoCharacterStatusComponent_BP_Argent_C*           DinoCharacterStatus_BP_Argent_C1;                        // 0x2288(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		double                                                     LastGrabTime;                                            // 0x2290(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		class UClass*                                              RegenBuffClass;                                          // 0x2298(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		float                                                      FeatherTime;                                             // 0x22A0(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		int32_t                                                    BeakPassengerSlot;                                       // 0x22A4(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		int32_t                                                    ClawsPassengerSlot;                                      // 0x22A8(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       UseBeakMassLimit;                                        // 0x22AC(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_XYCS[0x3];                                   // 0x22AD(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      BeakCarryMassLimit;                                      // 0x22B0(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		bool                                                       UseClawsMassLimit;                                       // 0x22B4(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_WZC5[0x3];                                   // 0x22B5(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      ClawsCarryMassLimit;                                     // 0x22B8(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_GGPA[0x4];                                   // 0x22BC(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UAnimMontage*                                        ClawCarryAnim;                                           // 0x22C0(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		class UAnimMontage*                                        BeakCarryAnim;                                           // 0x22C8(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		class UAnimMontage*                                        BeakAndClawCarryAnim;                                    // 0x22D0(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		bool                                                       UpdateCarryAnimAfterAttack;                              // 0x22D8(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_0LJD[0x7];                                   // 0x22D9(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UAnimMontage*                                        BeakCarryGroundAnim;                                     // 0x22E0(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor

	public:
		void BPDidClearCarriedCharacter(class APrimalCharacter* PreviousCarriedCharacter);
		void AllowPassengerinSlot(class APrimalCharacter* Character, int32_t Slot, bool* Allowed);
		bool BPAllowCarryCharacter(class APrimalCharacter* checkCharacter);
		void RemovePassengerInSlot(int32_t Slot);
		void GetPassenger(int32_t Slot, class APrimalCharacter** Char);
		void HasPassengerInSlot(int32_t Slot, bool* returnvalue);
		void BPNotifyClearRider(class AShooterCharacter* RiderClearing);
		void BPDoAttack(int32_t AttackIndex);
		void UpdateCarryAnim();
		void BPOnMovementModeChangedNotify(EMovementMode PrevMovementMode, unsigned char PreviousCustomMode);
		void ReceiveBeginPlay();
		void BPNotifyClearPassenger(class APrimalCharacter* PassengerChar, int32_t SeatIndex);
		void ReceiveTick(float DeltaSeconds);
		bool BlueprintCanRiderAttack(int32_t AttackIndex);
		bool BPCanTakePassenger(class APrimalCharacter* Character, int32_t PassengerSeatIndex, bool bForcePassenger, bool bAllowFlyersAndWaterDinos);
		void BPNotifyAddPassenger(class APrimalCharacter* PassengerChar, int32_t SeatIndex);
		void UserConstructionScript();
		void MulticastOnAttack();
		void MulticastUpdateCarryAnim();
		void ExecuteUbergraph_Argent_Character_BP(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
