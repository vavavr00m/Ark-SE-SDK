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
	 * 		Name   -> Function DinoTamedInventoryComponent_TekStrider.DinoTamedInventoryComponent_TekStrider_C.BPPreventEquipItem
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UPrimalItem*                                 theItem                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	bool UDinoTamedInventoryComponent_TekStrider_C::BPPreventEquipItem(class UPrimalItem* theItem)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DinoTamedInventoryComponent_TekStrider.DinoTamedInventoryComponent_TekStrider_C.BPPreventEquipItem");
		
		UDinoTamedInventoryComponent_TekStrider_C_BPPreventEquipItem_Params params {};
		params.theItem = theItem;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function DinoTamedInventoryComponent_TekStrider.DinoTamedInventoryComponent_TekStrider_C.ExecuteUbergraph_DinoTamedInventoryComponent_TekStrider
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UDinoTamedInventoryComponent_TekStrider_C::ExecuteUbergraph_DinoTamedInventoryComponent_TekStrider(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DinoTamedInventoryComponent_TekStrider.DinoTamedInventoryComponent_TekStrider_C.ExecuteUbergraph_DinoTamedInventoryComponent_TekStrider");
		
		UDinoTamedInventoryComponent_TekStrider_C_ExecuteUbergraph_DinoTamedInventoryComponent_TekStrider_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UDinoTamedInventoryComponent_TekStrider_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UDinoTamedInventoryComponent_TekStrider_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass DinoTamedInventoryComponent_TekStrider.DinoTamedInventoryComponent_TekStrider_C");
		return ptr;
	}

}


