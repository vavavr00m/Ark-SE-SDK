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
	 * 		Name   -> Function WyvernNest_Crystal.WyvernNest_Crystal_C.UserConstructionScript
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void AWyvernNest_Crystal_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WyvernNest_Crystal.WyvernNest_Crystal_C.UserConstructionScript");
		
		AWyvernNest_Crystal_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function WyvernNest_Crystal.WyvernNest_Crystal_C.ExecuteUbergraph_WyvernNest_Crystal
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AWyvernNest_Crystal_C::ExecuteUbergraph_WyvernNest_Crystal(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WyvernNest_Crystal.WyvernNest_Crystal_C.ExecuteUbergraph_WyvernNest_Crystal");
		
		AWyvernNest_Crystal_C_ExecuteUbergraph_WyvernNest_Crystal_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AWyvernNest_Crystal_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AWyvernNest_Crystal_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass WyvernNest_Crystal.WyvernNest_Crystal_C");
		return ptr;
	}

}


