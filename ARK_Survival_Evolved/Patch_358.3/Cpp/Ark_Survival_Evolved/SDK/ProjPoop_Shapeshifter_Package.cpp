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
	 * 		Name   -> Function ProjPoop_Shapeshifter.ProjPoop_Shapeshifter_C.BP_IgnoreProjectileImpact
	 * 		Flags  -> (Event, Protected, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FHitResult                                  ImpactHit                                                  (Parm)
	 */
	bool AProjPoop_Shapeshifter_C::BP_IgnoreProjectileImpact(const struct FHitResult& ImpactHit)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ProjPoop_Shapeshifter.ProjPoop_Shapeshifter_C.BP_IgnoreProjectileImpact");
		
		AProjPoop_Shapeshifter_C_BP_IgnoreProjectileImpact_Params params {};
		params.ImpactHit = ImpactHit;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function ProjPoop_Shapeshifter.ProjPoop_Shapeshifter_C.BPProjectileBounced
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FHitResult                                  ImpactResult                                               (Parm, OutParm, ReferenceParm)
	 * 		struct FVector                                     ImpactVelocity                                             (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor)
	 */
	void AProjPoop_Shapeshifter_C::BPProjectileBounced(struct FHitResult* ImpactResult, struct FVector* ImpactVelocity)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ProjPoop_Shapeshifter.ProjPoop_Shapeshifter_C.BPProjectileBounced");
		
		AProjPoop_Shapeshifter_C_BPProjectileBounced_Params params {};
		
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
	 * 		Name   -> Function ProjPoop_Shapeshifter.ProjPoop_Shapeshifter_C.ReceiveBeginPlay
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void AProjPoop_Shapeshifter_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ProjPoop_Shapeshifter.ProjPoop_Shapeshifter_C.ReceiveBeginPlay");
		
		AProjPoop_Shapeshifter_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function ProjPoop_Shapeshifter.ProjPoop_Shapeshifter_C.UserConstructionScript
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void AProjPoop_Shapeshifter_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ProjPoop_Shapeshifter.ProjPoop_Shapeshifter_C.UserConstructionScript");
		
		AProjPoop_Shapeshifter_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function ProjPoop_Shapeshifter.ProjPoop_Shapeshifter_C.ExecuteUbergraph_ProjPoop_Shapeshifter
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AProjPoop_Shapeshifter_C::ExecuteUbergraph_ProjPoop_Shapeshifter(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ProjPoop_Shapeshifter.ProjPoop_Shapeshifter_C.ExecuteUbergraph_ProjPoop_Shapeshifter");
		
		AProjPoop_Shapeshifter_C_ExecuteUbergraph_ProjPoop_Shapeshifter_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AProjPoop_Shapeshifter_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AProjPoop_Shapeshifter_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass ProjPoop_Shapeshifter.ProjPoop_Shapeshifter_C");
		return ptr;
	}

}


