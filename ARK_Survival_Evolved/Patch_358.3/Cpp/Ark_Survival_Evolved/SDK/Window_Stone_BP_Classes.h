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
	 * BlueprintGeneratedClass Window_Stone_BP.Window_Stone_BP_C
	 * Size -> 0x0000 (FullSize[0x0B70] - InheritedSize[0x0B70])
	 */
	class AWindow_Stone_BP_C : public ADoor_Base_SM_C
	{
	public:
		void UserConstructionScript();
		void ExecuteUbergraph_Window_Stone_BP(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
