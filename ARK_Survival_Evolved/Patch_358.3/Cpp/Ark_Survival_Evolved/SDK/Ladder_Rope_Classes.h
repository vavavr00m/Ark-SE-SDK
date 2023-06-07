﻿#pragma once

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
	// # Classes
	// --------------------------------------------------
	/**
	 * BlueprintGeneratedClass Ladder_Rope.Ladder_Rope_C
	 * Size -> 0x0008 (FullSize[0x0B50] - InheritedSize[0x0B48])
	 */
	class ALadder_Rope_C : public ALadderBaseBP_C
	{
	public:
		class UStaticMeshComponent*                                RetractedMesh;                                           // 0x0B48(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor

	public:
		void UserConstructionScript();
		void ExecuteUbergraph_Ladder_Rope(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
