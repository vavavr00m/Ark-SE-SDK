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
	 * BlueprintGeneratedClass BionicRaptor_Character_BP.BionicRaptor_Character_BP_C
	 * Size -> 0x0000 (FullSize[0x2659] - InheritedSize[0x2659])
	 */
	class ABionicRaptor_Character_BP_C : public ARaptor_Character_BP_C
	{
	public:
		void UserConstructionScript();
		void ExecuteUbergraph_BionicRaptor_Character_BP(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
