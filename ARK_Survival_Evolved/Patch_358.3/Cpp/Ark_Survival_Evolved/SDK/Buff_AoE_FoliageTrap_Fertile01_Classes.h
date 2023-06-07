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
	 * BlueprintGeneratedClass Buff_AoE_FoliageTrap_Fertile01.Buff_AoE_FoliageTrap_Fertile01_C
	 * Size -> 0x0000 (FullSize[0x0990] - InheritedSize[0x0990])
	 */
	class ABuff_AoE_FoliageTrap_Fertile01_C : public ABuff_Base_AoE_WithDelay_C
	{
	public:
		void UserConstructionScript();
		void ExecuteUbergraph_Buff_AoE_FoliageTrap_Fertile01(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
