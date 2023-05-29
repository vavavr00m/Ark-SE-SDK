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
	 * 		Name   -> Function DinoOrderEmitter_MoveTo.DinoOrderEmitter_MoveTo_C.UserConstructionScript
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void ADinoOrderEmitter_MoveTo_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DinoOrderEmitter_MoveTo.DinoOrderEmitter_MoveTo_C.UserConstructionScript");
		
		ADinoOrderEmitter_MoveTo_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function DinoOrderEmitter_MoveTo.DinoOrderEmitter_MoveTo_C.ExecuteUbergraph_DinoOrderEmitter_MoveTo
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ADinoOrderEmitter_MoveTo_C::ExecuteUbergraph_DinoOrderEmitter_MoveTo(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DinoOrderEmitter_MoveTo.DinoOrderEmitter_MoveTo_C.ExecuteUbergraph_DinoOrderEmitter_MoveTo");
		
		ADinoOrderEmitter_MoveTo_C_ExecuteUbergraph_DinoOrderEmitter_MoveTo_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ADinoOrderEmitter_MoveTo_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ADinoOrderEmitter_MoveTo_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass DinoOrderEmitter_MoveTo.DinoOrderEmitter_MoveTo_C");
		return ptr;
	}

}


