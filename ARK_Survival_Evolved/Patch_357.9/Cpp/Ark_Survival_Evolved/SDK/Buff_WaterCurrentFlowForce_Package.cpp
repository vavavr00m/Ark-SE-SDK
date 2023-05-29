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
	 * 		Name   -> Function Buff_WaterCurrentFlowForce.Buff_WaterCurrentFlowForce_C.OnClearPassenger
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class APrimalCharacter*                            Passenger                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class APrimalDinoCharacter*                        ForDino                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		int32_t                                            SeatIndex                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABuff_WaterCurrentFlowForce_C::OnClearPassenger(class APrimalCharacter* Passenger, class APrimalDinoCharacter* ForDino, int32_t SeatIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_WaterCurrentFlowForce.Buff_WaterCurrentFlowForce_C.OnClearPassenger");
		
		ABuff_WaterCurrentFlowForce_C_OnClearPassenger_Params params {};
		params.Passenger = Passenger;
		params.ForDino = ForDino;
		params.SeatIndex = SeatIndex;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Buff_WaterCurrentFlowForce.Buff_WaterCurrentFlowForce_C.OnClearRider
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AShooterCharacter*                           forCharacter                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class APrimalDinoCharacter*                        ForDino                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABuff_WaterCurrentFlowForce_C::OnClearRider(class AShooterCharacter* forCharacter, class APrimalDinoCharacter* ForDino)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_WaterCurrentFlowForce.Buff_WaterCurrentFlowForce_C.OnClearRider");
		
		ABuff_WaterCurrentFlowForce_C_OnClearRider_Params params {};
		params.forCharacter = forCharacter;
		params.ForDino = ForDino;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Buff_WaterCurrentFlowForce.Buff_WaterCurrentFlowForce_C.On Set Passenger
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class APrimalCharacter*                            Passenger                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class APrimalDinoCharacter*                        ForDino                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		int32_t                                            SeatIndex                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABuff_WaterCurrentFlowForce_C::OnSetPassenger(class APrimalCharacter* Passenger, class APrimalDinoCharacter* ForDino, int32_t SeatIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_WaterCurrentFlowForce.Buff_WaterCurrentFlowForce_C.On Set Passenger");
		
		ABuff_WaterCurrentFlowForce_C_OnSetPassenger_Params params {};
		params.Passenger = Passenger;
		params.ForDino = ForDino;
		params.SeatIndex = SeatIndex;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Buff_WaterCurrentFlowForce.Buff_WaterCurrentFlowForce_C.OnSetRider
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AShooterCharacter*                           forCharacter                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class APrimalDinoCharacter*                        ForDino                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABuff_WaterCurrentFlowForce_C::OnSetRider(class AShooterCharacter* forCharacter, class APrimalDinoCharacter* ForDino)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_WaterCurrentFlowForce.Buff_WaterCurrentFlowForce_C.OnSetRider");
		
		ABuff_WaterCurrentFlowForce_C_OnSetRider_Params params {};
		params.forCharacter = forCharacter;
		params.ForDino = ForDino;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Buff_WaterCurrentFlowForce.Buff_WaterCurrentFlowForce_C.SetWaterCurrentBuffActivation
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               bActive                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABuff_WaterCurrentFlowForce_C::SetWaterCurrentBuffActivation(bool bActive)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_WaterCurrentFlowForce.Buff_WaterCurrentFlowForce_C.SetWaterCurrentBuffActivation");
		
		ABuff_WaterCurrentFlowForce_C_SetWaterCurrentBuffActivation_Params params {};
		params.bActive = bActive;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Buff_WaterCurrentFlowForce.Buff_WaterCurrentFlowForce_C.BPCustomAllowAddBuff
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class APrimalCharacter*                            forCharacter                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class AActor*                                      DamageCauser                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	bool ABuff_WaterCurrentFlowForce_C::BPCustomAllowAddBuff(class APrimalCharacter* forCharacter, class AActor* DamageCauser)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_WaterCurrentFlowForce.Buff_WaterCurrentFlowForce_C.BPCustomAllowAddBuff");
		
		ABuff_WaterCurrentFlowForce_C_BPCustomAllowAddBuff_Params params {};
		params.forCharacter = forCharacter;
		params.DamageCauser = DamageCauser;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Buff_WaterCurrentFlowForce.Buff_WaterCurrentFlowForce_C.BPSetupForInstigator
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AActor*                                      ForInstigator                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABuff_WaterCurrentFlowForce_C::BPSetupForInstigator(class AActor* ForInstigator)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_WaterCurrentFlowForce.Buff_WaterCurrentFlowForce_C.BPSetupForInstigator");
		
		ABuff_WaterCurrentFlowForce_C_BPSetupForInstigator_Params params {};
		params.ForInstigator = ForInstigator;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Buff_WaterCurrentFlowForce.Buff_WaterCurrentFlowForce_C.BPOnInstigatorMovementModeChangedNotify
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		EMovementMode                                      PrevMovementMode                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		unsigned char                                      PreviousCustomMode                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		EMovementMode                                      NewMovementMode                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		unsigned char                                      NewCustomMode                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABuff_WaterCurrentFlowForce_C::BPOnInstigatorMovementModeChangedNotify(EMovementMode PrevMovementMode, unsigned char PreviousCustomMode, EMovementMode NewMovementMode, unsigned char NewCustomMode)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_WaterCurrentFlowForce.Buff_WaterCurrentFlowForce_C.BPOnInstigatorMovementModeChangedNotify");
		
		ABuff_WaterCurrentFlowForce_C_BPOnInstigatorMovementModeChangedNotify_Params params {};
		params.PrevMovementMode = PrevMovementMode;
		params.PreviousCustomMode = PreviousCustomMode;
		params.NewMovementMode = NewMovementMode;
		params.NewCustomMode = NewCustomMode;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Buff_WaterCurrentFlowForce.Buff_WaterCurrentFlowForce_C.BP_OverrideCharacterSwimmingVelocity
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FVector                                     InitialVelocity                                            (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor)
	 * 		struct FVector                                     Gravity                                                    (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor)
	 * 		float                                              FluidFriction                                              (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor)
	 * 		float                                              NetBuoyancy                                                (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor)
	 * 		float                                              DeltaTime                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	struct FVector ABuff_WaterCurrentFlowForce_C::BP_OverrideCharacterSwimmingVelocity(struct FVector* InitialVelocity, struct FVector* Gravity, float* FluidFriction, float* NetBuoyancy, float DeltaTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_WaterCurrentFlowForce.Buff_WaterCurrentFlowForce_C.BP_OverrideCharacterSwimmingVelocity");
		
		ABuff_WaterCurrentFlowForce_C_BP_OverrideCharacterSwimmingVelocity_Params params {};
		params.DeltaTime = DeltaTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (InitialVelocity != nullptr)
			*InitialVelocity = params.InitialVelocity;
		if (Gravity != nullptr)
			*Gravity = params.Gravity;
		if (FluidFriction != nullptr)
			*FluidFriction = params.FluidFriction;
		if (NetBuoyancy != nullptr)
			*NetBuoyancy = params.NetBuoyancy;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Buff_WaterCurrentFlowForce.Buff_WaterCurrentFlowForce_C.AllowPostProcessEffect
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 */
	bool ABuff_WaterCurrentFlowForce_C::AllowPostProcessEffect()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_WaterCurrentFlowForce.Buff_WaterCurrentFlowForce_C.AllowPostProcessEffect");
		
		ABuff_WaterCurrentFlowForce_C_AllowPostProcessEffect_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Buff_WaterCurrentFlowForce.Buff_WaterCurrentFlowForce_C.BuffTickServer
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              DeltaTime                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABuff_WaterCurrentFlowForce_C::BuffTickServer(float DeltaTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_WaterCurrentFlowForce.Buff_WaterCurrentFlowForce_C.BuffTickServer");
		
		ABuff_WaterCurrentFlowForce_C_BuffTickServer_Params params {};
		params.DeltaTime = DeltaTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Buff_WaterCurrentFlowForce.Buff_WaterCurrentFlowForce_C.BPDeactivated
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AActor*                                      ForInstigator                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABuff_WaterCurrentFlowForce_C::BPDeactivated(class AActor* ForInstigator)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_WaterCurrentFlowForce.Buff_WaterCurrentFlowForce_C.BPDeactivated");
		
		ABuff_WaterCurrentFlowForce_C_BPDeactivated_Params params {};
		params.ForInstigator = ForInstigator;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Buff_WaterCurrentFlowForce.Buff_WaterCurrentFlowForce_C.BPActivated
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AActor*                                      ForInstigator                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABuff_WaterCurrentFlowForce_C::BPActivated(class AActor* ForInstigator)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_WaterCurrentFlowForce.Buff_WaterCurrentFlowForce_C.BPActivated");
		
		ABuff_WaterCurrentFlowForce_C_BPActivated_Params params {};
		params.ForInstigator = ForInstigator;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Buff_WaterCurrentFlowForce.Buff_WaterCurrentFlowForce_C.UserConstructionScript
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABuff_WaterCurrentFlowForce_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_WaterCurrentFlowForce.Buff_WaterCurrentFlowForce_C.UserConstructionScript");
		
		ABuff_WaterCurrentFlowForce_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Buff_WaterCurrentFlowForce.Buff_WaterCurrentFlowForce_C.ExecuteUbergraph_Buff_WaterCurrentFlowForce
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABuff_WaterCurrentFlowForce_C::ExecuteUbergraph_Buff_WaterCurrentFlowForce(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_WaterCurrentFlowForce.Buff_WaterCurrentFlowForce_C.ExecuteUbergraph_Buff_WaterCurrentFlowForce");
		
		ABuff_WaterCurrentFlowForce_C_ExecuteUbergraph_Buff_WaterCurrentFlowForce_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABuff_WaterCurrentFlowForce_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABuff_WaterCurrentFlowForce_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass Buff_WaterCurrentFlowForce.Buff_WaterCurrentFlowForce_C");
		return ptr;
	}

}


