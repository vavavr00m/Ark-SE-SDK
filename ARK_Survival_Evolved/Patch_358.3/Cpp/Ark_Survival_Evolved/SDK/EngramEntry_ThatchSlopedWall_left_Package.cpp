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
	 * 		Name   -> Function EngramEntry_ThatchSlopedWall_left.EngramEntry_ThatchSlopedWall_left_C.ExecuteUbergraph_EngramEntry_ThatchSlopedWall_left
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UEngramEntry_ThatchSlopedWall_left_C::ExecuteUbergraph_EngramEntry_ThatchSlopedWall_left(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EngramEntry_ThatchSlopedWall_left.EngramEntry_ThatchSlopedWall_left_C.ExecuteUbergraph_EngramEntry_ThatchSlopedWall_left");
		
		UEngramEntry_ThatchSlopedWall_left_C_ExecuteUbergraph_EngramEntry_ThatchSlopedWall_left_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UEngramEntry_ThatchSlopedWall_left_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UEngramEntry_ThatchSlopedWall_left_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass EngramEntry_ThatchSlopedWall_left.EngramEntry_ThatchSlopedWall_left_C");
		return ptr;
	}

}


