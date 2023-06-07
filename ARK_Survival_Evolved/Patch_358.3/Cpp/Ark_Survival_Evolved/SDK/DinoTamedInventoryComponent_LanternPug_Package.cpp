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
	 * 		Name   -> Function DinoTamedInventoryComponent_LanternPug.DinoTamedInventoryComponent_LanternPug_C.ExecuteUbergraph_DinoTamedInventoryComponent_LanternPug
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UDinoTamedInventoryComponent_LanternPug_C::ExecuteUbergraph_DinoTamedInventoryComponent_LanternPug(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DinoTamedInventoryComponent_LanternPug.DinoTamedInventoryComponent_LanternPug_C.ExecuteUbergraph_DinoTamedInventoryComponent_LanternPug");
		
		UDinoTamedInventoryComponent_LanternPug_C_ExecuteUbergraph_DinoTamedInventoryComponent_LanternPug_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UDinoTamedInventoryComponent_LanternPug_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UDinoTamedInventoryComponent_LanternPug_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass DinoTamedInventoryComponent_LanternPug.DinoTamedInventoryComponent_LanternPug_C");
		return ptr;
	}

}


