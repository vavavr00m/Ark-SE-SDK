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
	 * UserDefinedStruct UberpounceData.UberpounceData
	 * Size -> 0x002A
	 */
	struct FUberpounceData
	{
	public:
		class FName                                                Socket_2_5083A12F491F7162FEFFF2A97F18030D;               // 0x0000(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		struct FVector                                             WorldGeoLocation_7_ADBE3EC7480595A1AF6B0B9FA97EE3F9;     // 0x0008(0x000C) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		struct FRotator                                            WorldGeoRotation_16_C8BC5C724F99806264418FBB303F78E9;    // 0x0014(0x000C) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		class APrimalCharacter*                                    Character_15_A587DB6C415808C1555C65BE528C7559;           // 0x0020(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		EUberpounceType                                            Type_23_2964764F48C642C4AF1E538ACB43EA6E;                // 0x0028(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		bool                                                       TargetIsFoliage_25_8AA213034D7796CBEA4920B67FBDB774;     // 0x0029(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
