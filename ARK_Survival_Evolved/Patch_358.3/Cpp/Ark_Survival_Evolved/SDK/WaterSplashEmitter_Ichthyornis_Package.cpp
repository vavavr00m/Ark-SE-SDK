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
	 * 		Name   -> Function WaterSplashEmitter_Ichthyornis.WaterSplashEmitter_Ichthyornis_C.UserConstructionScript
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void AWaterSplashEmitter_Ichthyornis_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WaterSplashEmitter_Ichthyornis.WaterSplashEmitter_Ichthyornis_C.UserConstructionScript");
		
		AWaterSplashEmitter_Ichthyornis_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function WaterSplashEmitter_Ichthyornis.WaterSplashEmitter_Ichthyornis_C.ExecuteUbergraph_WaterSplashEmitter_Ichthyornis
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AWaterSplashEmitter_Ichthyornis_C::ExecuteUbergraph_WaterSplashEmitter_Ichthyornis(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WaterSplashEmitter_Ichthyornis.WaterSplashEmitter_Ichthyornis_C.ExecuteUbergraph_WaterSplashEmitter_Ichthyornis");
		
		AWaterSplashEmitter_Ichthyornis_C_ExecuteUbergraph_WaterSplashEmitter_Ichthyornis_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AWaterSplashEmitter_Ichthyornis_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AWaterSplashEmitter_Ichthyornis_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass WaterSplashEmitter_Ichthyornis.WaterSplashEmitter_Ichthyornis_C");
		return ptr;
	}

}


