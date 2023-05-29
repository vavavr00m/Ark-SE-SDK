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
	 * BlueprintGeneratedClass Ceiling_Wood_SM.Ceiling_Wood_SM_C
	 * Size -> 0x0000 (FullSize[0x0AF8] - InheritedSize[0x0AF8])
	 */
	class ACeiling_Wood_SM_C : public ACeiling_Base_C
	{
	public:
		void UserConstructionScript();
		void ExecuteUbergraph_Ceiling_Wood_SM(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
