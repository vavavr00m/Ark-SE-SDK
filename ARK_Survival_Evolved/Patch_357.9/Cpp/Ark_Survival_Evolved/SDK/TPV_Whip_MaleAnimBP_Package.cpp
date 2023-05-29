﻿/**
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
	 * 		Name   -> Function TPV_Whip_MaleAnimBP.TPV_Whip_MaleAnimBP_C.ExecuteUbergraph_TPV_Whip_MaleAnimBP
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UTPV_Whip_MaleAnimBP_C::ExecuteUbergraph_TPV_Whip_MaleAnimBP(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TPV_Whip_MaleAnimBP.TPV_Whip_MaleAnimBP_C.ExecuteUbergraph_TPV_Whip_MaleAnimBP");
		
		UTPV_Whip_MaleAnimBP_C_ExecuteUbergraph_TPV_Whip_MaleAnimBP_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UTPV_Whip_MaleAnimBP_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UTPV_Whip_MaleAnimBP_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("AnimBlueprintGeneratedClass TPV_Whip_MaleAnimBP.TPV_Whip_MaleAnimBP_C");
		return ptr;
	}

}


