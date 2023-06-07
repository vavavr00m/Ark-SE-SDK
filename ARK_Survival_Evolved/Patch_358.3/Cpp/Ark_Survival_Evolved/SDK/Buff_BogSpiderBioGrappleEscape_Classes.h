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
	 * BlueprintGeneratedClass Buff_BogSpiderBioGrappleEscape.Buff_BogSpiderBioGrappleEscape_C
	 * Size -> 0x03F0 (FullSize[0x0D70] - InheritedSize[0x0980])
	 */
	class ABuff_BogSpiderBioGrappleEscape_C : public ABuff_Base_C
	{
	public:
		struct FHUDElement                                         HudElement_StrugglePercent;                              // 0x0980(0x0150) Edit, BlueprintVisible, DisableEditOnInstance
		struct FHUDElement                                         HudElement_Warning;                                      // 0x0AD0(0x0150) Edit, BlueprintVisible, DisableEditOnInstance
		struct FHUDElement                                         HudElement_Success;                                      // 0x0C20(0x0150) Edit, BlueprintVisible, DisableEditOnInstance

	public:
		bool BPCustomAllowAddBuff(class APrimalCharacter* forCharacter, class AActor* DamageCauser);
		void BPGetHUDElements(class APlayerController* ForPC, TArray<struct FHUDElement>* OutElements);
		void UserConstructionScript();
		void ExecuteUbergraph_Buff_BogSpiderBioGrappleEscape(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
