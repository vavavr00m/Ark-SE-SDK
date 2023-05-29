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
	 * BlueprintGeneratedClass CORE_PrimalGameData.CORE_PrimalGameData_C
	 * Size -> 0x0020 (FullSize[0x2108] - InheritedSize[0x20E8])
	 */
	class UCORE_PrimalGameData_C : public UPrimalGameData
	{
	public:
		TArray<struct FHairMetaData>                               FemaleHairStylesMetaDatas;                               // 0x20E8(0x0010) Edit, BlueprintVisible, ZeroConstructor
		TArray<struct FHairMetaData>                               MaleHairStylesMetaDatas;                                 // 0x20F8(0x0010) Edit, BlueprintVisible, ZeroConstructor

	public:
		void ExecuteUbergraph_CORE_PrimalGameData(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
