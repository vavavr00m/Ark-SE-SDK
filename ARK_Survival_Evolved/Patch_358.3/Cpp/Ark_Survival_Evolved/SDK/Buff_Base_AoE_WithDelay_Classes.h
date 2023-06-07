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
	 * BlueprintGeneratedClass Buff_Base_AoE_WithDelay.Buff_Base_AoE_WithDelay_C
	 * Size -> 0x0008 (FullSize[0x0990] - InheritedSize[0x0988])
	 */
	class ABuff_Base_AoE_WithDelay_C : public ABuff_Base_AoE_C
	{
	public:
		float                                                      DelayedAoEBuffRange;                                     // 0x0988(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      DelayedAoEBuffTime;                                      // 0x098C(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor

	public:
		void UserConstructionScript();
		void ReceiveBeginPlay();
		void SetFinalAoE();
		void ExecuteUbergraph_Buff_Base_AoE_WithDelay(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
