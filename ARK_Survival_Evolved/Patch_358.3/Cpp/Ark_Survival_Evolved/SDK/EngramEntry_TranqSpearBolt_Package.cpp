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
	 * 		Name   -> Function EngramEntry_TranqSpearBolt.EngramEntry_TranqSpearBolt_C.ExecuteUbergraph_EngramEntry_TranqSpearBolt
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UEngramEntry_TranqSpearBolt_C::ExecuteUbergraph_EngramEntry_TranqSpearBolt(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EngramEntry_TranqSpearBolt.EngramEntry_TranqSpearBolt_C.ExecuteUbergraph_EngramEntry_TranqSpearBolt");
		
		UEngramEntry_TranqSpearBolt_C_ExecuteUbergraph_EngramEntry_TranqSpearBolt_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UEngramEntry_TranqSpearBolt_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UEngramEntry_TranqSpearBolt_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass EngramEntry_TranqSpearBolt.EngramEntry_TranqSpearBolt_C");
		return ptr;
	}

}


