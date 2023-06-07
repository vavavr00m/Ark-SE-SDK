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
	 * 		Name   -> Function BASE_ExtraResourcesContainer.BASE_ExtraResourcesContainer_C.ExecuteUbergraph_BASE_ExtraResourcesContainer
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UBASE_ExtraResourcesContainer_C::ExecuteUbergraph_BASE_ExtraResourcesContainer(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BASE_ExtraResourcesContainer.BASE_ExtraResourcesContainer_C.ExecuteUbergraph_BASE_ExtraResourcesContainer");
		
		UBASE_ExtraResourcesContainer_C_ExecuteUbergraph_BASE_ExtraResourcesContainer_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBASE_ExtraResourcesContainer_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBASE_ExtraResourcesContainer_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BASE_ExtraResourcesContainer.BASE_ExtraResourcesContainer_C");
		return ptr;
	}

}


