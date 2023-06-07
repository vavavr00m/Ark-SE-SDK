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
	 * 		Name   -> Function VH_Buggy_WheelBack.VH_Buggy_WheelBack_C.ExecuteUbergraph_VH_Buggy_WheelBack
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UVH_Buggy_WheelBack_C::ExecuteUbergraph_VH_Buggy_WheelBack(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function VH_Buggy_WheelBack.VH_Buggy_WheelBack_C.ExecuteUbergraph_VH_Buggy_WheelBack");
		
		UVH_Buggy_WheelBack_C_ExecuteUbergraph_VH_Buggy_WheelBack_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UVH_Buggy_WheelBack_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UVH_Buggy_WheelBack_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass VH_Buggy_WheelBack.VH_Buggy_WheelBack_C");
		return ptr;
	}

}


