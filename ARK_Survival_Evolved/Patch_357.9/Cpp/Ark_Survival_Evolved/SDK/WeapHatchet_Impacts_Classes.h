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
	 * BlueprintGeneratedClass WeapHatchet_Impacts.WeapHatchet_Impacts_C
	 * Size -> 0x0000 (FullSize[0x0888] - InheritedSize[0x0888])
	 */
	class AWeapHatchet_Impacts_C : public AMeleeFist_Impacts_C
	{
	public:
		void UserConstructionScript();
		void ExecuteUbergraph_WeapHatchet_Impacts(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
