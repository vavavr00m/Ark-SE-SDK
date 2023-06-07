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
	 * BlueprintGeneratedClass Cage_Wood.Cage_Wood_C
	 * Size -> 0x0000 (FullSize[0x0B78] - InheritedSize[0x0B78])
	 */
	class ACage_Wood_C : public ACage_Base_C
	{
	public:
		void UserConstructionScript();
		void ExecuteUbergraph_Cage_Wood(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
