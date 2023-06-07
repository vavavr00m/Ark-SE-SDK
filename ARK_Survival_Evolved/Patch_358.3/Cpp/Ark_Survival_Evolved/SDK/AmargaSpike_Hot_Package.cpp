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
	 * 		Name   -> Function AmargaSpike_Hot.AmargaSpike_Hot_C.UserConstructionScript
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void AAmargaSpike_Hot_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AmargaSpike_Hot.AmargaSpike_Hot_C.UserConstructionScript");
		
		AAmargaSpike_Hot_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function AmargaSpike_Hot.AmargaSpike_Hot_C.ExecuteUbergraph_AmargaSpike_Hot
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AAmargaSpike_Hot_C::ExecuteUbergraph_AmargaSpike_Hot(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AmargaSpike_Hot.AmargaSpike_Hot_C.ExecuteUbergraph_AmargaSpike_Hot");
		
		AAmargaSpike_Hot_C_ExecuteUbergraph_AmargaSpike_Hot_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AAmargaSpike_Hot_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AAmargaSpike_Hot_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass AmargaSpike_Hot.AmargaSpike_Hot_C");
		return ptr;
	}

}


