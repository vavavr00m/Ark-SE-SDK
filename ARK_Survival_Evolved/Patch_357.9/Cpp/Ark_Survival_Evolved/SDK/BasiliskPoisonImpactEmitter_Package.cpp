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
	 * 		Name   -> Function BasiliskPoisonImpactEmitter.BasiliskPoisonImpactEmitter_C.UserConstructionScript
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABasiliskPoisonImpactEmitter_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BasiliskPoisonImpactEmitter.BasiliskPoisonImpactEmitter_C.UserConstructionScript");
		
		ABasiliskPoisonImpactEmitter_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function BasiliskPoisonImpactEmitter.BasiliskPoisonImpactEmitter_C.ExecuteUbergraph_BasiliskPoisonImpactEmitter
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABasiliskPoisonImpactEmitter_C::ExecuteUbergraph_BasiliskPoisonImpactEmitter(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BasiliskPoisonImpactEmitter.BasiliskPoisonImpactEmitter_C.ExecuteUbergraph_BasiliskPoisonImpactEmitter");
		
		ABasiliskPoisonImpactEmitter_C_ExecuteUbergraph_BasiliskPoisonImpactEmitter_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABasiliskPoisonImpactEmitter_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABasiliskPoisonImpactEmitter_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BasiliskPoisonImpactEmitter.BasiliskPoisonImpactEmitter_C");
		return ptr;
	}

}


