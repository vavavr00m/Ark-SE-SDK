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
	 * 		Name   -> Function C4Charge_EasterBasket.C4Charge_EasterBasket_C.UserConstructionScript
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void AC4Charge_EasterBasket_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function C4Charge_EasterBasket.C4Charge_EasterBasket_C.UserConstructionScript");
		
		AC4Charge_EasterBasket_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function C4Charge_EasterBasket.C4Charge_EasterBasket_C.ExecuteUbergraph_C4Charge_EasterBasket
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AC4Charge_EasterBasket_C::ExecuteUbergraph_C4Charge_EasterBasket(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function C4Charge_EasterBasket.C4Charge_EasterBasket_C.ExecuteUbergraph_C4Charge_EasterBasket");
		
		AC4Charge_EasterBasket_C_ExecuteUbergraph_C4Charge_EasterBasket_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AC4Charge_EasterBasket_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AC4Charge_EasterBasket_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass C4Charge_EasterBasket.C4Charge_EasterBasket_C");
		return ptr;
	}

}


