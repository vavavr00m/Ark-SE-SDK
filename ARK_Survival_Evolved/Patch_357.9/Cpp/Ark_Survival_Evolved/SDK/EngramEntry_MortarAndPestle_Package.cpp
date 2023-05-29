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
	 * 		Name   -> Function EngramEntry_MortarAndPestle.EngramEntry_MortarAndPestle_C.ExecuteUbergraph_EngramEntry_MortarAndPestle
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UEngramEntry_MortarAndPestle_C::ExecuteUbergraph_EngramEntry_MortarAndPestle(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EngramEntry_MortarAndPestle.EngramEntry_MortarAndPestle_C.ExecuteUbergraph_EngramEntry_MortarAndPestle");
		
		UEngramEntry_MortarAndPestle_C_ExecuteUbergraph_EngramEntry_MortarAndPestle_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UEngramEntry_MortarAndPestle_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UEngramEntry_MortarAndPestle_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass EngramEntry_MortarAndPestle.EngramEntry_MortarAndPestle_C");
		return ptr;
	}

}


