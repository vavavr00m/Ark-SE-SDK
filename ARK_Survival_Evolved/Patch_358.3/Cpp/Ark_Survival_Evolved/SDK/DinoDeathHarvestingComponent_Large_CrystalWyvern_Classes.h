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
	 * BlueprintGeneratedClass DinoDeathHarvestingComponent_Large_CrystalWyvern.DinoDeathHarvestingComponent_Large_CrystalWyvern_C
	 * Size -> 0x0000 (FullSize[0x0250] - InheritedSize[0x0250])
	 */
	class UDinoDeathHarvestingComponent_Large_CrystalWyvern_C : public UDinoDeathHarvestingComponent_Large_C
	{
	public:
		void CheckCorpseDissolve();
		int32_t BPCustomHarvestResource(class UPrimalInventoryComponent* invComp, int32_t NumToGive, class UClass* DamageTypeClass, class AActor* ToActor);
		void ExecuteUbergraph_DinoDeathHarvestingComponent_Large_CrystalWyvern(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
