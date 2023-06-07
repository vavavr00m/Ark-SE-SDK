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
	 * 		Name   -> Function ResinProjTrailEmitterBomb.ResinProjTrailEmitterBomb_C.ActivateInfectedParticles
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void AResinProjTrailEmitterBomb_C::ActivateInfectedParticles()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ResinProjTrailEmitterBomb.ResinProjTrailEmitterBomb_C.ActivateInfectedParticles");
		
		AResinProjTrailEmitterBomb_C_ActivateInfectedParticles_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function ResinProjTrailEmitterBomb.ResinProjTrailEmitterBomb_C.UserConstructionScript
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void AResinProjTrailEmitterBomb_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ResinProjTrailEmitterBomb.ResinProjTrailEmitterBomb_C.UserConstructionScript");
		
		AResinProjTrailEmitterBomb_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function ResinProjTrailEmitterBomb.ResinProjTrailEmitterBomb_C.ExecuteUbergraph_ResinProjTrailEmitterBomb
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AResinProjTrailEmitterBomb_C::ExecuteUbergraph_ResinProjTrailEmitterBomb(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ResinProjTrailEmitterBomb.ResinProjTrailEmitterBomb_C.ExecuteUbergraph_ResinProjTrailEmitterBomb");
		
		AResinProjTrailEmitterBomb_C_ExecuteUbergraph_ResinProjTrailEmitterBomb_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AResinProjTrailEmitterBomb_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AResinProjTrailEmitterBomb_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass ResinProjTrailEmitterBomb.ResinProjTrailEmitterBomb_C");
		return ptr;
	}

}


