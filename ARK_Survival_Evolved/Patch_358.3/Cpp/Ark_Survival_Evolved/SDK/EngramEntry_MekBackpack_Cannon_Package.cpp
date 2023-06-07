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
	 * 		Name   -> Function EngramEntry_MekBackpack_Cannon.EngramEntry_MekBackpack_Cannon_C.ExecuteUbergraph_EngramEntry_MekBackpack_Cannon
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UEngramEntry_MekBackpack_Cannon_C::ExecuteUbergraph_EngramEntry_MekBackpack_Cannon(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EngramEntry_MekBackpack_Cannon.EngramEntry_MekBackpack_Cannon_C.ExecuteUbergraph_EngramEntry_MekBackpack_Cannon");
		
		UEngramEntry_MekBackpack_Cannon_C_ExecuteUbergraph_EngramEntry_MekBackpack_Cannon_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UEngramEntry_MekBackpack_Cannon_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UEngramEntry_MekBackpack_Cannon_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass EngramEntry_MekBackpack_Cannon.EngramEntry_MekBackpack_Cannon_C");
		return ptr;
	}

}


