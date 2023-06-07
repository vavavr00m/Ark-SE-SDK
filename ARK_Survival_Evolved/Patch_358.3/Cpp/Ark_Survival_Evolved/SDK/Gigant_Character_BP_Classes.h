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
	 * BlueprintGeneratedClass Gigant_Character_BP.Gigant_Character_BP_C
	 * Size -> 0x0008 (FullSize[0x2298] - InheritedSize[0x2290])
	 */
	class AGigant_Character_BP_C : public AGigant_Character_BP_Base_C
	{
	public:
		class UDinoCharacterStatusComponent_BP_Gigant_C*           DinoCharacterStatus_BP_Gigant_C1_1;                      // 0x2290(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor

	public:
		void BPNotifyClearRider(class AShooterCharacter* RiderClearing);
		void BPNotifySetRider(class AShooterCharacter* RiderSetting);
		class FName GetSocketForMeleeTraceForHitBlockers(int32_t AttackIndex);
		void UserConstructionScript();
		void ExecuteUbergraph_Gigant_Character_BP(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
