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
	 * BlueprintGeneratedClass DmgType_MinigunAOESpindles.DmgType_MinigunAOESpindles_C
	 * Size -> 0x0000 (FullSize[0x0131] - InheritedSize[0x0131])
	 */
	class UDmgType_MinigunAOESpindles_C : public UDmgType_MinigunSpindles_C
	{
	public:
		void BPAdjustHarvestingDamage_1();
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
