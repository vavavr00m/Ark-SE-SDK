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
	 * 		Name   -> Function Salmon_Character_Aberrant.Salmon_Character_Aberrant_C.UserConstructionScript
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void ASalmon_Character_Aberrant_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Salmon_Character_Aberrant.Salmon_Character_Aberrant_C.UserConstructionScript");
		
		ASalmon_Character_Aberrant_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Salmon_Character_Aberrant.Salmon_Character_Aberrant_C.ExecuteUbergraph_Salmon_Character_Aberrant
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ASalmon_Character_Aberrant_C::ExecuteUbergraph_Salmon_Character_Aberrant(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Salmon_Character_Aberrant.Salmon_Character_Aberrant_C.ExecuteUbergraph_Salmon_Character_Aberrant");
		
		ASalmon_Character_Aberrant_C_ExecuteUbergraph_Salmon_Character_Aberrant_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ASalmon_Character_Aberrant_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ASalmon_Character_Aberrant_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass Salmon_Character_Aberrant.Salmon_Character_Aberrant_C");
		return ptr;
	}

}


