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
	 * 		Name   -> Function StriderHeavyCannonEmitter_Explosion.StriderHeavyCannonEmitter_Explosion_C.UserConstructionScript
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void AStriderHeavyCannonEmitter_Explosion_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function StriderHeavyCannonEmitter_Explosion.StriderHeavyCannonEmitter_Explosion_C.UserConstructionScript");
		
		AStriderHeavyCannonEmitter_Explosion_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function StriderHeavyCannonEmitter_Explosion.StriderHeavyCannonEmitter_Explosion_C.ExecuteUbergraph_StriderHeavyCannonEmitter_Explosion
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AStriderHeavyCannonEmitter_Explosion_C::ExecuteUbergraph_StriderHeavyCannonEmitter_Explosion(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function StriderHeavyCannonEmitter_Explosion.StriderHeavyCannonEmitter_Explosion_C.ExecuteUbergraph_StriderHeavyCannonEmitter_Explosion");
		
		AStriderHeavyCannonEmitter_Explosion_C_ExecuteUbergraph_StriderHeavyCannonEmitter_Explosion_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AStriderHeavyCannonEmitter_Explosion_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AStriderHeavyCannonEmitter_Explosion_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass StriderHeavyCannonEmitter_Explosion.StriderHeavyCannonEmitter_Explosion_C");
		return ptr;
	}

}


