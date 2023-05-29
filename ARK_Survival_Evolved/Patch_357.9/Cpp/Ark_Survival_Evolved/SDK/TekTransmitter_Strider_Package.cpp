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
	 * 		Name   -> Function TekTransmitter_Strider.TekTransmitter_Strider_C.ReceiveBeginPlay
	 * 		Flags  -> (Event, Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void ATekTransmitter_Strider_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TekTransmitter_Strider.TekTransmitter_Strider_C.ReceiveBeginPlay");
		
		ATekTransmitter_Strider_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function TekTransmitter_Strider.TekTransmitter_Strider_C.BPContainerDeactivated
	 * 		Flags  -> (Event, Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void ATekTransmitter_Strider_C::BPContainerDeactivated()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TekTransmitter_Strider.TekTransmitter_Strider_C.BPContainerDeactivated");
		
		ATekTransmitter_Strider_C_BPContainerDeactivated_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function TekTransmitter_Strider.TekTransmitter_Strider_C.BPContainerActivated
	 * 		Flags  -> (Event, Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void ATekTransmitter_Strider_C::BPContainerActivated()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TekTransmitter_Strider.TekTransmitter_Strider_C.BPContainerActivated");
		
		ATekTransmitter_Strider_C_BPContainerActivated_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function TekTransmitter_Strider.TekTransmitter_Strider_C.BPPreInitializeComponents
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void ATekTransmitter_Strider_C::BPPreInitializeComponents()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TekTransmitter_Strider.TekTransmitter_Strider_C.BPPreInitializeComponents");
		
		ATekTransmitter_Strider_C_BPPreInitializeComponents_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function TekTransmitter_Strider.TekTransmitter_Strider_C.BPCanBeActivatedByPlayer
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AShooterPlayerController*                    PC                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	bool ATekTransmitter_Strider_C::BPCanBeActivatedByPlayer(class AShooterPlayerController* PC)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TekTransmitter_Strider.TekTransmitter_Strider_C.BPCanBeActivatedByPlayer");
		
		ATekTransmitter_Strider_C_BPCanBeActivatedByPlayer_Params params {};
		params.PC = PC;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function TekTransmitter_Strider.TekTransmitter_Strider_C.UserConstructionScript
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void ATekTransmitter_Strider_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TekTransmitter_Strider.TekTransmitter_Strider_C.UserConstructionScript");
		
		ATekTransmitter_Strider_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function TekTransmitter_Strider.TekTransmitter_Strider_C.ExecuteUbergraph_TekTransmitter_Strider
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ATekTransmitter_Strider_C::ExecuteUbergraph_TekTransmitter_Strider(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TekTransmitter_Strider.TekTransmitter_Strider_C.ExecuteUbergraph_TekTransmitter_Strider");
		
		ATekTransmitter_Strider_C_ExecuteUbergraph_TekTransmitter_Strider_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ATekTransmitter_Strider_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ATekTransmitter_Strider_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass TekTransmitter_Strider.TekTransmitter_Strider_C");
		return ptr;
	}

}


