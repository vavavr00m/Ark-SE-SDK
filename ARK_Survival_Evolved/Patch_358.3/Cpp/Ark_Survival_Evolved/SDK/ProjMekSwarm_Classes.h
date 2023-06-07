﻿#pragma once

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
	 * BlueprintGeneratedClass ProjMekSwarm.ProjMekSwarm_C
	 * Size -> 0x0161 (FullSize[0x0981] - InheritedSize[0x0820])
	 */
	class AProjMekSwarm_C : public AShooterProjectile_Swarm
	{
	public:
		struct FVector                                             SwarmStartLoc;                                           // 0x0820(0x000C) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		struct FRotator                                            SwarmStartRot;                                           // 0x082C(0x000C) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       SwarmStarted;                                            // 0x0838(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_OZWU[0x7];                                   // 0x0839(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UParticleSystem*                                     MissileSpawnParticleSystem;                              // 0x0840(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		TArray<class FName>                                        FireSockets;                                             // 0x0848(0x0010) Edit, BlueprintVisible, ZeroConstructor
		class UParticleSystemComponent*                            K2Node_CustomEvent_Comp;                                 // 0x0858(0x0008) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		int32_t                                                    K2Node_Event_BoidIndex;                                  // 0x0860(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_CSQ5[0x4];                                   // 0x0864(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UParticleSystemComponent*                            K2Node_Event_BoidParticles;                              // 0x0868(0x0008) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		struct FHitResult                                          K2Node_Event_Hit;                                        // 0x0870(0x0088) OutParm, Transient, DuplicateTransient, ReferenceParm
		struct FHitResult                                          K2Node_Event_Result;                                     // 0x08F8(0x0088) OutParm, Transient, DuplicateTransient, ReferenceParm
		bool                                                       CallFunc_IsValid_ReturnValue;                            // 0x0980(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor

	public:
		void SetupMissileSpawnParticles(class USkeletalMeshComponent* MekMesh, const class FName& BoneName);
		struct FVector2D PointOnGrid(int32_t ThisIndex, int32_t Width, int32_t Height, float HorizScale, float VertScale);
		void ReceiveTick(float DeltaSeconds);
		void BPGetBoidSpawnLocationAndVelocity(int32_t BoidIndex, struct FBoid* BoidData, struct FVector* SpawnLocation, struct FVector* SpawnVelocity);
		void UserConstructionScript();
		void BPOnBoidExplode(int32_t BoidIndex, class UParticleSystemComponent* BoidParticles, struct FHitResult* Hit);
		void OnExplode(struct FHitResult* Result);
		void DisableMissleParticles(class UParticleSystemComponent* Comp);
		void ExecuteUbergraph_ProjMekSwarm(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
