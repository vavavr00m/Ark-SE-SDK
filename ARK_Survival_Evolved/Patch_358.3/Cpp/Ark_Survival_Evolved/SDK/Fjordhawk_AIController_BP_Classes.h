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
	 * BlueprintGeneratedClass Fjordhawk_AIController_BP.Fjordhawk_AIController_BP_C
	 * Size -> 0x002F (FullSize[0x0948] - InheritedSize[0x0919])
	 */
	class AFjordhawk_AIController_BP_C : public ADino_AIController_BP_C
	{
	public:
		unsigned char                                              UnknownData_RMRR[0x7];                                   // 0x0919(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class AActor*                                              LootingTarget;                                           // 0x0920(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, SaveGame, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		bool                                                       HasLoot;                                                 // 0x0928(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, SaveGame, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		bool                                                       LookingForLoot;                                          // 0x0929(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, SaveGame, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		bool                                                       DeadPlayerLoot;                                          // 0x092A(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, SaveGame, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_W2GG[0x5];                                   // 0x092B(0x0005) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              DeadPlayerString;                                        // 0x0930(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, SaveGame, NativeAccessSpecifierPublic
		float                                                      WaitForRespawningPlayerTime;                             // 0x0940(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      MinimumTimeBeforeTeleport;                               // 0x0944(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor

	public:
		void ResetAttackTimers();
		void StartWaitingForRespawn();
		struct FVector FindTeleportLocation(class AShooterCharacter* InputPin, struct FRotator* ReturnValue2);
		void OnPossess(class APawn* PossessedPawn);
		void CheckForRespawnedPlayer();
		void ReceiveDestroyed();
		void ReceiveBeginPlay();
		void PerformanceThrottledTick();
		void FindLandingLocation(struct FVector* DesiredLOocation);
		void BPOnFleeEvent();
		float BPGetTargetingDesire(class AActor* forTarget, float ForTargetingDesireValue);
		void UserConstructionScript();
		void ExecuteUbergraph_Fjordhawk_AIController_BP(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
