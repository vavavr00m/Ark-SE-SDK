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
	 * 		Name   -> Function DinoDropInventoryComponent_Carnivore_Deathworm.DinoDropInventoryComponent_Carnivore_Deathworm_C.BPAllowUseInInventory
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UPrimalItem*                                 theItem                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               bIsRemoteInventory                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class AShooterPlayerController*                    ByPC                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	bool UDinoDropInventoryComponent_Carnivore_Deathworm_C::BPAllowUseInInventory(class UPrimalItem* theItem, bool bIsRemoteInventory, class AShooterPlayerController* ByPC)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DinoDropInventoryComponent_Carnivore_Deathworm.DinoDropInventoryComponent_Carnivore_Deathworm_C.BPAllowUseInInventory");
		
		UDinoDropInventoryComponent_Carnivore_Deathworm_C_BPAllowUseInInventory_Params params {};
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
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function DinoDropInventoryComponent_Carnivore_Deathworm.DinoDropInventoryComponent_Carnivore_Deathworm_C.BPRemoteInventoryAllowRemoveItems
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AShooterPlayerController*                    PC                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class UPrimalItem*                                 anItemToTransfer                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	bool UDinoDropInventoryComponent_Carnivore_Deathworm_C::BPRemoteInventoryAllowRemoveItems(class AShooterPlayerController* PC, class UPrimalItem* anItemToTransfer)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DinoDropInventoryComponent_Carnivore_Deathworm.DinoDropInventoryComponent_Carnivore_Deathworm_C.BPRemoteInventoryAllowRemoveItems");
		
		UDinoDropInventoryComponent_Carnivore_Deathworm_C_BPRemoteInventoryAllowRemoveItems_Params params {};
		params.PC = PC;
		params.anItemToTransfer = anItemToTransfer;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function DinoDropInventoryComponent_Carnivore_Deathworm.DinoDropInventoryComponent_Carnivore_Deathworm_C.ExecuteUbergraph_DinoDropInventoryComponent_Carnivore_Deathworm
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UDinoDropInventoryComponent_Carnivore_Deathworm_C::ExecuteUbergraph_DinoDropInventoryComponent_Carnivore_Deathworm(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DinoDropInventoryComponent_Carnivore_Deathworm.DinoDropInventoryComponent_Carnivore_Deathworm_C.ExecuteUbergraph_DinoDropInventoryComponent_Carnivore_Deathworm");
		
		UDinoDropInventoryComponent_Carnivore_Deathworm_C_ExecuteUbergraph_DinoDropInventoryComponent_Carnivore_Deathworm_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UDinoDropInventoryComponent_Carnivore_Deathworm_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UDinoDropInventoryComponent_Carnivore_Deathworm_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass DinoDropInventoryComponent_Carnivore_Deathworm.DinoDropInventoryComponent_Carnivore_Deathworm_C");
		return ptr;
	}

}


