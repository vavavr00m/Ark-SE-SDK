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
	 * 		Name   -> Function Projectile_SummonerEyeball.Projectile_SummonerEyeball_C.AttemptSpawnTentacles
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FVector                                     HitLoc                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AProjectile_SummonerEyeball_C::AttemptSpawnTentacles(const struct FVector& HitLoc)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Projectile_SummonerEyeball.Projectile_SummonerEyeball_C.AttemptSpawnTentacles");
		
		AProjectile_SummonerEyeball_C_AttemptSpawnTentacles_Params params {};
		params.HitLoc = HitLoc;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Projectile_SummonerEyeball.Projectile_SummonerEyeball_C.UserConstructionScript
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void AProjectile_SummonerEyeball_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Projectile_SummonerEyeball.Projectile_SummonerEyeball_C.UserConstructionScript");
		
		AProjectile_SummonerEyeball_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Projectile_SummonerEyeball.Projectile_SummonerEyeball_C.OnExplode
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FHitResult                                  Result                                                     (Parm, OutParm, ReferenceParm)
	 */
	void AProjectile_SummonerEyeball_C::OnExplode(struct FHitResult* Result)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Projectile_SummonerEyeball.Projectile_SummonerEyeball_C.OnExplode");
		
		AProjectile_SummonerEyeball_C_OnExplode_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Result != nullptr)
			*Result = params.Result;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Projectile_SummonerEyeball.Projectile_SummonerEyeball_C.ExecuteUbergraph_Projectile_SummonerEyeball
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AProjectile_SummonerEyeball_C::ExecuteUbergraph_Projectile_SummonerEyeball(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Projectile_SummonerEyeball.Projectile_SummonerEyeball_C.ExecuteUbergraph_Projectile_SummonerEyeball");
		
		AProjectile_SummonerEyeball_C_ExecuteUbergraph_Projectile_SummonerEyeball_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AProjectile_SummonerEyeball_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AProjectile_SummonerEyeball_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass Projectile_SummonerEyeball.Projectile_SummonerEyeball_C");
		return ptr;
	}

}


