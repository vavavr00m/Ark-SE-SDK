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
	 * BlueprintGeneratedClass PrimalItemArmor_ShoulderCannon.PrimalItemArmor_ShoulderCannon_C
	 * Size -> 0x0017 (FullSize[0x0C18] - InheritedSize[0x0C01])
	 */
	class UPrimalItemArmor_ShoulderCannon_C : public UPrimalItemArmor_Base_Tek_C
	{
	public:
		unsigned char                                              UnknownData_J88Z[0x7];                                   // 0x0C01(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class AShooterCharacter*                                   Player;                                                  // 0x0C08(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor
		class ABuff_TekArmor_ShoulderCannon_C*                     Buff;                                                    // 0x0C10(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor

	public:
		void HasAmmoOrElement(bool* Allowed);
		void ConsumeAmmo(int32_t amount, int32_t* UpdatedAmount);
		void GetBuff();
		void InitBuff();
		void BPAddedAttachments();
		void ExecuteUbergraph_PrimalItemArmor_ShoulderCannon(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
