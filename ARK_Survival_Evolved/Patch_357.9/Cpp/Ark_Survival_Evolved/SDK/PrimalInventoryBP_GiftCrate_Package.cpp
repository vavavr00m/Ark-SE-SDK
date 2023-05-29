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
	 * 		Name   -> Function PrimalInventoryBP_GiftCrate.PrimalInventoryBP_GiftCrate_C.BPAccessedInventory
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AShooterPlayerController*                    ForPC                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UPrimalInventoryBP_GiftCrate_C::BPAccessedInventory(class AShooterPlayerController* ForPC)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PrimalInventoryBP_GiftCrate.PrimalInventoryBP_GiftCrate_C.BPAccessedInventory");
		
		UPrimalInventoryBP_GiftCrate_C_BPAccessedInventory_Params params {};
		params.ForPC = ForPC;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function PrimalInventoryBP_GiftCrate.PrimalInventoryBP_GiftCrate_C.ExecuteUbergraph_PrimalInventoryBP_GiftCrate
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UPrimalInventoryBP_GiftCrate_C::ExecuteUbergraph_PrimalInventoryBP_GiftCrate(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PrimalInventoryBP_GiftCrate.PrimalInventoryBP_GiftCrate_C.ExecuteUbergraph_PrimalInventoryBP_GiftCrate");
		
		UPrimalInventoryBP_GiftCrate_C_ExecuteUbergraph_PrimalInventoryBP_GiftCrate_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UPrimalInventoryBP_GiftCrate_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UPrimalInventoryBP_GiftCrate_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass PrimalInventoryBP_GiftCrate.PrimalInventoryBP_GiftCrate_C");
		return ptr;
	}

}


