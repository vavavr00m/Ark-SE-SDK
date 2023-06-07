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
	 * BlueprintGeneratedClass BionicPara_Character_BP.BionicPara_Character_BP_C
	 * Size -> 0x0000 (FullSize[0x2489] - InheritedSize[0x2489])
	 */
	class ABionicPara_Character_BP_C : public APara_Character_BP_C
	{
	public:
		void UserConstructionScript();
		void ExecuteUbergraph_BionicPara_Character_BP(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
