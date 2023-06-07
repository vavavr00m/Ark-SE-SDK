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
	 * 		Name   -> Function EngramEntry_Tek_Gategrame.EngramEntry_Tek_Gategrame_C.ExecuteUbergraph_EngramEntry_Tek_Gategrame
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UEngramEntry_Tek_Gategrame_C::ExecuteUbergraph_EngramEntry_Tek_Gategrame(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EngramEntry_Tek_Gategrame.EngramEntry_Tek_Gategrame_C.ExecuteUbergraph_EngramEntry_Tek_Gategrame");
		
		UEngramEntry_Tek_Gategrame_C_ExecuteUbergraph_EngramEntry_Tek_Gategrame_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UEngramEntry_Tek_Gategrame_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UEngramEntry_Tek_Gategrame_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass EngramEntry_Tek_Gategrame.EngramEntry_Tek_Gategrame_C");
		return ptr;
	}

}


