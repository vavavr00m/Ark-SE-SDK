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
	 * BlueprintGeneratedClass ThatchWall_Sloped_Left_SM.ThatchWall_Sloped_Left_SM_C
	 * Size -> 0x0000 (FullSize[0x0AE8] - InheritedSize[0x0AE8])
	 */
	class AThatchWall_Sloped_Left_SM_C : public ABaseWall_Sloped_Left_SM_C
	{
	public:
		void UserConstructionScript();
		void ExecuteUbergraph_ThatchWall_Sloped_Left_SM(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
