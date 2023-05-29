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
	 * 		Name   -> Function CupidArrowImpactEmitter.CupidArrowImpactEmitter_C.UserConstructionScript
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void ACupidArrowImpactEmitter_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CupidArrowImpactEmitter.CupidArrowImpactEmitter_C.UserConstructionScript");
		
		ACupidArrowImpactEmitter_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function CupidArrowImpactEmitter.CupidArrowImpactEmitter_C.ExecuteUbergraph_CupidArrowImpactEmitter
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ACupidArrowImpactEmitter_C::ExecuteUbergraph_CupidArrowImpactEmitter(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CupidArrowImpactEmitter.CupidArrowImpactEmitter_C.ExecuteUbergraph_CupidArrowImpactEmitter");
		
		ACupidArrowImpactEmitter_C_ExecuteUbergraph_CupidArrowImpactEmitter_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ACupidArrowImpactEmitter_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ACupidArrowImpactEmitter_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass CupidArrowImpactEmitter.CupidArrowImpactEmitter_C");
		return ptr;
	}

}


