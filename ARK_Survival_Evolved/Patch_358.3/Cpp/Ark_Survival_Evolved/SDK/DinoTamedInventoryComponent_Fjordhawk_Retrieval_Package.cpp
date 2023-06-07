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
	 * 		Name   -> Function DinoTamedInventoryComponent_Fjordhawk_Retrieval.DinoTamedInventoryComponent_Fjordhawk_Retrieval_C.BPAllowAddInventoryItem
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UPrimalItem*                                 Item                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		int32_t                                            RequestedQuantity                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               bOnlyAddAll                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	bool UDinoTamedInventoryComponent_Fjordhawk_Retrieval_C::BPAllowAddInventoryItem(class UPrimalItem* Item, int32_t RequestedQuantity, bool bOnlyAddAll)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DinoTamedInventoryComponent_Fjordhawk_Retrieval.DinoTamedInventoryComponent_Fjordhawk_Retrieval_C.BPAllowAddInventoryItem");
		
		UDinoTamedInventoryComponent_Fjordhawk_Retrieval_C_BPAllowAddInventoryItem_Params params {};
		params.Item = Item;
		params.RequestedQuantity = RequestedQuantity;
		params.bOnlyAddAll = bOnlyAddAll;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function DinoTamedInventoryComponent_Fjordhawk_Retrieval.DinoTamedInventoryComponent_Fjordhawk_Retrieval_C.ExecuteUbergraph_DinoTamedInventoryComponent_Fjordhawk_Retrieval
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UDinoTamedInventoryComponent_Fjordhawk_Retrieval_C::ExecuteUbergraph_DinoTamedInventoryComponent_Fjordhawk_Retrieval(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DinoTamedInventoryComponent_Fjordhawk_Retrieval.DinoTamedInventoryComponent_Fjordhawk_Retrieval_C.ExecuteUbergraph_DinoTamedInventoryComponent_Fjordhawk_Retrieval");
		
		UDinoTamedInventoryComponent_Fjordhawk_Retrieval_C_ExecuteUbergraph_DinoTamedInventoryComponent_Fjordhawk_Retrieval_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UDinoTamedInventoryComponent_Fjordhawk_Retrieval_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UDinoTamedInventoryComponent_Fjordhawk_Retrieval_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass DinoTamedInventoryComponent_Fjordhawk_Retrieval.DinoTamedInventoryComponent_Fjordhawk_Retrieval_C");
		return ptr;
	}

}


