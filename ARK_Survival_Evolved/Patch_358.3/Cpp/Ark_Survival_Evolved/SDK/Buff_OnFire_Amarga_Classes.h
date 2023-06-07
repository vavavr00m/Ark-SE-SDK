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
	 * BlueprintGeneratedClass Buff_OnFire_Amarga.Buff_OnFire_Amarga_C
	 * Size -> 0x0014 (FullSize[0x0994] - InheritedSize[0x0980])
	 */
	class ABuff_OnFire_Amarga_C : public ABuff_OnFire_C
	{
	public:
		double                                                     LastDamageTime;                                          // 0x0980(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      MinDamagePerSecond;                                      // 0x0988(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      MaxHealthPercentDamagePerSecond;                         // 0x098C(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      MaxDamagePerSecond;                                      // 0x0990(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor

	public:
		bool BPCustomAllowAddBuff(class APrimalCharacter* forCharacter, class AActor* DamageCauser);
		void ReceiveTick(float DeltaSeconds);
		bool BPPreventAddingOtherBuff(class UClass* anotherBuffClass);
		void UserConstructionScript();
		void ExecuteUbergraph_Buff_OnFire_Amarga(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
