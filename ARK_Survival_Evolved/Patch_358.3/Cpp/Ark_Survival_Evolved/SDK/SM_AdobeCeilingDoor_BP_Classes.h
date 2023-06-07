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
	 * BlueprintGeneratedClass SM_AdobeCeilingDoor_BP.SM_AdobeCeilingDoor_BP_C
	 * Size -> 0x0000 (FullSize[0x0B78] - InheritedSize[0x0B78])
	 */
	class ASM_AdobeCeilingDoor_BP_C : public ACeiling_Door_Metal_C
	{
	public:
		void UserConstructionScript();
		void ExecuteUbergraph_SM_AdobeCeilingDoor_BP(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
