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
	 * 		Name   -> Function EasterBasket_ExplosionEmitter.EasterBasket_ExplosionEmitter_C.UserConstructionScript
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void AEasterBasket_ExplosionEmitter_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EasterBasket_ExplosionEmitter.EasterBasket_ExplosionEmitter_C.UserConstructionScript");
		
		AEasterBasket_ExplosionEmitter_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function EasterBasket_ExplosionEmitter.EasterBasket_ExplosionEmitter_C.ExecuteUbergraph_EasterBasket_ExplosionEmitter
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AEasterBasket_ExplosionEmitter_C::ExecuteUbergraph_EasterBasket_ExplosionEmitter(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EasterBasket_ExplosionEmitter.EasterBasket_ExplosionEmitter_C.ExecuteUbergraph_EasterBasket_ExplosionEmitter");
		
		AEasterBasket_ExplosionEmitter_C_ExecuteUbergraph_EasterBasket_ExplosionEmitter_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AEasterBasket_ExplosionEmitter_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AEasterBasket_ExplosionEmitter_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass EasterBasket_ExplosionEmitter.EasterBasket_ExplosionEmitter_C");
		return ptr;
	}

}


