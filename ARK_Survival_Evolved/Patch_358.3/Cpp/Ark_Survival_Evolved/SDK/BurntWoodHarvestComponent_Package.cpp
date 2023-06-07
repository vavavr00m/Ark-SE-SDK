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
	 * 		Name   -> Function BurntWoodHarvestComponent.BurntWoodHarvestComponent_C.ExecuteUbergraph_BurntWoodHarvestComponent
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UBurntWoodHarvestComponent_C::ExecuteUbergraph_BurntWoodHarvestComponent(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BurntWoodHarvestComponent.BurntWoodHarvestComponent_C.ExecuteUbergraph_BurntWoodHarvestComponent");
		
		UBurntWoodHarvestComponent_C_ExecuteUbergraph_BurntWoodHarvestComponent_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBurntWoodHarvestComponent_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBurntWoodHarvestComponent_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BurntWoodHarvestComponent.BurntWoodHarvestComponent_C");
		return ptr;
	}

}


