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
	 * 		Name   -> Function PrimalItemArmor_ParacerSaddle_Platform.PrimalItemArmor_ParacerSaddle_Platform_C.ExecuteUbergraph_PrimalItemArmor_ParacerSaddle_Platform
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UPrimalItemArmor_ParacerSaddle_Platform_C::ExecuteUbergraph_PrimalItemArmor_ParacerSaddle_Platform(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PrimalItemArmor_ParacerSaddle_Platform.PrimalItemArmor_ParacerSaddle_Platform_C.ExecuteUbergraph_PrimalItemArmor_ParacerSaddle_Platform");
		
		UPrimalItemArmor_ParacerSaddle_Platform_C_ExecuteUbergraph_PrimalItemArmor_ParacerSaddle_Platform_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UPrimalItemArmor_ParacerSaddle_Platform_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UPrimalItemArmor_ParacerSaddle_Platform_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass PrimalItemArmor_ParacerSaddle_Platform.PrimalItemArmor_ParacerSaddle_Platform_C");
		return ptr;
	}

}

