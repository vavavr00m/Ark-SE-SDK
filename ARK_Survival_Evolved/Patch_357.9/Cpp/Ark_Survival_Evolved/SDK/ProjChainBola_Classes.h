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
	 * BlueprintGeneratedClass ProjChainBola.ProjChainBola_C
	 * Size -> 0x0090 (FullSize[0x06F0] - InheritedSize[0x0660])
	 */
	class AProjChainBola_C : public AShooterProjectile
	{
	public:
		class UAudioComponent*                                     Audio1;                                                  // 0x0660(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		struct FHitResult                                          K2Node_Event_Result;                                     // 0x0668(0x0088) OutParm, Transient, DuplicateTransient, ReferenceParm

	public:
		void UserConstructionScript();
		void OnExplode(struct FHitResult* Result);
		void ExecuteUbergraph_ProjChainBola(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
