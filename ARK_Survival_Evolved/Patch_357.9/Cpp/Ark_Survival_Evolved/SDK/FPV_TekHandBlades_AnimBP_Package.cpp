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
	 * 		Name   -> Function FPV_TekHandBlades_AnimBP.FPV_TekHandBlades_AnimBP_C.BlueprintUpdateAnimation
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              DeltaTimeX                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UFPV_TekHandBlades_AnimBP_C::BlueprintUpdateAnimation(float DeltaTimeX)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FPV_TekHandBlades_AnimBP.FPV_TekHandBlades_AnimBP_C.BlueprintUpdateAnimation");
		
		UFPV_TekHandBlades_AnimBP_C_BlueprintUpdateAnimation_Params params {};
		params.DeltaTimeX = DeltaTimeX;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function FPV_TekHandBlades_AnimBP.FPV_TekHandBlades_AnimBP_C.ExecuteUbergraph_FPV_TekHandBlades_AnimBP
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UFPV_TekHandBlades_AnimBP_C::ExecuteUbergraph_FPV_TekHandBlades_AnimBP(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FPV_TekHandBlades_AnimBP.FPV_TekHandBlades_AnimBP_C.ExecuteUbergraph_FPV_TekHandBlades_AnimBP");
		
		UFPV_TekHandBlades_AnimBP_C_ExecuteUbergraph_FPV_TekHandBlades_AnimBP_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UFPV_TekHandBlades_AnimBP_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UFPV_TekHandBlades_AnimBP_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("AnimBlueprintGeneratedClass FPV_TekHandBlades_AnimBP.FPV_TekHandBlades_AnimBP_C");
		return ptr;
	}

}


