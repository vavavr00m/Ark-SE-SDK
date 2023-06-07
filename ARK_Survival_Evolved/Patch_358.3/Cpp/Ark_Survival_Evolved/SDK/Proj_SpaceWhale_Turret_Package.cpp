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
	 * 		Name   -> Function Proj_SpaceWhale_Turret.Proj_SpaceWhale_Turret_C.BPIgnoreRadialDamageVictim
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AActor*                                      Victim                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	bool AProj_SpaceWhale_Turret_C::BPIgnoreRadialDamageVictim(class AActor* Victim)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Proj_SpaceWhale_Turret.Proj_SpaceWhale_Turret_C.BPIgnoreRadialDamageVictim");
		
		AProj_SpaceWhale_Turret_C_BPIgnoreRadialDamageVictim_Params params {};
		params.Victim = Victim;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Proj_SpaceWhale_Turret.Proj_SpaceWhale_Turret_C.UserConstructionScript
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void AProj_SpaceWhale_Turret_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Proj_SpaceWhale_Turret.Proj_SpaceWhale_Turret_C.UserConstructionScript");
		
		AProj_SpaceWhale_Turret_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Proj_SpaceWhale_Turret.Proj_SpaceWhale_Turret_C.ReceiveBeginPlay
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void AProj_SpaceWhale_Turret_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Proj_SpaceWhale_Turret.Proj_SpaceWhale_Turret_C.ReceiveBeginPlay");
		
		AProj_SpaceWhale_Turret_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Proj_SpaceWhale_Turret.Proj_SpaceWhale_Turret_C.OnExplode
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FHitResult                                  Result                                                     (Parm, OutParm, ReferenceParm)
	 */
	void AProj_SpaceWhale_Turret_C::OnExplode(struct FHitResult* Result)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Proj_SpaceWhale_Turret.Proj_SpaceWhale_Turret_C.OnExplode");
		
		AProj_SpaceWhale_Turret_C_OnExplode_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Result != nullptr)
			*Result = params.Result;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Proj_SpaceWhale_Turret.Proj_SpaceWhale_Turret_C.ExecuteUbergraph_Proj_SpaceWhale_Turret
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AProj_SpaceWhale_Turret_C::ExecuteUbergraph_Proj_SpaceWhale_Turret(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Proj_SpaceWhale_Turret.Proj_SpaceWhale_Turret_C.ExecuteUbergraph_Proj_SpaceWhale_Turret");
		
		AProj_SpaceWhale_Turret_C_ExecuteUbergraph_Proj_SpaceWhale_Turret_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AProj_SpaceWhale_Turret_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AProj_SpaceWhale_Turret_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass Proj_SpaceWhale_Turret.Proj_SpaceWhale_Turret_C");
		return ptr;
	}

}


