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
	 * BlueprintGeneratedClass DinoCharacterStatusComponent_BP_Basil.DinoCharacterStatusComponent_BP_Basil_C
	 * Size -> 0x0010 (FullSize[0x10A0] - InheritedSize[0x1090])
	 */
	class UDinoCharacterStatusComponent_BP_Basil_C : public UDinoCharacterStatusComponent_BP_C
	{
	public:
		float                                                      HealthMultiplierNearSurface;                             // 0x1090(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      HealthMultiplierInDeepWater;                             // 0x1094(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      DistanceFromSurfaceToBeInShallowWater;                   // 0x1098(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      AddedDepthBeforeHealthLoss;                              // 0x109C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor

	public:
		float BPAdjustStatusValueModification(EPrimalCharacterStatusValue ValueType, float amount, class UClass* DamageTypeClass, bool bManualModification);
		void ExecuteUbergraph_DinoCharacterStatusComponent_BP_Basil(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
