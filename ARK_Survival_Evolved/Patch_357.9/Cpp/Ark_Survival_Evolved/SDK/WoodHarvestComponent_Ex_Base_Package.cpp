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
	 * 		Name   -> Function WoodHarvestComponent_Ex_Base.WoodHarvestComponent_Ex_Base_C.ExecuteUbergraph_WoodHarvestComponent_Ex_Base
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UWoodHarvestComponent_Ex_Base_C::ExecuteUbergraph_WoodHarvestComponent_Ex_Base(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WoodHarvestComponent_Ex_Base.WoodHarvestComponent_Ex_Base_C.ExecuteUbergraph_WoodHarvestComponent_Ex_Base");
		
		UWoodHarvestComponent_Ex_Base_C_ExecuteUbergraph_WoodHarvestComponent_Ex_Base_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UWoodHarvestComponent_Ex_Base_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UWoodHarvestComponent_Ex_Base_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass WoodHarvestComponent_Ex_Base.WoodHarvestComponent_Ex_Base_C");
		return ptr;
	}

}


