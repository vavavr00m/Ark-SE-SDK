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
	 * 		Name   -> Function Thatch_Wall_Small.Thatch_Wall_Small_C.UserConstructionScript
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void AThatch_Wall_Small_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Thatch_Wall_Small.Thatch_Wall_Small_C.UserConstructionScript");
		
		AThatch_Wall_Small_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Thatch_Wall_Small.Thatch_Wall_Small_C.ExecuteUbergraph_Thatch_Wall_Small
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AThatch_Wall_Small_C::ExecuteUbergraph_Thatch_Wall_Small(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Thatch_Wall_Small.Thatch_Wall_Small_C.ExecuteUbergraph_Thatch_Wall_Small");
		
		AThatch_Wall_Small_C_ExecuteUbergraph_Thatch_Wall_Small_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AThatch_Wall_Small_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AThatch_Wall_Small_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass Thatch_Wall_Small.Thatch_Wall_Small_C");
		return ptr;
	}

}


