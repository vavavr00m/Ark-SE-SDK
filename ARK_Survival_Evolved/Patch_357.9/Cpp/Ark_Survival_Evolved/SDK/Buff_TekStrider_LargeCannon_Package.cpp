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
	 * 		Name   -> Function Buff_TekStrider_LargeCannon.Buff_TekStrider_LargeCannon_C.prevent ai doubleshooting
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABuff_TekStrider_LargeCannon_C::preventaidoubleshooting()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_TekStrider_LargeCannon.Buff_TekStrider_LargeCannon_C.prevent ai doubleshooting");
		
		ABuff_TekStrider_LargeCannon_C_preventaidoubleshooting_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Buff_TekStrider_LargeCannon.Buff_TekStrider_LargeCannon_C.is cannon blocked
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               fromanimbp                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	bool ABuff_TekStrider_LargeCannon_C::iscannonblocked(bool fromanimbp)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_TekStrider_LargeCannon.Buff_TekStrider_LargeCannon_C.is cannon blocked");
		
		ABuff_TekStrider_LargeCannon_C_iscannonblocked_Params params {};
		params.fromanimbp = fromanimbp;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Buff_TekStrider_LargeCannon.Buff_TekStrider_LargeCannon_C.Delay Check for Valid Shot Loc
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void ABuff_TekStrider_LargeCannon_C::DelayCheckforValidShotLoc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_TekStrider_LargeCannon.Buff_TekStrider_LargeCannon_C.Delay Check for Valid Shot Loc");
		
		ABuff_TekStrider_LargeCannon_C_DelayCheckforValidShotLoc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Buff_TekStrider_LargeCannon.Buff_TekStrider_LargeCannon_C.get start and end location
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               usepassedinloc                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FVector                                     EndPoint                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABuff_TekStrider_LargeCannon_C::getstartandendlocation(bool usepassedinloc, struct FVector* EndPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_TekStrider_LargeCannon.Buff_TekStrider_LargeCannon_C.get start and end location");
		
		ABuff_TekStrider_LargeCannon_C_getstartandendlocation_Params params {};
		params.usepassedinloc = usepassedinloc;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (EndPoint != nullptr)
			*EndPoint = params.EndPoint;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Buff_TekStrider_LargeCannon.Buff_TekStrider_LargeCannon_C.BPServerHandleNetExecCommand
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class APlayerController*                           FromPC                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class FName                                        CommandName                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FBPNetExecParams                            ExecParams                                                 (Parm, OutParm, ReferenceParm)
	 */
	bool ABuff_TekStrider_LargeCannon_C::BPServerHandleNetExecCommand(class APlayerController* FromPC, const class FName& CommandName, struct FBPNetExecParams* ExecParams)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_TekStrider_LargeCannon.Buff_TekStrider_LargeCannon_C.BPServerHandleNetExecCommand");
		
		ABuff_TekStrider_LargeCannon_C_BPServerHandleNetExecCommand_Params params {};
		params.FromPC = FromPC;
		params.CommandName = CommandName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (ExecParams != nullptr)
			*ExecParams = params.ExecParams;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Buff_TekStrider_LargeCannon.Buff_TekStrider_LargeCannon_C.BPGetHUDElements
	 * 		Flags  -> (Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class APlayerController*                           ForPC                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		TArray<struct FHUDElement>                         OutElements                                                (Parm, OutParm, ZeroConstructor)
	 */
	void ABuff_TekStrider_LargeCannon_C::BPGetHUDElements(class APlayerController* ForPC, TArray<struct FHUDElement>* OutElements)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_TekStrider_LargeCannon.Buff_TekStrider_LargeCannon_C.BPGetHUDElements");
		
		ABuff_TekStrider_LargeCannon_C_BPGetHUDElements_Params params {};
		params.ForPC = ForPC;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutElements != nullptr)
			*OutElements = params.OutElements;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Buff_TekStrider_LargeCannon.Buff_TekStrider_LargeCannon_C.target is within angle
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class APrimalDinoCharacter*                        NewParam                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               NewParam1                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABuff_TekStrider_LargeCannon_C::targetiswithinangle(class APrimalDinoCharacter* NewParam, bool* NewParam1)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_TekStrider_LargeCannon.Buff_TekStrider_LargeCannon_C.target is within angle");
		
		ABuff_TekStrider_LargeCannon_C_targetiswithinangle_Params params {};
		params.NewParam = NewParam;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (NewParam1 != nullptr)
			*NewParam1 = params.NewParam1;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Buff_TekStrider_LargeCannon.Buff_TekStrider_LargeCannon_C.is ai controlled
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               NewParam                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABuff_TekStrider_LargeCannon_C::isaicontrolled(bool* NewParam)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_TekStrider_LargeCannon.Buff_TekStrider_LargeCannon_C.is ai controlled");
		
		ABuff_TekStrider_LargeCannon_C_isaicontrolled_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (NewParam != nullptr)
			*NewParam = params.NewParam;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Buff_TekStrider_LargeCannon.Buff_TekStrider_LargeCannon_C.Delay Fire
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABuff_TekStrider_LargeCannon_C::DelayFire()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_TekStrider_LargeCannon.Buff_TekStrider_LargeCannon_C.Delay Fire");
		
		ABuff_TekStrider_LargeCannon_C_DelayFire_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Buff_TekStrider_LargeCannon.Buff_TekStrider_LargeCannon_C.Get Fire Start And End Location
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               usevalidatedloc                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FVector                                     startloc                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FVector                                     endloc                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABuff_TekStrider_LargeCannon_C::GetFireStartAndEndLocation(bool usevalidatedloc, struct FVector* startloc, struct FVector* endloc)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_TekStrider_LargeCannon.Buff_TekStrider_LargeCannon_C.Get Fire Start And End Location");
		
		ABuff_TekStrider_LargeCannon_C_GetFireStartAndEndLocation_Params params {};
		params.usevalidatedloc = usevalidatedloc;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (startloc != nullptr)
			*startloc = params.startloc;
		if (endloc != nullptr)
			*endloc = params.endloc;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Buff_TekStrider_LargeCannon.Buff_TekStrider_LargeCannon_C.can fire
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               fromanimbp                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               Result                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABuff_TekStrider_LargeCannon_C::canfire(bool fromanimbp, bool* Result)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_TekStrider_LargeCannon.Buff_TekStrider_LargeCannon_C.can fire");
		
		ABuff_TekStrider_LargeCannon_C_canfire_Params params {};
		params.fromanimbp = fromanimbp;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Result != nullptr)
			*Result = params.Result;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Buff_TekStrider_LargeCannon.Buff_TekStrider_LargeCannon_C.Delay Deactivate Charge
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABuff_TekStrider_LargeCannon_C::DelayDeactivateCharge()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_TekStrider_LargeCannon.Buff_TekStrider_LargeCannon_C.Delay Deactivate Charge");
		
		ABuff_TekStrider_LargeCannon_C_DelayDeactivateCharge_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Buff_TekStrider_LargeCannon.Buff_TekStrider_LargeCannon_C.Trigger
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABuff_TekStrider_LargeCannon_C::Trigger()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_TekStrider_LargeCannon.Buff_TekStrider_LargeCannon_C.Trigger");
		
		ABuff_TekStrider_LargeCannon_C_Trigger_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Buff_TekStrider_LargeCannon.Buff_TekStrider_LargeCannon_C.Can Fire? logic
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               fromanimbp                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               Result                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABuff_TekStrider_LargeCannon_C::CanFirelogic(bool fromanimbp, bool* Result)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_TekStrider_LargeCannon.Buff_TekStrider_LargeCannon_C.Can Fire? logic");
		
		ABuff_TekStrider_LargeCannon_C_CanFirelogic_Params params {};
		params.fromanimbp = fromanimbp;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Result != nullptr)
			*Result = params.Result;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Buff_TekStrider_LargeCannon.Buff_TekStrider_LargeCannon_C.FireCannonProjectile
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABuff_TekStrider_LargeCannon_C::FireCannonProjectile()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_TekStrider_LargeCannon.Buff_TekStrider_LargeCannon_C.FireCannonProjectile");
		
		ABuff_TekStrider_LargeCannon_C_FireCannonProjectile_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Buff_TekStrider_LargeCannon.Buff_TekStrider_LargeCannon_C.BPSetupForInstigator
	 * 		Flags  -> (Event, Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AActor*                                      ForInstigator                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABuff_TekStrider_LargeCannon_C::BPSetupForInstigator(class AActor* ForInstigator)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_TekStrider_LargeCannon.Buff_TekStrider_LargeCannon_C.BPSetupForInstigator");
		
		ABuff_TekStrider_LargeCannon_C_BPSetupForInstigator_Params params {};
		params.ForInstigator = ForInstigator;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Buff_TekStrider_LargeCannon.Buff_TekStrider_LargeCannon_C.UserConstructionScript
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABuff_TekStrider_LargeCannon_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_TekStrider_LargeCannon.Buff_TekStrider_LargeCannon_C.UserConstructionScript");
		
		ABuff_TekStrider_LargeCannon_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Buff_TekStrider_LargeCannon.Buff_TekStrider_LargeCannon_C.multicast fire events
	 * 		Flags  -> (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
	 */
	void ABuff_TekStrider_LargeCannon_C::multicastfireevents()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_TekStrider_LargeCannon.Buff_TekStrider_LargeCannon_C.multicast fire events");
		
		ABuff_TekStrider_LargeCannon_C_multicastfireevents_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Buff_TekStrider_LargeCannon.Buff_TekStrider_LargeCannon_C.multicast prepare to fire
	 * 		Flags  -> (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
	 */
	void ABuff_TekStrider_LargeCannon_C::multicastpreparetofire()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_TekStrider_LargeCannon.Buff_TekStrider_LargeCannon_C.multicast prepare to fire");
		
		ABuff_TekStrider_LargeCannon_C_multicastpreparetofire_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Buff_TekStrider_LargeCannon.Buff_TekStrider_LargeCannon_C.trace line
	 * 		Flags  -> (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FVector                                     NewParam                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FVector                                     NewParam1                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABuff_TekStrider_LargeCannon_C::traceline(const struct FVector& NewParam, const struct FVector& NewParam1)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_TekStrider_LargeCannon.Buff_TekStrider_LargeCannon_C.trace line");
		
		ABuff_TekStrider_LargeCannon_C_traceline_Params params {};
		params.NewParam = NewParam;
		params.NewParam1 = NewParam1;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Buff_TekStrider_LargeCannon.Buff_TekStrider_LargeCannon_C.Request Player Shot Loc
	 * 		Flags  -> (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
	 */
	void ABuff_TekStrider_LargeCannon_C::RequestPlayerShotLoc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_TekStrider_LargeCannon.Buff_TekStrider_LargeCannon_C.Request Player Shot Loc");
		
		ABuff_TekStrider_LargeCannon_C_RequestPlayerShotLoc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Buff_TekStrider_LargeCannon.Buff_TekStrider_LargeCannon_C.ExecuteUbergraph_Buff_TekStrider_LargeCannon
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABuff_TekStrider_LargeCannon_C::ExecuteUbergraph_Buff_TekStrider_LargeCannon(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_TekStrider_LargeCannon.Buff_TekStrider_LargeCannon_C.ExecuteUbergraph_Buff_TekStrider_LargeCannon");
		
		ABuff_TekStrider_LargeCannon_C_ExecuteUbergraph_Buff_TekStrider_LargeCannon_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABuff_TekStrider_LargeCannon_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABuff_TekStrider_LargeCannon_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass Buff_TekStrider_LargeCannon.Buff_TekStrider_LargeCannon_C");
		return ptr;
	}

}


