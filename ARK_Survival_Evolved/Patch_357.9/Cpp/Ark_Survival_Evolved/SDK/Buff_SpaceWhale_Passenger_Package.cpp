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
	 * 		Name   -> Function Buff_SpaceWhale_Passenger.Buff_SpaceWhale_Passenger_C.BuffTickServer
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              DeltaTime                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABuff_SpaceWhale_Passenger_C::BuffTickServer(float DeltaTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_SpaceWhale_Passenger.Buff_SpaceWhale_Passenger_C.BuffTickServer");
		
		ABuff_SpaceWhale_Passenger_C_BuffTickServer_Params params {};
		params.DeltaTime = DeltaTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Buff_SpaceWhale_Passenger.Buff_SpaceWhale_Passenger_C.ReceiveBeginPlay
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABuff_SpaceWhale_Passenger_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_SpaceWhale_Passenger.Buff_SpaceWhale_Passenger_C.ReceiveBeginPlay");
		
		ABuff_SpaceWhale_Passenger_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Buff_SpaceWhale_Passenger.Buff_SpaceWhale_Passenger_C.BPHandleOnStopFire
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               bFromGamepad                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABuff_SpaceWhale_Passenger_C::BPHandleOnStopFire(bool bFromGamepad)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_SpaceWhale_Passenger.Buff_SpaceWhale_Passenger_C.BPHandleOnStopFire");
		
		ABuff_SpaceWhale_Passenger_C_BPHandleOnStopFire_Params params {};
		params.bFromGamepad = bFromGamepad;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Buff_SpaceWhale_Passenger.Buff_SpaceWhale_Passenger_C.BPHandleOnStartFire
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               bFromGamepad                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABuff_SpaceWhale_Passenger_C::BPHandleOnStartFire(bool bFromGamepad)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_SpaceWhale_Passenger.Buff_SpaceWhale_Passenger_C.BPHandleOnStartFire");
		
		ABuff_SpaceWhale_Passenger_C_BPHandleOnStartFire_Params params {};
		params.bFromGamepad = bFromGamepad;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Buff_SpaceWhale_Passenger.Buff_SpaceWhale_Passenger_C.BuffTickClient
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              DeltaTime                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABuff_SpaceWhale_Passenger_C::BuffTickClient(float DeltaTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_SpaceWhale_Passenger.Buff_SpaceWhale_Passenger_C.BuffTickClient");
		
		ABuff_SpaceWhale_Passenger_C_BuffTickClient_Params params {};
		params.DeltaTime = DeltaTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Buff_SpaceWhale_Passenger.Buff_SpaceWhale_Passenger_C.BPCheckPreventInput
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		EPrimalCharacterInputType                          inputType                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	bool ABuff_SpaceWhale_Passenger_C::BPCheckPreventInput(EPrimalCharacterInputType inputType)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_SpaceWhale_Passenger.Buff_SpaceWhale_Passenger_C.BPCheckPreventInput");
		
		ABuff_SpaceWhale_Passenger_C_BPCheckPreventInput_Params params {};
		params.inputType = inputType;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Buff_SpaceWhale_Passenger.Buff_SpaceWhale_Passenger_C.GetFireTransform
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FVector                                     Location                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FVector                                     Heading                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               FireLeft                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABuff_SpaceWhale_Passenger_C::GetFireTransform(struct FVector* Location, struct FVector* Heading, bool* FireLeft)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_SpaceWhale_Passenger.Buff_SpaceWhale_Passenger_C.GetFireTransform");
		
		ABuff_SpaceWhale_Passenger_C_GetFireTransform_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Location != nullptr)
			*Location = params.Location;
		if (Heading != nullptr)
			*Heading = params.Heading;
		if (FireLeft != nullptr)
			*FireLeft = params.FireLeft;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Buff_SpaceWhale_Passenger.Buff_SpaceWhale_Passenger_C.IsElectricalStormActive
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               _return_                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABuff_SpaceWhale_Passenger_C::IsElectricalStormActive(bool* _return_)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_SpaceWhale_Passenger.Buff_SpaceWhale_Passenger_C.IsElectricalStormActive");
		
		ABuff_SpaceWhale_Passenger_C_IsElectricalStormActive_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (_return_ != nullptr)
			*_return_ = params._return_;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Buff_SpaceWhale_Passenger.Buff_SpaceWhale_Passenger_C.GetSocketClampDelta
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		float                                              OutSocketClampDelta                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABuff_SpaceWhale_Passenger_C::GetSocketClampDelta(float* OutSocketClampDelta)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_SpaceWhale_Passenger.Buff_SpaceWhale_Passenger_C.GetSocketClampDelta");
		
		ABuff_SpaceWhale_Passenger_C_GetSocketClampDelta_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutSocketClampDelta != nullptr)
			*OutSocketClampDelta = params.OutSocketClampDelta;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Buff_SpaceWhale_Passenger.Buff_SpaceWhale_Passenger_C.BPSetupForInstigator
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AActor*                                      ForInstigator                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABuff_SpaceWhale_Passenger_C::BPSetupForInstigator(class AActor* ForInstigator)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_SpaceWhale_Passenger.Buff_SpaceWhale_Passenger_C.BPSetupForInstigator");
		
		ABuff_SpaceWhale_Passenger_C_BPSetupForInstigator_Params params {};
		params.ForInstigator = ForInstigator;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Buff_SpaceWhale_Passenger.Buff_SpaceWhale_Passenger_C.BPDrawBuffStatusHUD
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AShooterHUD*                                 HUD                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		float                                              XPos                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		float                                              YPos                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		float                                              ScaleMult                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABuff_SpaceWhale_Passenger_C::BPDrawBuffStatusHUD(class AShooterHUD* HUD, float XPos, float YPos, float ScaleMult)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_SpaceWhale_Passenger.Buff_SpaceWhale_Passenger_C.BPDrawBuffStatusHUD");
		
		ABuff_SpaceWhale_Passenger_C_BPDrawBuffStatusHUD_Params params {};
		params.HUD = HUD;
		params.XPos = XPos;
		params.YPos = YPos;
		params.ScaleMult = ScaleMult;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Buff_SpaceWhale_Passenger.Buff_SpaceWhale_Passenger_C.IsAllowedToFire
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		bool                                               bAllowed                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABuff_SpaceWhale_Passenger_C::IsAllowedToFire(bool* bAllowed)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_SpaceWhale_Passenger.Buff_SpaceWhale_Passenger_C.IsAllowedToFire");
		
		ABuff_SpaceWhale_Passenger_C_IsAllowedToFire_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (bAllowed != nullptr)
			*bAllowed = params.bAllowed;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Buff_SpaceWhale_Passenger.Buff_SpaceWhale_Passenger_C.SetTargeting
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               bTargetingEnabled                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABuff_SpaceWhale_Passenger_C::SetTargeting(bool bTargetingEnabled)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_SpaceWhale_Passenger.Buff_SpaceWhale_Passenger_C.SetTargeting");
		
		ABuff_SpaceWhale_Passenger_C_SetTargeting_Params params {};
		params.bTargetingEnabled = bTargetingEnabled;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Buff_SpaceWhale_Passenger.Buff_SpaceWhale_Passenger_C.LocalDoAttack
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               bDidFire                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABuff_SpaceWhale_Passenger_C::LocalDoAttack(bool* bDidFire)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_SpaceWhale_Passenger.Buff_SpaceWhale_Passenger_C.LocalDoAttack");
		
		ABuff_SpaceWhale_Passenger_C_LocalDoAttack_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (bDidFire != nullptr)
			*bDidFire = params.bDidFire;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Buff_SpaceWhale_Passenger.Buff_SpaceWhale_Passenger_C.GetTekSaddleItem
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UPrimalItem*                                 TekSaddleItem                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABuff_SpaceWhale_Passenger_C::GetTekSaddleItem(class UPrimalItem** TekSaddleItem)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_SpaceWhale_Passenger.Buff_SpaceWhale_Passenger_C.GetTekSaddleItem");
		
		ABuff_SpaceWhale_Passenger_C_GetTekSaddleItem_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (TekSaddleItem != nullptr)
			*TekSaddleItem = params.TekSaddleItem;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Buff_SpaceWhale_Passenger.Buff_SpaceWhale_Passenger_C.UserConstructionScript
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABuff_SpaceWhale_Passenger_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_SpaceWhale_Passenger.Buff_SpaceWhale_Passenger_C.UserConstructionScript");
		
		ABuff_SpaceWhale_Passenger_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Buff_SpaceWhale_Passenger.Buff_SpaceWhale_Passenger_C.ServerDoAttack
	 * 		Flags  -> (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FVector                                     AimAtLoc                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FVector                                     ServerSpawnAtLoc                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               FireLeft                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABuff_SpaceWhale_Passenger_C::ServerDoAttack(const struct FVector& AimAtLoc, const struct FVector& ServerSpawnAtLoc, bool FireLeft)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_SpaceWhale_Passenger.Buff_SpaceWhale_Passenger_C.ServerDoAttack");
		
		ABuff_SpaceWhale_Passenger_C_ServerDoAttack_Params params {};
		params.AimAtLoc = AimAtLoc;
		params.ServerSpawnAtLoc = ServerSpawnAtLoc;
		params.FireLeft = FireLeft;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Buff_SpaceWhale_Passenger.Buff_SpaceWhale_Passenger_C.DoAttack
	 * 		Flags  -> (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FVector                                     AimAtLoc                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FVector                                     ServerSpawnAtLoc                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class AShooterCharacter*                           Shooter                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               FireLeft                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABuff_SpaceWhale_Passenger_C::DoAttack(const struct FVector& AimAtLoc, const struct FVector& ServerSpawnAtLoc, class AShooterCharacter* Shooter, bool FireLeft)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_SpaceWhale_Passenger.Buff_SpaceWhale_Passenger_C.DoAttack");
		
		ABuff_SpaceWhale_Passenger_C_DoAttack_Params params {};
		params.AimAtLoc = AimAtLoc;
		params.ServerSpawnAtLoc = ServerSpawnAtLoc;
		params.Shooter = Shooter;
		params.FireLeft = FireLeft;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Buff_SpaceWhale_Passenger.Buff_SpaceWhale_Passenger_C.CheckForItem
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ABuff_SpaceWhale_Passenger_C::CheckForItem()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_SpaceWhale_Passenger.Buff_SpaceWhale_Passenger_C.CheckForItem");
		
		ABuff_SpaceWhale_Passenger_C_CheckForItem_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Buff_SpaceWhale_Passenger.Buff_SpaceWhale_Passenger_C.ServerNotifyCurrentAimRotation
	 * 		Flags  -> (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FRotator                                    Rot                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABuff_SpaceWhale_Passenger_C::ServerNotifyCurrentAimRotation(const struct FRotator& Rot)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_SpaceWhale_Passenger.Buff_SpaceWhale_Passenger_C.ServerNotifyCurrentAimRotation");
		
		ABuff_SpaceWhale_Passenger_C_ServerNotifyCurrentAimRotation_Params params {};
		params.Rot = Rot;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Buff_SpaceWhale_Passenger.Buff_SpaceWhale_Passenger_C.ExecuteUbergraph_Buff_SpaceWhale_Passenger
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABuff_SpaceWhale_Passenger_C::ExecuteUbergraph_Buff_SpaceWhale_Passenger(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_SpaceWhale_Passenger.Buff_SpaceWhale_Passenger_C.ExecuteUbergraph_Buff_SpaceWhale_Passenger");
		
		ABuff_SpaceWhale_Passenger_C_ExecuteUbergraph_Buff_SpaceWhale_Passenger_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABuff_SpaceWhale_Passenger_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABuff_SpaceWhale_Passenger_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass Buff_SpaceWhale_Passenger.Buff_SpaceWhale_Passenger_C");
		return ptr;
	}

}


