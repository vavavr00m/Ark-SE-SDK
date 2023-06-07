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
	 * 		Name   -> Function MagmaBallExplosionEmitter_TEMP.MagmaBallExplosionEmitter_TEMP_C.UserConstructionScript
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void AMagmaBallExplosionEmitter_TEMP_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MagmaBallExplosionEmitter_TEMP.MagmaBallExplosionEmitter_TEMP_C.UserConstructionScript");
		
		AMagmaBallExplosionEmitter_TEMP_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function MagmaBallExplosionEmitter_TEMP.MagmaBallExplosionEmitter_TEMP_C.ExecuteUbergraph_MagmaBallExplosionEmitter_TEMP
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AMagmaBallExplosionEmitter_TEMP_C::ExecuteUbergraph_MagmaBallExplosionEmitter_TEMP(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MagmaBallExplosionEmitter_TEMP.MagmaBallExplosionEmitter_TEMP_C.ExecuteUbergraph_MagmaBallExplosionEmitter_TEMP");
		
		AMagmaBallExplosionEmitter_TEMP_C_ExecuteUbergraph_MagmaBallExplosionEmitter_TEMP_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AMagmaBallExplosionEmitter_TEMP_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AMagmaBallExplosionEmitter_TEMP_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass MagmaBallExplosionEmitter_TEMP.MagmaBallExplosionEmitter_TEMP_C");
		return ptr;
	}

}


