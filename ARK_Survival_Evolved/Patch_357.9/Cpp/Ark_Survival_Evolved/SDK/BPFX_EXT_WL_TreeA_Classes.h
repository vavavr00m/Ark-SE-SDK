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
	 * BlueprintGeneratedClass BPFX_EXT_WL_TreeA.BPFX_EXT_WL_TreeA_C
	 * Size -> 0x0004 (FullSize[0x0840] - InheritedSize[0x083C])
	 */
	class UBPFX_EXT_WL_TreeA_C : public UParticleSystemComponent
	{
	public:
		unsigned char                                              UnknownData_28VL[0x4];                                   // 0x083C(0x0004) Fix Super Size

	public:
		void ExecuteUbergraph_BPFX_EXT_WL_TreeA(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
