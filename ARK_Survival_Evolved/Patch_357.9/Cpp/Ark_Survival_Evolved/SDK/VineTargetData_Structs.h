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
	 * UserDefinedStruct VineTargetData.VineTargetData
	 * Size -> 0x0018
	 */
	struct FVineTargetData
	{
	public:
		class APrimalCharacter*                                    Target_2_649596D34CBBCA545167FB9FBC431F3B;               // 0x0000(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		struct FVector                                             InitialLocationOffset_5_000E04F54D5A2E1E438C9A84AAC0DDBC; // 0x0008(0x000C) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		float                                                      GrabbedAtVineLength_8_4D11BD904700E951AFC78A8F886594BB;  // 0x0014(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
