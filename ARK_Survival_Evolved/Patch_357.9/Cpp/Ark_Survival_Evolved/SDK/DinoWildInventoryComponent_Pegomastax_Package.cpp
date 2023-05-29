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
	 * 		Name   -> Function DinoWildInventoryComponent_Pegomastax.DinoWildInventoryComponent_Pegomastax_C.ExecuteUbergraph_DinoWildInventoryComponent_Pegomastax
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UDinoWildInventoryComponent_Pegomastax_C::ExecuteUbergraph_DinoWildInventoryComponent_Pegomastax(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DinoWildInventoryComponent_Pegomastax.DinoWildInventoryComponent_Pegomastax_C.ExecuteUbergraph_DinoWildInventoryComponent_Pegomastax");
		
		UDinoWildInventoryComponent_Pegomastax_C_ExecuteUbergraph_DinoWildInventoryComponent_Pegomastax_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UDinoWildInventoryComponent_Pegomastax_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UDinoWildInventoryComponent_Pegomastax_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass DinoWildInventoryComponent_Pegomastax.DinoWildInventoryComponent_Pegomastax_C");
		return ptr;
	}

}


