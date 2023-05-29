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
	// # Classes
	// --------------------------------------------------
	/**
	 * BlueprintGeneratedClass WeapOneShotRifle_LaserBeam.WeapOneShotRifle_LaserBeam_C
	 * Size -> 0x0020 (FullSize[0x0DE0] - InheritedSize[0x0DC0])
	 */
	class AWeapOneShotRifle_LaserBeam_C : public AWeapOneShotRifle_C
	{
	public:
		class UShooterLaserBeamComponent*                          TPVLaserBeam;                                            // 0x0DC0(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		class UStaticMeshComponent*                                ThirdPersonAttachment;                                   // 0x0DC8(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		class UShooterLaserBeamComponent*                          FPVLaserBeam;                                            // 0x0DD0(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		class UStaticMeshComponent*                                FirstPersonAttachment;                                   // 0x0DD8(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor

	public:
		void UserConstructionScript();
		void ExecuteUbergraph_WeapOneShotRifle_LaserBeam(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
