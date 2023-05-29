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
	 * 		Name   -> Function Megatherium_Character_BP_Eden.Megatherium_Character_BP_Eden_C.UserConstructionScript
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void AMegatherium_Character_BP_Eden_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Megatherium_Character_BP_Eden.Megatherium_Character_BP_Eden_C.UserConstructionScript");
		
		AMegatherium_Character_BP_Eden_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Megatherium_Character_BP_Eden.Megatherium_Character_BP_Eden_C.ExecuteUbergraph_Megatherium_Character_BP_Eden
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AMegatherium_Character_BP_Eden_C::ExecuteUbergraph_Megatherium_Character_BP_Eden(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Megatherium_Character_BP_Eden.Megatherium_Character_BP_Eden_C.ExecuteUbergraph_Megatherium_Character_BP_Eden");
		
		AMegatherium_Character_BP_Eden_C_ExecuteUbergraph_Megatherium_Character_BP_Eden_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AMegatherium_Character_BP_Eden_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AMegatherium_Character_BP_Eden_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass Megatherium_Character_BP_Eden.Megatherium_Character_BP_Eden_C");
		return ptr;
	}

}


