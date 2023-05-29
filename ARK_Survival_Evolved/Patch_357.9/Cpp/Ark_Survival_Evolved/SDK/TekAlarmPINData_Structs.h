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
	// # Structs
	// --------------------------------------------------
	/**
	 * UserDefinedStruct TekAlarmPINData.TekAlarmPINData
	 * Size -> 0x0019
	 */
	struct FTekAlarmPINData
	{
	public:
		double                                                     LastTimeActivated_2_B73FF631465607C325901B93ABB2CC79;    // 0x0000(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		double                                                     LastTimeDeactivated_5_20D82F2B4FDC101DDEE6B0ABA7001BA7;  // 0x0008(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		int32_t                                                    PINCode_11_2D3284A44E561BB12BA264A12D6CAAB8;             // 0x0010(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		int32_t                                                    BitIndex_10_72E97AA6482E3869F60B92828DF09A5F;            // 0x0014(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		bool                                                       IsActive_13_83F386134F498A122054389590C9A865;            // 0x0018(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
