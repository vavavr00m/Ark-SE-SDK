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
	 * 		Name   -> Function WorldBuff_Mutagen_SpawnDelay_Down.WorldBuff_Mutagen_SpawnDelay_Down_C.PreDeconstruction
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void UWorldBuff_Mutagen_SpawnDelay_Down_C::PreDeconstruction()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WorldBuff_Mutagen_SpawnDelay_Down.WorldBuff_Mutagen_SpawnDelay_Down_C.PreDeconstruction");
		
		UWorldBuff_Mutagen_SpawnDelay_Down_C_PreDeconstruction_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function WorldBuff_Mutagen_SpawnDelay_Down.WorldBuff_Mutagen_SpawnDelay_Down_C.PostConstruction
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void UWorldBuff_Mutagen_SpawnDelay_Down_C::PostConstruction()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WorldBuff_Mutagen_SpawnDelay_Down.WorldBuff_Mutagen_SpawnDelay_Down_C.PostConstruction");
		
		UWorldBuff_Mutagen_SpawnDelay_Down_C_PostConstruction_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function WorldBuff_Mutagen_SpawnDelay_Down.WorldBuff_Mutagen_SpawnDelay_Down_C.ExecuteUbergraph_WorldBuff_Mutagen_SpawnDelay_Down
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UWorldBuff_Mutagen_SpawnDelay_Down_C::ExecuteUbergraph_WorldBuff_Mutagen_SpawnDelay_Down(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WorldBuff_Mutagen_SpawnDelay_Down.WorldBuff_Mutagen_SpawnDelay_Down_C.ExecuteUbergraph_WorldBuff_Mutagen_SpawnDelay_Down");
		
		UWorldBuff_Mutagen_SpawnDelay_Down_C_ExecuteUbergraph_WorldBuff_Mutagen_SpawnDelay_Down_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UWorldBuff_Mutagen_SpawnDelay_Down_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UWorldBuff_Mutagen_SpawnDelay_Down_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass WorldBuff_Mutagen_SpawnDelay_Down.WorldBuff_Mutagen_SpawnDelay_Down_C");
		return ptr;
	}

}


