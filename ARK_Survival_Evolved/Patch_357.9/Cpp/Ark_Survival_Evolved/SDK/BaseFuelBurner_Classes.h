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
	 * BlueprintGeneratedClass BaseFuelBurner.BaseFuelBurner_C
	 * Size -> 0x0000 (FullSize[0x0E10] - InheritedSize[0x0E10])
	 */
	class ABaseFuelBurner_C : public AStructureItemContainerBaseBP_C
	{
	public:
		void UserConstructionScript();
		void ExecuteUbergraph_BaseFuelBurner(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
