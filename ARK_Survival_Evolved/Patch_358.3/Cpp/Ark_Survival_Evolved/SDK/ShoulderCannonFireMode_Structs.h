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
	 * UserDefinedStruct ShoulderCannonFireMode.ShoulderCannonFireMode
	 * Size -> 0x0020
	 */
	struct FShoulderCannonFireMode
	{
	public:
		class UClass*                                              ProjectileClass_2_8B3DDF3D49DC18A62A789789567F6AA2;      // 0x0000(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		float                                                      MinCharge_5_D1346C1A43B11AD1187D0EBD68545E04;            // 0x0008(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		float                                                      TargetCenterBias_8_E53C26164D2B4FFA6C7EB58CB42FD068;     // 0x000C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		float                                                      TargetRetentionBias_11_B13EEB8F449448BC07A21FB7A736A595; // 0x0010(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		float                                                      TargetSearchOffset_17_664E75FA4178A3B82C0D4EA631D141FD;  // 0x0014(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		float                                                      AimSpeed_20_4D8AAEA249B3471EDF59D6871AC7A7BA;            // 0x0018(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		int32_t                                                    AmmoCost_23_462D04D546497E5B916BB8A73D99A924;            // 0x001C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
