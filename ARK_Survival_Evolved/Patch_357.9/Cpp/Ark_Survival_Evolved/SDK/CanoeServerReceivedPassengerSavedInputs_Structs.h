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
	 * UserDefinedStruct CanoeServerReceivedPassengerSavedInputs.CanoeServerReceivedPassengerSavedInputs
	 * Size -> 0x0014
	 */
	struct FCanoeServerReceivedPassengerSavedInputs
	{
	public:
		float                                                      Axis_13_D6560244437B59C6FFA542AB1878A440;                // 0x0000(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_UPP3[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		double                                                     Timestamp_16_42521CEF4C6D168D5EDF3A98B4ED7BA2;           // 0x0008(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		int32_t                                                    PassengerIndex_9_3B570D2D4016B69EEEA75DBA2C542469;       // 0x0010(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
