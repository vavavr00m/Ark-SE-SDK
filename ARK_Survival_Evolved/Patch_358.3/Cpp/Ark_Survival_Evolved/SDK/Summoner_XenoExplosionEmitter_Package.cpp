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
	 * 		Name   -> Function Summoner_XenoExplosionEmitter.Summoner_XenoExplosionEmitter_C.UserConstructionScript
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void ASummoner_XenoExplosionEmitter_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Summoner_XenoExplosionEmitter.Summoner_XenoExplosionEmitter_C.UserConstructionScript");
		
		ASummoner_XenoExplosionEmitter_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Summoner_XenoExplosionEmitter.Summoner_XenoExplosionEmitter_C.ExecuteUbergraph_Summoner_XenoExplosionEmitter
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ASummoner_XenoExplosionEmitter_C::ExecuteUbergraph_Summoner_XenoExplosionEmitter(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Summoner_XenoExplosionEmitter.Summoner_XenoExplosionEmitter_C.ExecuteUbergraph_Summoner_XenoExplosionEmitter");
		
		ASummoner_XenoExplosionEmitter_C_ExecuteUbergraph_Summoner_XenoExplosionEmitter_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ASummoner_XenoExplosionEmitter_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ASummoner_XenoExplosionEmitter_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass Summoner_XenoExplosionEmitter.Summoner_XenoExplosionEmitter_C");
		return ptr;
	}

}


