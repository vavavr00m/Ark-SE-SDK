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
	 * 		Name   -> Function ProjArrow_Impacts_Big.ProjArrow_Impacts_Big_C.UserConstructionScript
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void AProjArrow_Impacts_Big_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ProjArrow_Impacts_Big.ProjArrow_Impacts_Big_C.UserConstructionScript");
		
		AProjArrow_Impacts_Big_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function ProjArrow_Impacts_Big.ProjArrow_Impacts_Big_C.ExecuteUbergraph_ProjArrow_Impacts_Big
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AProjArrow_Impacts_Big_C::ExecuteUbergraph_ProjArrow_Impacts_Big(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ProjArrow_Impacts_Big.ProjArrow_Impacts_Big_C.ExecuteUbergraph_ProjArrow_Impacts_Big");
		
		AProjArrow_Impacts_Big_C_ExecuteUbergraph_ProjArrow_Impacts_Big_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AProjArrow_Impacts_Big_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AProjArrow_Impacts_Big_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass ProjArrow_Impacts_Big.ProjArrow_Impacts_Big_C");
		return ptr;
	}

}


