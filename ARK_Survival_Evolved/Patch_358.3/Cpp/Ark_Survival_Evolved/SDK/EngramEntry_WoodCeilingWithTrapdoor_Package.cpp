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
	 * 		Name   -> Function EngramEntry_WoodCeilingWithTrapdoor.EngramEntry_WoodCeilingWithTrapdoor_C.ExecuteUbergraph_EngramEntry_WoodCeilingWithTrapdoor
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UEngramEntry_WoodCeilingWithTrapdoor_C::ExecuteUbergraph_EngramEntry_WoodCeilingWithTrapdoor(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EngramEntry_WoodCeilingWithTrapdoor.EngramEntry_WoodCeilingWithTrapdoor_C.ExecuteUbergraph_EngramEntry_WoodCeilingWithTrapdoor");
		
		UEngramEntry_WoodCeilingWithTrapdoor_C_ExecuteUbergraph_EngramEntry_WoodCeilingWithTrapdoor_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UEngramEntry_WoodCeilingWithTrapdoor_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UEngramEntry_WoodCeilingWithTrapdoor_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass EngramEntry_WoodCeilingWithTrapdoor.EngramEntry_WoodCeilingWithTrapdoor_C");
		return ptr;
	}

}


