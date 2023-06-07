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
	 * UserDefinedStruct CanoePassengerClientInputAxes.CanoePassengerClientInputAxes
	 * Size -> 0x0010
	 */
	struct FCanoePassengerClientInputAxes
	{
	public:
		float                                                      Forward_15_2215D3E3486D16DB2348D88BB08FB8AC;             // 0x0000(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		float                                                      Right_17_579CAB2048FDF2955DF413BAA6468BC2;               // 0x0004(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		double                                                     NetworkTimestamp_20_66A19F3F4671199B6AE4449ABE7E0869;    // 0x0008(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
