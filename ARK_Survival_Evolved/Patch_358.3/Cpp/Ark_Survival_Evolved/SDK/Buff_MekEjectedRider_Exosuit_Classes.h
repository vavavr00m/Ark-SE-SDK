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
	 * BlueprintGeneratedClass Buff_MekEjectedRider_Exosuit.Buff_MekEjectedRider_Exosuit_C
	 * Size -> 0x0000 (FullSize[0x0980] - InheritedSize[0x0980])
	 */
	class ABuff_MekEjectedRider_Exosuit_C : public ABuff_MekEjectedRider_C
	{
	public:
		void UserConstructionScript();
		void ExecuteUbergraph_Buff_MekEjectedRider_Exosuit(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
