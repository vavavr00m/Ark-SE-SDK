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
	 * BlueprintGeneratedClass TrophyWallBP.TrophyWallBP_C
	 * Size -> 0x0008 (FullSize[0x0E18] - InheritedSize[0x0E10])
	 */
	class ATrophyWallBP_C : public AStructureItemContainerBaseBP_C
	{
	public:
		class UPrimalInventoryBP_TrophyWall_C*                     PrimalInventoryBP_TrophyWall_C1;                         // 0x0E10(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor

	public:
		void UserConstructionScript();
		void ExecuteUbergraph_TrophyWallBP(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
