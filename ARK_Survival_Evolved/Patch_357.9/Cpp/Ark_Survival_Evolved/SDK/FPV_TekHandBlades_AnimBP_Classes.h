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
	 * AnimBlueprintGeneratedClass FPV_TekHandBlades_AnimBP.FPV_TekHandBlades_AnimBP_C
	 * Size -> 0x0000 (FullSize[0x18CE] - InheritedSize[0x18CE])
	 */
	class UFPV_TekHandBlades_AnimBP_C : public UFPVWeaponAnimBP_Base_Carrying_C
	{
	public:
		void BlueprintUpdateAnimation(float DeltaTimeX);
		void ExecuteUbergraph_FPV_TekHandBlades_AnimBP(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
