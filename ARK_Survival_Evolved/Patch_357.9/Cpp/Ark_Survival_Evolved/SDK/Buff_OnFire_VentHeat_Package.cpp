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
	 * 		Name   -> Function Buff_OnFire_VentHeat.Buff_OnFire_VentHeat_C.BuffTickServer
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              DeltaTime                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABuff_OnFire_VentHeat_C::BuffTickServer(float DeltaTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_OnFire_VentHeat.Buff_OnFire_VentHeat_C.BuffTickServer");
		
		ABuff_OnFire_VentHeat_C_BuffTickServer_Params params {};
		params.DeltaTime = DeltaTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Buff_OnFire_VentHeat.Buff_OnFire_VentHeat_C.BPOnInstigatorMovementModeChangedNotify
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		EMovementMode                                      PrevMovementMode                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		unsigned char                                      PreviousCustomMode                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		EMovementMode                                      NewMovementMode                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		unsigned char                                      NewCustomMode                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABuff_OnFire_VentHeat_C::BPOnInstigatorMovementModeChangedNotify(EMovementMode PrevMovementMode, unsigned char PreviousCustomMode, EMovementMode NewMovementMode, unsigned char NewCustomMode)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_OnFire_VentHeat.Buff_OnFire_VentHeat_C.BPOnInstigatorMovementModeChangedNotify");
		
		ABuff_OnFire_VentHeat_C_BPOnInstigatorMovementModeChangedNotify_Params params {};
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
	 * 		Name   -> Function Buff_OnFire_VentHeat.Buff_OnFire_VentHeat_C.SetupVentHeat
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FVector                                     Direction                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		float                                              Strength                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABuff_OnFire_VentHeat_C::SetupVentHeat(const struct FVector& Direction, float Strength)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_OnFire_VentHeat.Buff_OnFire_VentHeat_C.SetupVentHeat");
		
		ABuff_OnFire_VentHeat_C_SetupVentHeat_Params params {};
		params.Direction = Direction;
		params.Strength = Strength;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Buff_OnFire_VentHeat.Buff_OnFire_VentHeat_C.UserConstructionScript
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABuff_OnFire_VentHeat_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_OnFire_VentHeat.Buff_OnFire_VentHeat_C.UserConstructionScript");
		
		ABuff_OnFire_VentHeat_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Buff_OnFire_VentHeat.Buff_OnFire_VentHeat_C.ExecuteUbergraph_Buff_OnFire_VentHeat
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABuff_OnFire_VentHeat_C::ExecuteUbergraph_Buff_OnFire_VentHeat(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_OnFire_VentHeat.Buff_OnFire_VentHeat_C.ExecuteUbergraph_Buff_OnFire_VentHeat");
		
		ABuff_OnFire_VentHeat_C_ExecuteUbergraph_Buff_OnFire_VentHeat_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABuff_OnFire_VentHeat_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABuff_OnFire_VentHeat_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass Buff_OnFire_VentHeat.Buff_OnFire_VentHeat_C");
		return ptr;
	}

}


