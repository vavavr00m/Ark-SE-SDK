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
	 * UserDefinedStruct CarchaFriendStruct.CarchaFriendStruct
	 * Size -> 0x0010
	 */
	struct FCarchaFriendStruct
	{
	public:
		int32_t                                                    Team_2_12D955CA433A0FE095799FAF12BB97B5;                 // 0x0000(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		float                                                      FriendMeter_5_376BCC63431A1BD223EA73B051D6C82F;          // 0x0004(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		double                                                     LastOfferTime_9_4460195D4F8ADD534E463099C76C58F8;        // 0x0008(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
