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
	 * 		Name   -> Function Task_FKaijuChooseBasicAttack.Task_FKaijuChooseBasicAttack_C.CheckIfTargetIsCloseToFoot
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               FoundFootAttack                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               RightFoot                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UTask_FKaijuChooseBasicAttack_C::CheckIfTargetIsCloseToFoot(bool* FoundFootAttack, bool* RightFoot)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Task_FKaijuChooseBasicAttack.Task_FKaijuChooseBasicAttack_C.CheckIfTargetIsCloseToFoot");
		
		UTask_FKaijuChooseBasicAttack_C_CheckIfTargetIsCloseToFoot_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (FoundFootAttack != nullptr)
			*FoundFootAttack = params.FoundFootAttack;
		if (RightFoot != nullptr)
			*RightFoot = params.RightFoot;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Task_FKaijuChooseBasicAttack.Task_FKaijuChooseBasicAttack_C.MaybeFootstomp
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               _return_                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UTask_FKaijuChooseBasicAttack_C::MaybeFootstomp(bool* _return_)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Task_FKaijuChooseBasicAttack.Task_FKaijuChooseBasicAttack_C.MaybeFootstomp");
		
		UTask_FKaijuChooseBasicAttack_C_MaybeFootstomp_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (_return_ != nullptr)
			*_return_ = params._return_;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Task_FKaijuChooseBasicAttack.Task_FKaijuChooseBasicAttack_C.TargetIsFlying
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               IsFlying                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UTask_FKaijuChooseBasicAttack_C::TargetIsFlying(bool* IsFlying)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Task_FKaijuChooseBasicAttack.Task_FKaijuChooseBasicAttack_C.TargetIsFlying");
		
		UTask_FKaijuChooseBasicAttack_C_TargetIsFlying_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (IsFlying != nullptr)
			*IsFlying = params.IsFlying;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Task_FKaijuChooseBasicAttack.Task_FKaijuChooseBasicAttack_C.CanUseFootstompBoth
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		bool                                               CanAttack                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UTask_FKaijuChooseBasicAttack_C::CanUseFootstompBoth(bool* CanAttack)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Task_FKaijuChooseBasicAttack.Task_FKaijuChooseBasicAttack_C.CanUseFootstompBoth");
		
		UTask_FKaijuChooseBasicAttack_C_CanUseFootstompBoth_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (CanAttack != nullptr)
			*CanAttack = params.CanAttack;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Task_FKaijuChooseBasicAttack.Task_FKaijuChooseBasicAttack_C.ReceiveExecute
	 * 		Flags  -> (Event, Protected, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AActor*                                      OwnerActor                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UTask_FKaijuChooseBasicAttack_C::ReceiveExecute(class AActor* OwnerActor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Task_FKaijuChooseBasicAttack.Task_FKaijuChooseBasicAttack_C.ReceiveExecute");
		
		UTask_FKaijuChooseBasicAttack_C_ReceiveExecute_Params params {};
		params.OwnerActor = OwnerActor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Task_FKaijuChooseBasicAttack.Task_FKaijuChooseBasicAttack_C.ExecuteUbergraph_Task_FKaijuChooseBasicAttack
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UTask_FKaijuChooseBasicAttack_C::ExecuteUbergraph_Task_FKaijuChooseBasicAttack(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Task_FKaijuChooseBasicAttack.Task_FKaijuChooseBasicAttack_C.ExecuteUbergraph_Task_FKaijuChooseBasicAttack");
		
		UTask_FKaijuChooseBasicAttack_C_ExecuteUbergraph_Task_FKaijuChooseBasicAttack_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UTask_FKaijuChooseBasicAttack_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UTask_FKaijuChooseBasicAttack_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass Task_FKaijuChooseBasicAttack.Task_FKaijuChooseBasicAttack_C");
		return ptr;
	}

}


