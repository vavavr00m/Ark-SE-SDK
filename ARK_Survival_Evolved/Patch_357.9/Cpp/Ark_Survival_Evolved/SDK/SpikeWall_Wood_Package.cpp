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
	 * 		Name   -> Function SpikeWall_Wood.SpikeWall_Wood_C.UserConstructionScript
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void ASpikeWall_Wood_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SpikeWall_Wood.SpikeWall_Wood_C.UserConstructionScript");
		
		ASpikeWall_Wood_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function SpikeWall_Wood.SpikeWall_Wood_C.DamageTick
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ASpikeWall_Wood_C::DamageTick()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SpikeWall_Wood.SpikeWall_Wood_C.DamageTick");
		
		ASpikeWall_Wood_C_DamageTick_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function SpikeWall_Wood.SpikeWall_Wood_C.BndEvt__DamageBox_K2Node_ComponentBoundEvent_249_ComponentBeginOverlapSignature__DelegateSignature
	 * 		Flags  -> (HasOutParms, BlueprintEvent)
	 * Parameters:
	 * 		class AActor*                                      OtherActor                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class UPrimitiveComponent*                         OtherComp                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		int32_t                                            OtherBodyIndex                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               bFromSweep                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FHitResult                                  SweepResult                                                (Parm, OutParm, ReferenceParm)
	 */
	void ASpikeWall_Wood_C::BndEvt__DamageBox_K2Node_ComponentBoundEvent_249_ComponentBeginOverlapSignature__DelegateSignature(class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, struct FHitResult* SweepResult)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SpikeWall_Wood.SpikeWall_Wood_C.BndEvt__DamageBox_K2Node_ComponentBoundEvent_249_ComponentBeginOverlapSignature__DelegateSignature");
		
		ASpikeWall_Wood_C_BndEvt__DamageBox_K2Node_ComponentBoundEvent_249_ComponentBeginOverlapSignature__DelegateSignature_Params params {};
		params.OtherActor = OtherActor;
		params.OtherComp = OtherComp;
		params.OtherBodyIndex = OtherBodyIndex;
		params.bFromSweep = bFromSweep;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (SweepResult != nullptr)
			*SweepResult = params.SweepResult;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function SpikeWall_Wood.SpikeWall_Wood_C.BndEvt__DamageBox_K2Node_ComponentBoundEvent_256_ComponentEndOverlapSignature__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		class AActor*                                      OtherActor                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class UPrimitiveComponent*                         OtherComp                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		int32_t                                            OtherBodyIndex                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ASpikeWall_Wood_C::BndEvt__DamageBox_K2Node_ComponentBoundEvent_256_ComponentEndOverlapSignature__DelegateSignature(class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SpikeWall_Wood.SpikeWall_Wood_C.BndEvt__DamageBox_K2Node_ComponentBoundEvent_256_ComponentEndOverlapSignature__DelegateSignature");
		
		ASpikeWall_Wood_C_BndEvt__DamageBox_K2Node_ComponentBoundEvent_256_ComponentEndOverlapSignature__DelegateSignature_Params params {};
		params.OtherActor = OtherActor;
		params.OtherComp = OtherComp;
		params.OtherBodyIndex = OtherBodyIndex;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function SpikeWall_Wood.SpikeWall_Wood_C.ExecuteUbergraph_SpikeWall_Wood
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ASpikeWall_Wood_C::ExecuteUbergraph_SpikeWall_Wood(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SpikeWall_Wood.SpikeWall_Wood_C.ExecuteUbergraph_SpikeWall_Wood");
		
		ASpikeWall_Wood_C_ExecuteUbergraph_SpikeWall_Wood_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ASpikeWall_Wood_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ASpikeWall_Wood_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass SpikeWall_Wood.SpikeWall_Wood_C");
		return ptr;
	}

}


