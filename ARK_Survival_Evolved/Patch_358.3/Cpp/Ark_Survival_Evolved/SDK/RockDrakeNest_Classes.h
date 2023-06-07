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
	 * BlueprintGeneratedClass RockDrakeNest.RockDrakeNest_C
	 * Size -> 0x0010 (FullSize[0x0AF8] - InheritedSize[0x0AE8])
	 */
	class ARockDrakeNest_C : public AStructureBaseBP_C
	{
	public:
		class UClass*                                              DroppedItemEggClass;                                     // 0x0AE8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      CheckForEggsInterval_MIN;                                // 0x0AF0(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      CheckForEggsInterval_MAX;                                // 0x0AF4(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor

	public:
		void RestartEggCheckTimer();
		void CheckForNearbyEggs();
		void BPUnstasis();
		void UserConstructionScript();
		void ReceiveBeginPlay();
		void CheckForEggs();
		void ExecuteUbergraph_RockDrakeNest(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
