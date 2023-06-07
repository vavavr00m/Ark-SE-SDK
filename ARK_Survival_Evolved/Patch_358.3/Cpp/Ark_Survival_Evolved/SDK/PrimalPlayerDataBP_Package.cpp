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
	 * 		Name   -> Function PrimalPlayerDataBP.PrimalPlayerDataBP_C.BPAppliedToPlayerState
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AShooterPlayerState*                         ForPlayerState                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UPrimalPlayerDataBP_C::BPAppliedToPlayerState(class AShooterPlayerState* ForPlayerState)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PrimalPlayerDataBP.PrimalPlayerDataBP_C.BPAppliedToPlayerState");
		
		UPrimalPlayerDataBP_C_BPAppliedToPlayerState_Params params {};
		params.ForPlayerState = ForPlayerState;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function PrimalPlayerDataBP.PrimalPlayerDataBP_C.BPApplyToPlayerCharacter
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AShooterPlayerState*                         ForPlayerState                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class AShooterCharacter*                           NewPlayerCharacter                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UPrimalPlayerDataBP_C::BPApplyToPlayerCharacter(class AShooterPlayerState* ForPlayerState, class AShooterCharacter* NewPlayerCharacter)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PrimalPlayerDataBP.PrimalPlayerDataBP_C.BPApplyToPlayerCharacter");
		
		UPrimalPlayerDataBP_C_BPApplyToPlayerCharacter_Params params {};
		params.ForPlayerState = ForPlayerState;
		params.NewPlayerCharacter = NewPlayerCharacter;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function PrimalPlayerDataBP.PrimalPlayerDataBP_C.ExecuteUbergraph_PrimalPlayerDataBP
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UPrimalPlayerDataBP_C::ExecuteUbergraph_PrimalPlayerDataBP(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PrimalPlayerDataBP.PrimalPlayerDataBP_C.ExecuteUbergraph_PrimalPlayerDataBP");
		
		UPrimalPlayerDataBP_C_ExecuteUbergraph_PrimalPlayerDataBP_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UPrimalPlayerDataBP_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UPrimalPlayerDataBP_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass PrimalPlayerDataBP.PrimalPlayerDataBP_C");
		return ptr;
	}

}


