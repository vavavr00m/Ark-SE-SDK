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
	 * 		Name   -> Function ElectricCableIntersection.ElectricCableIntersection_C.UserConstructionScript
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void AElectricCableIntersection_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ElectricCableIntersection.ElectricCableIntersection_C.UserConstructionScript");
		
		AElectricCableIntersection_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function ElectricCableIntersection.ElectricCableIntersection_C.ExecuteUbergraph_ElectricCableIntersection
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AElectricCableIntersection_C::ExecuteUbergraph_ElectricCableIntersection(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ElectricCableIntersection.ElectricCableIntersection_C.ExecuteUbergraph_ElectricCableIntersection");
		
		AElectricCableIntersection_C_ExecuteUbergraph_ElectricCableIntersection_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AElectricCableIntersection_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AElectricCableIntersection_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass ElectricCableIntersection.ElectricCableIntersection_C");
		return ptr;
	}

}


