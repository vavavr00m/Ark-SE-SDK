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
	 * 		Name   -> Function EngramEntry_TriCeiling_Adobe.EngramEntry_TriCeiling_Adobe_C.ExecuteUbergraph_EngramEntry_TriCeiling_Adobe
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UEngramEntry_TriCeiling_Adobe_C::ExecuteUbergraph_EngramEntry_TriCeiling_Adobe(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EngramEntry_TriCeiling_Adobe.EngramEntry_TriCeiling_Adobe_C.ExecuteUbergraph_EngramEntry_TriCeiling_Adobe");
		
		UEngramEntry_TriCeiling_Adobe_C_ExecuteUbergraph_EngramEntry_TriCeiling_Adobe_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UEngramEntry_TriCeiling_Adobe_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UEngramEntry_TriCeiling_Adobe_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass EngramEntry_TriCeiling_Adobe.EngramEntry_TriCeiling_Adobe_C");
		return ptr;
	}

}


