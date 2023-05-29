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
	 * 		Name   -> Function EngramEntry_TekTapejaraSaddle.EngramEntry_TekTapejaraSaddle_C.ExecuteUbergraph_EngramEntry_TekTapejaraSaddle
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UEngramEntry_TekTapejaraSaddle_C::ExecuteUbergraph_EngramEntry_TekTapejaraSaddle(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EngramEntry_TekTapejaraSaddle.EngramEntry_TekTapejaraSaddle_C.ExecuteUbergraph_EngramEntry_TekTapejaraSaddle");
		
		UEngramEntry_TekTapejaraSaddle_C_ExecuteUbergraph_EngramEntry_TekTapejaraSaddle_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UEngramEntry_TekTapejaraSaddle_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UEngramEntry_TekTapejaraSaddle_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass EngramEntry_TekTapejaraSaddle.EngramEntry_TekTapejaraSaddle_C");
		return ptr;
	}

}


