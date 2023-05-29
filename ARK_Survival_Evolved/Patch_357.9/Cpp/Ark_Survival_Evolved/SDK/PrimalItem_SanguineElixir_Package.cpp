/**
 * Name: Ark_Survival_Evolved
 * Version: Patch_357.9
 */

#include "pch.h"

namespace CG
{
	// --------------------------------------------------
	// # Structs Functions
	// --------------------------------------------------
	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function PrimalItem_SanguineElixir.PrimalItem_SanguineElixir_C.CheckValidForUse
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class APrimalDinoCharacter*                        Dino                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               NewParam                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UPrimalItem_SanguineElixir_C::CheckValidForUse(class APrimalDinoCharacter* Dino, bool* NewParam)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PrimalItem_SanguineElixir.PrimalItem_SanguineElixir_C.CheckValidForUse");
		
		UPrimalItem_SanguineElixir_C_CheckValidForUse_Params params {};
		params.Dino = Dino;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (NewParam != nullptr)
			*NewParam = params.NewParam;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function PrimalItem_SanguineElixir.PrimalItem_SanguineElixir_C.BPCanUse
	 * 		Flags  -> (Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               bIgnoreCooldown                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	bool UPrimalItem_SanguineElixir_C::BPCanUse(bool bIgnoreCooldown)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PrimalItem_SanguineElixir.PrimalItem_SanguineElixir_C.BPCanUse");
		
		UPrimalItem_SanguineElixir_C_BPCanUse_Params params {};
		params.bIgnoreCooldown = bIgnoreCooldown;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function PrimalItem_SanguineElixir.PrimalItem_SanguineElixir_C.BlueprintUsed
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void UPrimalItem_SanguineElixir_C::BlueprintUsed()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PrimalItem_SanguineElixir.PrimalItem_SanguineElixir_C.BlueprintUsed");
		
		UPrimalItem_SanguineElixir_C_BlueprintUsed_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function PrimalItem_SanguineElixir.PrimalItem_SanguineElixir_C.ExecuteUbergraph_PrimalItem_SanguineElixir
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UPrimalItem_SanguineElixir_C::ExecuteUbergraph_PrimalItem_SanguineElixir(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PrimalItem_SanguineElixir.PrimalItem_SanguineElixir_C.ExecuteUbergraph_PrimalItem_SanguineElixir");
		
		UPrimalItem_SanguineElixir_C_ExecuteUbergraph_PrimalItem_SanguineElixir_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UPrimalItem_SanguineElixir_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UPrimalItem_SanguineElixir_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass PrimalItem_SanguineElixir.PrimalItem_SanguineElixir_C");
		return ptr;
	}

}


