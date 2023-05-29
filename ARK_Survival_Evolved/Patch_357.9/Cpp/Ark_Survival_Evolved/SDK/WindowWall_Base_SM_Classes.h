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
	 * BlueprintGeneratedClass WindowWall_Base_SM.WindowWall_Base_SM_C
	 * Size -> 0x0000 (FullSize[0x0AE8] - InheritedSize[0x0AE8])
	 */
	class AWindowWall_Base_SM_C : public AWall_Base_Small_SM_C
	{
	public:
		void UserConstructionScript();
		void ExecuteUbergraph_WindowWall_Base_SM(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
