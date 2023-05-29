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
	 * BlueprintGeneratedClass Buff_Radiation_Indicator.Buff_Radiation_Indicator_C
	 * Size -> 0x0030 (FullSize[0x09B0] - InheritedSize[0x0980])
	 */
	class ABuff_Radiation_Indicator_C : public ABuff_Base_OnlyRelevantToOwner_C
	{
	public:
		class UClass*                                              RadiationBuff;                                           // 0x0980(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		bool                                                       InsideTekForcefield;                                     // 0x0988(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       HasBuffThatMutesSound;                                   // 0x0989(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_GC6U[0x6];                                   // 0x098A(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class UClass*>                                      MuteSoundWhenHasOtherBuff;                               // 0x0990(0x0010) Edit, BlueprintVisible, ZeroConstructor
		TArray<class AActor*>                                      CallFunc_SphereOverlapActors_NEW_ActorsToIgnore_RefProperty; // 0x09A0(0x0010) OutParm, ZeroConstructor, Transient, DuplicateTransient, ReferenceParm

	public:
		void BPNotifyOtherBuffDeactivated(class APrimalBuff* OtherBuff);
		void BPNotifyOtherBuffActivated(class APrimalBuff* OtherBuff);
		void BPSetupForInstigator(class AActor* ForInstigator);
		void SetRadiationIndicatorHidden(bool HideIcon, bool MuteSound);
		void BuffTickServer(float DeltaTime);
		void IsInstigatorNearTekForcefield(class AStorageBox_TekShield_C* TekShield, bool* IsInsideShield);
		void BuffTickClient(float DeltaTime);
		void BPResetBuffStart();
		void UserConstructionScript();
		void ExecuteUbergraph_Buff_Radiation_Indicator(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
