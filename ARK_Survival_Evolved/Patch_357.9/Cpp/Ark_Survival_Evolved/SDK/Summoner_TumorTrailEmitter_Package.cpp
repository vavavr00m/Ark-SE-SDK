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
	 * 		Name   -> Function Summoner_TumorTrailEmitter.Summoner_TumorTrailEmitter_C.UserConstructionScript
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void ASummoner_TumorTrailEmitter_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Summoner_TumorTrailEmitter.Summoner_TumorTrailEmitter_C.UserConstructionScript");
		
		ASummoner_TumorTrailEmitter_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Summoner_TumorTrailEmitter.Summoner_TumorTrailEmitter_C.ExecuteUbergraph_Summoner_TumorTrailEmitter
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ASummoner_TumorTrailEmitter_C::ExecuteUbergraph_Summoner_TumorTrailEmitter(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Summoner_TumorTrailEmitter.Summoner_TumorTrailEmitter_C.ExecuteUbergraph_Summoner_TumorTrailEmitter");
		
		ASummoner_TumorTrailEmitter_C_ExecuteUbergraph_Summoner_TumorTrailEmitter_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ASummoner_TumorTrailEmitter_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ASummoner_TumorTrailEmitter_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass Summoner_TumorTrailEmitter.Summoner_TumorTrailEmitter_C");
		return ptr;
	}

}


