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
	 * AnimBlueprintGeneratedClass Crab_Anim_BP.Crab_Anim_BP_C
	 * Size -> 0x0000 (FullSize[0x1990] - InheritedSize[0x1990])
	 */
	class UCrab_Anim_BP_C : public UDinoBlueprintBase_RootBoneName_Crab_C
	{
	public:
		void UpdateGrabIdle(class APrimalCharacter* OwningChar);
		void ExecuteUbergraph_Crab_Anim_BP(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
