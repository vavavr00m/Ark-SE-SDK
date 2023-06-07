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
	 * 		Name   -> Function PrimalItemConsumableEatable_RhynioPheromone.PrimalItemConsumableEatable_RhynioPheromone_C.BPCanUse
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               bIgnoreCooldown                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	bool UPrimalItemConsumableEatable_RhynioPheromone_C::BPCanUse(bool bIgnoreCooldown)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PrimalItemConsumableEatable_RhynioPheromone.PrimalItemConsumableEatable_RhynioPheromone_C.BPCanUse");
		
		UPrimalItemConsumableEatable_RhynioPheromone_C_BPCanUse_Params params {};
		params.bIgnoreCooldown = bIgnoreCooldown;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function PrimalItemConsumableEatable_RhynioPheromone.PrimalItemConsumableEatable_RhynioPheromone_C.BlueprintUsed
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void UPrimalItemConsumableEatable_RhynioPheromone_C::BlueprintUsed()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PrimalItemConsumableEatable_RhynioPheromone.PrimalItemConsumableEatable_RhynioPheromone_C.BlueprintUsed");
		
		UPrimalItemConsumableEatable_RhynioPheromone_C_BlueprintUsed_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function PrimalItemConsumableEatable_RhynioPheromone.PrimalItemConsumableEatable_RhynioPheromone_C.ExecuteUbergraph_PrimalItemConsumableEatable_RhynioPheromone
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UPrimalItemConsumableEatable_RhynioPheromone_C::ExecuteUbergraph_PrimalItemConsumableEatable_RhynioPheromone(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PrimalItemConsumableEatable_RhynioPheromone.PrimalItemConsumableEatable_RhynioPheromone_C.ExecuteUbergraph_PrimalItemConsumableEatable_RhynioPheromone");
		
		UPrimalItemConsumableEatable_RhynioPheromone_C_ExecuteUbergraph_PrimalItemConsumableEatable_RhynioPheromone_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UPrimalItemConsumableEatable_RhynioPheromone_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UPrimalItemConsumableEatable_RhynioPheromone_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass PrimalItemConsumableEatable_RhynioPheromone.PrimalItemConsumableEatable_RhynioPheromone_C");
		return ptr;
	}

}


