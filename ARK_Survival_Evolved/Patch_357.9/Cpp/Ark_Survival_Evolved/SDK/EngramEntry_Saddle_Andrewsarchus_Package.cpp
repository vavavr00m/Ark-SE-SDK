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
	 * 		Name   -> Function EngramEntry_Saddle_Andrewsarchus.EngramEntry_Saddle_Andrewsarchus_C.ExecuteUbergraph_EngramEntry_Saddle_Andrewsarchus
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UEngramEntry_Saddle_Andrewsarchus_C::ExecuteUbergraph_EngramEntry_Saddle_Andrewsarchus(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EngramEntry_Saddle_Andrewsarchus.EngramEntry_Saddle_Andrewsarchus_C.ExecuteUbergraph_EngramEntry_Saddle_Andrewsarchus");
		
		UEngramEntry_Saddle_Andrewsarchus_C_ExecuteUbergraph_EngramEntry_Saddle_Andrewsarchus_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UEngramEntry_Saddle_Andrewsarchus_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UEngramEntry_Saddle_Andrewsarchus_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass EngramEntry_Saddle_Andrewsarchus.EngramEntry_Saddle_Andrewsarchus_C");
		return ptr;
	}

}


