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
	 * 		Name   -> Function EngramEntry_MagnifyingGlass.EngramEntry_MagnifyingGlass_C.ExecuteUbergraph_EngramEntry_MagnifyingGlass
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UEngramEntry_MagnifyingGlass_C::ExecuteUbergraph_EngramEntry_MagnifyingGlass(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EngramEntry_MagnifyingGlass.EngramEntry_MagnifyingGlass_C.ExecuteUbergraph_EngramEntry_MagnifyingGlass");
		
		UEngramEntry_MagnifyingGlass_C_ExecuteUbergraph_EngramEntry_MagnifyingGlass_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UEngramEntry_MagnifyingGlass_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UEngramEntry_MagnifyingGlass_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass EngramEntry_MagnifyingGlass.EngramEntry_MagnifyingGlass_C");
		return ptr;
	}

}


