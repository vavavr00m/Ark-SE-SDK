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
	 * 		Name   -> Function Sauropod_Character_BP_Rockwell.Sauropod_Character_BP_Rockwell_C.UserConstructionScript
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void ASauropod_Character_BP_Rockwell_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Sauropod_Character_BP_Rockwell.Sauropod_Character_BP_Rockwell_C.UserConstructionScript");
		
		ASauropod_Character_BP_Rockwell_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Sauropod_Character_BP_Rockwell.Sauropod_Character_BP_Rockwell_C.ExecuteUbergraph_Sauropod_Character_BP_Rockwell
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ASauropod_Character_BP_Rockwell_C::ExecuteUbergraph_Sauropod_Character_BP_Rockwell(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Sauropod_Character_BP_Rockwell.Sauropod_Character_BP_Rockwell_C.ExecuteUbergraph_Sauropod_Character_BP_Rockwell");
		
		ASauropod_Character_BP_Rockwell_C_ExecuteUbergraph_Sauropod_Character_BP_Rockwell_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ASauropod_Character_BP_Rockwell_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ASauropod_Character_BP_Rockwell_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass Sauropod_Character_BP_Rockwell.Sauropod_Character_BP_Rockwell_C");
		return ptr;
	}

}


