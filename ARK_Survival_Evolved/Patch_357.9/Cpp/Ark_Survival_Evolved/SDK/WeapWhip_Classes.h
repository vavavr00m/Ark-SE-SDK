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
	 * BlueprintGeneratedClass WeapWhip.WeapWhip_C
	 * Size -> 0x0008 (FullSize[0x0DD8] - InheritedSize[0x0DD0])
	 */
	class AWeapWhip_C : public AShooterWeapon_Whip
	{
	public:
		class USoundCue*                                           GeneralHitSounds;                                        // 0x0DD0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor

	public:
		void UserConstructionScript();
		void ExecuteUbergraph_WeapWhip(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
