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
	 * 		Name   -> Function Stego_New_ChibiAnimBP.Stego_New_ChibiAnimBP_C.ExecuteUbergraph_Stego_New_ChibiAnimBP
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UStego_New_ChibiAnimBP_C::ExecuteUbergraph_Stego_New_ChibiAnimBP(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Stego_New_ChibiAnimBP.Stego_New_ChibiAnimBP_C.ExecuteUbergraph_Stego_New_ChibiAnimBP");
		
		UStego_New_ChibiAnimBP_C_ExecuteUbergraph_Stego_New_ChibiAnimBP_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UStego_New_ChibiAnimBP_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UStego_New_ChibiAnimBP_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("AnimBlueprintGeneratedClass Stego_New_ChibiAnimBP.Stego_New_ChibiAnimBP_C");
		return ptr;
	}

}


