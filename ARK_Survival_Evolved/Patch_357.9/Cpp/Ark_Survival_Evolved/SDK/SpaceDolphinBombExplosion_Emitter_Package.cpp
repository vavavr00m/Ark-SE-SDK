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
	 * 		Name   -> Function SpaceDolphinBombExplosion_Emitter.SpaceDolphinBombExplosion_Emitter_C.UserConstructionScript
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void ASpaceDolphinBombExplosion_Emitter_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SpaceDolphinBombExplosion_Emitter.SpaceDolphinBombExplosion_Emitter_C.UserConstructionScript");
		
		ASpaceDolphinBombExplosion_Emitter_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function SpaceDolphinBombExplosion_Emitter.SpaceDolphinBombExplosion_Emitter_C.ExecuteUbergraph_SpaceDolphinBombExplosion_Emitter
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ASpaceDolphinBombExplosion_Emitter_C::ExecuteUbergraph_SpaceDolphinBombExplosion_Emitter(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SpaceDolphinBombExplosion_Emitter.SpaceDolphinBombExplosion_Emitter_C.ExecuteUbergraph_SpaceDolphinBombExplosion_Emitter");
		
		ASpaceDolphinBombExplosion_Emitter_C_ExecuteUbergraph_SpaceDolphinBombExplosion_Emitter_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ASpaceDolphinBombExplosion_Emitter_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ASpaceDolphinBombExplosion_Emitter_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass SpaceDolphinBombExplosion_Emitter.SpaceDolphinBombExplosion_Emitter_C");
		return ptr;
	}

}


