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
	 * 		Name   -> Function WyvProjFireBreath.WyvProjFireBreath_C.UserConstructionScript
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void AWyvProjFireBreath_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WyvProjFireBreath.WyvProjFireBreath_C.UserConstructionScript");
		
		AWyvProjFireBreath_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function WyvProjFireBreath.WyvProjFireBreath_C.ExecuteUbergraph_WyvProjFireBreath
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AWyvProjFireBreath_C::ExecuteUbergraph_WyvProjFireBreath(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WyvProjFireBreath.WyvProjFireBreath_C.ExecuteUbergraph_WyvProjFireBreath");
		
		AWyvProjFireBreath_C_ExecuteUbergraph_WyvProjFireBreath_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AWyvProjFireBreath_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AWyvProjFireBreath_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass WyvProjFireBreath.WyvProjFireBreath_C");
		return ptr;
	}

}


