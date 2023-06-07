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
	 * 		Name   -> Function WeapStoneClub_BBQSpatula.WeapStoneClub_BBQSpatula_C.UserConstructionScript
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void AWeapStoneClub_BBQSpatula_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WeapStoneClub_BBQSpatula.WeapStoneClub_BBQSpatula_C.UserConstructionScript");
		
		AWeapStoneClub_BBQSpatula_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function WeapStoneClub_BBQSpatula.WeapStoneClub_BBQSpatula_C.ExecuteUbergraph_WeapStoneClub_BBQSpatula
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AWeapStoneClub_BBQSpatula_C::ExecuteUbergraph_WeapStoneClub_BBQSpatula(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WeapStoneClub_BBQSpatula.WeapStoneClub_BBQSpatula_C.ExecuteUbergraph_WeapStoneClub_BBQSpatula");
		
		AWeapStoneClub_BBQSpatula_C_ExecuteUbergraph_WeapStoneClub_BBQSpatula_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AWeapStoneClub_BBQSpatula_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AWeapStoneClub_BBQSpatula_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass WeapStoneClub_BBQSpatula.WeapStoneClub_BBQSpatula_C");
		return ptr;
	}

}


