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
	 * BlueprintGeneratedClass Buff_Pet_WarnOwnerOfDinos.Buff_Pet_WarnOwnerOfDinos_C
	 * Size -> 0x0000 (FullSize[0x0980] - InheritedSize[0x0980])
	 */
	class ABuff_Pet_WarnOwnerOfDinos_C : public ABuff_Base_C
	{
	public:
		void UserConstructionScript();
		void ExecuteUbergraph_Buff_Pet_WarnOwnerOfDinos(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif