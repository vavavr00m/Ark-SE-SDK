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
	 * 		Name   -> Function Buff_ForceFlee_SinoScream.Buff_ForceFlee_SinoScream_C.Restore Flee State
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABuff_ForceFlee_SinoScream_C::RestoreFleeState()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_ForceFlee_SinoScream.Buff_ForceFlee_SinoScream_C.Restore Flee State");
		
		ABuff_ForceFlee_SinoScream_C_RestoreFleeState_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Buff_ForceFlee_SinoScream.Buff_ForceFlee_SinoScream_C.Set Flee State
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABuff_ForceFlee_SinoScream_C::SetFleeState()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_ForceFlee_SinoScream.Buff_ForceFlee_SinoScream_C.Set Flee State");
		
		ABuff_ForceFlee_SinoScream_C_SetFleeState_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Buff_ForceFlee_SinoScream.Buff_ForceFlee_SinoScream_C.UserConstructionScript
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABuff_ForceFlee_SinoScream_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_ForceFlee_SinoScream.Buff_ForceFlee_SinoScream_C.UserConstructionScript");
		
		ABuff_ForceFlee_SinoScream_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Buff_ForceFlee_SinoScream.Buff_ForceFlee_SinoScream_C.ExecuteUbergraph_Buff_ForceFlee_SinoScream
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABuff_ForceFlee_SinoScream_C::ExecuteUbergraph_Buff_ForceFlee_SinoScream(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_ForceFlee_SinoScream.Buff_ForceFlee_SinoScream_C.ExecuteUbergraph_Buff_ForceFlee_SinoScream");
		
		ABuff_ForceFlee_SinoScream_C_ExecuteUbergraph_Buff_ForceFlee_SinoScream_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABuff_ForceFlee_SinoScream_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABuff_ForceFlee_SinoScream_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass Buff_ForceFlee_SinoScream.Buff_ForceFlee_SinoScream_C");
		return ptr;
	}

}


