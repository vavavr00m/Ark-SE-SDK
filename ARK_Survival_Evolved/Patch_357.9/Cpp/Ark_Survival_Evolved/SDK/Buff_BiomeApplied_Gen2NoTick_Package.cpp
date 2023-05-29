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
	 * 		Name   -> Function Buff_BiomeApplied_Gen2NoTick.Buff_BiomeApplied_Gen2NoTick_C.UserConstructionScript
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABuff_BiomeApplied_Gen2NoTick_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_BiomeApplied_Gen2NoTick.Buff_BiomeApplied_Gen2NoTick_C.UserConstructionScript");
		
		ABuff_BiomeApplied_Gen2NoTick_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Buff_BiomeApplied_Gen2NoTick.Buff_BiomeApplied_Gen2NoTick_C.ExecuteUbergraph_Buff_BiomeApplied_Gen2NoTick
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABuff_BiomeApplied_Gen2NoTick_C::ExecuteUbergraph_Buff_BiomeApplied_Gen2NoTick(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_BiomeApplied_Gen2NoTick.Buff_BiomeApplied_Gen2NoTick_C.ExecuteUbergraph_Buff_BiomeApplied_Gen2NoTick");
		
		ABuff_BiomeApplied_Gen2NoTick_C_ExecuteUbergraph_Buff_BiomeApplied_Gen2NoTick_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABuff_BiomeApplied_Gen2NoTick_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABuff_BiomeApplied_Gen2NoTick_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass Buff_BiomeApplied_Gen2NoTick.Buff_BiomeApplied_Gen2NoTick_C");
		return ptr;
	}

}


