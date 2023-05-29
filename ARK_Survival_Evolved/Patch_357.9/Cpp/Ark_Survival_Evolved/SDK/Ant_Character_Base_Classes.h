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
	 * BlueprintGeneratedClass Ant_Character_Base.Ant_Character_Base_C
	 * Size -> 0x0000 (FullSize[0x2288] - InheritedSize[0x2288])
	 */
	class AAnt_Character_Base_C : public AInsect_Character_Base_C
	{
	public:
		void UserConstructionScript();
		void ExecuteUbergraph_Ant_Character_Base(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
