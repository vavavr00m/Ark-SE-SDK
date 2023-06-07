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
	 * BlueprintGeneratedClass Piranha_Character_BP.Piranha_Character_BP_C
	 * Size -> 0x0008 (FullSize[0x2290] - InheritedSize[0x2288])
	 */
	class APiranha_Character_BP_C : public ADino_Character_BP_C
	{
	public:
		class UDinoCharacterStatusComponent_BP_Piranha_C*          DinoCharacterStatus_BP_Piranha_C1;                       // 0x2288(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor

	public:
		void BPTimerServer();
		void UserConstructionScript();
		void ExecuteUbergraph_Piranha_Character_BP(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
