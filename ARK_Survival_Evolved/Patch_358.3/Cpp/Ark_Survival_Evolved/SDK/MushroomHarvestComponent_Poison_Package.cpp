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
	 * 		Name   -> Function MushroomHarvestComponent_Poison.MushroomHarvestComponent_Poison_C.ExecuteUbergraph_MushroomHarvestComponent_Poison
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UMushroomHarvestComponent_Poison_C::ExecuteUbergraph_MushroomHarvestComponent_Poison(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MushroomHarvestComponent_Poison.MushroomHarvestComponent_Poison_C.ExecuteUbergraph_MushroomHarvestComponent_Poison");
		
		UMushroomHarvestComponent_Poison_C_ExecuteUbergraph_MushroomHarvestComponent_Poison_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UMushroomHarvestComponent_Poison_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UMushroomHarvestComponent_Poison_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass MushroomHarvestComponent_Poison.MushroomHarvestComponent_Poison_C");
		return ptr;
	}

}


