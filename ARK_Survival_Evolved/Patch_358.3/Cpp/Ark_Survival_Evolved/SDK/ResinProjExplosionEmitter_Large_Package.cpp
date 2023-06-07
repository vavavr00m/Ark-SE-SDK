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
	 * 		Name   -> Function ResinProjExplosionEmitter_Large.ResinProjExplosionEmitter_Large_C.UserConstructionScript
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void AResinProjExplosionEmitter_Large_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ResinProjExplosionEmitter_Large.ResinProjExplosionEmitter_Large_C.UserConstructionScript");
		
		AResinProjExplosionEmitter_Large_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function ResinProjExplosionEmitter_Large.ResinProjExplosionEmitter_Large_C.ExecuteUbergraph_ResinProjExplosionEmitter_Large
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AResinProjExplosionEmitter_Large_C::ExecuteUbergraph_ResinProjExplosionEmitter_Large(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ResinProjExplosionEmitter_Large.ResinProjExplosionEmitter_Large_C.ExecuteUbergraph_ResinProjExplosionEmitter_Large");
		
		AResinProjExplosionEmitter_Large_C_ExecuteUbergraph_ResinProjExplosionEmitter_Large_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AResinProjExplosionEmitter_Large_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AResinProjExplosionEmitter_Large_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass ResinProjExplosionEmitter_Large.ResinProjExplosionEmitter_Large_C");
		return ptr;
	}

}


