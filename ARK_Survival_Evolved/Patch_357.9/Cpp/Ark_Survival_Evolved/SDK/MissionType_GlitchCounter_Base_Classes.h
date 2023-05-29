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
	 * BlueprintGeneratedClass MissionType_GlitchCounter_Base.MissionType_GlitchCounter_Base_C
	 * Size -> 0x001D (FullSize[0x0B70] - InheritedSize[0x0B53])
	 */
	class AMissionType_GlitchCounter_Base_C : public AMissionTypeBlueprintBase_C
	{
	public:
		unsigned char                                              UnknownData_XAKW[0x5];                                   // 0x0B53(0x0005) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class FName>                                        GlitchTags;                                              // 0x0B58(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance
		class FName                                                CompleteGlitchesKey;                                     // 0x0B68(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor

	public:
		void OnUnlockedExplorerNote();
		void GetCompletedGlitchCount(class AShooterCharacter* Character, int32_t* CountCompleted);
		void StaticOnReplicatedMissionDataUpdated(class APrimalBuff_MissionData* missionData);
		void StaticOnMissionDataInitialized(class APrimalBuff_MissionData* missionData);
		class FString GetMissionDisplayName(class APlayerController* ShootCont);
		void GetNumGlitchesCompleted(class AShooterCharacter* ShooterCharacter, int32_t* Ret);
		int32_t GetIntFromMissionType(const class FName& Tag, class AShooterCharacter* PlayerPawn);
		bool IsMissionComplete(class AShooterCharacter* forCharacter, class AShooterPlayerController* ForController);
		void UserConstructionScript();
		void ExecuteUbergraph_MissionType_GlitchCounter_Base(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
