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
	 * 		Name   -> Function Buff_RiderFlyingWindWoosh_SpaceDolphin.Buff_RiderFlyingWindWoosh_SpaceDolphin_C.Get Ammo And Laser HUDElement Color
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               IsUsingSuperFlight                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		int32_t                                            LaserLevel                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	struct FLinearColor ABuff_RiderFlyingWindWoosh_SpaceDolphin_C::GetAmmoAndLaserHUDElementColor(bool IsUsingSuperFlight, int32_t LaserLevel)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_RiderFlyingWindWoosh_SpaceDolphin.Buff_RiderFlyingWindWoosh_SpaceDolphin_C.Get Ammo And Laser HUDElement Color");
		
		ABuff_RiderFlyingWindWoosh_SpaceDolphin_C_GetAmmoAndLaserHUDElementColor_Params params {};
		params.IsUsingSuperFlight = IsUsingSuperFlight;
		params.LaserLevel = LaserLevel;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Buff_RiderFlyingWindWoosh_SpaceDolphin.Buff_RiderFlyingWindWoosh_SpaceDolphin_C.HitCollisionStarFoxMode
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 */
	bool ABuff_RiderFlyingWindWoosh_SpaceDolphin_C::HitCollisionStarFoxMode()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_RiderFlyingWindWoosh_SpaceDolphin.Buff_RiderFlyingWindWoosh_SpaceDolphin_C.HitCollisionStarFoxMode");
		
		ABuff_RiderFlyingWindWoosh_SpaceDolphin_C_HitCollisionStarFoxMode_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Buff_RiderFlyingWindWoosh_SpaceDolphin.Buff_RiderFlyingWindWoosh_SpaceDolphin_C.StartedBraking
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class ASpaceDolphin_Character_BP_C*                self2                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	bool ABuff_RiderFlyingWindWoosh_SpaceDolphin_C::StartedBraking(class ASpaceDolphin_Character_BP_C* self2)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_RiderFlyingWindWoosh_SpaceDolphin.Buff_RiderFlyingWindWoosh_SpaceDolphin_C.StartedBraking");
		
		ABuff_RiderFlyingWindWoosh_SpaceDolphin_C_StartedBraking_Params params {};
		params.self2 = self2;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Buff_RiderFlyingWindWoosh_SpaceDolphin.Buff_RiderFlyingWindWoosh_SpaceDolphin_C.BPGetHUDElements
	 * 		Flags  -> (Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class APlayerController*                           ForPC                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		TArray<struct FHUDElement>                         OutElements                                                (Parm, OutParm, ZeroConstructor)
	 */
	void ABuff_RiderFlyingWindWoosh_SpaceDolphin_C::BPGetHUDElements(class APlayerController* ForPC, TArray<struct FHUDElement>* OutElements)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_RiderFlyingWindWoosh_SpaceDolphin.Buff_RiderFlyingWindWoosh_SpaceDolphin_C.BPGetHUDElements");
		
		ABuff_RiderFlyingWindWoosh_SpaceDolphin_C_BPGetHUDElements_Params params {};
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
	 * 		Name   -> Function Buff_RiderFlyingWindWoosh_SpaceDolphin.Buff_RiderFlyingWindWoosh_SpaceDolphin_C.UpdateSFX
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABuff_RiderFlyingWindWoosh_SpaceDolphin_C::UpdateSFX()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_RiderFlyingWindWoosh_SpaceDolphin.Buff_RiderFlyingWindWoosh_SpaceDolphin_C.UpdateSFX");
		
		ABuff_RiderFlyingWindWoosh_SpaceDolphin_C_UpdateSFX_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Buff_RiderFlyingWindWoosh_SpaceDolphin.Buff_RiderFlyingWindWoosh_SpaceDolphin_C.GetBuffDescription
	 * 		Flags  -> (Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	struct FStatusValueModifierDescription ABuff_RiderFlyingWindWoosh_SpaceDolphin_C::GetBuffDescription()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_RiderFlyingWindWoosh_SpaceDolphin.Buff_RiderFlyingWindWoosh_SpaceDolphin_C.GetBuffDescription");
		
		ABuff_RiderFlyingWindWoosh_SpaceDolphin_C_GetBuffDescription_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Buff_RiderFlyingWindWoosh_SpaceDolphin.Buff_RiderFlyingWindWoosh_SpaceDolphin_C.AllowPostProcessEffect
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 */
	bool ABuff_RiderFlyingWindWoosh_SpaceDolphin_C::AllowPostProcessEffect()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_RiderFlyingWindWoosh_SpaceDolphin.Buff_RiderFlyingWindWoosh_SpaceDolphin_C.AllowPostProcessEffect");
		
		ABuff_RiderFlyingWindWoosh_SpaceDolphin_C_AllowPostProcessEffect_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Buff_RiderFlyingWindWoosh_SpaceDolphin.Buff_RiderFlyingWindWoosh_SpaceDolphin_C.GetBuffPostprocessIntensity
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 */
	float ABuff_RiderFlyingWindWoosh_SpaceDolphin_C::GetBuffPostprocessIntensity()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_RiderFlyingWindWoosh_SpaceDolphin.Buff_RiderFlyingWindWoosh_SpaceDolphin_C.GetBuffPostprocessIntensity");
		
		ABuff_RiderFlyingWindWoosh_SpaceDolphin_C_GetBuffPostprocessIntensity_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Buff_RiderFlyingWindWoosh_SpaceDolphin.Buff_RiderFlyingWindWoosh_SpaceDolphin_C.BPCustomAllowAddBuff
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class APrimalCharacter*                            forCharacter                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class AActor*                                      DamageCauser                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	bool ABuff_RiderFlyingWindWoosh_SpaceDolphin_C::BPCustomAllowAddBuff(class APrimalCharacter* forCharacter, class AActor* DamageCauser)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_RiderFlyingWindWoosh_SpaceDolphin.Buff_RiderFlyingWindWoosh_SpaceDolphin_C.BPCustomAllowAddBuff");
		
		ABuff_RiderFlyingWindWoosh_SpaceDolphin_C_BPCustomAllowAddBuff_Params params {};
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
	 * 		Name   -> Function Buff_RiderFlyingWindWoosh_SpaceDolphin.Buff_RiderFlyingWindWoosh_SpaceDolphin_C.BuffTickClient
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              DeltaTime                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABuff_RiderFlyingWindWoosh_SpaceDolphin_C::BuffTickClient(float DeltaTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_RiderFlyingWindWoosh_SpaceDolphin.Buff_RiderFlyingWindWoosh_SpaceDolphin_C.BuffTickClient");
		
		ABuff_RiderFlyingWindWoosh_SpaceDolphin_C_BuffTickClient_Params params {};
		params.DeltaTime = DeltaTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Buff_RiderFlyingWindWoosh_SpaceDolphin.Buff_RiderFlyingWindWoosh_SpaceDolphin_C.UserConstructionScript
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABuff_RiderFlyingWindWoosh_SpaceDolphin_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_RiderFlyingWindWoosh_SpaceDolphin.Buff_RiderFlyingWindWoosh_SpaceDolphin_C.UserConstructionScript");
		
		ABuff_RiderFlyingWindWoosh_SpaceDolphin_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Buff_RiderFlyingWindWoosh_SpaceDolphin.Buff_RiderFlyingWindWoosh_SpaceDolphin_C.ExecuteUbergraph_Buff_RiderFlyingWindWoosh_SpaceDolphin
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABuff_RiderFlyingWindWoosh_SpaceDolphin_C::ExecuteUbergraph_Buff_RiderFlyingWindWoosh_SpaceDolphin(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_RiderFlyingWindWoosh_SpaceDolphin.Buff_RiderFlyingWindWoosh_SpaceDolphin_C.ExecuteUbergraph_Buff_RiderFlyingWindWoosh_SpaceDolphin");
		
		ABuff_RiderFlyingWindWoosh_SpaceDolphin_C_ExecuteUbergraph_Buff_RiderFlyingWindWoosh_SpaceDolphin_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABuff_RiderFlyingWindWoosh_SpaceDolphin_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABuff_RiderFlyingWindWoosh_SpaceDolphin_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass Buff_RiderFlyingWindWoosh_SpaceDolphin.Buff_RiderFlyingWindWoosh_SpaceDolphin_C");
		return ptr;
	}

}


