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
	 * 		Name   -> Function Doorframe_Wood_SM_New.Doorframe_Wood_SM_New_C.UserConstructionScript
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void ADoorframe_Wood_SM_New_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Doorframe_Wood_SM_New.Doorframe_Wood_SM_New_C.UserConstructionScript");
		
		ADoorframe_Wood_SM_New_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Doorframe_Wood_SM_New.Doorframe_Wood_SM_New_C.ExecuteUbergraph_Doorframe_Wood_SM_New
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ADoorframe_Wood_SM_New_C::ExecuteUbergraph_Doorframe_Wood_SM_New(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Doorframe_Wood_SM_New.Doorframe_Wood_SM_New_C.ExecuteUbergraph_Doorframe_Wood_SM_New");
		
		ADoorframe_Wood_SM_New_C_ExecuteUbergraph_Doorframe_Wood_SM_New_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ADoorframe_Wood_SM_New_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ADoorframe_Wood_SM_New_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass Doorframe_Wood_SM_New.Doorframe_Wood_SM_New_C");
		return ptr;
	}

}


