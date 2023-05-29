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
	 * BlueprintGeneratedClass WeapBola.WeapBola_C
	 * Size -> 0x0018 (FullSize[0x0EB8] - InheritedSize[0x0EA0])
	 */
	class AWeapBola_C : public APrimalWeaponGrenade
	{
	public:
		float                                                      ThrowLoopSpeedMin;                                       // 0x0EA0(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      ThrowLoopSpeedMax;                                       // 0x0EA4(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      ThrowProjectileSpeedMin;                                 // 0x0EA8(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      ThrowProjectileSpeedMax;                                 // 0x0EAC(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      ThrowCookTimeMax;                                        // 0x0EB0(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      MinThrowCookingTime;                                     // 0x0EB4(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor

	public:
		bool BPWeaponCanFire();
		float BPGetProjectileSpeed();
		void UserConstructionScript();
		void ExecuteUbergraph_WeapBola(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
