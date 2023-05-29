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
	 * 		Name   -> Function PlayerActionRadialSelectorBP.PlayerActionRadialSelectorBP_C.ExecuteUbergraph_PlayerActionRadialSelectorBP
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UPlayerActionRadialSelectorBP_C::ExecuteUbergraph_PlayerActionRadialSelectorBP(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PlayerActionRadialSelectorBP.PlayerActionRadialSelectorBP_C.ExecuteUbergraph_PlayerActionRadialSelectorBP");
		
		UPlayerActionRadialSelectorBP_C_ExecuteUbergraph_PlayerActionRadialSelectorBP_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UPlayerActionRadialSelectorBP_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UPlayerActionRadialSelectorBP_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass PlayerActionRadialSelectorBP.PlayerActionRadialSelectorBP_C");
		return ptr;
	}

}


