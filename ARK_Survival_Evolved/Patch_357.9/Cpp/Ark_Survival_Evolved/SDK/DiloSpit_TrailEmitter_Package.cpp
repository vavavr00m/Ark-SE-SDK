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
	 * 		Name   -> Function DiloSpit_TrailEmitter.DiloSpit_TrailEmitter_C.UserConstructionScript
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void ADiloSpit_TrailEmitter_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DiloSpit_TrailEmitter.DiloSpit_TrailEmitter_C.UserConstructionScript");
		
		ADiloSpit_TrailEmitter_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function DiloSpit_TrailEmitter.DiloSpit_TrailEmitter_C.ExecuteUbergraph_DiloSpit_TrailEmitter
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ADiloSpit_TrailEmitter_C::ExecuteUbergraph_DiloSpit_TrailEmitter(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DiloSpit_TrailEmitter.DiloSpit_TrailEmitter_C.ExecuteUbergraph_DiloSpit_TrailEmitter");
		
		ADiloSpit_TrailEmitter_C_ExecuteUbergraph_DiloSpit_TrailEmitter_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ADiloSpit_TrailEmitter_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ADiloSpit_TrailEmitter_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass DiloSpit_TrailEmitter.DiloSpit_TrailEmitter_C");
		return ptr;
	}

}


