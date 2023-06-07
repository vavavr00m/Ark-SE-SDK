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
	 * 		Name   -> Function Emitter_RacePowerUp.Emitter_RacePowerUp_C.UserConstructionScript
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void AEmitter_RacePowerUp_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Emitter_RacePowerUp.Emitter_RacePowerUp_C.UserConstructionScript");
		
		AEmitter_RacePowerUp_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Emitter_RacePowerUp.Emitter_RacePowerUp_C.ExecuteUbergraph_Emitter_RacePowerUp
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AEmitter_RacePowerUp_C::ExecuteUbergraph_Emitter_RacePowerUp(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Emitter_RacePowerUp.Emitter_RacePowerUp_C.ExecuteUbergraph_Emitter_RacePowerUp");
		
		AEmitter_RacePowerUp_C_ExecuteUbergraph_Emitter_RacePowerUp_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AEmitter_RacePowerUp_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AEmitter_RacePowerUp_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass Emitter_RacePowerUp.Emitter_RacePowerUp_C");
		return ptr;
	}

}


