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
	 * 		Name   -> Function SE_DinoColorSet_Jerboa.SE_DinoColorSet_Jerboa_C.ExecuteUbergraph_SE_DinoColorSet_Jerboa
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void USE_DinoColorSet_Jerboa_C::ExecuteUbergraph_SE_DinoColorSet_Jerboa(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SE_DinoColorSet_Jerboa.SE_DinoColorSet_Jerboa_C.ExecuteUbergraph_SE_DinoColorSet_Jerboa");
		
		USE_DinoColorSet_Jerboa_C_ExecuteUbergraph_SE_DinoColorSet_Jerboa_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction USE_DinoColorSet_Jerboa_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USE_DinoColorSet_Jerboa_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass SE_DinoColorSet_Jerboa.SE_DinoColorSet_Jerboa_C");
		return ptr;
	}

}


