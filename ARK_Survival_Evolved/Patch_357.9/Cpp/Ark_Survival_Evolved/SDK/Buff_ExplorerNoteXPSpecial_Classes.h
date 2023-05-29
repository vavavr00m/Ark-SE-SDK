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
	 * BlueprintGeneratedClass Buff_ExplorerNoteXPSpecial.Buff_ExplorerNoteXPSpecial_C
	 * Size -> 0x0000 (FullSize[0x09A0] - InheritedSize[0x09A0])
	 */
	class ABuff_ExplorerNoteXPSpecial_C : public ABuff_ExplorerNoteXP_C
	{
	public:
		void UserConstructionScript();
		void ExecuteUbergraph_Buff_ExplorerNoteXPSpecial(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
