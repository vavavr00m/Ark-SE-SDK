﻿#pragma once

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
	 * BlueprintGeneratedClass StructureAmmoContainer.StructureAmmoContainer_C
	 * Size -> 0x000C (FullSize[0x0FA8] - InheritedSize[0x0F9C])
	 */
	class AStructureAmmoContainer_C : public AStructure_AmmoContainerBaseBP_C
	{
	public:
		unsigned char                                              UnknownData_VGRD[0x4];                                   // 0x0F9C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UPrimalInventoryBP_AmmoContainer_C*                  PrimalInventoryBP_AmmoContainer_C1;                      // 0x0FA0(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor

	public:
		void UserConstructionScript();
		void ExecuteUbergraph_StructureAmmoContainer(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
