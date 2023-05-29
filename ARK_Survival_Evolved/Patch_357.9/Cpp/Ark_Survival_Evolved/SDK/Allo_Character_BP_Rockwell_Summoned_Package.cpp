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
	 * 		Name   -> Function Allo_Character_BP_Rockwell_Summoned.Allo_Character_BP_Rockwell_Summoned_C.UserConstructionScript
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void AAllo_Character_BP_Rockwell_Summoned_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Allo_Character_BP_Rockwell_Summoned.Allo_Character_BP_Rockwell_Summoned_C.UserConstructionScript");
		
		AAllo_Character_BP_Rockwell_Summoned_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Allo_Character_BP_Rockwell_Summoned.Allo_Character_BP_Rockwell_Summoned_C.ExecuteUbergraph_Allo_Character_BP_Rockwell_Summoned
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AAllo_Character_BP_Rockwell_Summoned_C::ExecuteUbergraph_Allo_Character_BP_Rockwell_Summoned(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Allo_Character_BP_Rockwell_Summoned.Allo_Character_BP_Rockwell_Summoned_C.ExecuteUbergraph_Allo_Character_BP_Rockwell_Summoned");
		
		AAllo_Character_BP_Rockwell_Summoned_C_ExecuteUbergraph_Allo_Character_BP_Rockwell_Summoned_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AAllo_Character_BP_Rockwell_Summoned_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AAllo_Character_BP_Rockwell_Summoned_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass Allo_Character_BP_Rockwell_Summoned.Allo_Character_BP_Rockwell_Summoned_C");
		return ptr;
	}

}


