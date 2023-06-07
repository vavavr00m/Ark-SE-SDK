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
	 * 		Name   -> Function ExplosionEmitter_Phoenix.ExplosionEmitter_Phoenix_C.UserConstructionScript
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void AExplosionEmitter_Phoenix_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ExplosionEmitter_Phoenix.ExplosionEmitter_Phoenix_C.UserConstructionScript");
		
		AExplosionEmitter_Phoenix_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function ExplosionEmitter_Phoenix.ExplosionEmitter_Phoenix_C.ReceiveBeginPlay
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void AExplosionEmitter_Phoenix_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ExplosionEmitter_Phoenix.ExplosionEmitter_Phoenix_C.ReceiveBeginPlay");
		
		AExplosionEmitter_Phoenix_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function ExplosionEmitter_Phoenix.ExplosionEmitter_Phoenix_C.DeTime
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AExplosionEmitter_Phoenix_C::DeTime()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ExplosionEmitter_Phoenix.ExplosionEmitter_Phoenix_C.DeTime");
		
		AExplosionEmitter_Phoenix_C_DeTime_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function ExplosionEmitter_Phoenix.ExplosionEmitter_Phoenix_C.ExecuteUbergraph_ExplosionEmitter_Phoenix
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AExplosionEmitter_Phoenix_C::ExecuteUbergraph_ExplosionEmitter_Phoenix(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ExplosionEmitter_Phoenix.ExplosionEmitter_Phoenix_C.ExecuteUbergraph_ExplosionEmitter_Phoenix");
		
		AExplosionEmitter_Phoenix_C_ExecuteUbergraph_ExplosionEmitter_Phoenix_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AExplosionEmitter_Phoenix_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AExplosionEmitter_Phoenix_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass ExplosionEmitter_Phoenix.ExplosionEmitter_Phoenix_C");
		return ptr;
	}

}


