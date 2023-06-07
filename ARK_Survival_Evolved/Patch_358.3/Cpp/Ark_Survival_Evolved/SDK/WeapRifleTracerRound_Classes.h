#pragma once

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
	 * BlueprintGeneratedClass WeapRifleTracerRound.WeapRifleTracerRound_C
	 * Size -> 0x0004 (FullSize[0x0DC4] - InheritedSize[0x0DC0])
	 */
	class AWeapRifleTracerRound_C : public AShooterWeapon_Instant
	{
	public:
		int32_t                                                    RoundsFiredFromClip;                                     // 0x0DC0(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor

	public:
		void UserConstructionScript();
		void ExecuteUbergraph_WeapRifleTracerRound(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
