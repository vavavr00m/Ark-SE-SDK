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
	 * 		Name   -> Function WorldBuff_Asteroid_Resource_Up.WorldBuff_Asteroid_Resource_Up_C.PreDeconstruction
	 * 		Flags  -> (Event, Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void UWorldBuff_Asteroid_Resource_Up_C::PreDeconstruction()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WorldBuff_Asteroid_Resource_Up.WorldBuff_Asteroid_Resource_Up_C.PreDeconstruction");
		
		UWorldBuff_Asteroid_Resource_Up_C_PreDeconstruction_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function WorldBuff_Asteroid_Resource_Up.WorldBuff_Asteroid_Resource_Up_C.PostConstruction
	 * 		Flags  -> (Event, Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void UWorldBuff_Asteroid_Resource_Up_C::PostConstruction()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WorldBuff_Asteroid_Resource_Up.WorldBuff_Asteroid_Resource_Up_C.PostConstruction");
		
		UWorldBuff_Asteroid_Resource_Up_C_PostConstruction_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function WorldBuff_Asteroid_Resource_Up.WorldBuff_Asteroid_Resource_Up_C.ExecuteUbergraph_WorldBuff_Asteroid_Resource_Up
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UWorldBuff_Asteroid_Resource_Up_C::ExecuteUbergraph_WorldBuff_Asteroid_Resource_Up(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WorldBuff_Asteroid_Resource_Up.WorldBuff_Asteroid_Resource_Up_C.ExecuteUbergraph_WorldBuff_Asteroid_Resource_Up");
		
		UWorldBuff_Asteroid_Resource_Up_C_ExecuteUbergraph_WorldBuff_Asteroid_Resource_Up_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UWorldBuff_Asteroid_Resource_Up_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UWorldBuff_Asteroid_Resource_Up_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass WorldBuff_Asteroid_Resource_Up.WorldBuff_Asteroid_Resource_Up_C");
		return ptr;
	}

}


