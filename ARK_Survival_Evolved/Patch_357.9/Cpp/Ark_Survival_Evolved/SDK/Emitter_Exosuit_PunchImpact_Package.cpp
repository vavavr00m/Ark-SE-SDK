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
	 * 		Name   -> Function Emitter_Exosuit_PunchImpact.Emitter_Exosuit_PunchImpact_C.UserConstructionScript
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void AEmitter_Exosuit_PunchImpact_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Emitter_Exosuit_PunchImpact.Emitter_Exosuit_PunchImpact_C.UserConstructionScript");
		
		AEmitter_Exosuit_PunchImpact_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Emitter_Exosuit_PunchImpact.Emitter_Exosuit_PunchImpact_C.ExecuteUbergraph_Emitter_Exosuit_PunchImpact
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AEmitter_Exosuit_PunchImpact_C::ExecuteUbergraph_Emitter_Exosuit_PunchImpact(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Emitter_Exosuit_PunchImpact.Emitter_Exosuit_PunchImpact_C.ExecuteUbergraph_Emitter_Exosuit_PunchImpact");
		
		AEmitter_Exosuit_PunchImpact_C_ExecuteUbergraph_Emitter_Exosuit_PunchImpact_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AEmitter_Exosuit_PunchImpact_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AEmitter_Exosuit_PunchImpact_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass Emitter_Exosuit_PunchImpact.Emitter_Exosuit_PunchImpact_C");
		return ptr;
	}

}


