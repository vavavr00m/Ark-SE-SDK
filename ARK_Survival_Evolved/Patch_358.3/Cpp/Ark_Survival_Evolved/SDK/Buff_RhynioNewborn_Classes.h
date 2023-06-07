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
	 * BlueprintGeneratedClass Buff_RhynioNewborn.Buff_RhynioNewborn_C
	 * Size -> 0x0020 (FullSize[0x09A0] - InheritedSize[0x0980])
	 */
	class ABuff_RhynioNewborn_C : public ABuff_Base_C
	{
	public:
		struct FVector                                             BabySpawnLoc;                                            // 0x0980(0x000C) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       SpawnAnimPlayed;                                         // 0x098C(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_QU11[0x3];                                   // 0x098D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UParticleSystemComponent*                            RhynioBirthEmergeSpawnedParticle;                        // 0x0990(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		class UParticleSystemComponent*                            RhynioBirthApexSpawnedParticle;                          // 0x0998(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor

	public:
		void SpawnApexVFX();
		void GetHostDinoBloodColor(struct FLinearColor* Color);
		void BuffTickClient(float DeltaTime);
		void PlaySpawnAnim();
		void UpdateCollision(bool bLock);
		void LaunchBaby();
		void BPSetupForInstigator(class AActor* ForInstigator);
		void BuffTickServer(float DeltaTime);
		void BPDeactivated(class AActor* ForInstigator);
		void BPActivated(class AActor* ForInstigator);
		bool PreventActorTargeting(class AActor* ByActor);
		void UserConstructionScript();
		void ExecuteUbergraph_Buff_RhynioNewborn(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
