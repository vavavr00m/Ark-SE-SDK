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
	 * BlueprintGeneratedClass BP_MushroomSporeEmitter.BP_MushroomSporeEmitter_C
	 * Size -> 0x0004 (FullSize[0x0840] - InheritedSize[0x083C])
	 */
	class UBP_MushroomSporeEmitter_C : public UParticleSystemComponent
	{
	public:
		unsigned char                                              UnknownData_AUP9[0x4];                                   // 0x083C(0x0004) Fix Super Size

	public:
		void ExecuteUbergraph_BP_MushroomSporeEmitter(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
