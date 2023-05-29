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
	 * BlueprintGeneratedClass ProjDart_Aggro.ProjDart_Aggro_C
	 * Size -> 0x0000 (FullSize[0x0690] - InheritedSize[0x0690])
	 */
	class AProjDart_Aggro_C : public AProjDart_Tranq_C
	{
	public:
		void UserConstructionScript();
		void ExecuteUbergraph_ProjDart_Aggro(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
