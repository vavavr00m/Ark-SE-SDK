﻿/**
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
	 * 		Name   -> Function PrimalItemConsumable_Seed_PlantSpeciesR_PrimeMeat.PrimalItemConsumable_Seed_PlantSpeciesR_PrimeMeat_C.ExecuteUbergraph_PrimalItemConsumable_Seed_PlantSpeciesR_PrimeMeat
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UPrimalItemConsumable_Seed_PlantSpeciesR_PrimeMeat_C::ExecuteUbergraph_PrimalItemConsumable_Seed_PlantSpeciesR_PrimeMeat(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PrimalItemConsumable_Seed_PlantSpeciesR_PrimeMeat.PrimalItemConsumable_Seed_PlantSpeciesR_PrimeMeat_C.ExecuteUbergraph_PrimalItemConsumable_Seed_PlantSpeciesR_PrimeMeat");
		
		UPrimalItemConsumable_Seed_PlantSpeciesR_PrimeMeat_C_ExecuteUbergraph_PrimalItemConsumable_Seed_PlantSpeciesR_PrimeMeat_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UPrimalItemConsumable_Seed_PlantSpeciesR_PrimeMeat_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UPrimalItemConsumable_Seed_PlantSpeciesR_PrimeMeat_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass PrimalItemConsumable_Seed_PlantSpeciesR_PrimeMeat.PrimalItemConsumable_Seed_PlantSpeciesR_PrimeMeat_C");
		return ptr;
	}

}


