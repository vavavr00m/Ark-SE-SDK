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
	 * 		Name   -> Function ProjAmargaSpike_Hot.ProjAmargaSpike_Hot_C.UserConstructionScript
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void AProjAmargaSpike_Hot_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ProjAmargaSpike_Hot.ProjAmargaSpike_Hot_C.UserConstructionScript");
		
		AProjAmargaSpike_Hot_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function ProjAmargaSpike_Hot.ProjAmargaSpike_Hot_C.ExecuteUbergraph_ProjAmargaSpike_Hot
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AProjAmargaSpike_Hot_C::ExecuteUbergraph_ProjAmargaSpike_Hot(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ProjAmargaSpike_Hot.ProjAmargaSpike_Hot_C.ExecuteUbergraph_ProjAmargaSpike_Hot");
		
		AProjAmargaSpike_Hot_C_ExecuteUbergraph_ProjAmargaSpike_Hot_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AProjAmargaSpike_Hot_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AProjAmargaSpike_Hot_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass ProjAmargaSpike_Hot.ProjAmargaSpike_Hot_C");
		return ptr;
	}

}


