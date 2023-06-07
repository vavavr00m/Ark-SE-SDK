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
	 * BlueprintGeneratedClass Weap_Mjolnir.Weap_Mjolnir_C
	 * Size -> 0x0024 (FullSize[0x0F24] - InheritedSize[0x0F00])
	 */
	class AWeap_Mjolnir_C : public AWeapSword_Tek_C
	{
	public:
		bool                                                       bIsCharged;                                              // 0x0F00(0x0001) Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, RepNotify, NoDestructor
		unsigned char                                              UnknownData_P3D6[0x7];                                   // 0x0F01(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		double                                                     LastTimeIdleSound;                                       // 0x0F08(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      IdleMinDelay;                                            // 0x0F10(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      IdleMaxDelay;                                            // 0x0F14(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		class USoundBase*                                          IdleSound;                                               // 0x0F18(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      CallFunc_RandomFloatInRange_ReturnValue;                 // 0x0F20(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor

	public:
		bool BPCanEquip(class AShooterCharacter* ByCharacter);
		void PlayRandomIdleSound();
		void CheckPlayIdleAudio();
		void OnRep_bIsCharged();
		void ReceiveTick(float DeltaSeconds);
		void BPSpawnMeleeEffects(const struct FVector& Impact, const struct FVector& ShootDir);
		bool BPCanMeleeAttack();
		void UserConstructionScript();
		void PlayRandomIdleAudio();
		void ExecuteUbergraph_Weap_Mjolnir(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
