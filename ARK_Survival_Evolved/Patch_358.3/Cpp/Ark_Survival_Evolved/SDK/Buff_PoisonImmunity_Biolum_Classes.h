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
	 * BlueprintGeneratedClass Buff_PoisonImmunity_Biolum.Buff_PoisonImmunity_Biolum_C
	 * Size -> 0x0000 (FullSize[0x0988] - InheritedSize[0x0988])
	 */
	class ABuff_PoisonImmunity_Biolum_C : public ABuff_PoisonImmunity_Base_C
	{
	public:
		void UserConstructionScript();
		void ExecuteUbergraph_Buff_PoisonImmunity_Biolum(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
