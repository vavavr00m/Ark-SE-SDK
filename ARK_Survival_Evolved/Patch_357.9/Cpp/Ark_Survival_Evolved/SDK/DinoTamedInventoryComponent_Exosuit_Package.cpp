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
	 * 		Name   -> Function DinoTamedInventoryComponent_Exosuit.DinoTamedInventoryComponent_Exosuit_C.BPPreInitDefaultInventory
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void UDinoTamedInventoryComponent_Exosuit_C::BPPreInitDefaultInventory()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DinoTamedInventoryComponent_Exosuit.DinoTamedInventoryComponent_Exosuit_C.BPPreInitDefaultInventory");
		
		UDinoTamedInventoryComponent_Exosuit_C_BPPreInitDefaultInventory_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function DinoTamedInventoryComponent_Exosuit.DinoTamedInventoryComponent_Exosuit_C.ExecuteUbergraph_DinoTamedInventoryComponent_Exosuit
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UDinoTamedInventoryComponent_Exosuit_C::ExecuteUbergraph_DinoTamedInventoryComponent_Exosuit(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DinoTamedInventoryComponent_Exosuit.DinoTamedInventoryComponent_Exosuit_C.ExecuteUbergraph_DinoTamedInventoryComponent_Exosuit");
		
		UDinoTamedInventoryComponent_Exosuit_C_ExecuteUbergraph_DinoTamedInventoryComponent_Exosuit_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UDinoTamedInventoryComponent_Exosuit_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UDinoTamedInventoryComponent_Exosuit_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass DinoTamedInventoryComponent_Exosuit.DinoTamedInventoryComponent_Exosuit_C");
		return ptr;
	}

}


