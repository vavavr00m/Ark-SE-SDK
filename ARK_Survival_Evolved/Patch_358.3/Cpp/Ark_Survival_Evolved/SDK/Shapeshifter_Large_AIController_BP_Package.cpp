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
	 * 		Name   -> Function Shapeshifter_Large_AIController_BP.Shapeshifter_Large_AIController_BP_C.DinoUberpounce
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               Success                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AShapeshifter_Large_AIController_BP_C::DinoUberpounce(bool* Success)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Shapeshifter_Large_AIController_BP.Shapeshifter_Large_AIController_BP_C.DinoUberpounce");
		
		AShapeshifter_Large_AIController_BP_C_DinoUberpounce_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Success != nullptr)
			*Success = params.Success;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Shapeshifter_Large_AIController_BP.Shapeshifter_Large_AIController_BP_C.LocationUberpounce
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void AShapeshifter_Large_AIController_BP_C::LocationUberpounce()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Shapeshifter_Large_AIController_BP.Shapeshifter_Large_AIController_BP_C.LocationUberpounce");
		
		AShapeshifter_Large_AIController_BP_C_LocationUberpounce_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Shapeshifter_Large_AIController_BP.Shapeshifter_Large_AIController_BP_C.AllowSurfaceNormalForUberpounce
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FVector                                     surfaceNormal                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               IsValid                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AShapeshifter_Large_AIController_BP_C::AllowSurfaceNormalForUberpounce(const struct FVector& surfaceNormal, bool* IsValid)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Shapeshifter_Large_AIController_BP.Shapeshifter_Large_AIController_BP_C.AllowSurfaceNormalForUberpounce");
		
		AShapeshifter_Large_AIController_BP_C_AllowSurfaceNormalForUberpounce_Params params {};
		params.surfaceNormal = surfaceNormal;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (IsValid != nullptr)
			*IsValid = params.IsValid;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Shapeshifter_Large_AIController_BP.Shapeshifter_Large_AIController_BP_C.Enable
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void AShapeshifter_Large_AIController_BP_C::Enable()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Shapeshifter_Large_AIController_BP.Shapeshifter_Large_AIController_BP_C.Enable");
		
		AShapeshifter_Large_AIController_BP_C_Enable_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Shapeshifter_Large_AIController_BP.Shapeshifter_Large_AIController_BP_C.Start Uberpounce
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FUberpounceData                             Data                                                       (Parm)
	 */
	void AShapeshifter_Large_AIController_BP_C::StartUberpounce(const struct FUberpounceData& Data)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Shapeshifter_Large_AIController_BP.Shapeshifter_Large_AIController_BP_C.Start Uberpounce");
		
		AShapeshifter_Large_AIController_BP_C_StartUberpounce_Params params {};
		params.Data = Data;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Shapeshifter_Large_AIController_BP.Shapeshifter_Large_AIController_BP_C.Deinonychus AttackedWhileLatched
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void AShapeshifter_Large_AIController_BP_C::DeinonychusAttackedWhileLatched()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Shapeshifter_Large_AIController_BP.Shapeshifter_Large_AIController_BP_C.Deinonychus AttackedWhileLatched");
		
		AShapeshifter_Large_AIController_BP_C_DeinonychusAttackedWhileLatched_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Shapeshifter_Large_AIController_BP.Shapeshifter_Large_AIController_BP_C.OnUberpounceStateChanged
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		EUberpounceState                                   NewState                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		EUberpounceState                                   PrevState                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AShapeshifter_Large_AIController_BP_C::OnUberpounceStateChanged(EUberpounceState NewState, EUberpounceState PrevState)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Shapeshifter_Large_AIController_BP.Shapeshifter_Large_AIController_BP_C.OnUberpounceStateChanged");
		
		AShapeshifter_Large_AIController_BP_C_OnUberpounceStateChanged_Params params {};
		params.NewState = NewState;
		params.PrevState = PrevState;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Shapeshifter_Large_AIController_BP.Shapeshifter_Large_AIController_BP_C.UpdateUberpounce
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void AShapeshifter_Large_AIController_BP_C::UpdateUberpounce()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Shapeshifter_Large_AIController_BP.Shapeshifter_Large_AIController_BP_C.UpdateUberpounce");
		
		AShapeshifter_Large_AIController_BP_C_UpdateUberpounce_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Shapeshifter_Large_AIController_BP.Shapeshifter_Large_AIController_BP_C.ReceiveBeginPlay
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void AShapeshifter_Large_AIController_BP_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Shapeshifter_Large_AIController_BP.Shapeshifter_Large_AIController_BP_C.ReceiveBeginPlay");
		
		AShapeshifter_Large_AIController_BP_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Shapeshifter_Large_AIController_BP.Shapeshifter_Large_AIController_BP_C.ReceiveTick
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              DeltaSeconds                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AShapeshifter_Large_AIController_BP_C::ReceiveTick(float DeltaSeconds)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Shapeshifter_Large_AIController_BP.Shapeshifter_Large_AIController_BP_C.ReceiveTick");
		
		AShapeshifter_Large_AIController_BP_C_ReceiveTick_Params params {};
		params.DeltaSeconds = DeltaSeconds;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Shapeshifter_Large_AIController_BP.Shapeshifter_Large_AIController_BP_C.GetPrimalTarget
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		class APrimalCharacter*                            Target                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AShapeshifter_Large_AIController_BP_C::GetPrimalTarget(class APrimalCharacter** Target)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Shapeshifter_Large_AIController_BP.Shapeshifter_Large_AIController_BP_C.GetPrimalTarget");
		
		AShapeshifter_Large_AIController_BP_C_GetPrimalTarget_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Target != nullptr)
			*Target = params.Target;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Shapeshifter_Large_AIController_BP.Shapeshifter_Large_AIController_BP_C.GetDino
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		class ADeinonychus_Character_BP_C*                 ret                                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AShapeshifter_Large_AIController_BP_C::GetDino(class ADeinonychus_Character_BP_C** ret)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Shapeshifter_Large_AIController_BP.Shapeshifter_Large_AIController_BP_C.GetDino");
		
		AShapeshifter_Large_AIController_BP_C_GetDino_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (ret != nullptr)
			*ret = params.ret;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Shapeshifter_Large_AIController_BP.Shapeshifter_Large_AIController_BP_C.UserConstructionScript
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void AShapeshifter_Large_AIController_BP_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Shapeshifter_Large_AIController_BP.Shapeshifter_Large_AIController_BP_C.UserConstructionScript");
		
		AShapeshifter_Large_AIController_BP_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Shapeshifter_Large_AIController_BP.Shapeshifter_Large_AIController_BP_C.ExecuteUbergraph_Shapeshifter_Large_AIController_BP
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AShapeshifter_Large_AIController_BP_C::ExecuteUbergraph_Shapeshifter_Large_AIController_BP(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Shapeshifter_Large_AIController_BP.Shapeshifter_Large_AIController_BP_C.ExecuteUbergraph_Shapeshifter_Large_AIController_BP");
		
		AShapeshifter_Large_AIController_BP_C_ExecuteUbergraph_Shapeshifter_Large_AIController_BP_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AShapeshifter_Large_AIController_BP_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AShapeshifter_Large_AIController_BP_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass Shapeshifter_Large_AIController_BP.Shapeshifter_Large_AIController_BP_C");
		return ptr;
	}

}


