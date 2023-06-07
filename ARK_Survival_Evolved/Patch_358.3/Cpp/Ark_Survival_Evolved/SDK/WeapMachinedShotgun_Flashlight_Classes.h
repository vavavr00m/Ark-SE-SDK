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
	 * BlueprintGeneratedClass WeapMachinedShotgun_Flashlight.WeapMachinedShotgun_Flashlight_C
	 * Size -> 0x0030 (FullSize[0x0DF0] - InheritedSize[0x0DC0])
	 */
	class AWeapMachinedShotgun_Flashlight_C : public AWeapMachinedShotgun_C
	{
	public:
		class UParticleSystemComponent*                            SecondaryFPVToggleComponent;                             // 0x0DC0(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		class USpotLightComponent*                                 FPVToggleComponent;                                      // 0x0DC8(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		class UStaticMeshComponent*                                FirstPersonAttachment;                                   // 0x0DD0(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		class UParticleSystemComponent*                            SecondaryTPVToggleComponent;                             // 0x0DD8(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		class USpotLightComponent*                                 TPVToggleComponent;                                      // 0x0DE0(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		class UStaticMeshComponent*                                ThirdPersonAttachment;                                   // 0x0DE8(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor

	public:
		void UserConstructionScript();
		void ExecuteUbergraph_WeapMachinedShotgun_Flashlight(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
