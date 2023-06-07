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
	 * BlueprintGeneratedClass PrimalItemConsumableEatable_RhynioPheromone.PrimalItemConsumableEatable_RhynioPheromone_C
	 * Size -> 0x0018 (FullSize[0x0B00] - InheritedSize[0x0AE8])
	 */
	class UPrimalItemConsumableEatable_RhynioPheromone_C : public UPrimalItemConsumableEatable_C
	{
	public:
		float                                                      MinDragWeightToEat;                                      // 0x0AE8(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_EO12[0x4];                                   // 0x0AEC(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class FName>                                        ExcludeDinoNameTags;                                     // 0x0AF0(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance

	public:
		bool BPCanUse(bool bIgnoreCooldown);
		void BlueprintUsed();
		void ExecuteUbergraph_PrimalItemConsumableEatable_RhynioPheromone(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
