﻿#pragma once

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
	// # Classes
	// --------------------------------------------------
	/**
	 * BlueprintGeneratedClass MeleeFist_Impacts.MeleeFist_Impacts_C
	 * Size -> 0x0008 (FullSize[0x0888] - InheritedSize[0x0880])
	 */
	class AMeleeFist_Impacts_C : public AShooterImpactEffect
	{
	public:
		class USceneComponent*                                     DefaultSceneRoot;                                        // 0x0880(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor

	public:
		void UserConstructionScript();
		void ExecuteUbergraph_MeleeFist_Impacts(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
