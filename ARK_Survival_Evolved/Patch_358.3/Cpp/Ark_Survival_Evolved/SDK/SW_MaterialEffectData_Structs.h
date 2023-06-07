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
	// # Structs
	// --------------------------------------------------
	/**
	 * UserDefinedStruct SW_MaterialEffectData.SW_MaterialEffectData
	 * Size -> 0x001C
	 */
	struct FSW_MaterialEffectData
	{
	public:
		class FName                                                NotifyName_18_B540047F431340276909B08E18FF4CE2;          // 0x0000(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		class FName                                                ParameterName_17_DC38C3EB4C7416578C83C6B936E50232;       // 0x0008(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		float                                                      InitValue_8_ABA5CCF64494AFB454FECB8B5428431F;            // 0x0010(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		float                                                      FinalValue_11_BF3C30144B7BB722DC78FD81D3C74452;          // 0x0014(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		int32_t                                                    ModFrequency_22_B2B8434A43AB23D89D0A34A37689C281;        // 0x0018(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
