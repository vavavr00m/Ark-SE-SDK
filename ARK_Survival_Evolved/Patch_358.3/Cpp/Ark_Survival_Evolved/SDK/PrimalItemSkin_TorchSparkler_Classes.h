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
	 * BlueprintGeneratedClass PrimalItemSkin_TorchSparkler.PrimalItemSkin_TorchSparkler_C
	 * Size -> 0x0000 (FullSize[0x0AE8] - InheritedSize[0x0AE8])
	 */
	class UPrimalItemSkin_TorchSparkler_C : public UPrimalItemSkinGeneric_C
	{
	public:
		class USoundBase* BPGetFuelAudioOverride(class APrimalStructure* ForStructure);
		class UParticleSystem* BPGetFuelParticleSystemOverride(class APrimalStructure* ForStructure);
		void ExecuteUbergraph_PrimalItemSkin_TorchSparkler(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
