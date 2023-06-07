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
	 * 		Name   -> Function Buff_SpaceWhaleTeleport.Buff_SpaceWhaleTeleport_C.BPDeactivated
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AActor*                                      ForInstigator                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABuff_SpaceWhaleTeleport_C::BPDeactivated(class AActor* ForInstigator)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_SpaceWhaleTeleport.Buff_SpaceWhaleTeleport_C.BPDeactivated");
		
		ABuff_SpaceWhaleTeleport_C_BPDeactivated_Params params {};
		params.ForInstigator = ForInstigator;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Buff_SpaceWhaleTeleport.Buff_SpaceWhaleTeleport_C.ReceiveDestroyed
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABuff_SpaceWhaleTeleport_C::ReceiveDestroyed()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_SpaceWhaleTeleport.Buff_SpaceWhaleTeleport_C.ReceiveDestroyed");
		
		ABuff_SpaceWhaleTeleport_C_ReceiveDestroyed_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Buff_SpaceWhaleTeleport.Buff_SpaceWhaleTeleport_C.BuffTickClient
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              DeltaTime                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABuff_SpaceWhaleTeleport_C::BuffTickClient(float DeltaTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_SpaceWhaleTeleport.Buff_SpaceWhaleTeleport_C.BuffTickClient");
		
		ABuff_SpaceWhaleTeleport_C_BuffTickClient_Params params {};
		params.DeltaTime = DeltaTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Buff_SpaceWhaleTeleport.Buff_SpaceWhaleTeleport_C.BPSetupForInstigator
	 * 		Flags  -> (Event, Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AActor*                                      ForInstigator                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABuff_SpaceWhaleTeleport_C::BPSetupForInstigator(class AActor* ForInstigator)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_SpaceWhaleTeleport.Buff_SpaceWhaleTeleport_C.BPSetupForInstigator");
		
		ABuff_SpaceWhaleTeleport_C_BPSetupForInstigator_Params params {};
		params.ForInstigator = ForInstigator;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Buff_SpaceWhaleTeleport.Buff_SpaceWhaleTeleport_C.BPCustomAllowAddBuff
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class APrimalCharacter*                            forCharacter                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class AActor*                                      DamageCauser                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	bool ABuff_SpaceWhaleTeleport_C::BPCustomAllowAddBuff(class APrimalCharacter* forCharacter, class AActor* DamageCauser)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_SpaceWhaleTeleport.Buff_SpaceWhaleTeleport_C.BPCustomAllowAddBuff");
		
		ABuff_SpaceWhaleTeleport_C_BPCustomAllowAddBuff_Params params {};
		params.forCharacter = forCharacter;
		params.DamageCauser = DamageCauser;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Buff_SpaceWhaleTeleport.Buff_SpaceWhaleTeleport_C.BPPreventInstigatorMovementMode
	 * 		Flags  -> (Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		EMovementMode                                      NewMovementMode                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		unsigned char                                      NewCustomMode                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	bool ABuff_SpaceWhaleTeleport_C::BPPreventInstigatorMovementMode(EMovementMode NewMovementMode, unsigned char NewCustomMode)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_SpaceWhaleTeleport.Buff_SpaceWhaleTeleport_C.BPPreventInstigatorMovementMode");
		
		ABuff_SpaceWhaleTeleport_C_BPPreventInstigatorMovementMode_Params params {};
		params.NewMovementMode = NewMovementMode;
		params.NewCustomMode = NewCustomMode;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Buff_SpaceWhaleTeleport.Buff_SpaceWhaleTeleport_C.BPOnOwnerMassTeleportEvent
	 * 		Flags  -> (Event, Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		EMassTeleportState                                 EventState                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class APrimalCharacter*                            TeleportInitiatedByChar                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABuff_SpaceWhaleTeleport_C::BPOnOwnerMassTeleportEvent(EMassTeleportState EventState, class APrimalCharacter* TeleportInitiatedByChar)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_SpaceWhaleTeleport.Buff_SpaceWhaleTeleport_C.BPOnOwnerMassTeleportEvent");
		
		ABuff_SpaceWhaleTeleport_C_BPOnOwnerMassTeleportEvent_Params params {};
		params.EventState = EventState;
		params.TeleportInitiatedByChar = TeleportInitiatedByChar;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Buff_SpaceWhaleTeleport.Buff_SpaceWhaleTeleport_C.UserConstructionScript
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABuff_SpaceWhaleTeleport_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_SpaceWhaleTeleport.Buff_SpaceWhaleTeleport_C.UserConstructionScript");
		
		ABuff_SpaceWhaleTeleport_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Buff_SpaceWhaleTeleport.Buff_SpaceWhaleTeleport_C.MultiHyperdriveEffect
	 * 		Flags  -> (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class USceneComponent*                             MeshComp                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FVector                                     Start                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FVector                                     End                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABuff_SpaceWhaleTeleport_C::MultiHyperdriveEffect(class USceneComponent* MeshComp, const struct FVector& Start, const struct FVector& End)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_SpaceWhaleTeleport.Buff_SpaceWhaleTeleport_C.MultiHyperdriveEffect");
		
		ABuff_SpaceWhaleTeleport_C_MultiHyperdriveEffect_Params params {};
		params.MeshComp = MeshComp;
		params.Start = Start;
		params.End = End;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Buff_SpaceWhaleTeleport.Buff_SpaceWhaleTeleport_C.OnMassTeleportTriggered
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               Success                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABuff_SpaceWhaleTeleport_C::OnMassTeleportTriggered(bool Success)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_SpaceWhaleTeleport.Buff_SpaceWhaleTeleport_C.OnMassTeleportTriggered");
		
		ABuff_SpaceWhaleTeleport_C_OnMassTeleportTriggered_Params params {};
		params.Success = Success;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Buff_SpaceWhaleTeleport.Buff_SpaceWhaleTeleport_C.OnMassTeleportStarted
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ABuff_SpaceWhaleTeleport_C::OnMassTeleportStarted()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_SpaceWhaleTeleport.Buff_SpaceWhaleTeleport_C.OnMassTeleportStarted");
		
		ABuff_SpaceWhaleTeleport_C_OnMassTeleportStarted_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Buff_SpaceWhaleTeleport.Buff_SpaceWhaleTeleport_C.OnMassTeleportCompleted
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ABuff_SpaceWhaleTeleport_C::OnMassTeleportCompleted()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_SpaceWhaleTeleport.Buff_SpaceWhaleTeleport_C.OnMassTeleportCompleted");
		
		ABuff_SpaceWhaleTeleport_C_OnMassTeleportCompleted_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Buff_SpaceWhaleTeleport.Buff_SpaceWhaleTeleport_C.BPActivated
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AActor*                                      ForInstigator                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABuff_SpaceWhaleTeleport_C::BPActivated(class AActor* ForInstigator)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_SpaceWhaleTeleport.Buff_SpaceWhaleTeleport_C.BPActivated");
		
		ABuff_SpaceWhaleTeleport_C_BPActivated_Params params {};
		params.ForInstigator = ForInstigator;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Buff_SpaceWhaleTeleport.Buff_SpaceWhaleTeleport_C.ReceiveBeginPlay
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABuff_SpaceWhaleTeleport_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_SpaceWhaleTeleport.Buff_SpaceWhaleTeleport_C.ReceiveBeginPlay");
		
		ABuff_SpaceWhaleTeleport_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Buff_SpaceWhaleTeleport.Buff_SpaceWhaleTeleport_C.SyncMovementMode
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ABuff_SpaceWhaleTeleport_C::SyncMovementMode()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_SpaceWhaleTeleport.Buff_SpaceWhaleTeleport_C.SyncMovementMode");
		
		ABuff_SpaceWhaleTeleport_C_SyncMovementMode_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Buff_SpaceWhaleTeleport.Buff_SpaceWhaleTeleport_C.HideMesh
	 * 		Flags  -> (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               Hide                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABuff_SpaceWhaleTeleport_C::HideMesh(bool Hide)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_SpaceWhaleTeleport.Buff_SpaceWhaleTeleport_C.HideMesh");
		
		ABuff_SpaceWhaleTeleport_C_HideMesh_Params params {};
		params.Hide = Hide;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Buff_SpaceWhaleTeleport.Buff_SpaceWhaleTeleport_C.ExecuteUbergraph_Buff_SpaceWhaleTeleport
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABuff_SpaceWhaleTeleport_C::ExecuteUbergraph_Buff_SpaceWhaleTeleport(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_SpaceWhaleTeleport.Buff_SpaceWhaleTeleport_C.ExecuteUbergraph_Buff_SpaceWhaleTeleport");
		
		ABuff_SpaceWhaleTeleport_C_ExecuteUbergraph_Buff_SpaceWhaleTeleport_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABuff_SpaceWhaleTeleport_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABuff_SpaceWhaleTeleport_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass Buff_SpaceWhaleTeleport.Buff_SpaceWhaleTeleport_C");
		return ptr;
	}

}


