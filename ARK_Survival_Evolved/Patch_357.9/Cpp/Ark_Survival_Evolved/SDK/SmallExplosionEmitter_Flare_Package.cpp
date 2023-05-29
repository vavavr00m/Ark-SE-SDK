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
	 * 		Name   -> Function SmallExplosionEmitter_Flare.SmallExplosionEmitter_Flare_C.UserConstructionScript
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void ASmallExplosionEmitter_Flare_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SmallExplosionEmitter_Flare.SmallExplosionEmitter_Flare_C.UserConstructionScript");
		
		ASmallExplosionEmitter_Flare_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function SmallExplosionEmitter_Flare.SmallExplosionEmitter_Flare_C.ExecuteUbergraph_SmallExplosionEmitter_Flare
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ASmallExplosionEmitter_Flare_C::ExecuteUbergraph_SmallExplosionEmitter_Flare(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SmallExplosionEmitter_Flare.SmallExplosionEmitter_Flare_C.ExecuteUbergraph_SmallExplosionEmitter_Flare");
		
		ASmallExplosionEmitter_Flare_C_ExecuteUbergraph_SmallExplosionEmitter_Flare_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ASmallExplosionEmitter_Flare_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ASmallExplosionEmitter_Flare_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass SmallExplosionEmitter_Flare.SmallExplosionEmitter_Flare_C");
		return ptr;
	}

}


