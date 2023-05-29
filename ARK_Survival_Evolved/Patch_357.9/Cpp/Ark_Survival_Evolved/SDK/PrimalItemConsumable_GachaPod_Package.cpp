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
	 * 		Name   -> Function PrimalItemConsumable_GachaPod.PrimalItemConsumable_GachaPod_C.BPOnItemConsumed
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UPrimalInventoryComponent*                   inventory                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		int32_t                                            remainingQuantity                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UPrimalItemConsumable_GachaPod_C::BPOnItemConsumed(class UPrimalInventoryComponent* inventory, int32_t remainingQuantity)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PrimalItemConsumable_GachaPod.PrimalItemConsumable_GachaPod_C.BPOnItemConsumed");
		
		UPrimalItemConsumable_GachaPod_C_BPOnItemConsumed_Params params {};
		params.inventory = inventory;
		params.remainingQuantity = remainingQuantity;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function PrimalItemConsumable_GachaPod.PrimalItemConsumable_GachaPod_C.RollLoot
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UPrimalInventoryComponent*                   Inv                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UPrimalItemConsumable_GachaPod_C::RollLoot(class UPrimalInventoryComponent* Inv)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PrimalItemConsumable_GachaPod.PrimalItemConsumable_GachaPod_C.RollLoot");
		
		UPrimalItemConsumable_GachaPod_C_RollLoot_Params params {};
		params.Inv = Inv;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function PrimalItemConsumable_GachaPod.PrimalItemConsumable_GachaPod_C.ShowHUDNotification
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UPrimalItem*                                 Item                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class UClass*                                      Resource                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		int32_t                                            Quanity                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class UPrimalInventoryComponent*                   Inv                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UPrimalItemConsumable_GachaPod_C::ShowHUDNotification(class UPrimalItem* Item, class UClass* Resource, int32_t Quanity, class UPrimalInventoryComponent* Inv)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PrimalItemConsumable_GachaPod.PrimalItemConsumable_GachaPod_C.ShowHUDNotification");
		
		UPrimalItemConsumable_GachaPod_C_ShowHUDNotification_Params params {};
		params.Item = Item;
		params.Resource = Resource;
		params.Quanity = Quanity;
		params.Inv = Inv;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function PrimalItemConsumable_GachaPod.PrimalItemConsumable_GachaPod_C.BPPostInitializeItem
	 * 		Flags  -> (Event, Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UWorld*                                      OptionalInitWorld                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UPrimalItemConsumable_GachaPod_C::BPPostInitializeItem(class UWorld* OptionalInitWorld)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PrimalItemConsumable_GachaPod.PrimalItemConsumable_GachaPod_C.BPPostInitializeItem");
		
		UPrimalItemConsumable_GachaPod_C_BPPostInitializeItem_Params params {};
		params.OptionalInitWorld = OptionalInitWorld;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function PrimalItemConsumable_GachaPod.PrimalItemConsumable_GachaPod_C.BlueprintUsed
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void UPrimalItemConsumable_GachaPod_C::BlueprintUsed()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PrimalItemConsumable_GachaPod.PrimalItemConsumable_GachaPod_C.BlueprintUsed");
		
		UPrimalItemConsumable_GachaPod_C_BlueprintUsed_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function PrimalItemConsumable_GachaPod.PrimalItemConsumable_GachaPod_C.ExecuteUbergraph_PrimalItemConsumable_GachaPod
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UPrimalItemConsumable_GachaPod_C::ExecuteUbergraph_PrimalItemConsumable_GachaPod(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PrimalItemConsumable_GachaPod.PrimalItemConsumable_GachaPod_C.ExecuteUbergraph_PrimalItemConsumable_GachaPod");
		
		UPrimalItemConsumable_GachaPod_C_ExecuteUbergraph_PrimalItemConsumable_GachaPod_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UPrimalItemConsumable_GachaPod_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UPrimalItemConsumable_GachaPod_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass PrimalItemConsumable_GachaPod.PrimalItemConsumable_GachaPod_C");
		return ptr;
	}

}


