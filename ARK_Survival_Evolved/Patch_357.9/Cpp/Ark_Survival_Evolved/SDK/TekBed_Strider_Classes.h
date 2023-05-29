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
	 * BlueprintGeneratedClass TekBed_Strider.TekBed_Strider_C
	 * Size -> 0x0018 (FullSize[0x0F80] - InheritedSize[0x0F68])
	 */
	class ATekBed_Strider_C : public ATekBed_C
	{
	public:
		class USphereComponent*                                    Sphere1;                                                 // 0x0F68(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		float                                                      BedSpawnTraceCheckHeight;                                // 0x0F70(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		struct FVector                                             BedSpawnTraceExtend;                                     // 0x0F74(0x000C) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor

	public:
		void BPReleasedPlayer(class AShooterCharacter* ReleasedChar, int32_t AtSeatNumber);
		void ReceiveBeginPlay();
		bool BPAllowSeating(class AShooterPlayerController* ForPC);
		TArray<struct FMultiUseEntry> BPGetMultiUseEntries(class APlayerController* ForPC, TArray<struct FMultiUseEntry>* MultiUseEntries);
		void UserConstructionScript();
		void ExecuteUbergraph_TekBed_Strider(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
