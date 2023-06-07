#pragma once

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
	// # Structs
	// --------------------------------------------------
	/**
	 * UserDefinedStruct HLNALocalizedAudioEntry.HLNALocalizedAudioEntry
	 * Size -> 0x0010
	 */
	struct FHLNALocalizedAudioEntry
	{
	public:
		TArray<struct FLocalizedSoundCueEntry>                     LocalizedSoundCues_3_2B6DF2754EEFC3031810EAAA25F6A57D;   // 0x0000(0x0010) Edit, BlueprintVisible, ZeroConstructor
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
