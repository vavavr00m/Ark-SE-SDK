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
	 * BlueprintGeneratedClass BP_TriCeiling_Stone.BP_TriCeiling_Stone_C
	 * Size -> 0x0000 (FullSize[0x0AF8] - InheritedSize[0x0AF8])
	 */
	class ABP_TriCeiling_Stone_C : public ABase_Ceiling_Tri_C
	{
	public:
		void UserConstructionScript();
		void ExecuteUbergraph_BP_TriCeiling_Stone(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
