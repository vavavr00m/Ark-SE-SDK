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
	 * 		Name   -> Function DinoTamedInventoryComponent_Tropeognathus.DinoTamedInventoryComponent_Tropeognathus_C.BPRemoteInventoryAllowViewing
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AShooterPlayerController*                    PC                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	bool UDinoTamedInventoryComponent_Tropeognathus_C::BPRemoteInventoryAllowViewing(class AShooterPlayerController* PC)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DinoTamedInventoryComponent_Tropeognathus.DinoTamedInventoryComponent_Tropeognathus_C.BPRemoteInventoryAllowViewing");
		
		UDinoTamedInventoryComponent_Tropeognathus_C_BPRemoteInventoryAllowViewing_Params params {};
		params.PC = PC;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function DinoTamedInventoryComponent_Tropeognathus.DinoTamedInventoryComponent_Tropeognathus_C.CanGrindItems
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AShooterPlayerController*                    PC                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	bool UDinoTamedInventoryComponent_Tropeognathus_C::CanGrindItems(class AShooterPlayerController* PC)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DinoTamedInventoryComponent_Tropeognathus.DinoTamedInventoryComponent_Tropeognathus_C.CanGrindItems");
		
		UDinoTamedInventoryComponent_Tropeognathus_C_CanGrindItems_Params params {};
		params.PC = PC;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function DinoTamedInventoryComponent_Tropeognathus.DinoTamedInventoryComponent_Tropeognathus_C.CanGrindItem
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UPrimalItem*                                 Item                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	bool UDinoTamedInventoryComponent_Tropeognathus_C::CanGrindItem(class UPrimalItem* Item)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DinoTamedInventoryComponent_Tropeognathus.DinoTamedInventoryComponent_Tropeognathus_C.CanGrindItem");
		
		UDinoTamedInventoryComponent_Tropeognathus_C_CanGrindItem_Params params {};
		params.Item = Item;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function DinoTamedInventoryComponent_Tropeognathus.DinoTamedInventoryComponent_Tropeognathus_C.ExecuteUbergraph_DinoTamedInventoryComponent_Tropeognathus
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UDinoTamedInventoryComponent_Tropeognathus_C::ExecuteUbergraph_DinoTamedInventoryComponent_Tropeognathus(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DinoTamedInventoryComponent_Tropeognathus.DinoTamedInventoryComponent_Tropeognathus_C.ExecuteUbergraph_DinoTamedInventoryComponent_Tropeognathus");
		
		UDinoTamedInventoryComponent_Tropeognathus_C_ExecuteUbergraph_DinoTamedInventoryComponent_Tropeognathus_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UDinoTamedInventoryComponent_Tropeognathus_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UDinoTamedInventoryComponent_Tropeognathus_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass DinoTamedInventoryComponent_Tropeognathus.DinoTamedInventoryComponent_Tropeognathus_C");
		return ptr;
	}

}


