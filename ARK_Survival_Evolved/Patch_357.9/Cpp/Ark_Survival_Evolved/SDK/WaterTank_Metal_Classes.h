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
	 * BlueprintGeneratedClass WaterTank_Metal.WaterTank_Metal_C
	 * Size -> 0x0000 (FullSize[0x0F08] - InheritedSize[0x0F08])
	 */
	class AWaterTank_Metal_C : public AWaterTankBaseBP_C
	{
	public:
		void UserConstructionScript();
		void ExecuteUbergraph_WaterTank_Metal(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
