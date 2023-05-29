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
	 * BlueprintGeneratedClass SM_AdobeDoor_BP.SM_AdobeDoor_BP_C
	 * Size -> 0x0000 (FullSize[0x0B70] - InheritedSize[0x0B70])
	 */
	class ASM_AdobeDoor_BP_C : public ADoor_Metal_C
	{
	public:
		void UserConstructionScript();
		void ExecuteUbergraph_SM_AdobeDoor_BP(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
