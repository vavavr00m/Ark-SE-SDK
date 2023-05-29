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
	 * 		Name   -> Function WoodHarvestComponent_RareFlower.WoodHarvestComponent_RareFlower_C.ExecuteUbergraph_WoodHarvestComponent_RareFlower
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UWoodHarvestComponent_RareFlower_C::ExecuteUbergraph_WoodHarvestComponent_RareFlower(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WoodHarvestComponent_RareFlower.WoodHarvestComponent_RareFlower_C.ExecuteUbergraph_WoodHarvestComponent_RareFlower");
		
		UWoodHarvestComponent_RareFlower_C_ExecuteUbergraph_WoodHarvestComponent_RareFlower_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UWoodHarvestComponent_RareFlower_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UWoodHarvestComponent_RareFlower_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass WoodHarvestComponent_RareFlower.WoodHarvestComponent_RareFlower_C");
		return ptr;
	}

}


