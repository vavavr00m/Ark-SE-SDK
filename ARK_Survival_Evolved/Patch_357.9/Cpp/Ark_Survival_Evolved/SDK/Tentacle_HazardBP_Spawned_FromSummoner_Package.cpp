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
	 * 		Name   -> Function Tentacle_HazardBP_Spawned_FromSummoner.Tentacle_HazardBP_Spawned_FromSummoner_C.UserConstructionScript
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void ATentacle_HazardBP_Spawned_FromSummoner_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Tentacle_HazardBP_Spawned_FromSummoner.Tentacle_HazardBP_Spawned_FromSummoner_C.UserConstructionScript");
		
		ATentacle_HazardBP_Spawned_FromSummoner_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Tentacle_HazardBP_Spawned_FromSummoner.Tentacle_HazardBP_Spawned_FromSummoner_C.ExecuteUbergraph_Tentacle_HazardBP_Spawned_FromSummoner
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ATentacle_HazardBP_Spawned_FromSummoner_C::ExecuteUbergraph_Tentacle_HazardBP_Spawned_FromSummoner(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Tentacle_HazardBP_Spawned_FromSummoner.Tentacle_HazardBP_Spawned_FromSummoner_C.ExecuteUbergraph_Tentacle_HazardBP_Spawned_FromSummoner");
		
		ATentacle_HazardBP_Spawned_FromSummoner_C_ExecuteUbergraph_Tentacle_HazardBP_Spawned_FromSummoner_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ATentacle_HazardBP_Spawned_FromSummoner_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ATentacle_HazardBP_Spawned_FromSummoner_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass Tentacle_HazardBP_Spawned_FromSummoner.Tentacle_HazardBP_Spawned_FromSummoner_C");
		return ptr;
	}

}


