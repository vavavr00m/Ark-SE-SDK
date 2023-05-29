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
	 * 		Name   -> Function DinoTamedInventoryComponent_Jugbug_Oil.DinoTamedInventoryComponent_Jugbug_Oil_C.BPInventoryRefresh
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void UDinoTamedInventoryComponent_Jugbug_Oil_C::BPInventoryRefresh()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DinoTamedInventoryComponent_Jugbug_Oil.DinoTamedInventoryComponent_Jugbug_Oil_C.BPInventoryRefresh");
		
		UDinoTamedInventoryComponent_Jugbug_Oil_C_BPInventoryRefresh_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function DinoTamedInventoryComponent_Jugbug_Oil.DinoTamedInventoryComponent_Jugbug_Oil_C.ExecuteUbergraph_DinoTamedInventoryComponent_Jugbug_Oil
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UDinoTamedInventoryComponent_Jugbug_Oil_C::ExecuteUbergraph_DinoTamedInventoryComponent_Jugbug_Oil(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DinoTamedInventoryComponent_Jugbug_Oil.DinoTamedInventoryComponent_Jugbug_Oil_C.ExecuteUbergraph_DinoTamedInventoryComponent_Jugbug_Oil");
		
		UDinoTamedInventoryComponent_Jugbug_Oil_C_ExecuteUbergraph_DinoTamedInventoryComponent_Jugbug_Oil_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UDinoTamedInventoryComponent_Jugbug_Oil_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UDinoTamedInventoryComponent_Jugbug_Oil_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass DinoTamedInventoryComponent_Jugbug_Oil.DinoTamedInventoryComponent_Jugbug_Oil_C");
		return ptr;
	}

}


