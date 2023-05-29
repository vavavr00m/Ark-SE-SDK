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
	 * BlueprintGeneratedClass PrimalItemArmor_TekGloves.PrimalItemArmor_TekGloves_C
	 * Size -> 0x0017 (FullSize[0x0C18] - InheritedSize[0x0C01])
	 */
	class UPrimalItemArmor_TekGloves_C : public UPrimalItemArmor_Base_Tek_C
	{
	public:
		unsigned char                                              UnknownData_9AMW[0x7];                                   // 0x0C01(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              CannotUseAbilityDescriptionaddon;                        // 0x0C08(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance

	public:
		void ExecuteUbergraph_PrimalItemArmor_TekGloves(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
