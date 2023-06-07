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
	 * BlueprintGeneratedClass Gate_Stone_Large.Gate_Stone_Large_C
	 * Size -> 0x0010 (FullSize[0x0B80] - InheritedSize[0x0B70])
	 */
	class AGate_Stone_Large_C : public ADoor_Base_SM_C
	{
	public:
		class UStaticMeshComponent*                                SecondDoor;                                              // 0x0B70(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		class USceneComponent*                                     SecondDoorTransform;                                     // 0x0B78(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor

	public:
		void UserConstructionScript();
		void ExecuteUbergraph_Gate_Stone_Large(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
