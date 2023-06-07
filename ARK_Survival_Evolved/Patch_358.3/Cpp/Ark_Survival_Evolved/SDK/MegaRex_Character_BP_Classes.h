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
	 * BlueprintGeneratedClass MegaRex_Character_BP.MegaRex_Character_BP_C
	 * Size -> 0x0008 (FullSize[0x2340] - InheritedSize[0x2338])
	 */
	class AMegaRex_Character_BP_C : public ARex_Character_BP_C
	{
	public:
		class UDinoCharacterStatusComponent_BP_MegaRex_C*          DinoCharacterStatus_BP_MegaRex_C1;                       // 0x2338(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor

	public:
		void UserConstructionScript();
		void ExecuteUbergraph_MegaRex_Character_BP(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
