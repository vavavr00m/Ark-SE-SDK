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
	 * 		Name   -> Function Buff_BrainSlugShoulderVisualCient.Buff_BrainSlugShoulderVisualCient_C.BPGetHUDElements
	 * 		Flags  -> (Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class APlayerController*                           ForPC                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		TArray<struct FHUDElement>                         OutElements                                                (Parm, OutParm, ZeroConstructor)
	 */
	void ABuff_BrainSlugShoulderVisualCient_C::BPGetHUDElements(class APlayerController* ForPC, TArray<struct FHUDElement>* OutElements)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_BrainSlugShoulderVisualCient.Buff_BrainSlugShoulderVisualCient_C.BPGetHUDElements");
		
		ABuff_BrainSlugShoulderVisualCient_C_BPGetHUDElements_Params params {};
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
	 * 		Name   -> Function Buff_BrainSlugShoulderVisualCient.Buff_BrainSlugShoulderVisualCient_C.DrawBuffFloatingHUD
	 * 		Flags  -> (Event, Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            BuffIndex                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class AShooterHUD*                                 HUD                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		float                                              CenterX                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		float                                              CenterY                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		float                                              DrawScale                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABuff_BrainSlugShoulderVisualCient_C::DrawBuffFloatingHUD(int32_t BuffIndex, class AShooterHUD* HUD, float CenterX, float CenterY, float DrawScale)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_BrainSlugShoulderVisualCient.Buff_BrainSlugShoulderVisualCient_C.DrawBuffFloatingHUD");
		
		ABuff_BrainSlugShoulderVisualCient_C_DrawBuffFloatingHUD_Params params {};
		params.BuffIndex = BuffIndex;
		params.HUD = HUD;
		params.CenterX = CenterX;
		params.CenterY = CenterY;
		params.DrawScale = DrawScale;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Buff_BrainSlugShoulderVisualCient.Buff_BrainSlugShoulderVisualCient_C.UserConstructionScript
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABuff_BrainSlugShoulderVisualCient_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_BrainSlugShoulderVisualCient.Buff_BrainSlugShoulderVisualCient_C.UserConstructionScript");
		
		ABuff_BrainSlugShoulderVisualCient_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Buff_BrainSlugShoulderVisualCient.Buff_BrainSlugShoulderVisualCient_C.BuffTickClient
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              DeltaTime                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABuff_BrainSlugShoulderVisualCient_C::BuffTickClient(float DeltaTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_BrainSlugShoulderVisualCient.Buff_BrainSlugShoulderVisualCient_C.BuffTickClient");
		
		ABuff_BrainSlugShoulderVisualCient_C_BuffTickClient_Params params {};
		params.DeltaTime = DeltaTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Buff_BrainSlugShoulderVisualCient.Buff_BrainSlugShoulderVisualCient_C.ExecuteUbergraph_Buff_BrainSlugShoulderVisualCient
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABuff_BrainSlugShoulderVisualCient_C::ExecuteUbergraph_Buff_BrainSlugShoulderVisualCient(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_BrainSlugShoulderVisualCient.Buff_BrainSlugShoulderVisualCient_C.ExecuteUbergraph_Buff_BrainSlugShoulderVisualCient");
		
		ABuff_BrainSlugShoulderVisualCient_C_ExecuteUbergraph_Buff_BrainSlugShoulderVisualCient_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABuff_BrainSlugShoulderVisualCient_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABuff_BrainSlugShoulderVisualCient_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass Buff_BrainSlugShoulderVisualCient.Buff_BrainSlugShoulderVisualCient_C");
		return ptr;
	}

}


