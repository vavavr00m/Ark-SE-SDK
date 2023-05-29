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
	 * BlueprintGeneratedClass Buff_Carcha_Attacked.Buff_Carcha_Attacked_C
	 * Size -> 0x0048 (FullSize[0x09C8] - InheritedSize[0x0980])
	 */
	class ABuff_Carcha_Attacked_C : public APrimalBuff
	{
	public:
		class APrimalCharacter*                                    WatchTarget;                                             // 0x0980(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       bIsWatchingTarget;                                       // 0x0988(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_2ERF[0x7];                                   // 0x0989(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class APrimalCharacter*                                    CharacterToBuff;                                         // 0x0990(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor
		class UClass*                                              MultistackBuff;                                          // 0x0998(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       bHasRegisteredADeath;                                    // 0x09A0(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_9J34[0x7];                                   // 0x09A1(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UClass*                                              RefreshBuff;                                             // 0x09A8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      MultistackHealthThreshold;                               // 0x09B0(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_A76M[0x4];                                   // 0x09B4(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              DeathMessageFormat;                                      // 0x09B8(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance

	public:
		void ReceiveBeginPlay();
		void WatchTargetDied(class APrimalCharacter* Character);
		void StartWatch(class APrimalCharacter* CharacterToWatch, class APrimalCharacter* CharacterToReportTo);
		void UserConstructionScript();
		void ExecuteUbergraph_Buff_Carcha_Attacked(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
