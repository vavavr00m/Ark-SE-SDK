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
	 * BlueprintGeneratedClass PrimalItemConsumable_FestiveDinoCandy.PrimalItemConsumable_FestiveDinoCandy_C
	 * Size -> 0x0060 (FullSize[0x0B48] - InheritedSize[0x0AE8])
	 */
	class UPrimalItemConsumable_FestiveDinoCandy_C : public UPrimalItemConsumableEatable_C
	{
	public:
		TArray<int32_t>                                            DyeItemIndices;                                          // 0x0AE8(0x0010) Edit, BlueprintVisible, ZeroConstructor
		TArray<float>                                              DyeItemWeights;                                          // 0x0AF8(0x0010) Edit, BlueprintVisible, ZeroConstructor
		TArray<int32_t>                                            FallbackColorIDs;                                        // 0x0B08(0x0010) Edit, BlueprintVisible, ZeroConstructor
		int32_t                                                    PercentChance_Mastercraft;                               // 0x0B18(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		int32_t                                                    PercentChance_Ascendant;                                 // 0x0B1C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		float                                                      IconSaturation_Primitive;                                // 0x0B20(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		float                                                      IconSaturation_Mastercraft;                              // 0x0B24(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		float                                                      IconSaturation_Ascendant;                                // 0x0B28(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		float                                                      DinoSaturation_Primitive;                                // 0x0B2C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		float                                                      DinoSaturation_Mastercraft;                              // 0x0B30(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		float                                                      DinoSaturation_Ascendant;                                // 0x0B34(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		class FString                                              CallFunc_Array_Add_NewItem_RefProperty;                  // 0x0B38(0x0010) OutParm, ZeroConstructor, Transient, DuplicateTransient, ReferenceParm

	public:
		void GetBuffSpeedPercentage(float* Percent);
		void BPInitIconMaterial();
		void GetDyeItemDescriptiveName(class UPrimalGameData* GameData, int32_t A, class FString* DescriptiveNameBase);
		void GetInvertedWeights(TArray<float>* Weights);
		void BPPreUseItem();
		void BPInitItemColors(TArray<int32_t>* ColorIDs);
		void BPPostAddBuffToGiveOwnerCharacter(class APrimalCharacter* OwnerCharacter, class APrimalBuff* Buff);
		class FString BPGetItemDescription(const class FString& InDescription, bool bGetLongDescription, class AShooterPlayerController* ForPC);
		void ExecuteUbergraph_PrimalItemConsumable_FestiveDinoCandy(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
