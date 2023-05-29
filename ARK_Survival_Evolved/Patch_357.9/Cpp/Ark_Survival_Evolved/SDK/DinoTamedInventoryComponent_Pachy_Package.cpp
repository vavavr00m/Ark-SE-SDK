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
	 * 		Name   -> Function DinoTamedInventoryComponent_Pachy.DinoTamedInventoryComponent_Pachy_C.ExecuteUbergraph_DinoTamedInventoryComponent_Pachy
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UDinoTamedInventoryComponent_Pachy_C::ExecuteUbergraph_DinoTamedInventoryComponent_Pachy(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DinoTamedInventoryComponent_Pachy.DinoTamedInventoryComponent_Pachy_C.ExecuteUbergraph_DinoTamedInventoryComponent_Pachy");
		
		UDinoTamedInventoryComponent_Pachy_C_ExecuteUbergraph_DinoTamedInventoryComponent_Pachy_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UDinoTamedInventoryComponent_Pachy_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UDinoTamedInventoryComponent_Pachy_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass DinoTamedInventoryComponent_Pachy.DinoTamedInventoryComponent_Pachy_C");
		return ptr;
	}

}


