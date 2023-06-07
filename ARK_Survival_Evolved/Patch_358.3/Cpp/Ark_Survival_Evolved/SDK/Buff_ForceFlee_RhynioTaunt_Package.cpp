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
	 * 		Name   -> Function Buff_ForceFlee_RhynioTaunt.Buff_ForceFlee_RhynioTaunt_C.BPCustomAllowAddBuff
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class APrimalCharacter*                            forCharacter                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class AActor*                                      DamageCauser                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	bool ABuff_ForceFlee_RhynioTaunt_C::BPCustomAllowAddBuff(class APrimalCharacter* forCharacter, class AActor* DamageCauser)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_ForceFlee_RhynioTaunt.Buff_ForceFlee_RhynioTaunt_C.BPCustomAllowAddBuff");
		
		ABuff_ForceFlee_RhynioTaunt_C_BPCustomAllowAddBuff_Params params {};
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
	 * 		Name   -> Function Buff_ForceFlee_RhynioTaunt.Buff_ForceFlee_RhynioTaunt_C.DinoInstigatorClearedRider
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABuff_ForceFlee_RhynioTaunt_C::DinoInstigatorClearedRider()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_ForceFlee_RhynioTaunt.Buff_ForceFlee_RhynioTaunt_C.DinoInstigatorClearedRider");
		
		ABuff_ForceFlee_RhynioTaunt_C_DinoInstigatorClearedRider_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Buff_ForceFlee_RhynioTaunt.Buff_ForceFlee_RhynioTaunt_C.GetBuffPostprocessIntensity
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 */
	float ABuff_ForceFlee_RhynioTaunt_C::GetBuffPostprocessIntensity()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_ForceFlee_RhynioTaunt.Buff_ForceFlee_RhynioTaunt_C.GetBuffPostprocessIntensity");
		
		ABuff_ForceFlee_RhynioTaunt_C_GetBuffPostprocessIntensity_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Buff_ForceFlee_RhynioTaunt.Buff_ForceFlee_RhynioTaunt_C.DinoInstigatorReceivedRider
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AShooterCharacter*                           Rider                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABuff_ForceFlee_RhynioTaunt_C::DinoInstigatorReceivedRider(class AShooterCharacter* Rider)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_ForceFlee_RhynioTaunt.Buff_ForceFlee_RhynioTaunt_C.DinoInstigatorReceivedRider");
		
		ABuff_ForceFlee_RhynioTaunt_C_DinoInstigatorReceivedRider_Params params {};
		params.Rider = Rider;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Buff_ForceFlee_RhynioTaunt.Buff_ForceFlee_RhynioTaunt_C.DisplayRiderNotif
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               ForAttack                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABuff_ForceFlee_RhynioTaunt_C::DisplayRiderNotif(bool ForAttack)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_ForceFlee_RhynioTaunt.Buff_ForceFlee_RhynioTaunt_C.DisplayRiderNotif");
		
		ABuff_ForceFlee_RhynioTaunt_C_DisplayRiderNotif_Params params {};
		params.ForAttack = ForAttack;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Buff_ForceFlee_RhynioTaunt.Buff_ForceFlee_RhynioTaunt_C.BuffTickServer
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              DeltaTime                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABuff_ForceFlee_RhynioTaunt_C::BuffTickServer(float DeltaTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_ForceFlee_RhynioTaunt.Buff_ForceFlee_RhynioTaunt_C.BuffTickServer");
		
		ABuff_ForceFlee_RhynioTaunt_C_BuffTickServer_Params params {};
		params.DeltaTime = DeltaTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Buff_ForceFlee_RhynioTaunt.Buff_ForceFlee_RhynioTaunt_C.RefreshStaticFleeing
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void ABuff_ForceFlee_RhynioTaunt_C::RefreshStaticFleeing()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_ForceFlee_RhynioTaunt.Buff_ForceFlee_RhynioTaunt_C.RefreshStaticFleeing");
		
		ABuff_ForceFlee_RhynioTaunt_C_RefreshStaticFleeing_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Buff_ForceFlee_RhynioTaunt.Buff_ForceFlee_RhynioTaunt_C.BPSetupForInstigator
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AActor*                                      ForInstigator                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABuff_ForceFlee_RhynioTaunt_C::BPSetupForInstigator(class AActor* ForInstigator)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_ForceFlee_RhynioTaunt.Buff_ForceFlee_RhynioTaunt_C.BPSetupForInstigator");
		
		ABuff_ForceFlee_RhynioTaunt_C_BPSetupForInstigator_Params params {};
		params.ForInstigator = ForInstigator;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Buff_ForceFlee_RhynioTaunt.Buff_ForceFlee_RhynioTaunt_C.UserConstructionScript
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABuff_ForceFlee_RhynioTaunt_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_ForceFlee_RhynioTaunt.Buff_ForceFlee_RhynioTaunt_C.UserConstructionScript");
		
		ABuff_ForceFlee_RhynioTaunt_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Buff_ForceFlee_RhynioTaunt.Buff_ForceFlee_RhynioTaunt_C.InpActEvt_Fire_K2Node_InputActionEvent_430
	 * 		Flags  -> (BlueprintEvent)
	 */
	void ABuff_ForceFlee_RhynioTaunt_C::InpActEvt_Fire_K2Node_InputActionEvent_430()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_ForceFlee_RhynioTaunt.Buff_ForceFlee_RhynioTaunt_C.InpActEvt_Fire_K2Node_InputActionEvent_430");
		
		ABuff_ForceFlee_RhynioTaunt_C_InpActEvt_Fire_K2Node_InputActionEvent_430_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Buff_ForceFlee_RhynioTaunt.Buff_ForceFlee_RhynioTaunt_C.InpActEvt_Targeting_K2Node_InputActionEvent_429
	 * 		Flags  -> (BlueprintEvent)
	 */
	void ABuff_ForceFlee_RhynioTaunt_C::InpActEvt_Targeting_K2Node_InputActionEvent_429()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_ForceFlee_RhynioTaunt.Buff_ForceFlee_RhynioTaunt_C.InpActEvt_Targeting_K2Node_InputActionEvent_429");
		
		ABuff_ForceFlee_RhynioTaunt_C_InpActEvt_Targeting_K2Node_InputActionEvent_429_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Buff_ForceFlee_RhynioTaunt.Buff_ForceFlee_RhynioTaunt_C.InpActEvt_Crouch_K2Node_InputActionEvent_428
	 * 		Flags  -> (BlueprintEvent)
	 */
	void ABuff_ForceFlee_RhynioTaunt_C::InpActEvt_Crouch_K2Node_InputActionEvent_428()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_ForceFlee_RhynioTaunt.Buff_ForceFlee_RhynioTaunt_C.InpActEvt_Crouch_K2Node_InputActionEvent_428");
		
		ABuff_ForceFlee_RhynioTaunt_C_InpActEvt_Crouch_K2Node_InputActionEvent_428_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Buff_ForceFlee_RhynioTaunt.Buff_ForceFlee_RhynioTaunt_C.InpActEvt_Jump_K2Node_InputActionEvent_427
	 * 		Flags  -> (BlueprintEvent)
	 */
	void ABuff_ForceFlee_RhynioTaunt_C::InpActEvt_Jump_K2Node_InputActionEvent_427()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_ForceFlee_RhynioTaunt.Buff_ForceFlee_RhynioTaunt_C.InpActEvt_Jump_K2Node_InputActionEvent_427");
		
		ABuff_ForceFlee_RhynioTaunt_C_InpActEvt_Jump_K2Node_InputActionEvent_427_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Buff_ForceFlee_RhynioTaunt.Buff_ForceFlee_RhynioTaunt_C.Multi_SetStaticFleeDest
	 * 		Flags  -> (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FVector                                     Loc                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABuff_ForceFlee_RhynioTaunt_C::Multi_SetStaticFleeDest(const struct FVector& Loc)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_ForceFlee_RhynioTaunt.Buff_ForceFlee_RhynioTaunt_C.Multi_SetStaticFleeDest");
		
		ABuff_ForceFlee_RhynioTaunt_C_Multi_SetStaticFleeDest_Params params {};
		params.Loc = Loc;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Buff_ForceFlee_RhynioTaunt.Buff_ForceFlee_RhynioTaunt_C.Client_DisplayRiderNotif
	 * 		Flags  -> (Net, NetReliable, NetClient, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               ForAttack                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABuff_ForceFlee_RhynioTaunt_C::Client_DisplayRiderNotif(bool ForAttack)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_ForceFlee_RhynioTaunt.Buff_ForceFlee_RhynioTaunt_C.Client_DisplayRiderNotif");
		
		ABuff_ForceFlee_RhynioTaunt_C_Client_DisplayRiderNotif_Params params {};
		params.ForAttack = ForAttack;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Buff_ForceFlee_RhynioTaunt.Buff_ForceFlee_RhynioTaunt_C.Multi_UpdateRiderInput
	 * 		Flags  -> (Net, NetMulticast, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class APlayerController*                           PC                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               Enable                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABuff_ForceFlee_RhynioTaunt_C::Multi_UpdateRiderInput(class APlayerController* PC, bool Enable)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_ForceFlee_RhynioTaunt.Buff_ForceFlee_RhynioTaunt_C.Multi_UpdateRiderInput");
		
		ABuff_ForceFlee_RhynioTaunt_C_Multi_UpdateRiderInput_Params params {};
		params.PC = PC;
		params.Enable = Enable;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Buff_ForceFlee_RhynioTaunt.Buff_ForceFlee_RhynioTaunt_C.ExecuteUbergraph_Buff_ForceFlee_RhynioTaunt
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABuff_ForceFlee_RhynioTaunt_C::ExecuteUbergraph_Buff_ForceFlee_RhynioTaunt(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_ForceFlee_RhynioTaunt.Buff_ForceFlee_RhynioTaunt_C.ExecuteUbergraph_Buff_ForceFlee_RhynioTaunt");
		
		ABuff_ForceFlee_RhynioTaunt_C_ExecuteUbergraph_Buff_ForceFlee_RhynioTaunt_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABuff_ForceFlee_RhynioTaunt_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABuff_ForceFlee_RhynioTaunt_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass Buff_ForceFlee_RhynioTaunt.Buff_ForceFlee_RhynioTaunt_C");
		return ptr;
	}

}


