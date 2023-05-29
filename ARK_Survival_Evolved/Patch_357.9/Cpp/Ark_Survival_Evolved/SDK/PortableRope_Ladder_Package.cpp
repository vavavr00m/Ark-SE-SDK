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
	 * 		Name   -> Function PortableRope_Ladder.PortableRope_Ladder_C.AllowManualMultiUseActivation
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class APlayerController*                           ForPC                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	bool APortableRope_Ladder_C::AllowManualMultiUseActivation(class APlayerController* ForPC)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PortableRope_Ladder.PortableRope_Ladder_C.AllowManualMultiUseActivation");
		
		APortableRope_Ladder_C_AllowManualMultiUseActivation_Params params {};
		params.ForPC = ForPC;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function PortableRope_Ladder.PortableRope_Ladder_C.BPAttachedRootComponent
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void APortableRope_Ladder_C::BPAttachedRootComponent()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PortableRope_Ladder.PortableRope_Ladder_C.BPAttachedRootComponent");
		
		APortableRope_Ladder_C_BPAttachedRootComponent_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function PortableRope_Ladder.PortableRope_Ladder_C.BuildLadder
	 * 		Flags  -> (Event, Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void APortableRope_Ladder_C::BuildLadder()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PortableRope_Ladder.PortableRope_Ladder_C.BuildLadder");
		
		APortableRope_Ladder_C_BuildLadder_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function PortableRope_Ladder.PortableRope_Ladder_C.UpdateBoxCollitionForRetraction
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void APortableRope_Ladder_C::UpdateBoxCollitionForRetraction()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PortableRope_Ladder.PortableRope_Ladder_C.UpdateBoxCollitionForRetraction");
		
		APortableRope_Ladder_C_UpdateBoxCollitionForRetraction_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function PortableRope_Ladder.PortableRope_Ladder_C.UserConstructionScript
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void APortableRope_Ladder_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PortableRope_Ladder.PortableRope_Ladder_C.UserConstructionScript");
		
		APortableRope_Ladder_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function PortableRope_Ladder.PortableRope_Ladder_C.ExecuteUbergraph_PortableRope_Ladder
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void APortableRope_Ladder_C::ExecuteUbergraph_PortableRope_Ladder(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PortableRope_Ladder.PortableRope_Ladder_C.ExecuteUbergraph_PortableRope_Ladder");
		
		APortableRope_Ladder_C_ExecuteUbergraph_PortableRope_Ladder_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction APortableRope_Ladder_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* APortableRope_Ladder_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass PortableRope_Ladder.PortableRope_Ladder_C");
		return ptr;
	}

}


