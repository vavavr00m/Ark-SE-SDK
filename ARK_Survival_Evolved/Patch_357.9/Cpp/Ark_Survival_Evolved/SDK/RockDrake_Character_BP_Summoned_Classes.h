﻿#pragma once

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
	 * BlueprintGeneratedClass RockDrake_Character_BP_Summoned.RockDrake_Character_BP_Summoned_C
	 * Size -> 0x0000 (FullSize[0x3978] - InheritedSize[0x3978])
	 */
	class ARockDrake_Character_BP_Summoned_C : public ARockDrake_Character_BP_C
	{
	public:
		void CanUseCamo(bool isForStart, bool* Result);
		void UserConstructionScript();
		void ExecuteUbergraph_RockDrake_Character_BP_Summoned(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
