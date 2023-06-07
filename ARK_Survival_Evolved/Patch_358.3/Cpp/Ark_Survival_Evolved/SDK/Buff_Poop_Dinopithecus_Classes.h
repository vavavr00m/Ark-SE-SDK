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
	 * BlueprintGeneratedClass Buff_Poop_Dinopithecus.Buff_Poop_Dinopithecus_C
	 * Size -> 0x0038 (FullSize[0x09B8] - InheritedSize[0x0980])
	 */
	class ABuff_Poop_Dinopithecus_C : public ABuff_Base_C
	{
	public:
		TArray<class FName>                                        PreventedTekArmorBuffs;                                  // 0x0980(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance
		double                                                     LastNotifiedTime;                                        // 0x0990(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      NotifyInterval;                                          // 0x0998(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_DIZ2[0x4];                                   // 0x099C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              WeaponDisabledNotificationText;                          // 0x09A0(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance
		float                                                      NotifyDisplayTime;                                       // 0x09B0(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      NotifyDisplayScale;                                      // 0x09B4(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor

	public:
		void BPOnPreventedFiringDisabledWeapon(class AShooterWeapon* weapon, const class FName& PreventingTag);
		TArray<class FName> BPPreventTekArmorBuffs();
		void UserConstructionScript();
		void ExecuteUbergraph_Buff_Poop_Dinopithecus(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
