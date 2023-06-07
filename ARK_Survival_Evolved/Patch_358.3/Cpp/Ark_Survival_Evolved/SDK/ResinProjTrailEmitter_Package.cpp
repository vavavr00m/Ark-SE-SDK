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
	 * 		Name   -> Function ResinProjTrailEmitter.ResinProjTrailEmitter_C.ActivateInfectedParticles
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void AResinProjTrailEmitter_C::ActivateInfectedParticles()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ResinProjTrailEmitter.ResinProjTrailEmitter_C.ActivateInfectedParticles");
		
		AResinProjTrailEmitter_C_ActivateInfectedParticles_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function ResinProjTrailEmitter.ResinProjTrailEmitter_C.UserConstructionScript
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void AResinProjTrailEmitter_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ResinProjTrailEmitter.ResinProjTrailEmitter_C.UserConstructionScript");
		
		AResinProjTrailEmitter_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function ResinProjTrailEmitter.ResinProjTrailEmitter_C.ExecuteUbergraph_ResinProjTrailEmitter
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AResinProjTrailEmitter_C::ExecuteUbergraph_ResinProjTrailEmitter(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ResinProjTrailEmitter.ResinProjTrailEmitter_C.ExecuteUbergraph_ResinProjTrailEmitter");
		
		AResinProjTrailEmitter_C_ExecuteUbergraph_ResinProjTrailEmitter_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AResinProjTrailEmitter_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AResinProjTrailEmitter_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass ResinProjTrailEmitter.ResinProjTrailEmitter_C");
		return ptr;
	}

}


