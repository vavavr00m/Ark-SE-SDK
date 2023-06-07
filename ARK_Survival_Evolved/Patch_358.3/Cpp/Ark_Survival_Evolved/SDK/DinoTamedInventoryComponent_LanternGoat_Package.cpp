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
	 * 		Name   -> Function DinoTamedInventoryComponent_LanternGoat.DinoTamedInventoryComponent_LanternGoat_C.ExecuteUbergraph_DinoTamedInventoryComponent_LanternGoat
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UDinoTamedInventoryComponent_LanternGoat_C::ExecuteUbergraph_DinoTamedInventoryComponent_LanternGoat(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DinoTamedInventoryComponent_LanternGoat.DinoTamedInventoryComponent_LanternGoat_C.ExecuteUbergraph_DinoTamedInventoryComponent_LanternGoat");
		
		UDinoTamedInventoryComponent_LanternGoat_C_ExecuteUbergraph_DinoTamedInventoryComponent_LanternGoat_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UDinoTamedInventoryComponent_LanternGoat_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UDinoTamedInventoryComponent_LanternGoat_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass DinoTamedInventoryComponent_LanternGoat.DinoTamedInventoryComponent_LanternGoat_C");
		return ptr;
	}

}


