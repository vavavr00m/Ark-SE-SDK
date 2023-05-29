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
	 * BlueprintGeneratedClass PrimalBuff_SummonerDinoCountDown.PrimalBuff_SummonerDinoCountDown_C
	 * Size -> 0x001C (FullSize[0x0A58] - InheritedSize[0x0A3C])
	 */
	class APrimalBuff_SummonerDinoCountDown_C : public APrimalBuff_ChangeMaterialScalarParamOverTime_C
	{
	public:
		float                                                      ImmobilizeTime;                                          // 0x0A3C(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		class USkeletalMeshComponent*                              SummonedSkelMeshComp;                                    // 0x0A40(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       bUseSummonedSkelMesh;                                    // 0x0A48(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_6ZL1[0x7];                                   // 0x0A49(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class APrimalCharacter*                                    K2Node_CustomEvent_character;                            // 0x0A50(0x0008) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor

	public:
		float BuffAdjustDamage(float Damage, struct FHitResult* HitInfo, class AController* EventInstigator, class AActor* DamageCauser, class UClass* TheDamgeType);
		void ClearImmobilization();
		void SetSuicideTimer(float Duration);
		void Suicide();
		void BPSetupForInstigator(class AActor* ForInstigator);
		void UserConstructionScript();
		void OnInstigatorDied(class APrimalCharacter* Character);
		void ExecuteUbergraph_PrimalBuff_SummonerDinoCountDown(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
