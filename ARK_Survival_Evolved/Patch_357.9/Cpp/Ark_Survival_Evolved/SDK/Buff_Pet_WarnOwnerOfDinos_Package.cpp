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
	 * 		Name   -> Function Buff_Pet_WarnOwnerOfDinos.Buff_Pet_WarnOwnerOfDinos_C.UserConstructionScript
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABuff_Pet_WarnOwnerOfDinos_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_Pet_WarnOwnerOfDinos.Buff_Pet_WarnOwnerOfDinos_C.UserConstructionScript");
		
		ABuff_Pet_WarnOwnerOfDinos_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Buff_Pet_WarnOwnerOfDinos.Buff_Pet_WarnOwnerOfDinos_C.ExecuteUbergraph_Buff_Pet_WarnOwnerOfDinos
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABuff_Pet_WarnOwnerOfDinos_C::ExecuteUbergraph_Buff_Pet_WarnOwnerOfDinos(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_Pet_WarnOwnerOfDinos.Buff_Pet_WarnOwnerOfDinos_C.ExecuteUbergraph_Buff_Pet_WarnOwnerOfDinos");
		
		ABuff_Pet_WarnOwnerOfDinos_C_ExecuteUbergraph_Buff_Pet_WarnOwnerOfDinos_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABuff_Pet_WarnOwnerOfDinos_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABuff_Pet_WarnOwnerOfDinos_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass Buff_Pet_WarnOwnerOfDinos.Buff_Pet_WarnOwnerOfDinos_C");
		return ptr;
	}

}


