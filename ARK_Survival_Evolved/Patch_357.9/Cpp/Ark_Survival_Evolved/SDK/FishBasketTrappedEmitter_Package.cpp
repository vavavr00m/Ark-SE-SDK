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
	 * 		Name   -> Function FishBasketTrappedEmitter.FishBasketTrappedEmitter_C.UserConstructionScript
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void AFishBasketTrappedEmitter_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FishBasketTrappedEmitter.FishBasketTrappedEmitter_C.UserConstructionScript");
		
		AFishBasketTrappedEmitter_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function FishBasketTrappedEmitter.FishBasketTrappedEmitter_C.ExecuteUbergraph_FishBasketTrappedEmitter
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AFishBasketTrappedEmitter_C::ExecuteUbergraph_FishBasketTrappedEmitter(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FishBasketTrappedEmitter.FishBasketTrappedEmitter_C.ExecuteUbergraph_FishBasketTrappedEmitter");
		
		AFishBasketTrappedEmitter_C_ExecuteUbergraph_FishBasketTrappedEmitter_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AFishBasketTrappedEmitter_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AFishBasketTrappedEmitter_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass FishBasketTrappedEmitter.FishBasketTrappedEmitter_C");
		return ptr;
	}

}


