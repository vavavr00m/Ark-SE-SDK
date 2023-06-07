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
	 * 		Name   -> Function MultiUseRadialSelectorBP.MultiUseRadialSelectorBP_C.ExecuteUbergraph_MultiUseRadialSelectorBP
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UMultiUseRadialSelectorBP_C::ExecuteUbergraph_MultiUseRadialSelectorBP(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MultiUseRadialSelectorBP.MultiUseRadialSelectorBP_C.ExecuteUbergraph_MultiUseRadialSelectorBP");
		
		UMultiUseRadialSelectorBP_C_ExecuteUbergraph_MultiUseRadialSelectorBP_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UMultiUseRadialSelectorBP_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UMultiUseRadialSelectorBP_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass MultiUseRadialSelectorBP.MultiUseRadialSelectorBP_C");
		return ptr;
	}

}


