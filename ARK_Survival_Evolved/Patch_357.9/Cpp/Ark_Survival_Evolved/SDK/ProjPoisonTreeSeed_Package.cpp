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
	 * 		Name   -> Function ProjPoisonTreeSeed.ProjPoisonTreeSeed_C.BPInitializedVelocity
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FVector                                     InVelocity                                                 (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor)
	 * 		float                                              CustomSpeed                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AProjPoisonTreeSeed_C::BPInitializedVelocity(struct FVector* InVelocity, float CustomSpeed)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ProjPoisonTreeSeed.ProjPoisonTreeSeed_C.BPInitializedVelocity");
		
		AProjPoisonTreeSeed_C_BPInitializedVelocity_Params params {};
		params.CustomSpeed = CustomSpeed;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (InVelocity != nullptr)
			*InVelocity = params.InVelocity;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function ProjPoisonTreeSeed.ProjPoisonTreeSeed_C.UserConstructionScript
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void AProjPoisonTreeSeed_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ProjPoisonTreeSeed.ProjPoisonTreeSeed_C.UserConstructionScript");
		
		AProjPoisonTreeSeed_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function ProjPoisonTreeSeed.ProjPoisonTreeSeed_C.OnExplode
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FHitResult                                  Result                                                     (Parm, OutParm, ReferenceParm)
	 */
	void AProjPoisonTreeSeed_C::OnExplode(struct FHitResult* Result)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ProjPoisonTreeSeed.ProjPoisonTreeSeed_C.OnExplode");
		
		AProjPoisonTreeSeed_C_OnExplode_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Result != nullptr)
			*Result = params.Result;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function ProjPoisonTreeSeed.ProjPoisonTreeSeed_C.ReceiveTick
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              DeltaSeconds                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AProjPoisonTreeSeed_C::ReceiveTick(float DeltaSeconds)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ProjPoisonTreeSeed.ProjPoisonTreeSeed_C.ReceiveTick");
		
		AProjPoisonTreeSeed_C_ReceiveTick_Params params {};
		params.DeltaSeconds = DeltaSeconds;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function ProjPoisonTreeSeed.ProjPoisonTreeSeed_C.ReceiveBeginPlay
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void AProjPoisonTreeSeed_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ProjPoisonTreeSeed.ProjPoisonTreeSeed_C.ReceiveBeginPlay");
		
		AProjPoisonTreeSeed_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function ProjPoisonTreeSeed.ProjPoisonTreeSeed_C.Multi_PlayLandingVFX
	 * 		Flags  -> (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FVector                                     Loc                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AProjPoisonTreeSeed_C::Multi_PlayLandingVFX(const struct FVector& Loc)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ProjPoisonTreeSeed.ProjPoisonTreeSeed_C.Multi_PlayLandingVFX");
		
		AProjPoisonTreeSeed_C_Multi_PlayLandingVFX_Params params {};
		params.Loc = Loc;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function ProjPoisonTreeSeed.ProjPoisonTreeSeed_C.ExecuteUbergraph_ProjPoisonTreeSeed
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AProjPoisonTreeSeed_C::ExecuteUbergraph_ProjPoisonTreeSeed(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ProjPoisonTreeSeed.ProjPoisonTreeSeed_C.ExecuteUbergraph_ProjPoisonTreeSeed");
		
		AProjPoisonTreeSeed_C_ExecuteUbergraph_ProjPoisonTreeSeed_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AProjPoisonTreeSeed_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AProjPoisonTreeSeed_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass ProjPoisonTreeSeed.ProjPoisonTreeSeed_C");
		return ptr;
	}

}


