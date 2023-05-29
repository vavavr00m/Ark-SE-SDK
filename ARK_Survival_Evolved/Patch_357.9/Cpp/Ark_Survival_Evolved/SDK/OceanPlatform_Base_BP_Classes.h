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
	 * BlueprintGeneratedClass OceanPlatform_Base_BP.OceanPlatform_Base_BP_C
	 * Size -> 0x0038 (FullSize[0x0B20] - InheritedSize[0x0AE8])
	 */
	class AOceanPlatform_Base_BP_C : public AStructureBaseBP_C
	{
	public:
		float                                                      LostHealthPercentagePerMin;                              // 0x0AE8(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_QLH2[0x4];                                   // 0x0AEC(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		double                                                     LastTimeSelfDamaged;                                     // 0x0AF0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		TArray<class FName>                                        LadderSocketNames;                                       // 0x0AF8(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance
		TArray<class APortableRope_Ladder_Preplaced_C*>            Ladders;                                                 // 0x0B08(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance
		double                                                     LastSelfDamageTime;                                      // 0x0B18(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor

	public:
		void ThrottledTick();
		void BPOnDemolish(class APlayerController* ForPC, class AActor* DamageCauser);
		void SetRetractLadders(bool Retract);
		void UpdateLadderHeight();
		void BuildLadders(class APlayerController* PlayerController, bool UpdateHeight);
		void BPPlacedStructure(class APlayerController* ForPC);
		void SelfDamage();
		void ReceiveBeginPlay();
		int32_t BPIsAllowedToBuild(struct FPlacementData* OutPlacementData, int32_t CurrentAllowedReason);
		void UserConstructionScript();
		void ExecuteUbergraph_OceanPlatform_Base_BP(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
