﻿/**
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
	 * 		Name   -> Function BTT_Summoner_SetIsDodging.BTT_Summoner_SetIsDodging_C.ReceiveExecute
	 * 		Flags  -> (Event, Protected, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AActor*                                      OwnerActor                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UBTT_Summoner_SetIsDodging_C::ReceiveExecute(class AActor* OwnerActor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BTT_Summoner_SetIsDodging.BTT_Summoner_SetIsDodging_C.ReceiveExecute");
		
		UBTT_Summoner_SetIsDodging_C_ReceiveExecute_Params params {};
		params.OwnerActor = OwnerActor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function BTT_Summoner_SetIsDodging.BTT_Summoner_SetIsDodging_C.ExecuteUbergraph_BTT_Summoner_SetIsDodging
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UBTT_Summoner_SetIsDodging_C::ExecuteUbergraph_BTT_Summoner_SetIsDodging(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BTT_Summoner_SetIsDodging.BTT_Summoner_SetIsDodging_C.ExecuteUbergraph_BTT_Summoner_SetIsDodging");
		
		UBTT_Summoner_SetIsDodging_C_ExecuteUbergraph_BTT_Summoner_SetIsDodging_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBTT_Summoner_SetIsDodging_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBTT_Summoner_SetIsDodging_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BTT_Summoner_SetIsDodging.BTT_Summoner_SetIsDodging_C");
		return ptr;
	}

}


