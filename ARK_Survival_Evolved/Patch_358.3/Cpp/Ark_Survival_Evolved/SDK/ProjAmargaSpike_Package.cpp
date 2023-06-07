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
	 * 		Name   -> Function ProjAmargaSpike.ProjAmargaSpike_C.BPProjectileBounced
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FHitResult                                  ImpactResult                                               (Parm, OutParm, ReferenceParm)
	 * 		struct FVector                                     ImpactVelocity                                             (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor)
	 */
	void AProjAmargaSpike_C::BPProjectileBounced(struct FHitResult* ImpactResult, struct FVector* ImpactVelocity)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ProjAmargaSpike.ProjAmargaSpike_C.BPProjectileBounced");
		
		AProjAmargaSpike_C_BPProjectileBounced_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (ImpactResult != nullptr)
			*ImpactResult = params.ImpactResult;
		if (ImpactVelocity != nullptr)
			*ImpactVelocity = params.ImpactVelocity;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function ProjAmargaSpike.ProjAmargaSpike_C.ReceiveHit
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UPrimitiveComponent*                         MyComp                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class AActor*                                      Other                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class UPrimitiveComponent*                         OtherComp                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               bSelfMoved                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FVector                                     HitLocation                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FVector                                     HitNormal                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FVector                                     NormalImpulse                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FHitResult                                  Hit                                                        (Parm, OutParm, ReferenceParm)
	 */
	void AProjAmargaSpike_C::ReceiveHit(class UPrimitiveComponent* MyComp, class AActor* Other, class UPrimitiveComponent* OtherComp, bool bSelfMoved, const struct FVector& HitLocation, const struct FVector& HitNormal, const struct FVector& NormalImpulse, struct FHitResult* Hit)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ProjAmargaSpike.ProjAmargaSpike_C.ReceiveHit");
		
		AProjAmargaSpike_C_ReceiveHit_Params params {};
		params.MyComp = MyComp;
		params.Other = Other;
		params.OtherComp = OtherComp;
		params.bSelfMoved = bSelfMoved;
		params.HitLocation = HitLocation;
		params.HitNormal = HitNormal;
		params.NormalImpulse = NormalImpulse;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Hit != nullptr)
			*Hit = params.Hit;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function ProjAmargaSpike.ProjAmargaSpike_C.ReceiveBeginPlay
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void AProjAmargaSpike_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ProjAmargaSpike.ProjAmargaSpike_C.ReceiveBeginPlay");
		
		AProjAmargaSpike_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function ProjAmargaSpike.ProjAmargaSpike_C.OnExplode
	 * 		Flags  -> (Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FHitResult                                  Result                                                     (Parm, OutParm, ReferenceParm)
	 */
	void AProjAmargaSpike_C::OnExplode(struct FHitResult* Result)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ProjAmargaSpike.ProjAmargaSpike_C.OnExplode");
		
		AProjAmargaSpike_C_OnExplode_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Result != nullptr)
			*Result = params.Result;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function ProjAmargaSpike.ProjAmargaSpike_C.UserConstructionScript
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void AProjAmargaSpike_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ProjAmargaSpike.ProjAmargaSpike_C.UserConstructionScript");
		
		AProjAmargaSpike_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function ProjAmargaSpike.ProjAmargaSpike_C.Timeline_LerpSpikeMesh__FinishedFunc
	 * 		Flags  -> (BlueprintEvent)
	 */
	void AProjAmargaSpike_C::Timeline_LerpSpikeMesh__FinishedFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ProjAmargaSpike.ProjAmargaSpike_C.Timeline_LerpSpikeMesh__FinishedFunc");
		
		AProjAmargaSpike_C_Timeline_LerpSpikeMesh__FinishedFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function ProjAmargaSpike.ProjAmargaSpike_C.Timeline_LerpSpikeMesh__UpdateFunc
	 * 		Flags  -> (BlueprintEvent)
	 */
	void AProjAmargaSpike_C::Timeline_LerpSpikeMesh__UpdateFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ProjAmargaSpike.ProjAmargaSpike_C.Timeline_LerpSpikeMesh__UpdateFunc");
		
		AProjAmargaSpike_C_Timeline_LerpSpikeMesh__UpdateFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function ProjAmargaSpike.ProjAmargaSpike_C.Multi_PostExplode
	 * 		Flags  -> (Net, NetReliable, NetMulticast, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		TArray<struct FVector>                             Locs                                                       (Parm, OutParm, ZeroConstructor, ReferenceParm)
	 * 		bool                                               FailedForInst                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               IsSpawn                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FRotator                                    SpawnRot                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AProjAmargaSpike_C::Multi_PostExplode(TArray<struct FVector>* Locs, bool FailedForInst, bool IsSpawn, const struct FRotator& SpawnRot)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ProjAmargaSpike.ProjAmargaSpike_C.Multi_PostExplode");
		
		AProjAmargaSpike_C_Multi_PostExplode_Params params {};
		params.FailedForInst = FailedForInst;
		params.IsSpawn = IsSpawn;
		params.SpawnRot = SpawnRot;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Locs != nullptr)
			*Locs = params.Locs;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function ProjAmargaSpike.ProjAmargaSpike_C.LerpSpikeMesh
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AProjAmargaSpike_C::LerpSpikeMesh()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ProjAmargaSpike.ProjAmargaSpike_C.LerpSpikeMesh");
		
		AProjAmargaSpike_C_LerpSpikeMesh_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function ProjAmargaSpike.ProjAmargaSpike_C.Multi_AddMoveIgnoreActor
	 * 		Flags  -> (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AActor*                                      Actor                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AProjAmargaSpike_C::Multi_AddMoveIgnoreActor(class AActor* Actor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ProjAmargaSpike.ProjAmargaSpike_C.Multi_AddMoveIgnoreActor");
		
		AProjAmargaSpike_C_Multi_AddMoveIgnoreActor_Params params {};
		params.Actor = Actor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function ProjAmargaSpike.ProjAmargaSpike_C.ExecuteUbergraph_ProjAmargaSpike
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AProjAmargaSpike_C::ExecuteUbergraph_ProjAmargaSpike(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ProjAmargaSpike.ProjAmargaSpike_C.ExecuteUbergraph_ProjAmargaSpike");
		
		AProjAmargaSpike_C_ExecuteUbergraph_ProjAmargaSpike_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AProjAmargaSpike_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AProjAmargaSpike_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass ProjAmargaSpike.ProjAmargaSpike_C");
		return ptr;
	}

}


