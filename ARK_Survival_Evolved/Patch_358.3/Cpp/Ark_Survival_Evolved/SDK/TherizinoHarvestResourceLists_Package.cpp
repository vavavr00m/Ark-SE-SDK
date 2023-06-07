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
	 * 		Name   -> Function TherizinoHarvestResourceLists.TherizinoHarvestResourceLists_C.ExecuteUbergraph_TherizinoHarvestResourceLists
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UTherizinoHarvestResourceLists_C::ExecuteUbergraph_TherizinoHarvestResourceLists(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TherizinoHarvestResourceLists.TherizinoHarvestResourceLists_C.ExecuteUbergraph_TherizinoHarvestResourceLists");
		
		UTherizinoHarvestResourceLists_C_ExecuteUbergraph_TherizinoHarvestResourceLists_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UTherizinoHarvestResourceLists_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UTherizinoHarvestResourceLists_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass TherizinoHarvestResourceLists.TherizinoHarvestResourceLists_C");
		return ptr;
	}

}


