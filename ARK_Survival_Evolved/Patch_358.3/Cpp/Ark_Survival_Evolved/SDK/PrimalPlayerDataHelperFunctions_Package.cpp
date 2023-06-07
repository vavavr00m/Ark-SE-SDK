/**
 * Name: Ark_Survival_Evolved
 * Version: Patch_358.3
 */

#include "pch.h"

namespace CG
{
	// --------------------------------------------------
	// # Structs Functions
	// --------------------------------------------------
	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function PrimalPlayerDataHelperFunctions.PrimalPlayerDataHelperFunctions_C.Apply To Player Pawn Character
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AShooterPlayerState*                         ForPlayerState                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class AShooterCharacter*                           NewPlayerCharacter                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		TArray<float>                                      AscensionData                                              (Parm, OutParm, ZeroConstructor, ReferenceParm)
	 * 		int32_t                                            HexagonCount                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		int32_t                                            ChibiLevelUpsCount                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               bUnlockedAllExplorerNotes                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		TArray<class FName>                                GeneralizedUnlockedAchievementTags                         (Parm, OutParm, ZeroConstructor, ReferenceParm)
	 */
	void UPrimalPlayerDataHelperFunctions_C::ApplyToPlayerPawnCharacter(class AShooterPlayerState* ForPlayerState, class AShooterCharacter* NewPlayerCharacter, TArray<float>* AscensionData, int32_t HexagonCount, int32_t ChibiLevelUpsCount, bool bUnlockedAllExplorerNotes, TArray<class FName>* GeneralizedUnlockedAchievementTags)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PrimalPlayerDataHelperFunctions.PrimalPlayerDataHelperFunctions_C.Apply To Player Pawn Character");
		
		UPrimalPlayerDataHelperFunctions_C_ApplyToPlayerPawnCharacter_Params params {};
		params.ForPlayerState = ForPlayerState;
		params.NewPlayerCharacter = NewPlayerCharacter;
		params.HexagonCount = HexagonCount;
		params.ChibiLevelUpsCount = ChibiLevelUpsCount;
		params.bUnlockedAllExplorerNotes = bUnlockedAllExplorerNotes;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (AscensionData != nullptr)
			*AscensionData = params.AscensionData;
		if (GeneralizedUnlockedAchievementTags != nullptr)
			*GeneralizedUnlockedAchievementTags = params.GeneralizedUnlockedAchievementTags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function PrimalPlayerDataHelperFunctions.PrimalPlayerDataHelperFunctions_C.ExecuteUbergraph_PrimalPlayerDataHelperFunctions
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UPrimalPlayerDataHelperFunctions_C::ExecuteUbergraph_PrimalPlayerDataHelperFunctions(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PrimalPlayerDataHelperFunctions.PrimalPlayerDataHelperFunctions_C.ExecuteUbergraph_PrimalPlayerDataHelperFunctions");
		
		UPrimalPlayerDataHelperFunctions_C_ExecuteUbergraph_PrimalPlayerDataHelperFunctions_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UPrimalPlayerDataHelperFunctions_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UPrimalPlayerDataHelperFunctions_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass PrimalPlayerDataHelperFunctions.PrimalPlayerDataHelperFunctions_C");
		return ptr;
	}

}


