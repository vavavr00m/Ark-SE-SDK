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
	 * 		Name   -> Function WeapC4_EasterBasket.WeapC4_EasterBasket_C.UserConstructionScript
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void AWeapC4_EasterBasket_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WeapC4_EasterBasket.WeapC4_EasterBasket_C.UserConstructionScript");
		
		AWeapC4_EasterBasket_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function WeapC4_EasterBasket.WeapC4_EasterBasket_C.ExecuteUbergraph_WeapC4_EasterBasket
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AWeapC4_EasterBasket_C::ExecuteUbergraph_WeapC4_EasterBasket(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WeapC4_EasterBasket.WeapC4_EasterBasket_C.ExecuteUbergraph_WeapC4_EasterBasket");
		
		AWeapC4_EasterBasket_C_ExecuteUbergraph_WeapC4_EasterBasket_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AWeapC4_EasterBasket_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AWeapC4_EasterBasket_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass WeapC4_EasterBasket.WeapC4_EasterBasket_C");
		return ptr;
	}

}


