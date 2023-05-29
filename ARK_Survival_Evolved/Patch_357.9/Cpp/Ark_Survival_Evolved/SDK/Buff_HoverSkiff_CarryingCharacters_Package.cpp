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
	 * 		Name   -> Function Buff_HoverSkiff_CarryingCharacters.Buff_HoverSkiff_CarryingCharacters_C.BPPreventRunning
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 */
	bool ABuff_HoverSkiff_CarryingCharacters_C::BPPreventRunning()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_HoverSkiff_CarryingCharacters.Buff_HoverSkiff_CarryingCharacters_C.BPPreventRunning");
		
		ABuff_HoverSkiff_CarryingCharacters_C_BPPreventRunning_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Buff_HoverSkiff_CarryingCharacters.Buff_HoverSkiff_CarryingCharacters_C.UserConstructionScript
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABuff_HoverSkiff_CarryingCharacters_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_HoverSkiff_CarryingCharacters.Buff_HoverSkiff_CarryingCharacters_C.UserConstructionScript");
		
		ABuff_HoverSkiff_CarryingCharacters_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Buff_HoverSkiff_CarryingCharacters.Buff_HoverSkiff_CarryingCharacters_C.ExecuteUbergraph_Buff_HoverSkiff_CarryingCharacters
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABuff_HoverSkiff_CarryingCharacters_C::ExecuteUbergraph_Buff_HoverSkiff_CarryingCharacters(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_HoverSkiff_CarryingCharacters.Buff_HoverSkiff_CarryingCharacters_C.ExecuteUbergraph_Buff_HoverSkiff_CarryingCharacters");
		
		ABuff_HoverSkiff_CarryingCharacters_C_ExecuteUbergraph_Buff_HoverSkiff_CarryingCharacters_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABuff_HoverSkiff_CarryingCharacters_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABuff_HoverSkiff_CarryingCharacters_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass Buff_HoverSkiff_CarryingCharacters.Buff_HoverSkiff_CarryingCharacters_C");
		return ptr;
	}

}


