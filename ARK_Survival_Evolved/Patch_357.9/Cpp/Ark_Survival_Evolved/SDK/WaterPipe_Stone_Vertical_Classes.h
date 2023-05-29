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
	 * BlueprintGeneratedClass WaterPipe_Stone_Vertical.WaterPipe_Stone_Vertical_C
	 * Size -> 0x0000 (FullSize[0x0B08] - InheritedSize[0x0B08])
	 */
	class AWaterPipe_Stone_Vertical_C : public AWaterPipe_Base_Vertical_C
	{
	public:
		void UserConstructionScript();
		void ExecuteUbergraph_WaterPipe_Stone_Vertical(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
