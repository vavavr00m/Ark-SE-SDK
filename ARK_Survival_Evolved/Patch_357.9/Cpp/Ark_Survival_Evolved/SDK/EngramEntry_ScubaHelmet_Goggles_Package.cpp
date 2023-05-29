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
	 * 		Name   -> Function EngramEntry_ScubaHelmet_Goggles.EngramEntry_ScubaHelmet_Goggles_C.ExecuteUbergraph_EngramEntry_ScubaHelmet_Goggles
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UEngramEntry_ScubaHelmet_Goggles_C::ExecuteUbergraph_EngramEntry_ScubaHelmet_Goggles(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EngramEntry_ScubaHelmet_Goggles.EngramEntry_ScubaHelmet_Goggles_C.ExecuteUbergraph_EngramEntry_ScubaHelmet_Goggles");
		
		UEngramEntry_ScubaHelmet_Goggles_C_ExecuteUbergraph_EngramEntry_ScubaHelmet_Goggles_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UEngramEntry_ScubaHelmet_Goggles_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UEngramEntry_ScubaHelmet_Goggles_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass EngramEntry_ScubaHelmet_Goggles.EngramEntry_ScubaHelmet_Goggles_C");
		return ptr;
	}

}


