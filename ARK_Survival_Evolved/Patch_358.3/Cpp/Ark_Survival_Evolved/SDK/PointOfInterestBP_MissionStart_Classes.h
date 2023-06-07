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
	 * BlueprintGeneratedClass PointOfInterestBP_MissionStart.PointOfInterestBP_MissionStart_C
	 * Size -> 0x0028 (FullSize[0x08D8] - InheritedSize[0x08B0])
	 */
	class APointOfInterestBP_MissionStart_C : public APointOfInterest_Base_BP_C
	{
	public:
		class AMissionDispatcher*                                  MyMissionDispatcher;                                     // 0x08B0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor
		class FString                                              ActivateMissionMultiUseString;                           // 0x08B8(0x0010) Edit, BlueprintVisible, ZeroConstructor
		class AMissionType*                                        CurrentMission;                                          // 0x08C8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor
		class AShooterCharacter*                                   MissionStartedByPlayer;                                  // 0x08D0(0x0008) Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor

	public:
		void StartMyMission(class APlayerController* WithPC);
		bool CanBeViewed(class AActor* ByActor);
		void CanPlayerStartMyMission(class APlayerController* PC, bool* Result);
		TArray<struct FMultiUseEntry> BPGetMultiUseEntries(class APlayerController* ForPC, TArray<struct FMultiUseEntry>* MultiUseEntries);
		bool BPTryMultiUse(class APlayerController* ForPC, int32_t UseIndex);
		void UserConstructionScript();
		void ExecuteUbergraph_PointOfInterestBP_MissionStart(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
