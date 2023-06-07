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
	 * 		Name   -> Function Salt_Sulfur_Stone_HarvestComponent.Salt_Sulfur_Stone_HarvestComponent_C.ExecuteUbergraph_Salt_Sulfur_Stone_HarvestComponent
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void USalt_Sulfur_Stone_HarvestComponent_C::ExecuteUbergraph_Salt_Sulfur_Stone_HarvestComponent(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Salt_Sulfur_Stone_HarvestComponent.Salt_Sulfur_Stone_HarvestComponent_C.ExecuteUbergraph_Salt_Sulfur_Stone_HarvestComponent");
		
		USalt_Sulfur_Stone_HarvestComponent_C_ExecuteUbergraph_Salt_Sulfur_Stone_HarvestComponent_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction USalt_Sulfur_Stone_HarvestComponent_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USalt_Sulfur_Stone_HarvestComponent_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass Salt_Sulfur_Stone_HarvestComponent.Salt_Sulfur_Stone_HarvestComponent_C");
		return ptr;
	}

}


