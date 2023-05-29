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
	 * 		Name   -> Function ExplosionEmitter_TropeProj.ExplosionEmitter_TropeProj_C.UserConstructionScript
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void AExplosionEmitter_TropeProj_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ExplosionEmitter_TropeProj.ExplosionEmitter_TropeProj_C.UserConstructionScript");
		
		AExplosionEmitter_TropeProj_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function ExplosionEmitter_TropeProj.ExplosionEmitter_TropeProj_C.ExecuteUbergraph_ExplosionEmitter_TropeProj
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AExplosionEmitter_TropeProj_C::ExecuteUbergraph_ExplosionEmitter_TropeProj(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ExplosionEmitter_TropeProj.ExplosionEmitter_TropeProj_C.ExecuteUbergraph_ExplosionEmitter_TropeProj");
		
		AExplosionEmitter_TropeProj_C_ExecuteUbergraph_ExplosionEmitter_TropeProj_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AExplosionEmitter_TropeProj_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AExplosionEmitter_TropeProj_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass ExplosionEmitter_TropeProj.ExplosionEmitter_TropeProj_C");
		return ptr;
	}

}


