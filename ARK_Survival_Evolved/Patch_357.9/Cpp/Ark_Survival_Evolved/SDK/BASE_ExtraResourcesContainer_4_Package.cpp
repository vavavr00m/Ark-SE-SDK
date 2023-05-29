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
	 * 		Name   -> Function BASE_ExtraResourcesContainer_4.BASE_ExtraResourcesContainer_3_C.ExecuteUbergraph_BASE_ExtraResourcesContainer_4
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UBASE_ExtraResourcesContainer_3_C::ExecuteUbergraph_BASE_ExtraResourcesContainer_4(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BASE_ExtraResourcesContainer_4.BASE_ExtraResourcesContainer_3_C.ExecuteUbergraph_BASE_ExtraResourcesContainer_4");
		
		UBASE_ExtraResourcesContainer_3_C_ExecuteUbergraph_BASE_ExtraResourcesContainer_4_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBASE_ExtraResourcesContainer_3_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBASE_ExtraResourcesContainer_3_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BASE_ExtraResourcesContainer_4.BASE_ExtraResourcesContainer_3_C");
		return ptr;
	}

}


