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
	 * BlueprintGeneratedClass Volcano_Golem_Character_BP.Volcano_Golem_Character_BP_C
	 * Size -> 0x0000 (FullSize[0x2475] - InheritedSize[0x2475])
	 */
	class AVolcano_Golem_Character_BP_C : public ARockGolem_Character_BP_C
	{
	public:
		void UserConstructionScript();
		void ExecuteUbergraph_Volcano_Golem_Character_BP(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
