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
	 * BlueprintGeneratedClass Greenhouse_Wall.Greenhouse_Wall_C
	 * Size -> 0x0000 (FullSize[0x0AE8] - InheritedSize[0x0AE8])
	 */
	class AGreenhouse_Wall_C : public AWall_Base_Small_SM_C
	{
	public:
		void UserConstructionScript();
		void ExecuteUbergraph_Greenhouse_Wall(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
