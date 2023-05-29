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
	 * 		Name   -> Function Sheep_Character_BP.Sheep_Character_BP_C.BPClampMaxHarvestHealth
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 */
	float ASheep_Character_BP_C::BPClampMaxHarvestHealth()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Sheep_Character_BP.Sheep_Character_BP_C.BPClampMaxHarvestHealth");
		
		ASheep_Character_BP_C_BPClampMaxHarvestHealth_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Sheep_Character_BP.Sheep_Character_BP_C.BPTryMultiUse
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class APlayerController*                           ForPC                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		int32_t                                            UseIndex                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	bool ASheep_Character_BP_C::BPTryMultiUse(class APlayerController* ForPC, int32_t UseIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Sheep_Character_BP.Sheep_Character_BP_C.BPTryMultiUse");
		
		ASheep_Character_BP_C_BPTryMultiUse_Params params {};
		params.ForPC = ForPC;
		params.UseIndex = UseIndex;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Sheep_Character_BP.Sheep_Character_BP_C.BPGetMultiUseEntries
	 * 		Flags  -> (Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class APlayerController*                           ForPC                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		TArray<struct FMultiUseEntry>                      MultiUseEntries                                            (Parm, OutParm, ZeroConstructor, ReferenceParm)
	 */
	TArray<struct FMultiUseEntry> ASheep_Character_BP_C::BPGetMultiUseEntries(class APlayerController* ForPC, TArray<struct FMultiUseEntry>* MultiUseEntries)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Sheep_Character_BP.Sheep_Character_BP_C.BPGetMultiUseEntries");
		
		ASheep_Character_BP_C_BPGetMultiUseEntries_Params params {};
		params.ForPC = ForPC;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (MultiUseEntries != nullptr)
			*MultiUseEntries = params.MultiUseEntries;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Sheep_Character_BP.Sheep_Character_BP_C.Get Time Interval for Full Wool
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		float                                              OutVal                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ASheep_Character_BP_C::GetTimeIntervalforFullWool(float* OutVal)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Sheep_Character_BP.Sheep_Character_BP_C.Get Time Interval for Full Wool");
		
		ASheep_Character_BP_C_GetTimeIntervalforFullWool_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutVal != nullptr)
			*OutVal = params.OutVal;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Sheep_Character_BP.Sheep_Character_BP_C.BPDinoARKDownloadedBegin
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void ASheep_Character_BP_C::BPDinoARKDownloadedBegin()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Sheep_Character_BP.Sheep_Character_BP_C.BPDinoARKDownloadedBegin");
		
		ASheep_Character_BP_C_BPDinoARKDownloadedBegin_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Sheep_Character_BP.Sheep_Character_BP_C.BPDinoPrepareForARKUploading
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void ASheep_Character_BP_C::BPDinoPrepareForARKUploading()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Sheep_Character_BP.Sheep_Character_BP_C.BPDinoPrepareForARKUploading");
		
		ASheep_Character_BP_C_BPDinoPrepareForARKUploading_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Sheep_Character_BP.Sheep_Character_BP_C.SetWoolPercentage
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              NewPercentage                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ASheep_Character_BP_C::SetWoolPercentage(float NewPercentage)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Sheep_Character_BP.Sheep_Character_BP_C.SetWoolPercentage");
		
		ASheep_Character_BP_C_SetWoolPercentage_Params params {};
		params.NewPercentage = NewPercentage;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Sheep_Character_BP.Sheep_Character_BP_C.DoHaircut
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AShooterCharacter*                           FromPlayer                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ASheep_Character_BP_C::DoHaircut(class AShooterCharacter* FromPlayer)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Sheep_Character_BP.Sheep_Character_BP_C.DoHaircut");
		
		ASheep_Character_BP_C_DoHaircut_Params params {};
		params.FromPlayer = FromPlayer;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Sheep_Character_BP.Sheep_Character_BP_C.BPDinoPostBeginPlay
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void ASheep_Character_BP_C::BPDinoPostBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Sheep_Character_BP.Sheep_Character_BP_C.BPDinoPostBeginPlay");
		
		ASheep_Character_BP_C_BPDinoPostBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Sheep_Character_BP.Sheep_Character_BP_C.BPUnstasis
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void ASheep_Character_BP_C::BPUnstasis()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Sheep_Character_BP.Sheep_Character_BP_C.BPUnstasis");
		
		ASheep_Character_BP_C_BPUnstasis_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Sheep_Character_BP.Sheep_Character_BP_C.UpdateWoolMaterial
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ASheep_Character_BP_C::UpdateWoolMaterial()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Sheep_Character_BP.Sheep_Character_BP_C.UpdateWoolMaterial");
		
		ASheep_Character_BP_C_UpdateWoolMaterial_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Sheep_Character_BP.Sheep_Character_BP_C.BPTimerNonDedicated
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void ASheep_Character_BP_C::BPTimerNonDedicated()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Sheep_Character_BP.Sheep_Character_BP_C.BPTimerNonDedicated");
		
		ASheep_Character_BP_C_BPTimerNonDedicated_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Sheep_Character_BP.Sheep_Character_BP_C.GetWoolPercentage
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		float                                              OutPercent                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ASheep_Character_BP_C::GetWoolPercentage(float* OutPercent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Sheep_Character_BP.Sheep_Character_BP_C.GetWoolPercentage");
		
		ASheep_Character_BP_C_GetWoolPercentage_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutPercent != nullptr)
			*OutPercent = params.OutPercent;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Sheep_Character_BP.Sheep_Character_BP_C.UserConstructionScript
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void ASheep_Character_BP_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Sheep_Character_BP.Sheep_Character_BP_C.UserConstructionScript");
		
		ASheep_Character_BP_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Sheep_Character_BP.Sheep_Character_BP_C.DoSpawnHairParticles
	 * 		Flags  -> (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FVector                                     AtLoc                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ASheep_Character_BP_C::DoSpawnHairParticles(const struct FVector& AtLoc)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Sheep_Character_BP.Sheep_Character_BP_C.DoSpawnHairParticles");
		
		ASheep_Character_BP_C_DoSpawnHairParticles_Params params {};
		params.AtLoc = AtLoc;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Sheep_Character_BP.Sheep_Character_BP_C.ExecuteUbergraph_Sheep_Character_BP
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ASheep_Character_BP_C::ExecuteUbergraph_Sheep_Character_BP(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Sheep_Character_BP.Sheep_Character_BP_C.ExecuteUbergraph_Sheep_Character_BP");
		
		ASheep_Character_BP_C_ExecuteUbergraph_Sheep_Character_BP_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ASheep_Character_BP_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ASheep_Character_BP_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass Sheep_Character_BP.Sheep_Character_BP_C");
		return ptr;
	}

}


