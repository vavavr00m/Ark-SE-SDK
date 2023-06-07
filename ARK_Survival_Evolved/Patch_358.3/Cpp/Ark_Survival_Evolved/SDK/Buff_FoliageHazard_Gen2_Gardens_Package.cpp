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
	 * 		Name   -> Function Buff_FoliageHazard_Gen2_Gardens.Buff_FoliageHazard_Gen2_Gardens_C.UserConstructionScript
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABuff_FoliageHazard_Gen2_Gardens_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_FoliageHazard_Gen2_Gardens.Buff_FoliageHazard_Gen2_Gardens_C.UserConstructionScript");
		
		ABuff_FoliageHazard_Gen2_Gardens_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Buff_FoliageHazard_Gen2_Gardens.Buff_FoliageHazard_Gen2_Gardens_C.ExecuteUbergraph_Buff_FoliageHazard_Gen2_Gardens
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABuff_FoliageHazard_Gen2_Gardens_C::ExecuteUbergraph_Buff_FoliageHazard_Gen2_Gardens(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_FoliageHazard_Gen2_Gardens.Buff_FoliageHazard_Gen2_Gardens_C.ExecuteUbergraph_Buff_FoliageHazard_Gen2_Gardens");
		
		ABuff_FoliageHazard_Gen2_Gardens_C_ExecuteUbergraph_Buff_FoliageHazard_Gen2_Gardens_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABuff_FoliageHazard_Gen2_Gardens_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABuff_FoliageHazard_Gen2_Gardens_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass Buff_FoliageHazard_Gen2_Gardens.Buff_FoliageHazard_Gen2_Gardens_C");
		return ptr;
	}

}


