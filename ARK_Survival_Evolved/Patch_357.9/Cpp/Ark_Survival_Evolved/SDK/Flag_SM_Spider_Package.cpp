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
	 * 		Name   -> Function Flag_SM_Spider.Flag_SM_Spider_C.UserConstructionScript
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void AFlag_SM_Spider_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Flag_SM_Spider.Flag_SM_Spider_C.UserConstructionScript");
		
		AFlag_SM_Spider_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Flag_SM_Spider.Flag_SM_Spider_C.ExecuteUbergraph_Flag_SM_Spider
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AFlag_SM_Spider_C::ExecuteUbergraph_Flag_SM_Spider(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Flag_SM_Spider.Flag_SM_Spider_C.ExecuteUbergraph_Flag_SM_Spider");
		
		AFlag_SM_Spider_C_ExecuteUbergraph_Flag_SM_Spider_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AFlag_SM_Spider_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AFlag_SM_Spider_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass Flag_SM_Spider.Flag_SM_Spider_C");
		return ptr;
	}

}


