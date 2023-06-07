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
	 * BlueprintGeneratedClass SM_Vessel_BP.SM_Vessel_BP_C
	 * Size -> 0x0008 (FullSize[0x0E48] - InheritedSize[0x0E40])
	 */
	class ASM_Vessel_BP_C : public AStructureItemContainerBaseBP_VisualItems_C
	{
	public:
		class UPrimalInventoryBP_Vessel_C*                         PrimalInventoryBP_Vessel_C1;                             // 0x0E40(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor

	public:
		void UserConstructionScript();
		void ExecuteUbergraph_SM_Vessel_BP(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
