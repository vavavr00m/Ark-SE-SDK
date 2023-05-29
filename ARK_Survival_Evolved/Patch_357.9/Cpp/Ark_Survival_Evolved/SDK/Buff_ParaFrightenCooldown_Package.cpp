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
	 * 		Name   -> Function Buff_ParaFrightenCooldown.Buff_ParaFrightenCooldown_C.UserConstructionScript
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABuff_ParaFrightenCooldown_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_ParaFrightenCooldown.Buff_ParaFrightenCooldown_C.UserConstructionScript");
		
		ABuff_ParaFrightenCooldown_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Buff_ParaFrightenCooldown.Buff_ParaFrightenCooldown_C.ExecuteUbergraph_Buff_ParaFrightenCooldown
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABuff_ParaFrightenCooldown_C::ExecuteUbergraph_Buff_ParaFrightenCooldown(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_ParaFrightenCooldown.Buff_ParaFrightenCooldown_C.ExecuteUbergraph_Buff_ParaFrightenCooldown");
		
		ABuff_ParaFrightenCooldown_C_ExecuteUbergraph_Buff_ParaFrightenCooldown_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABuff_ParaFrightenCooldown_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABuff_ParaFrightenCooldown_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass Buff_ParaFrightenCooldown.Buff_ParaFrightenCooldown_C");
		return ptr;
	}

}


