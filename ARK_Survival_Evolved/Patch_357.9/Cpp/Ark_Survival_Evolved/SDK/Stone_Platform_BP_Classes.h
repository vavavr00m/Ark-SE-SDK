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
	 * BlueprintGeneratedClass Stone_Platform_BP.Stone_Platform_BP_C
	 * Size -> 0x0000 (FullSize[0x0AF8] - InheritedSize[0x0AF8])
	 */
	class AStone_Platform_BP_C : public ACliffPlatform_Base_BP_C
	{
	public:
		void UserConstructionScript();
		void ExecuteUbergraph_Stone_Platform_BP(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
