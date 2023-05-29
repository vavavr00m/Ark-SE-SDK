﻿#pragma once

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
	 * BlueprintGeneratedClass StructureBP_WoodBench.StructureBP_WoodBench_C
	 * Size -> 0x0000 (FullSize[0x0EF1] - InheritedSize[0x0EF1])
	 */
	class AStructureBP_WoodBench_C : public AStructureSeatingBaseBP_C
	{
	public:
		void UserConstructionScript();
		void ExecuteUbergraph_StructureBP_WoodBench(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
