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
	 * 		Name   -> Function EngramEntry_ScubaBoots_Flippers.EngramEntry_ScubaBoots_Flippers_C.ExecuteUbergraph_EngramEntry_ScubaBoots_Flippers
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UEngramEntry_ScubaBoots_Flippers_C::ExecuteUbergraph_EngramEntry_ScubaBoots_Flippers(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EngramEntry_ScubaBoots_Flippers.EngramEntry_ScubaBoots_Flippers_C.ExecuteUbergraph_EngramEntry_ScubaBoots_Flippers");
		
		UEngramEntry_ScubaBoots_Flippers_C_ExecuteUbergraph_EngramEntry_ScubaBoots_Flippers_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UEngramEntry_ScubaBoots_Flippers_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UEngramEntry_ScubaBoots_Flippers_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass EngramEntry_ScubaBoots_Flippers.EngramEntry_ScubaBoots_Flippers_C");
		return ptr;
	}

}


