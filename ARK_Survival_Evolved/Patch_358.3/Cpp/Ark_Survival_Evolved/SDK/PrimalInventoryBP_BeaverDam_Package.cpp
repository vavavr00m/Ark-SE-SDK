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
	 * 		Name   -> Function PrimalInventoryBP_BeaverDam.PrimalInventoryBP_BeaverDam_C.BPRemoteInventoryAllowRemoveItems
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AShooterPlayerController*                    PC                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class UPrimalItem*                                 anItemToTransfer                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	bool UPrimalInventoryBP_BeaverDam_C::BPRemoteInventoryAllowRemoveItems(class AShooterPlayerController* PC, class UPrimalItem* anItemToTransfer)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PrimalInventoryBP_BeaverDam.PrimalInventoryBP_BeaverDam_C.BPRemoteInventoryAllowRemoveItems");
		
		UPrimalInventoryBP_BeaverDam_C_BPRemoteInventoryAllowRemoveItems_Params params {};
		params.PC = PC;
		params.anItemToTransfer = anItemToTransfer;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function PrimalInventoryBP_BeaverDam.PrimalInventoryBP_BeaverDam_C.BPAccessedInventory
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AShooterPlayerController*                    ForPC                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UPrimalInventoryBP_BeaverDam_C::BPAccessedInventory(class AShooterPlayerController* ForPC)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PrimalInventoryBP_BeaverDam.PrimalInventoryBP_BeaverDam_C.BPAccessedInventory");
		
		UPrimalInventoryBP_BeaverDam_C_BPAccessedInventory_Params params {};
		params.ForPC = ForPC;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function PrimalInventoryBP_BeaverDam.PrimalInventoryBP_BeaverDam_C.ExecuteUbergraph_PrimalInventoryBP_BeaverDam
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UPrimalInventoryBP_BeaverDam_C::ExecuteUbergraph_PrimalInventoryBP_BeaverDam(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PrimalInventoryBP_BeaverDam.PrimalInventoryBP_BeaverDam_C.ExecuteUbergraph_PrimalInventoryBP_BeaverDam");
		
		UPrimalInventoryBP_BeaverDam_C_ExecuteUbergraph_PrimalInventoryBP_BeaverDam_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UPrimalInventoryBP_BeaverDam_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UPrimalInventoryBP_BeaverDam_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass PrimalInventoryBP_BeaverDam.PrimalInventoryBP_BeaverDam_C");
		return ptr;
	}

}


