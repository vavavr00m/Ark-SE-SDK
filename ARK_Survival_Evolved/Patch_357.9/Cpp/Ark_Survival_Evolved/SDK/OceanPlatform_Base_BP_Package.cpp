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
	 * 		Name   -> Function OceanPlatform_Base_BP.OceanPlatform_Base_BP_C.ThrottledTick
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void AOceanPlatform_Base_BP_C::ThrottledTick()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OceanPlatform_Base_BP.OceanPlatform_Base_BP_C.ThrottledTick");
		
		AOceanPlatform_Base_BP_C_ThrottledTick_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function OceanPlatform_Base_BP.OceanPlatform_Base_BP_C.BPOnDemolish
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class APlayerController*                           ForPC                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class AActor*                                      DamageCauser                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AOceanPlatform_Base_BP_C::BPOnDemolish(class APlayerController* ForPC, class AActor* DamageCauser)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OceanPlatform_Base_BP.OceanPlatform_Base_BP_C.BPOnDemolish");
		
		AOceanPlatform_Base_BP_C_BPOnDemolish_Params params {};
		params.ForPC = ForPC;
		params.DamageCauser = DamageCauser;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function OceanPlatform_Base_BP.OceanPlatform_Base_BP_C.SetRetract Ladders
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               Retract                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AOceanPlatform_Base_BP_C::SetRetractLadders(bool Retract)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OceanPlatform_Base_BP.OceanPlatform_Base_BP_C.SetRetract Ladders");
		
		AOceanPlatform_Base_BP_C_SetRetractLadders_Params params {};
		params.Retract = Retract;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function OceanPlatform_Base_BP.OceanPlatform_Base_BP_C.UpdateLadderHeight
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void AOceanPlatform_Base_BP_C::UpdateLadderHeight()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OceanPlatform_Base_BP.OceanPlatform_Base_BP_C.UpdateLadderHeight");
		
		AOceanPlatform_Base_BP_C_UpdateLadderHeight_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function OceanPlatform_Base_BP.OceanPlatform_Base_BP_C.BuildLadders
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class APlayerController*                           PlayerController                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               UpdateHeight                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AOceanPlatform_Base_BP_C::BuildLadders(class APlayerController* PlayerController, bool UpdateHeight)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OceanPlatform_Base_BP.OceanPlatform_Base_BP_C.BuildLadders");
		
		AOceanPlatform_Base_BP_C_BuildLadders_Params params {};
		params.PlayerController = PlayerController;
		params.UpdateHeight = UpdateHeight;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function OceanPlatform_Base_BP.OceanPlatform_Base_BP_C.BPPlacedStructure
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class APlayerController*                           ForPC                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AOceanPlatform_Base_BP_C::BPPlacedStructure(class APlayerController* ForPC)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OceanPlatform_Base_BP.OceanPlatform_Base_BP_C.BPPlacedStructure");
		
		AOceanPlatform_Base_BP_C_BPPlacedStructure_Params params {};
		params.ForPC = ForPC;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function OceanPlatform_Base_BP.OceanPlatform_Base_BP_C.SelfDamage
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void AOceanPlatform_Base_BP_C::SelfDamage()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OceanPlatform_Base_BP.OceanPlatform_Base_BP_C.SelfDamage");
		
		AOceanPlatform_Base_BP_C_SelfDamage_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function OceanPlatform_Base_BP.OceanPlatform_Base_BP_C.ReceiveBeginPlay
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void AOceanPlatform_Base_BP_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OceanPlatform_Base_BP.OceanPlatform_Base_BP_C.ReceiveBeginPlay");
		
		AOceanPlatform_Base_BP_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function OceanPlatform_Base_BP.OceanPlatform_Base_BP_C.BPIsAllowedToBuild
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FPlacementData                              OutPlacementData                                           (Parm, OutParm, ReferenceParm)
	 * 		int32_t                                            CurrentAllowedReason                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	int32_t AOceanPlatform_Base_BP_C::BPIsAllowedToBuild(struct FPlacementData* OutPlacementData, int32_t CurrentAllowedReason)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OceanPlatform_Base_BP.OceanPlatform_Base_BP_C.BPIsAllowedToBuild");
		
		AOceanPlatform_Base_BP_C_BPIsAllowedToBuild_Params params {};
		params.CurrentAllowedReason = CurrentAllowedReason;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutPlacementData != nullptr)
			*OutPlacementData = params.OutPlacementData;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function OceanPlatform_Base_BP.OceanPlatform_Base_BP_C.UserConstructionScript
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void AOceanPlatform_Base_BP_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OceanPlatform_Base_BP.OceanPlatform_Base_BP_C.UserConstructionScript");
		
		AOceanPlatform_Base_BP_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function OceanPlatform_Base_BP.OceanPlatform_Base_BP_C.ExecuteUbergraph_OceanPlatform_Base_BP
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AOceanPlatform_Base_BP_C::ExecuteUbergraph_OceanPlatform_Base_BP(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OceanPlatform_Base_BP.OceanPlatform_Base_BP_C.ExecuteUbergraph_OceanPlatform_Base_BP");
		
		AOceanPlatform_Base_BP_C_ExecuteUbergraph_OceanPlatform_Base_BP_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AOceanPlatform_Base_BP_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AOceanPlatform_Base_BP_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass OceanPlatform_Base_BP.OceanPlatform_Base_BP_C");
		return ptr;
	}

}


