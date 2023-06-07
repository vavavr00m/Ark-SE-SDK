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
	// # Classes
	// --------------------------------------------------
	/**
	 * BlueprintGeneratedClass PrimalPlayerDataHelperFunctions.PrimalPlayerDataHelperFunctions_C
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UPrimalPlayerDataHelperFunctions_C : public UObject
	{
	public:
		void ApplyToPlayerPawnCharacter(class AShooterPlayerState* ForPlayerState, class AShooterCharacter* NewPlayerCharacter, TArray<float>* AscensionData, int32_t HexagonCount, int32_t ChibiLevelUpsCount, bool bUnlockedAllExplorerNotes, TArray<class FName>* GeneralizedUnlockedAchievementTags);
		void ExecuteUbergraph_PrimalPlayerDataHelperFunctions(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
