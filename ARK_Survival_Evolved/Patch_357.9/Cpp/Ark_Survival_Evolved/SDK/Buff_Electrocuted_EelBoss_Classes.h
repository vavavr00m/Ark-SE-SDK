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
	 * BlueprintGeneratedClass Buff_Electrocuted_EelBoss.Buff_Electrocuted_EelBoss_C
	 * Size -> 0x000C (FullSize[0x09A4] - InheritedSize[0x0998])
	 */
	class ABuff_Electrocuted_EelBoss_C : public ABuff_Electrocuted_C
	{
	public:
		float                                                      maxSpeedCap;                                             // 0x0998(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      speedMultiplier;                                         // 0x099C(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      DamageMultiplier;                                        // 0x09A0(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor

	public:
		void BPPreSetupForInstigator(class AActor* ForInstigator);
		void BPSetupForInstigator(class AActor* ForInstigator);
		void BPDeactivated(class AActor* ForInstigator);
		void UserConstructionScript();
		void ExecuteUbergraph_Buff_Electrocuted_EelBoss(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
