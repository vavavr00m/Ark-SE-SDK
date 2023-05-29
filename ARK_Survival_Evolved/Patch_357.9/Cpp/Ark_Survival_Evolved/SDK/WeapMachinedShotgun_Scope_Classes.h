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
	 * BlueprintGeneratedClass WeapMachinedShotgun_Scope.WeapMachinedShotgun_Scope_C
	 * Size -> 0x0010 (FullSize[0x0DD0] - InheritedSize[0x0DC0])
	 */
	class AWeapMachinedShotgun_Scope_C : public AWeapMachinedShotgun_C
	{
	public:
		class UStaticMeshComponent*                                FirstPersonAttachment;                                   // 0x0DC0(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		class UStaticMeshComponent*                                ThirdPersonAttachment;                                   // 0x0DC8(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor

	public:
		void UserConstructionScript();
		void ExecuteUbergraph_WeapMachinedShotgun_Scope(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
