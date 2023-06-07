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
	 * 		Name   -> Function Gen2_AreaBuff_Base.Gen2_AreaBuff_Base_C.Clear in SPZ
	 * 		Flags  -> (Net, NetReliable, Public, NetClient, BlueprintCallable, BlueprintEvent)
	 */
	void AGen2_AreaBuff_Base_C::ClearinSPZ()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Gen2_AreaBuff_Base.Gen2_AreaBuff_Base_C.Clear in SPZ");
		
		AGen2_AreaBuff_Base_C_ClearinSPZ_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Gen2_AreaBuff_Base.Gen2_AreaBuff_Base_C.SetInSPZ
	 * 		Flags  -> (Net, NetReliable, Public, NetClient, BlueprintCallable, BlueprintEvent)
	 */
	void AGen2_AreaBuff_Base_C::SetInSPZ()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Gen2_AreaBuff_Base.Gen2_AreaBuff_Base_C.SetInSPZ");
		
		AGen2_AreaBuff_Base_C_SetInSPZ_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Gen2_AreaBuff_Base.Gen2_AreaBuff_Base_C.CheckOverhang
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void AGen2_AreaBuff_Base_C::CheckOverhang()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Gen2_AreaBuff_Base.Gen2_AreaBuff_Base_C.CheckOverhang");
		
		AGen2_AreaBuff_Base_C_CheckOverhang_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Gen2_AreaBuff_Base.Gen2_AreaBuff_Base_C.UpdateClouds
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void AGen2_AreaBuff_Base_C::UpdateClouds()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Gen2_AreaBuff_Base.Gen2_AreaBuff_Base_C.UpdateClouds");
		
		AGen2_AreaBuff_Base_C_UpdateClouds_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Gen2_AreaBuff_Base.Gen2_AreaBuff_Base_C.GetClosestStormIntensity
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              Intensity                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AGen2_AreaBuff_Base_C::GetClosestStormIntensity(float* Intensity)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Gen2_AreaBuff_Base.Gen2_AreaBuff_Base_C.GetClosestStormIntensity");
		
		AGen2_AreaBuff_Base_C_GetClosestStormIntensity_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Intensity != nullptr)
			*Intensity = params.Intensity;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Gen2_AreaBuff_Base.Gen2_AreaBuff_Base_C.UpdateLocalTransform
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void AGen2_AreaBuff_Base_C::UpdateLocalTransform()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Gen2_AreaBuff_Base.Gen2_AreaBuff_Base_C.UpdateLocalTransform");
		
		AGen2_AreaBuff_Base_C_UpdateLocalTransform_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Gen2_AreaBuff_Base.Gen2_AreaBuff_Base_C.BPGetHUDElements
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class APlayerController*                           ForPC                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		TArray<struct FHUDElement>                         OutElements                                                (Parm, OutParm, ZeroConstructor)
	 */
	void AGen2_AreaBuff_Base_C::BPGetHUDElements(class APlayerController* ForPC, TArray<struct FHUDElement>* OutElements)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Gen2_AreaBuff_Base.Gen2_AreaBuff_Base_C.BPGetHUDElements");
		
		AGen2_AreaBuff_Base_C_BPGetHUDElements_Params params {};
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
	 * 		Name   -> Function Gen2_AreaBuff_Base.Gen2_AreaBuff_Base_C.SwitchAudioWaterAndCave
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void AGen2_AreaBuff_Base_C::SwitchAudioWaterAndCave()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Gen2_AreaBuff_Base.Gen2_AreaBuff_Base_C.SwitchAudioWaterAndCave");
		
		AGen2_AreaBuff_Base_C_SwitchAudioWaterAndCave_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Gen2_AreaBuff_Base.Gen2_AreaBuff_Base_C.BuffTickServer
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              DeltaTime                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AGen2_AreaBuff_Base_C::BuffTickServer(float DeltaTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Gen2_AreaBuff_Base.Gen2_AreaBuff_Base_C.BuffTickServer");
		
		AGen2_AreaBuff_Base_C_BuffTickServer_Params params {};
		params.DeltaTime = DeltaTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Gen2_AreaBuff_Base.Gen2_AreaBuff_Base_C.BuffTickClient
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              DeltaTime                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AGen2_AreaBuff_Base_C::BuffTickClient(float DeltaTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Gen2_AreaBuff_Base.Gen2_AreaBuff_Base_C.BuffTickClient");
		
		AGen2_AreaBuff_Base_C_BuffTickClient_Params params {};
		params.DeltaTime = DeltaTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Gen2_AreaBuff_Base.Gen2_AreaBuff_Base_C.SetParticleVis
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void AGen2_AreaBuff_Base_C::SetParticleVis()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Gen2_AreaBuff_Base.Gen2_AreaBuff_Base_C.SetParticleVis");
		
		AGen2_AreaBuff_Base_C_SetParticleVis_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Gen2_AreaBuff_Base.Gen2_AreaBuff_Base_C.LocalEffects
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void AGen2_AreaBuff_Base_C::LocalEffects()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Gen2_AreaBuff_Base.Gen2_AreaBuff_Base_C.LocalEffects");
		
		AGen2_AreaBuff_Base_C_LocalEffects_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Gen2_AreaBuff_Base.Gen2_AreaBuff_Base_C.BPPreventRunning
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 */
	bool AGen2_AreaBuff_Base_C::BPPreventRunning()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Gen2_AreaBuff_Base.Gen2_AreaBuff_Base_C.BPPreventRunning");
		
		AGen2_AreaBuff_Base_C_BPPreventRunning_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Gen2_AreaBuff_Base.Gen2_AreaBuff_Base_C.BPCustomAllowAddBuff
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class APrimalCharacter*                            forCharacter                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class AActor*                                      DamageCauser                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	bool AGen2_AreaBuff_Base_C::BPCustomAllowAddBuff(class APrimalCharacter* forCharacter, class AActor* DamageCauser)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Gen2_AreaBuff_Base.Gen2_AreaBuff_Base_C.BPCustomAllowAddBuff");
		
		AGen2_AreaBuff_Base_C_BPCustomAllowAddBuff_Params params {};
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
	 * 		Name   -> Function Gen2_AreaBuff_Base.Gen2_AreaBuff_Base_C.UserConstructionScript
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void AGen2_AreaBuff_Base_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Gen2_AreaBuff_Base.Gen2_AreaBuff_Base_C.UserConstructionScript");
		
		AGen2_AreaBuff_Base_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Gen2_AreaBuff_Base.Gen2_AreaBuff_Base_C.Timeline_0__FinishedFunc
	 * 		Flags  -> (BlueprintEvent)
	 */
	void AGen2_AreaBuff_Base_C::Timeline_0__FinishedFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Gen2_AreaBuff_Base.Gen2_AreaBuff_Base_C.Timeline_0__FinishedFunc");
		
		AGen2_AreaBuff_Base_C_Timeline_0__FinishedFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Gen2_AreaBuff_Base.Gen2_AreaBuff_Base_C.Timeline_0__UpdateFunc
	 * 		Flags  -> (BlueprintEvent)
	 */
	void AGen2_AreaBuff_Base_C::Timeline_0__UpdateFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Gen2_AreaBuff_Base.Gen2_AreaBuff_Base_C.Timeline_0__UpdateFunc");
		
		AGen2_AreaBuff_Base_C_Timeline_0__UpdateFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Gen2_AreaBuff_Base.Gen2_AreaBuff_Base_C.ReceiveBeginPlay
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void AGen2_AreaBuff_Base_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Gen2_AreaBuff_Base.Gen2_AreaBuff_Base_C.ReceiveBeginPlay");
		
		AGen2_AreaBuff_Base_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Gen2_AreaBuff_Base.Gen2_AreaBuff_Base_C.OnPlayerStatusUpdate
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               IsInCave                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               IsUnderwater                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AGen2_AreaBuff_Base_C::OnPlayerStatusUpdate(bool IsInCave, bool IsUnderwater)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Gen2_AreaBuff_Base.Gen2_AreaBuff_Base_C.OnPlayerStatusUpdate");
		
		AGen2_AreaBuff_Base_C_OnPlayerStatusUpdate_Params params {};
		params.IsInCave = IsInCave;
		params.IsUnderwater = IsUnderwater;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Gen2_AreaBuff_Base.Gen2_AreaBuff_Base_C.BPDeactivated
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AActor*                                      ForInstigator                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AGen2_AreaBuff_Base_C::BPDeactivated(class AActor* ForInstigator)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Gen2_AreaBuff_Base.Gen2_AreaBuff_Base_C.BPDeactivated");
		
		AGen2_AreaBuff_Base_C_BPDeactivated_Params params {};
		params.ForInstigator = ForInstigator;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Gen2_AreaBuff_Base.Gen2_AreaBuff_Base_C.BPSetupForInstigator
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AActor*                                      ForInstigator                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AGen2_AreaBuff_Base_C::BPSetupForInstigator(class AActor* ForInstigator)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Gen2_AreaBuff_Base.Gen2_AreaBuff_Base_C.BPSetupForInstigator");
		
		AGen2_AreaBuff_Base_C_BPSetupForInstigator_Params params {};
		params.ForInstigator = ForInstigator;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Gen2_AreaBuff_Base.Gen2_AreaBuff_Base_C.Blend_Visuals
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              currentIntensity                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AGen2_AreaBuff_Base_C::Blend_Visuals(float currentIntensity)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Gen2_AreaBuff_Base.Gen2_AreaBuff_Base_C.Blend_Visuals");
		
		AGen2_AreaBuff_Base_C_Blend_Visuals_Params params {};
		params.currentIntensity = currentIntensity;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Gen2_AreaBuff_Base.Gen2_AreaBuff_Base_C.ExecuteUbergraph_Gen2_AreaBuff_Base
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AGen2_AreaBuff_Base_C::ExecuteUbergraph_Gen2_AreaBuff_Base(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Gen2_AreaBuff_Base.Gen2_AreaBuff_Base_C.ExecuteUbergraph_Gen2_AreaBuff_Base");
		
		AGen2_AreaBuff_Base_C_ExecuteUbergraph_Gen2_AreaBuff_Base_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AGen2_AreaBuff_Base_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AGen2_AreaBuff_Base_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass Gen2_AreaBuff_Base.Gen2_AreaBuff_Base_C");
		return ptr;
	}

}


