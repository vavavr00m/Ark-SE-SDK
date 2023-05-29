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
	 * 		Name   -> Function Dodo_Character_BP_Birthday.Dodo_Character_BP_Birthday_C.UserConstructionScript
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void ADodo_Character_BP_Birthday_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Dodo_Character_BP_Birthday.Dodo_Character_BP_Birthday_C.UserConstructionScript");
		
		ADodo_Character_BP_Birthday_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Dodo_Character_BP_Birthday.Dodo_Character_BP_Birthday_C.ExecuteUbergraph_Dodo_Character_BP_Birthday
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ADodo_Character_BP_Birthday_C::ExecuteUbergraph_Dodo_Character_BP_Birthday(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Dodo_Character_BP_Birthday.Dodo_Character_BP_Birthday_C.ExecuteUbergraph_Dodo_Character_BP_Birthday");
		
		ADodo_Character_BP_Birthday_C_ExecuteUbergraph_Dodo_Character_BP_Birthday_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ADodo_Character_BP_Birthday_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ADodo_Character_BP_Birthday_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass Dodo_Character_BP_Birthday.Dodo_Character_BP_Birthday_C");
		return ptr;
	}

}


