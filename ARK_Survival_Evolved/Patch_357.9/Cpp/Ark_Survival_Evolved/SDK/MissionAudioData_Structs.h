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
	 * UserDefinedStruct MissionAudioData.MissionAudioData
	 * Size -> 0x0018
	 */
	struct FMissionAudioData
	{
	public:
		class FName                                                PhaseName_2_77784CA246DC2280DE5E8F9F9807B4DA;            // 0x0000(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		class USoundBase*                                          Intro_7_7E2E6FF74C32DBD90910289076EE0EE9;                // 0x0008(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		class USoundBase*                                          Loop_8_762326CA4D0A22F1AE927FB5BF20D67F;                 // 0x0010(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
