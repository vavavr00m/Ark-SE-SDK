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
	 * BlueprintGeneratedClass BionicTrike_Character_BP.BionicTrike_Character_BP_C
	 * Size -> 0x0000 (FullSize[0x29A3] - InheritedSize[0x29A3])
	 */
	class ABionicTrike_Character_BP_C : public ATrike_Character_BP_C
	{
	public:
		void UserConstructionScript();
		void ExecuteUbergraph_BionicTrike_Character_BP(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
