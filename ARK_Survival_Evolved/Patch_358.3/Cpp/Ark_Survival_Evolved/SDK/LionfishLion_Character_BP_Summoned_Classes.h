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
	 * BlueprintGeneratedClass LionfishLion_Character_BP_Summoned.LionfishLion_Character_BP_Summoned_C
	 * Size -> 0x0000 (FullSize[0x4618] - InheritedSize[0x4618])
	 */
	class ALionfishLion_Character_BP_Summoned_C : public ALionfishLion_Character_BP_C
	{
	public:
		bool BPDinoTooltipCustomTamingProgressBar(bool* overrideTamingProgressBarIfActive, float* progressPercent, class FString* Label);
		void UserConstructionScript();
		void ExecuteUbergraph_LionfishLion_Character_BP_Summoned(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
