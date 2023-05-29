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
	 * BlueprintGeneratedClass BossTeleporter.BossTeleporter_C
	 * Size -> 0x00F0 (FullSize[0x0A70] - InheritedSize[0x0980])
	 */
	class ABossTeleporter_C : public APrimalBuff
	{
	public:
		class UAudioComponent*                                     BeamSound;                                               // 0x0980(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		class UClass*                                              BossArenaClass;                                          // 0x0988(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      MaxTeleportDragWeight;                                   // 0x0990(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		int32_t                                                    MaxDinoTeleports;                                        // 0x0994(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      TeleportRadius;                                          // 0x0998(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_73PL[0x4];                                   // 0x099C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UClass*                                              OverrideBossClass;                                       // 0x09A0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		int32_t                                                    MinimumPlayerLevelToTeleport;                            // 0x09A8(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		int32_t                                                    MaxPlayerTeleports;                                      // 0x09AC(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		TArray<class UClass*>                                      PreventTeleportingDinoClasses;                           // 0x09B0(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance
		class FText                                                TeleportText;                                            // 0x09C0(0x0018) ELEMENT_SIZE_MISMATCH Edit, BlueprintVisible, DisableEditOnInstance
		unsigned char                                              UnknownData_NP2D[0x10];                                  // 0x09D8(0x0010) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
		class FText                                                SP_TeleportText;                                         // 0x09E8(0x0018) ELEMENT_SIZE_MISMATCH Edit, BlueprintVisible, DisableEditOnInstance
		unsigned char                                              UnknownData_43Y1[0x10];                                  // 0x0A00(0x0010) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
		bool                                                       AllowFlyers;                                             // 0x0A10(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_JZNF[0x7];                                   // 0x0A11(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class UClass*>                                      ForceAllowTeleportingDinoClasses;                        // 0x0A18(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance
		bool                                                       PreventDinosWithSaddleStructures;                        // 0x0A28(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_O1TR[0x3];                                   // 0x0A29(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FVector                                             BackupTPLocation;                                        // 0x0A2C(0x000C) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		struct FRotator                                            BackupTPRotation;                                        // 0x0A38(0x000C) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		class FName                                                BackupLevelToCheckLoaded;                                // 0x0A44(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       IsNotActuallyBossTeleporter;                             // 0x0A4C(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_IsDedicatedServer_ReturnValue;                  // 0x0A4D(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_S3FE[0x2];                                   // 0x0A4E(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FVector                                             CallFunc_K2_GetActorLocation_ReturnValue;                // 0x0A50(0x000C) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_IsDedicatedServer_ReturnValue2;                 // 0x0A5C(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_IsServer_ReturnValue;                           // 0x0A5D(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_IsServer_ReturnValue2;                          // 0x0A5E(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_G6CF[0x1];                                   // 0x0A5F(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class AActor*>                                      CallFunc_SphereOverlapActorsSimple_ActorsToIgnore_RefProperty; // 0x0A60(0x0010) OutParm, ZeroConstructor, Transient, DuplicateTransient, ReferenceParm

	public:
		void ManageArenaDisableBuffsForCharacter(class APrimalCharacter* forCharacter);
		void BackupCallArenaDidTeleportOnLevelLoaded();
		void DoTeleportSound();
		void BuffTickClient(float DeltaTime);
		void DoTeleport();
		void UserConstructionScript();
		void NetDoTeleport();
		void ReceiveBeginPlay();
		void ExecuteUbergraph_BossTeleporter(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
