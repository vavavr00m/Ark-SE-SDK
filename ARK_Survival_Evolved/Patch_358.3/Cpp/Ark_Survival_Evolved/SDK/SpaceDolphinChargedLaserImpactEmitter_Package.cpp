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
	 * 		Name   -> Function SpaceDolphinChargedLaserImpactEmitter.SpaceDolphinChargedLaserImpactEmitter_C.UserConstructionScript
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void ASpaceDolphinChargedLaserImpactEmitter_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SpaceDolphinChargedLaserImpactEmitter.SpaceDolphinChargedLaserImpactEmitter_C.UserConstructionScript");
		
		ASpaceDolphinChargedLaserImpactEmitter_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function SpaceDolphinChargedLaserImpactEmitter.SpaceDolphinChargedLaserImpactEmitter_C.ExecuteUbergraph_SpaceDolphinChargedLaserImpactEmitter
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ASpaceDolphinChargedLaserImpactEmitter_C::ExecuteUbergraph_SpaceDolphinChargedLaserImpactEmitter(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SpaceDolphinChargedLaserImpactEmitter.SpaceDolphinChargedLaserImpactEmitter_C.ExecuteUbergraph_SpaceDolphinChargedLaserImpactEmitter");
		
		ASpaceDolphinChargedLaserImpactEmitter_C_ExecuteUbergraph_SpaceDolphinChargedLaserImpactEmitter_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ASpaceDolphinChargedLaserImpactEmitter_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ASpaceDolphinChargedLaserImpactEmitter_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass SpaceDolphinChargedLaserImpactEmitter.SpaceDolphinChargedLaserImpactEmitter_C");
		return ptr;
	}

}


