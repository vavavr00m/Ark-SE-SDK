#pragma once

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
	 * BlueprintGeneratedClass BrainSlugHUD_Interface.BrainSlugHUD_Interface_C
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UBrainSlugHUD_Interface_C : public UInterface
	{
	public:
		void GetHudData(class APrimalCharacter* TargetChar, bool* IsAllowedToControlTarget, class FString* TargetValidationString, class FString* InvalidTargetString_PreventHUD, struct FHUDElement* HUDElementTemplate, float* BrainJumpTargetCheckDistance);
		void SyncCrosshairColor(const struct FLinearColor& InColor, struct FLinearColor* outColor);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
