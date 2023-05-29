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
	 * BlueprintGeneratedClass ProjRock_Impacts.ProjRock_Impacts_C
	 * Size -> 0x0000 (FullSize[0x0888] - InheritedSize[0x0888])
	 */
	class AProjRock_Impacts_C : public AProjArrow_Impacts_C
	{
	public:
		void UserConstructionScript();
		void ExecuteUbergraph_ProjRock_Impacts(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
