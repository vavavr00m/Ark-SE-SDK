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
	 * 		Name   -> Function Buff_BogSpiderBioGrappled.Buff_BogSpiderBioGrappled_C.BPDeactivated
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AActor*                                      ForInstigator                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABuff_BogSpiderBioGrappled_C::BPDeactivated(class AActor* ForInstigator)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_BogSpiderBioGrappled.Buff_BogSpiderBioGrappled_C.BPDeactivated");
		
		ABuff_BogSpiderBioGrappled_C_BPDeactivated_Params params {};
		params.ForInstigator = ForInstigator;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Buff_BogSpiderBioGrappled.Buff_BogSpiderBioGrappled_C.ReleaseBioGrapple
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABuff_BogSpiderBioGrappled_C::ReleaseBioGrapple()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_BogSpiderBioGrappled.Buff_BogSpiderBioGrappled_C.ReleaseBioGrapple");
		
		ABuff_BogSpiderBioGrappled_C_ReleaseBioGrapple_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Buff_BogSpiderBioGrappled.Buff_BogSpiderBioGrappled_C.BuffTickServer
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              DeltaTime                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABuff_BogSpiderBioGrappled_C::BuffTickServer(float DeltaTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_BogSpiderBioGrappled.Buff_BogSpiderBioGrappled_C.BuffTickServer");
		
		ABuff_BogSpiderBioGrappled_C_BuffTickServer_Params params {};
		params.DeltaTime = DeltaTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Buff_BogSpiderBioGrappled.Buff_BogSpiderBioGrappled_C.BPGetHUDElements
	 * 		Flags  -> (Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class APlayerController*                           ForPC                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		TArray<struct FHUDElement>                         OutElements                                                (Parm, OutParm, ZeroConstructor)
	 */
	void ABuff_BogSpiderBioGrappled_C::BPGetHUDElements(class APlayerController* ForPC, TArray<struct FHUDElement>* OutElements)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_BogSpiderBioGrappled.Buff_BogSpiderBioGrappled_C.BPGetHUDElements");
		
		ABuff_BogSpiderBioGrappled_C_BPGetHUDElements_Params params {};
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
	 * 		Name   -> Function Buff_BogSpiderBioGrappled.Buff_BogSpiderBioGrappled_C.BPServerHandleNetExecCommand
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class APlayerController*                           FromPC                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class FName                                        CommandName                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FBPNetExecParams                            ExecParams                                                 (Parm, OutParm, ReferenceParm)
	 */
	bool ABuff_BogSpiderBioGrappled_C::BPServerHandleNetExecCommand(class APlayerController* FromPC, const class FName& CommandName, struct FBPNetExecParams* ExecParams)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_BogSpiderBioGrappled.Buff_BogSpiderBioGrappled_C.BPServerHandleNetExecCommand");
		
		ABuff_BogSpiderBioGrappled_C_BPServerHandleNetExecCommand_Params params {};
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
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Buff_BogSpiderBioGrappled.Buff_BogSpiderBioGrappled_C.ToggleEnsnareVFX
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void ABuff_BogSpiderBioGrappled_C::ToggleEnsnareVFX()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_BogSpiderBioGrappled.Buff_BogSpiderBioGrappled_C.ToggleEnsnareVFX");
		
		ABuff_BogSpiderBioGrappled_C_ToggleEnsnareVFX_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Buff_BogSpiderBioGrappled.Buff_BogSpiderBioGrappled_C.BuffTickClient
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              DeltaTime                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABuff_BogSpiderBioGrappled_C::BuffTickClient(float DeltaTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_BogSpiderBioGrappled.Buff_BogSpiderBioGrappled_C.BuffTickClient");
		
		ABuff_BogSpiderBioGrappled_C_BuffTickClient_Params params {};
		params.DeltaTime = DeltaTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Buff_BogSpiderBioGrappled.Buff_BogSpiderBioGrappled_C.BPCheckPreventInput
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		EPrimalCharacterInputType                          inputType                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	bool ABuff_BogSpiderBioGrappled_C::BPCheckPreventInput(EPrimalCharacterInputType inputType)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_BogSpiderBioGrappled.Buff_BogSpiderBioGrappled_C.BPCheckPreventInput");
		
		ABuff_BogSpiderBioGrappled_C_BPCheckPreventInput_Params params {};
		params.inputType = inputType;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Buff_BogSpiderBioGrappled.Buff_BogSpiderBioGrappled_C.BPHandleOnStartAltFire
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               bFromGamepad                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABuff_BogSpiderBioGrappled_C::BPHandleOnStartAltFire(bool bFromGamepad)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_BogSpiderBioGrappled.Buff_BogSpiderBioGrappled_C.BPHandleOnStartAltFire");
		
		ABuff_BogSpiderBioGrappled_C_BPHandleOnStartAltFire_Params params {};
		params.bFromGamepad = bFromGamepad;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Buff_BogSpiderBioGrappled.Buff_BogSpiderBioGrappled_C.BPHandleOnStartFire
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               bFromGamepad                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABuff_BogSpiderBioGrappled_C::BPHandleOnStartFire(bool bFromGamepad)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_BogSpiderBioGrappled.Buff_BogSpiderBioGrappled_C.BPHandleOnStartFire");
		
		ABuff_BogSpiderBioGrappled_C_BPHandleOnStartFire_Params params {};
		params.bFromGamepad = bFromGamepad;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Buff_BogSpiderBioGrappled.Buff_BogSpiderBioGrappled_C.OnEnsnared
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABuff_BogSpiderBioGrappled_C::OnEnsnared()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_BogSpiderBioGrappled.Buff_BogSpiderBioGrappled_C.OnEnsnared");
		
		ABuff_BogSpiderBioGrappled_C_OnEnsnared_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Buff_BogSpiderBioGrappled.Buff_BogSpiderBioGrappled_C.OnBioGrappled
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABuff_BogSpiderBioGrappled_C::OnBioGrappled()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_BogSpiderBioGrappled.Buff_BogSpiderBioGrappled_C.OnBioGrappled");
		
		ABuff_BogSpiderBioGrappled_C_OnBioGrappled_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Buff_BogSpiderBioGrappled.Buff_BogSpiderBioGrappled_C.SyncGrapplingBogSpider
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class ABogSpider_Character_BP_C*                   SpiderRef                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABuff_BogSpiderBioGrappled_C::SyncGrapplingBogSpider(class ABogSpider_Character_BP_C* SpiderRef)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_BogSpiderBioGrappled.Buff_BogSpiderBioGrappled_C.SyncGrapplingBogSpider");
		
		ABuff_BogSpiderBioGrappled_C_SyncGrapplingBogSpider_Params params {};
		params.SpiderRef = SpiderRef;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Buff_BogSpiderBioGrappled.Buff_BogSpiderBioGrappled_C.TryStruggle
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               Success                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABuff_BogSpiderBioGrappled_C::TryStruggle(bool* Success)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_BogSpiderBioGrappled.Buff_BogSpiderBioGrappled_C.TryStruggle");
		
		ABuff_BogSpiderBioGrappled_C_TryStruggle_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Success != nullptr)
			*Success = params.Success;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Buff_BogSpiderBioGrappled.Buff_BogSpiderBioGrappled_C.UserConstructionScript
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABuff_BogSpiderBioGrappled_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_BogSpiderBioGrappled.Buff_BogSpiderBioGrappled_C.UserConstructionScript");
		
		ABuff_BogSpiderBioGrappled_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Buff_BogSpiderBioGrappled.Buff_BogSpiderBioGrappled_C.StruggleShake__FinishedFunc
	 * 		Flags  -> (BlueprintEvent)
	 */
	void ABuff_BogSpiderBioGrappled_C::StruggleShake__FinishedFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_BogSpiderBioGrappled.Buff_BogSpiderBioGrappled_C.StruggleShake__FinishedFunc");
		
		ABuff_BogSpiderBioGrappled_C_StruggleShake__FinishedFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Buff_BogSpiderBioGrappled.Buff_BogSpiderBioGrappled_C.StruggleShake__UpdateFunc
	 * 		Flags  -> (BlueprintEvent)
	 */
	void ABuff_BogSpiderBioGrappled_C::StruggleShake__UpdateFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_BogSpiderBioGrappled.Buff_BogSpiderBioGrappled_C.StruggleShake__UpdateFunc");
		
		ABuff_BogSpiderBioGrappled_C_StruggleShake__UpdateFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Buff_BogSpiderBioGrappled.Buff_BogSpiderBioGrappled_C.Server_TryStruggle
	 * 		Flags  -> (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
	 */
	void ABuff_BogSpiderBioGrappled_C::Server_TryStruggle()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_BogSpiderBioGrappled.Buff_BogSpiderBioGrappled_C.Server_TryStruggle");
		
		ABuff_BogSpiderBioGrappled_C_Server_TryStruggle_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Buff_BogSpiderBioGrappled.Buff_BogSpiderBioGrappled_C.Multi_OnBioGrappleEvent
	 * 		Flags  -> (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               bEnsnare                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABuff_BogSpiderBioGrappled_C::Multi_OnBioGrappleEvent(bool bEnsnare)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_BogSpiderBioGrappled.Buff_BogSpiderBioGrappled_C.Multi_OnBioGrappleEvent");
		
		ABuff_BogSpiderBioGrappled_C_Multi_OnBioGrappleEvent_Params params {};
		params.bEnsnare = bEnsnare;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Buff_BogSpiderBioGrappled.Buff_BogSpiderBioGrappled_C.ReceiveBeginPlay
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABuff_BogSpiderBioGrappled_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_BogSpiderBioGrappled.Buff_BogSpiderBioGrappled_C.ReceiveBeginPlay");
		
		ABuff_BogSpiderBioGrappled_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Buff_BogSpiderBioGrappled.Buff_BogSpiderBioGrappled_C.DoHudShake
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ABuff_BogSpiderBioGrappled_C::DoHudShake()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_BogSpiderBioGrappled.Buff_BogSpiderBioGrappled_C.DoHudShake");
		
		ABuff_BogSpiderBioGrappled_C_DoHudShake_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Buff_BogSpiderBioGrappled.Buff_BogSpiderBioGrappled_C.Client_DidStruggle
	 * 		Flags  -> (Net, NetClient, BlueprintCallable, BlueprintEvent)
	 */
	void ABuff_BogSpiderBioGrappled_C::Client_DidStruggle()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_BogSpiderBioGrappled.Buff_BogSpiderBioGrappled_C.Client_DidStruggle");
		
		ABuff_BogSpiderBioGrappled_C_Client_DidStruggle_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Buff_BogSpiderBioGrappled.Buff_BogSpiderBioGrappled_C.ExecuteUbergraph_Buff_BogSpiderBioGrappled
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABuff_BogSpiderBioGrappled_C::ExecuteUbergraph_Buff_BogSpiderBioGrappled(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_BogSpiderBioGrappled.Buff_BogSpiderBioGrappled_C.ExecuteUbergraph_Buff_BogSpiderBioGrappled");
		
		ABuff_BogSpiderBioGrappled_C_ExecuteUbergraph_Buff_BogSpiderBioGrappled_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABuff_BogSpiderBioGrappled_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABuff_BogSpiderBioGrappled_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass Buff_BogSpiderBioGrappled.Buff_BogSpiderBioGrappled_C");
		return ptr;
	}

}


