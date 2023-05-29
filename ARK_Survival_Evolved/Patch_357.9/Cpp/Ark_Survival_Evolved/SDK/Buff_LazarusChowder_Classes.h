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
	 * BlueprintGeneratedClass Buff_LazarusChowder.Buff_LazarusChowder_C
	 * Size -> 0x0000 (FullSize[0x0980] - InheritedSize[0x0980])
	 */
	class ABuff_LazarusChowder_C : public ABuff_Base_Stew_C
	{
	public:
		void UserConstructionScript();
		void ExecuteUbergraph_Buff_LazarusChowder(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
