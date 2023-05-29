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
	 * 		Name   -> Function DinoSettings_Omnivore_Medium_MoschopsTaming_Item_02.DinoSettings_Omnivore_Medium_MoschopsTaming_Item_02_C.ExecuteUbergraph_DinoSettings_Omnivore_Medium_MoschopsTaming_Item_02
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UDinoSettings_Omnivore_Medium_MoschopsTaming_Item_02_C::ExecuteUbergraph_DinoSettings_Omnivore_Medium_MoschopsTaming_Item_02(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DinoSettings_Omnivore_Medium_MoschopsTaming_Item_02.DinoSettings_Omnivore_Medium_MoschopsTaming_Item_02_C.ExecuteUbergraph_DinoSettings_Omnivore_Medium_MoschopsTaming_Item_02");
		
		UDinoSettings_Omnivore_Medium_MoschopsTaming_Item_02_C_ExecuteUbergraph_DinoSettings_Omnivore_Medium_MoschopsTaming_Item_02_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UDinoSettings_Omnivore_Medium_MoschopsTaming_Item_02_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UDinoSettings_Omnivore_Medium_MoschopsTaming_Item_02_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass DinoSettings_Omnivore_Medium_MoschopsTaming_Item_02.DinoSettings_Omnivore_Medium_MoschopsTaming_Item_02_C");
		return ptr;
	}

}


