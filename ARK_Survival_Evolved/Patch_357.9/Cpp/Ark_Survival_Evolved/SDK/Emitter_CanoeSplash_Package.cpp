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
	 * 		Name   -> Function Emitter_CanoeSplash.Emitter_CanoeSplash_C.UserConstructionScript
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void AEmitter_CanoeSplash_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Emitter_CanoeSplash.Emitter_CanoeSplash_C.UserConstructionScript");
		
		AEmitter_CanoeSplash_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Emitter_CanoeSplash.Emitter_CanoeSplash_C.ExecuteUbergraph_Emitter_CanoeSplash
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AEmitter_CanoeSplash_C::ExecuteUbergraph_Emitter_CanoeSplash(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Emitter_CanoeSplash.Emitter_CanoeSplash_C.ExecuteUbergraph_Emitter_CanoeSplash");
		
		AEmitter_CanoeSplash_C_ExecuteUbergraph_Emitter_CanoeSplash_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AEmitter_CanoeSplash_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AEmitter_CanoeSplash_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass Emitter_CanoeSplash.Emitter_CanoeSplash_C");
		return ptr;
	}

}


