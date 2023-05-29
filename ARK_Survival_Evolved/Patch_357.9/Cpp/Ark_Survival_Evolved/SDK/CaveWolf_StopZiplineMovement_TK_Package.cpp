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
	 * 		Name   -> Function CaveWolf_StopZiplineMovement_TK.CaveWolf_StopZiplineMovement_TK_C.ReceiveExecute
	 * 		Flags  -> (Event, Protected, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AActor*                                      OwnerActor                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UCaveWolf_StopZiplineMovement_TK_C::ReceiveExecute(class AActor* OwnerActor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CaveWolf_StopZiplineMovement_TK.CaveWolf_StopZiplineMovement_TK_C.ReceiveExecute");
		
		UCaveWolf_StopZiplineMovement_TK_C_ReceiveExecute_Params params {};
		params.OwnerActor = OwnerActor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function CaveWolf_StopZiplineMovement_TK.CaveWolf_StopZiplineMovement_TK_C.ExecuteUbergraph_CaveWolf_StopZiplineMovement_TK
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UCaveWolf_StopZiplineMovement_TK_C::ExecuteUbergraph_CaveWolf_StopZiplineMovement_TK(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CaveWolf_StopZiplineMovement_TK.CaveWolf_StopZiplineMovement_TK_C.ExecuteUbergraph_CaveWolf_StopZiplineMovement_TK");
		
		UCaveWolf_StopZiplineMovement_TK_C_ExecuteUbergraph_CaveWolf_StopZiplineMovement_TK_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UCaveWolf_StopZiplineMovement_TK_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCaveWolf_StopZiplineMovement_TK_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass CaveWolf_StopZiplineMovement_TK.CaveWolf_StopZiplineMovement_TK_C");
		return ptr;
	}

}


