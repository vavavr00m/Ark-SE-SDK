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
	 * 		Name   -> Function InventoryRadialSelectorBP.InventoryRadialSelectorBP_C.ExecuteUbergraph_InventoryRadialSelectorBP
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UInventoryRadialSelectorBP_C::ExecuteUbergraph_InventoryRadialSelectorBP(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function InventoryRadialSelectorBP.InventoryRadialSelectorBP_C.ExecuteUbergraph_InventoryRadialSelectorBP");
		
		UInventoryRadialSelectorBP_C_ExecuteUbergraph_InventoryRadialSelectorBP_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UInventoryRadialSelectorBP_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UInventoryRadialSelectorBP_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass InventoryRadialSelectorBP.InventoryRadialSelectorBP_C");
		return ptr;
	}

}


