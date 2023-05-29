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
	 * BlueprintGeneratedClass Base_Ramp.Base_Ramp_C
	 * Size -> 0x0000 (FullSize[0x0AE8] - InheritedSize[0x0AE8])
	 */
	class ABase_Ramp_C : public ARamp_Base_SM_C
	{
	public:
		void UserConstructionScript();
		void ExecuteUbergraph_Base_Ramp(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
