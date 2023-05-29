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
	 * BlueprintGeneratedClass SleepingBag.SleepingBag_C
	 * Size -> 0x0004 (FullSize[0x0F54] - InheritedSize[0x0F50])
	 */
	class ASleepingBag_C : public ABedBaseBP_C
	{
	public:
		float                                                      AllowedToBuildZAxisDisplacementLimit;                    // 0x0F50(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor

	public:
		int32_t BPIsAllowedToBuildEx(struct FPlacementData* OutPlacementData, int32_t CurrentAllowedReason, class APlayerController* PC, bool bFinalPlacement, bool bChoosingRotation);
		void UserConstructionScript();
		void ExecuteUbergraph_SleepingBag(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
