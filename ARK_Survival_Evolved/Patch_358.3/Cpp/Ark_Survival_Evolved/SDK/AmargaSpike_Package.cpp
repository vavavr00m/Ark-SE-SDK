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
	 * 		Name   -> Function AmargaSpike.AmargaSpike_C.BPOnDemolish
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class APlayerController*                           ForPC                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class AActor*                                      DamageCauser                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AAmargaSpike_C::BPOnDemolish(class APlayerController* ForPC, class AActor* DamageCauser)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AmargaSpike.AmargaSpike_C.BPOnDemolish");
		
		AAmargaSpike_C_BPOnDemolish_Params params {};
		params.ForPC = ForPC;
		params.DamageCauser = DamageCauser;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function AmargaSpike.AmargaSpike_C.CheckApplySpikeDebuff
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AActor*                                      forActor                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AAmargaSpike_C::CheckApplySpikeDebuff(class AActor* forActor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AmargaSpike.AmargaSpike_C.CheckApplySpikeDebuff");
		
		AAmargaSpike_C_CheckApplySpikeDebuff_Params params {};
		params.forActor = forActor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function AmargaSpike.AmargaSpike_C.CheckApplySpikeDamage
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AActor*                                      forActor                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AAmargaSpike_C::CheckApplySpikeDamage(class AActor* forActor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AmargaSpike.AmargaSpike_C.CheckApplySpikeDamage");
		
		AAmargaSpike_C_CheckApplySpikeDamage_Params params {};
		params.forActor = forActor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function AmargaSpike.AmargaSpike_C.UpdateSpikeRelLoc
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void AAmargaSpike_C::UpdateSpikeRelLoc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AmargaSpike.AmargaSpike_C.UpdateSpikeRelLoc");
		
		AAmargaSpike_C_UpdateSpikeRelLoc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function AmargaSpike.AmargaSpike_C.BPUpdatedHealth
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               bDoReplication                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AAmargaSpike_C::BPUpdatedHealth(bool bDoReplication)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AmargaSpike.AmargaSpike_C.BPUpdatedHealth");
		
		AAmargaSpike_C_BPUpdatedHealth_Params params {};
		params.bDoReplication = bDoReplication;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function AmargaSpike.AmargaSpike_C.InitSpike
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void AAmargaSpike_C::InitSpike()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AmargaSpike.AmargaSpike_C.InitSpike");
		
		AAmargaSpike_C_InitSpike_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function AmargaSpike.AmargaSpike_C.RefreshTeamColorVisuals
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void AAmargaSpike_C::RefreshTeamColorVisuals()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AmargaSpike.AmargaSpike_C.RefreshTeamColorVisuals");
		
		AAmargaSpike_C_RefreshTeamColorVisuals_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function AmargaSpike.AmargaSpike_C.UserConstructionScript
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void AAmargaSpike_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AmargaSpike.AmargaSpike_C.UserConstructionScript");
		
		AAmargaSpike_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function AmargaSpike.AmargaSpike_C.SpikeTick
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AAmargaSpike_C::SpikeTick()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AmargaSpike.AmargaSpike_C.SpikeTick");
		
		AAmargaSpike_C_SpikeTick_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function AmargaSpike.AmargaSpike_C.ReceiveBeginPlay
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void AAmargaSpike_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AmargaSpike.AmargaSpike_C.ReceiveBeginPlay");
		
		AAmargaSpike_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function AmargaSpike.AmargaSpike_C.BndEvt__MyStaticMesh_K2Node_ComponentBoundEvent_276_ComponentBeginOverlapSignature__DelegateSignature
	 * 		Flags  -> (HasOutParms, BlueprintEvent)
	 * Parameters:
	 * 		class AActor*                                      OtherActor                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class UPrimitiveComponent*                         OtherComp                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		int32_t                                            OtherBodyIndex                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               bFromSweep                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FHitResult                                  SweepResult                                                (Parm, OutParm, ReferenceParm)
	 */
	void AAmargaSpike_C::BndEvt__MyStaticMesh_K2Node_ComponentBoundEvent_276_ComponentBeginOverlapSignature__DelegateSignature(class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, struct FHitResult* SweepResult)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AmargaSpike.AmargaSpike_C.BndEvt__MyStaticMesh_K2Node_ComponentBoundEvent_276_ComponentBeginOverlapSignature__DelegateSignature");
		
		AAmargaSpike_C_BndEvt__MyStaticMesh_K2Node_ComponentBoundEvent_276_ComponentBeginOverlapSignature__DelegateSignature_Params params {};
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
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function AmargaSpike.AmargaSpike_C.BndEvt__DebuffCollision_K2Node_ComponentBoundEvent_366_ComponentBeginOverlapSignature__DelegateSignature
	 * 		Flags  -> (HasOutParms, BlueprintEvent)
	 * Parameters:
	 * 		class AActor*                                      OtherActor                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class UPrimitiveComponent*                         OtherComp                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		int32_t                                            OtherBodyIndex                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               bFromSweep                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FHitResult                                  SweepResult                                                (Parm, OutParm, ReferenceParm)
	 */
	void AAmargaSpike_C::BndEvt__DebuffCollision_K2Node_ComponentBoundEvent_366_ComponentBeginOverlapSignature__DelegateSignature(class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, struct FHitResult* SweepResult)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AmargaSpike.AmargaSpike_C.BndEvt__DebuffCollision_K2Node_ComponentBoundEvent_366_ComponentBeginOverlapSignature__DelegateSignature");
		
		AAmargaSpike_C_BndEvt__DebuffCollision_K2Node_ComponentBoundEvent_366_ComponentBeginOverlapSignature__DelegateSignature_Params params {};
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
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function AmargaSpike.AmargaSpike_C.BndEvt__DebuffCollision_K2Node_ComponentBoundEvent_392_ComponentEndOverlapSignature__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		class AActor*                                      OtherActor                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class UPrimitiveComponent*                         OtherComp                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		int32_t                                            OtherBodyIndex                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AAmargaSpike_C::BndEvt__DebuffCollision_K2Node_ComponentBoundEvent_392_ComponentEndOverlapSignature__DelegateSignature(class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AmargaSpike.AmargaSpike_C.BndEvt__DebuffCollision_K2Node_ComponentBoundEvent_392_ComponentEndOverlapSignature__DelegateSignature");
		
		AAmargaSpike_C_BndEvt__DebuffCollision_K2Node_ComponentBoundEvent_392_ComponentEndOverlapSignature__DelegateSignature_Params params {};
		params.OtherActor = OtherActor;
		params.OtherComp = OtherComp;
		params.OtherBodyIndex = OtherBodyIndex;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function AmargaSpike.AmargaSpike_C.BindOnSpawnedOnStructureDestroyed
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AAmargaSpike_C::BindOnSpawnedOnStructureDestroyed()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AmargaSpike.AmargaSpike_C.BindOnSpawnedOnStructureDestroyed");
		
		AAmargaSpike_C_BindOnSpawnedOnStructureDestroyed_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function AmargaSpike.AmargaSpike_C.OnSpawnedOnStructureDestroyed
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AAmargaSpike_C::OnSpawnedOnStructureDestroyed()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AmargaSpike.AmargaSpike_C.OnSpawnedOnStructureDestroyed");
		
		AAmargaSpike_C_OnSpawnedOnStructureDestroyed_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function AmargaSpike.AmargaSpike_C.ExecuteUbergraph_AmargaSpike
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AAmargaSpike_C::ExecuteUbergraph_AmargaSpike(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AmargaSpike.AmargaSpike_C.ExecuteUbergraph_AmargaSpike");
		
		AAmargaSpike_C_ExecuteUbergraph_AmargaSpike_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AAmargaSpike_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AAmargaSpike_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass AmargaSpike.AmargaSpike_C");
		return ptr;
	}

}


