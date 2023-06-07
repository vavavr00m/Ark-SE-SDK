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
	 * 		Name   -> Function Direwolf_Character_BP_Eden_Summoned.Direwolf_Character_BP_Eden_Summoned_C.UserConstructionScript
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void ADirewolf_Character_BP_Eden_Summoned_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Direwolf_Character_BP_Eden_Summoned.Direwolf_Character_BP_Eden_Summoned_C.UserConstructionScript");
		
		ADirewolf_Character_BP_Eden_Summoned_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Direwolf_Character_BP_Eden_Summoned.Direwolf_Character_BP_Eden_Summoned_C.ExecuteUbergraph_Direwolf_Character_BP_Eden_Summoned
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ADirewolf_Character_BP_Eden_Summoned_C::ExecuteUbergraph_Direwolf_Character_BP_Eden_Summoned(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Direwolf_Character_BP_Eden_Summoned.Direwolf_Character_BP_Eden_Summoned_C.ExecuteUbergraph_Direwolf_Character_BP_Eden_Summoned");
		
		ADirewolf_Character_BP_Eden_Summoned_C_ExecuteUbergraph_Direwolf_Character_BP_Eden_Summoned_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ADirewolf_Character_BP_Eden_Summoned_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ADirewolf_Character_BP_Eden_Summoned_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass Direwolf_Character_BP_Eden_Summoned.Direwolf_Character_BP_Eden_Summoned_C");
		return ptr;
	}

}


