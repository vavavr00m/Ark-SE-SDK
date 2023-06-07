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
	 * AnimBlueprintGeneratedClass FPVBambooGrenadeWeaponAnimBP_Base.FPVBambooGrenadeWeaponAnimBP_Base_C
	 * Size -> 0x0007 (FullSize[0x0720] - InheritedSize[0x0719])
	 */
	class UFPVBambooGrenadeWeaponAnimBP_Base_C : public UFPVGrenadeWeaponAnimBP_Base_C
	{
	public:
		bool                                                       IsRunning_1;                                             // 0x0719(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       IsMoving_1;                                              // 0x071A(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       IsCooking_1;                                             // 0x071B(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      CookingTime_1;                                           // 0x071C(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor

	public:
		void ExecuteUbergraph_FPVBambooGrenadeWeaponAnimBP_Base(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
