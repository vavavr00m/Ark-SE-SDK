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
	 * BlueprintGeneratedClass Shapeshifter_Large_Character_BP_Summoned.Shapeshifter_Large_Character_BP_Summoned_C
	 * Size -> 0x0000 (FullSize[0x4F18] - InheritedSize[0x4F18])
	 */
	class AShapeshifter_Large_Character_BP_Summoned_C : public AShapeshifter_Large_Character_BP_C
	{
	public:
		void Initialize();
		class FString BPOverrideTamingDescriptionLabel(struct FSlateColor* TextColor);
		void TrySetCollision(bool Enable);
		void UserConstructionScript();
		void ExecuteUbergraph_Shapeshifter_Large_Character_BP_Summoned(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
