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
	 * 		Name   -> Function PrimalInventoryBP_BeeHive.PrimalInventoryBP_BeeHive_C.BPInventoryRefresh
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void UPrimalInventoryBP_BeeHive_C::BPInventoryRefresh()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PrimalInventoryBP_BeeHive.PrimalInventoryBP_BeeHive_C.BPInventoryRefresh");
		
		UPrimalInventoryBP_BeeHive_C_BPInventoryRefresh_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function PrimalInventoryBP_BeeHive.PrimalInventoryBP_BeeHive_C.TryToConsumeFlowers
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            NumToConsume                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		int32_t                                            NumFailedToConsume                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		int32_t                                            NumActuallyConsumed                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UPrimalInventoryBP_BeeHive_C::TryToConsumeFlowers(int32_t NumToConsume, int32_t* NumFailedToConsume, int32_t* NumActuallyConsumed)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PrimalInventoryBP_BeeHive.PrimalInventoryBP_BeeHive_C.TryToConsumeFlowers");
		
		UPrimalInventoryBP_BeeHive_C_TryToConsumeFlowers_Params params {};
		params.NumToConsume = NumToConsume;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (NumFailedToConsume != nullptr)
			*NumFailedToConsume = params.NumFailedToConsume;
		if (NumActuallyConsumed != nullptr)
			*NumActuallyConsumed = params.NumActuallyConsumed;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function PrimalInventoryBP_BeeHive.PrimalInventoryBP_BeeHive_C.BPAccessedInventory
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AShooterPlayerController*                    ForPC                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UPrimalInventoryBP_BeeHive_C::BPAccessedInventory(class AShooterPlayerController* ForPC)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PrimalInventoryBP_BeeHive.PrimalInventoryBP_BeeHive_C.BPAccessedInventory");
		
		UPrimalInventoryBP_BeeHive_C_BPAccessedInventory_Params params {};
		params.ForPC = ForPC;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function PrimalInventoryBP_BeeHive.PrimalInventoryBP_BeeHive_C.ExecuteUbergraph_PrimalInventoryBP_BeeHive
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UPrimalInventoryBP_BeeHive_C::ExecuteUbergraph_PrimalInventoryBP_BeeHive(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PrimalInventoryBP_BeeHive.PrimalInventoryBP_BeeHive_C.ExecuteUbergraph_PrimalInventoryBP_BeeHive");
		
		UPrimalInventoryBP_BeeHive_C_ExecuteUbergraph_PrimalInventoryBP_BeeHive_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UPrimalInventoryBP_BeeHive_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UPrimalInventoryBP_BeeHive_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass PrimalInventoryBP_BeeHive.PrimalInventoryBP_BeeHive_C");
		return ptr;
	}

}


