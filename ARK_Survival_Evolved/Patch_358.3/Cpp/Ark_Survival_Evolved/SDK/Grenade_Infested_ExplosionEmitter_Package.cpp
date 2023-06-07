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
	 * 		Name   -> Function Grenade_Infested_ExplosionEmitter.Grenade_Infested_ExplosionEmitter_C.UserConstructionScript
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void AGrenade_Infested_ExplosionEmitter_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Grenade_Infested_ExplosionEmitter.Grenade_Infested_ExplosionEmitter_C.UserConstructionScript");
		
		AGrenade_Infested_ExplosionEmitter_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Grenade_Infested_ExplosionEmitter.Grenade_Infested_ExplosionEmitter_C.ExecuteUbergraph_Grenade_Infested_ExplosionEmitter
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AGrenade_Infested_ExplosionEmitter_C::ExecuteUbergraph_Grenade_Infested_ExplosionEmitter(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Grenade_Infested_ExplosionEmitter.Grenade_Infested_ExplosionEmitter_C.ExecuteUbergraph_Grenade_Infested_ExplosionEmitter");
		
		AGrenade_Infested_ExplosionEmitter_C_ExecuteUbergraph_Grenade_Infested_ExplosionEmitter_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AGrenade_Infested_ExplosionEmitter_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AGrenade_Infested_ExplosionEmitter_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass Grenade_Infested_ExplosionEmitter.Grenade_Infested_ExplosionEmitter_C");
		return ptr;
	}

}


