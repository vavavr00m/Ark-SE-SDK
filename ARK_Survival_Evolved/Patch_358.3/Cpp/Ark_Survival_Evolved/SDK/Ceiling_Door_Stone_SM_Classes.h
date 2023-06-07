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
	 * BlueprintGeneratedClass Ceiling_Door_Stone_SM.Ceiling_Door_Stone_SM_C
	 * Size -> 0x0000 (FullSize[0x0B78] - InheritedSize[0x0B78])
	 */
	class ACeiling_Door_Stone_SM_C : public ACeiling_Door_Base_SM_C
	{
	public:
		void UserConstructionScript();
		void ExecuteUbergraph_Ceiling_Door_Stone_SM(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
