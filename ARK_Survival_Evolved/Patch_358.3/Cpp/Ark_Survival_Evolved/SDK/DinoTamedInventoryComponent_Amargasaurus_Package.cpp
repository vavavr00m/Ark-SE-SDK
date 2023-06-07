/**
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
	 * 		Name   -> Function DinoTamedInventoryComponent_Amargasaurus.DinoTamedInventoryComponent_Amargasaurus_C.ExecuteUbergraph_DinoTamedInventoryComponent_Amargasaurus
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UDinoTamedInventoryComponent_Amargasaurus_C::ExecuteUbergraph_DinoTamedInventoryComponent_Amargasaurus(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DinoTamedInventoryComponent_Amargasaurus.DinoTamedInventoryComponent_Amargasaurus_C.ExecuteUbergraph_DinoTamedInventoryComponent_Amargasaurus");
		
		UDinoTamedInventoryComponent_Amargasaurus_C_ExecuteUbergraph_DinoTamedInventoryComponent_Amargasaurus_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UDinoTamedInventoryComponent_Amargasaurus_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UDinoTamedInventoryComponent_Amargasaurus_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass DinoTamedInventoryComponent_Amargasaurus.DinoTamedInventoryComponent_Amargasaurus_C");
		return ptr;
	}

}


