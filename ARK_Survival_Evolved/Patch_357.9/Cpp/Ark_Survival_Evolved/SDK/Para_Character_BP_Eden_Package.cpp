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
	 * 		Name   -> Function Para_Character_BP_Eden.Para_Character_BP_Eden_C.UserConstructionScript
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void APara_Character_BP_Eden_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Para_Character_BP_Eden.Para_Character_BP_Eden_C.UserConstructionScript");
		
		APara_Character_BP_Eden_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Para_Character_BP_Eden.Para_Character_BP_Eden_C.ExecuteUbergraph_Para_Character_BP_Eden
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void APara_Character_BP_Eden_C::ExecuteUbergraph_Para_Character_BP_Eden(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Para_Character_BP_Eden.Para_Character_BP_Eden_C.ExecuteUbergraph_Para_Character_BP_Eden");
		
		APara_Character_BP_Eden_C_ExecuteUbergraph_Para_Character_BP_Eden_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction APara_Character_BP_Eden_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* APara_Character_BP_Eden_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass Para_Character_BP_Eden.Para_Character_BP_Eden_C");
		return ptr;
	}

}


