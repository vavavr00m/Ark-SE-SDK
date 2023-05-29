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
	 * BlueprintGeneratedClass Buff_PreventBrainControl.Buff_PreventBrainControl_C
	 * Size -> 0x0008 (FullSize[0x0988] - InheritedSize[0x0980])
	 */
	class ABuff_PreventBrainControl_C : public APrimalBuff
	{
	public:
		float                                                      DeactivateAfterTimeTamed;                                // 0x0980(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      DeactivateAfterTimeHuman;                                // 0x0984(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor

	public:
		void BPPreSetupForInstigator(class AActor* ForInstigator);
		void UserConstructionScript();
		void ExecuteUbergraph_Buff_PreventBrainControl(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
