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
	 * 		Name   -> Function Buff_TekStrider_SilenceCannon.Buff_TekStrider_SilenceCannon_C.BPGetHUDElements
	 * 		Flags  -> (Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class APlayerController*                           ForPC                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		TArray<struct FHUDElement>                         OutElements                                                (Parm, OutParm, ZeroConstructor)
	 */
	void ABuff_TekStrider_SilenceCannon_C::BPGetHUDElements(class APlayerController* ForPC, TArray<struct FHUDElement>* OutElements)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_TekStrider_SilenceCannon.Buff_TekStrider_SilenceCannon_C.BPGetHUDElements");
		
		ABuff_TekStrider_SilenceCannon_C_BPGetHUDElements_Params params {};
		params.ForPC = ForPC;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutElements != nullptr)
			*OutElements = params.OutElements;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Buff_TekStrider_SilenceCannon.Buff_TekStrider_SilenceCannon_C.is ai controlled
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               NewParam                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABuff_TekStrider_SilenceCannon_C::isaicontrolled(bool* NewParam)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_TekStrider_SilenceCannon.Buff_TekStrider_SilenceCannon_C.is ai controlled");
		
		ABuff_TekStrider_SilenceCannon_C_isaicontrolled_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (NewParam != nullptr)
			*NewParam = params.NewParam;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Buff_TekStrider_SilenceCannon.Buff_TekStrider_SilenceCannon_C.is target within angle
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class APrimalDinoCharacter*                        NewParam                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               NewParam1                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABuff_TekStrider_SilenceCannon_C::istargetwithinangle(class APrimalDinoCharacter* NewParam, bool* NewParam1)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_TekStrider_SilenceCannon.Buff_TekStrider_SilenceCannon_C.is target within angle");
		
		ABuff_TekStrider_SilenceCannon_C_istargetwithinangle_Params params {};
		params.NewParam = NewParam;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (NewParam1 != nullptr)
			*NewParam1 = params.NewParam1;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Buff_TekStrider_SilenceCannon.Buff_TekStrider_SilenceCannon_C.CanFire
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               fromanimbp                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class ABuff_ChargeEmitter_Strider_C*               AsBuff_ChargeEmitter_Strider_C                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	bool ABuff_TekStrider_SilenceCannon_C::CanFire(bool fromanimbp, class ABuff_ChargeEmitter_Strider_C** AsBuff_ChargeEmitter_Strider_C)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_TekStrider_SilenceCannon.Buff_TekStrider_SilenceCannon_C.CanFire");
		
		ABuff_TekStrider_SilenceCannon_C_CanFire_Params params {};
		params.fromanimbp = fromanimbp;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (AsBuff_ChargeEmitter_Strider_C != nullptr)
			*AsBuff_ChargeEmitter_Strider_C = params.AsBuff_ChargeEmitter_Strider_C;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Buff_TekStrider_SilenceCannon.Buff_TekStrider_SilenceCannon_C.BuffTickClient
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              DeltaTime                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABuff_TekStrider_SilenceCannon_C::BuffTickClient(float DeltaTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_TekStrider_SilenceCannon.Buff_TekStrider_SilenceCannon_C.BuffTickClient");
		
		ABuff_TekStrider_SilenceCannon_C_BuffTickClient_Params params {};
		params.DeltaTime = DeltaTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Buff_TekStrider_SilenceCannon.Buff_TekStrider_SilenceCannon_C.Trigger
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABuff_TekStrider_SilenceCannon_C::Trigger()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_TekStrider_SilenceCannon.Buff_TekStrider_SilenceCannon_C.Trigger");
		
		ABuff_TekStrider_SilenceCannon_C_Trigger_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Buff_TekStrider_SilenceCannon.Buff_TekStrider_SilenceCannon_C.BPSetupForInstigator
	 * 		Flags  -> (Event, Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AActor*                                      ForInstigator                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABuff_TekStrider_SilenceCannon_C::BPSetupForInstigator(class AActor* ForInstigator)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_TekStrider_SilenceCannon.Buff_TekStrider_SilenceCannon_C.BPSetupForInstigator");
		
		ABuff_TekStrider_SilenceCannon_C_BPSetupForInstigator_Params params {};
		params.ForInstigator = ForInstigator;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Buff_TekStrider_SilenceCannon.Buff_TekStrider_SilenceCannon_C.IsDinoInCone?
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class APrimalCharacter*                            Dino                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		TArray<struct FHitResult>                          hitresult                                                  (Parm, OutParm, ZeroConstructor, ReferenceParm)
	 * 		bool                                               IsInCone                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABuff_TekStrider_SilenceCannon_C::IsDinoInCone(class APrimalCharacter* Dino, TArray<struct FHitResult>* hitresult, bool* IsInCone)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_TekStrider_SilenceCannon.Buff_TekStrider_SilenceCannon_C.IsDinoInCone?");
		
		ABuff_TekStrider_SilenceCannon_C_IsDinoInCone_Params params {};
		params.Dino = Dino;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (hitresult != nullptr)
			*hitresult = params.hitresult;
		if (IsInCone != nullptr)
			*IsInCone = params.IsInCone;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Buff_TekStrider_SilenceCannon.Buff_TekStrider_SilenceCannon_C.Get Cone Forward
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		struct FVector                                     Forward                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABuff_TekStrider_SilenceCannon_C::GetConeForward(struct FVector* Forward)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_TekStrider_SilenceCannon.Buff_TekStrider_SilenceCannon_C.Get Cone Forward");
		
		ABuff_TekStrider_SilenceCannon_C_GetConeForward_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Forward != nullptr)
			*Forward = params.Forward;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Buff_TekStrider_SilenceCannon.Buff_TekStrider_SilenceCannon_C.GetConeOrigin
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		struct FVector                                     ConeOrigin                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABuff_TekStrider_SilenceCannon_C::GetConeOrigin(struct FVector* ConeOrigin)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_TekStrider_SilenceCannon.Buff_TekStrider_SilenceCannon_C.GetConeOrigin");
		
		ABuff_TekStrider_SilenceCannon_C_GetConeOrigin_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (ConeOrigin != nullptr)
			*ConeOrigin = params.ConeOrigin;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Buff_TekStrider_SilenceCannon.Buff_TekStrider_SilenceCannon_C.UserConstructionScript
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABuff_TekStrider_SilenceCannon_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_TekStrider_SilenceCannon.Buff_TekStrider_SilenceCannon_C.UserConstructionScript");
		
		ABuff_TekStrider_SilenceCannon_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Buff_TekStrider_SilenceCannon.Buff_TekStrider_SilenceCannon_C.Multicast_Fire
	 * 		Flags  -> (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
	 */
	void ABuff_TekStrider_SilenceCannon_C::Multicast_Fire()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_TekStrider_SilenceCannon.Buff_TekStrider_SilenceCannon_C.Multicast_Fire");
		
		ABuff_TekStrider_SilenceCannon_C_Multicast_Fire_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Buff_TekStrider_SilenceCannon.Buff_TekStrider_SilenceCannon_C.ExecuteUbergraph_Buff_TekStrider_SilenceCannon
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABuff_TekStrider_SilenceCannon_C::ExecuteUbergraph_Buff_TekStrider_SilenceCannon(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_TekStrider_SilenceCannon.Buff_TekStrider_SilenceCannon_C.ExecuteUbergraph_Buff_TekStrider_SilenceCannon");
		
		ABuff_TekStrider_SilenceCannon_C_ExecuteUbergraph_Buff_TekStrider_SilenceCannon_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABuff_TekStrider_SilenceCannon_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABuff_TekStrider_SilenceCannon_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass Buff_TekStrider_SilenceCannon.Buff_TekStrider_SilenceCannon_C");
		return ptr;
	}

}


