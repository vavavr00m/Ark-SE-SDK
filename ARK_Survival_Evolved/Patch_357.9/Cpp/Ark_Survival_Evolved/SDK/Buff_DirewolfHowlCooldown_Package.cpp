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
	 * 		Name   -> Function Buff_DirewolfHowlCooldown.Buff_DirewolfHowlCooldown_C.UserConstructionScript
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABuff_DirewolfHowlCooldown_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_DirewolfHowlCooldown.Buff_DirewolfHowlCooldown_C.UserConstructionScript");
		
		ABuff_DirewolfHowlCooldown_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Buff_DirewolfHowlCooldown.Buff_DirewolfHowlCooldown_C.ExecuteUbergraph_Buff_DirewolfHowlCooldown
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABuff_DirewolfHowlCooldown_C::ExecuteUbergraph_Buff_DirewolfHowlCooldown(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_DirewolfHowlCooldown.Buff_DirewolfHowlCooldown_C.ExecuteUbergraph_Buff_DirewolfHowlCooldown");
		
		ABuff_DirewolfHowlCooldown_C_ExecuteUbergraph_Buff_DirewolfHowlCooldown_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABuff_DirewolfHowlCooldown_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABuff_DirewolfHowlCooldown_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass Buff_DirewolfHowlCooldown.Buff_DirewolfHowlCooldown_C");
		return ptr;
	}

}


