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
	 * BlueprintGeneratedClass Buff_FoliageTrap.Buff_FoliageTrap_C
	 * Size -> 0x0078 (FullSize[0x0A34] - InheritedSize[0x09BC])
	 */
	class ABuff_FoliageTrap_C : public ABuff_BiomeApplied_C
	{
	public:
		float                                                      MaxTrapRadius;                                           // 0x09BC(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		TArray<double>                                             TrapActivationCooldownTimestamps;                        // 0x09C0(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance
		TArray<float>                                              TrapRadiuses;                                            // 0x09D0(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance
		TArray<class UClass*>                                      TrapHarvestComponentClasses;                             // 0x09E0(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance
		TArray<class UClass*>                                      TrapBuffs;                                               // 0x09F0(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance
		TArray<float>                                              TrapCooldownIntervals;                                   // 0x0A00(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance
		TArray<struct FVector>                                     TrapActivationCooldownLocations;                         // 0x0A10(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance
		float                                                      MaxTrapCooldownInterval;                                 // 0x0A20(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		ENetworkModeResult                                         CallFunc_CanRunCosmeticEvents_OutNetworkMode;            // 0x0A24(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       K2Node_SwitchEnum_CmpSuccess;                            // 0x0A25(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_0ZLF[0x2];                                   // 0x0A26(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FVector                                             K2Node_CustomEvent_Location;                             // 0x0A28(0x000C) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor

	public:
		void GetTrapCooldownAtLocation(const struct FVector& AtLocation, double* CooldownAtLocation, int32_t* LocationIndex);
		void CullCooldowns();
		void ReceiveBeginPlay();
		void CheckFoliageForTrap(class UClass* HarvestComponentClass, struct FVector* AtLoc, struct FVector* TheInstigatorLoc);
		void BuffTickServer(float DeltaTime);
		void UserConstructionScript();
		void MultiPlayPoisonMushroomSound(const struct FVector& Location);
		void ExecuteUbergraph_Buff_FoliageTrap(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
