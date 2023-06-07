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
	 * 		Name   -> Function DinoTamedInventoryComponent_ForgeCapable_Cherufe.DinoTamedInventoryComponent_ForgeCapable_Cherufe_C.BPAllowUseInInventory
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UPrimalItem*                                 theItem                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               bIsRemoteInventory                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class AShooterPlayerController*                    ByPC                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	bool UDinoTamedInventoryComponent_ForgeCapable_Cherufe_C::BPAllowUseInInventory(class UPrimalItem* theItem, bool bIsRemoteInventory, class AShooterPlayerController* ByPC)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DinoTamedInventoryComponent_ForgeCapable_Cherufe.DinoTamedInventoryComponent_ForgeCapable_Cherufe_C.BPAllowUseInInventory");
		
		UDinoTamedInventoryComponent_ForgeCapable_Cherufe_C_BPAllowUseInInventory_Params params {};
		params.theItem = theItem;
		params.bIsRemoteInventory = bIsRemoteInventory;
		params.ByPC = ByPC;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function DinoTamedInventoryComponent_ForgeCapable_Cherufe.DinoTamedInventoryComponent_ForgeCapable_Cherufe_C.OverrideUseItem
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UPrimalItem*                                 theItem                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	bool UDinoTamedInventoryComponent_ForgeCapable_Cherufe_C::OverrideUseItem(class UPrimalItem* theItem)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DinoTamedInventoryComponent_ForgeCapable_Cherufe.DinoTamedInventoryComponent_ForgeCapable_Cherufe_C.OverrideUseItem");
		
		UDinoTamedInventoryComponent_ForgeCapable_Cherufe_C_OverrideUseItem_Params params {};
		params.theItem = theItem;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function DinoTamedInventoryComponent_ForgeCapable_Cherufe.DinoTamedInventoryComponent_ForgeCapable_Cherufe_C.ExecuteUbergraph_DinoTamedInventoryComponent_ForgeCapable_Cherufe
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UDinoTamedInventoryComponent_ForgeCapable_Cherufe_C::ExecuteUbergraph_DinoTamedInventoryComponent_ForgeCapable_Cherufe(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DinoTamedInventoryComponent_ForgeCapable_Cherufe.DinoTamedInventoryComponent_ForgeCapable_Cherufe_C.ExecuteUbergraph_DinoTamedInventoryComponent_ForgeCapable_Cherufe");
		
		UDinoTamedInventoryComponent_ForgeCapable_Cherufe_C_ExecuteUbergraph_DinoTamedInventoryComponent_ForgeCapable_Cherufe_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UDinoTamedInventoryComponent_ForgeCapable_Cherufe_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UDinoTamedInventoryComponent_ForgeCapable_Cherufe_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass DinoTamedInventoryComponent_ForgeCapable_Cherufe.DinoTamedInventoryComponent_ForgeCapable_Cherufe_C");
		return ptr;
	}

}


