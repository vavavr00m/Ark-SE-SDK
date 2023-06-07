﻿#pragma once

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
	 * BlueprintGeneratedClass PrimalItemArmor_TekStriderOnesidedShield.PrimalItemArmor_TekStriderOnesidedShield_C
	 * Size -> 0x0008 (FullSize[0x0AF0] - InheritedSize[0x0AE8])
	 */
	class UPrimalItemArmor_TekStriderOnesidedShield_C : public UPrimalItemArmor_TekStriderAttachment_Base_C
	{
	public:
		float                                                      CurrentShieldHealth;                                     // 0x0AE8(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      FullHealth;                                              // 0x0AEC(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor

	public:
		void ExecuteUbergraph_PrimalItemArmor_TekStriderOnesidedShield(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
