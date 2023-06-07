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
	 * BlueprintGeneratedClass Buff_FoliageHazard_Gen2_Gardens.Buff_FoliageHazard_Gen2_Gardens_C
	 * Size -> 0x0000 (FullSize[0x0A34] - InheritedSize[0x0A34])
	 */
	class ABuff_FoliageHazard_Gen2_Gardens_C : public ABuff_FoliageTrap_C
	{
	public:
		void UserConstructionScript();
		void ExecuteUbergraph_Buff_FoliageHazard_Gen2_Gardens(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
