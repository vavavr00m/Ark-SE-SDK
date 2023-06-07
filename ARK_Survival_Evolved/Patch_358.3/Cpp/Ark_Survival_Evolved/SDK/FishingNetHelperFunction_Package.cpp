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
	 * 		Name   -> Function FishingNetHelperFunction.FishingNetHelperFunction_C.Stop Reeling
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UObject*                                     Fisher                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UFishingNetHelperFunction_C::StopReeling(class UObject* Fisher)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FishingNetHelperFunction.FishingNetHelperFunction_C.Stop Reeling");
		
		UFishingNetHelperFunction_C_StopReeling_Params params {};
		params.Fisher = Fisher;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function FishingNetHelperFunction.FishingNetHelperFunction_C.Cancel Cast
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UObject*                                     ProjectileOwner                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UFishingNetHelperFunction_C::CancelCast(class UObject* ProjectileOwner)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FishingNetHelperFunction.FishingNetHelperFunction_C.Cancel Cast");
		
		UFishingNetHelperFunction_C_CancelCast_Params params {};
		params.ProjectileOwner = ProjectileOwner;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function FishingNetHelperFunction.FishingNetHelperFunction_C.Caught Fish
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UObject*                                     ProjectileOwner                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class APrimalDinoCharacter*                        fish                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UFishingNetHelperFunction_C::CaughtFish(class UObject* ProjectileOwner, class APrimalDinoCharacter* fish)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FishingNetHelperFunction.FishingNetHelperFunction_C.Caught Fish");
		
		UFishingNetHelperFunction_C_CaughtFish_Params params {};
		params.ProjectileOwner = ProjectileOwner;
		params.fish = fish;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function FishingNetHelperFunction.FishingNetHelperFunction_C.Pass Projectile Reference
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UObject*                                     ProjectileOwner                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class AShooterProjectile*                          Projectile                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UFishingNetHelperFunction_C::PassProjectileReference(class UObject* ProjectileOwner, class AShooterProjectile* Projectile)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FishingNetHelperFunction.FishingNetHelperFunction_C.Pass Projectile Reference");
		
		UFishingNetHelperFunction_C_PassProjectileReference_Params params {};
		params.ProjectileOwner = ProjectileOwner;
		params.Projectile = Projectile;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function FishingNetHelperFunction.FishingNetHelperFunction_C.reel
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UObject*                                     Fisher                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UFishingNetHelperFunction_C::reel(class UObject* Fisher)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FishingNetHelperFunction.FishingNetHelperFunction_C.reel");
		
		UFishingNetHelperFunction_C_reel_Params params {};
		params.Fisher = Fisher;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function FishingNetHelperFunction.FishingNetHelperFunction_C.Update Rope
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AShooterProjectile*                          netprojectile                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FVector                                     RopeEndpointLocation                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UFishingNetHelperFunction_C::UpdateRope(class AShooterProjectile* netprojectile, const struct FVector& RopeEndpointLocation)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FishingNetHelperFunction.FishingNetHelperFunction_C.Update Rope");
		
		UFishingNetHelperFunction_C_UpdateRope_Params params {};
		params.netprojectile = netprojectile;
		params.RopeEndpointLocation = RopeEndpointLocation;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function FishingNetHelperFunction.FishingNetHelperFunction_C.Notify Net Collided With Water
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UObject*                                     ProjectileOwner                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FVector                                     WaterCollideLocation                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FRotator                                    ProjectileRotation                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UFishingNetHelperFunction_C::NotifyNetCollidedWithWater(class UObject* ProjectileOwner, const struct FVector& WaterCollideLocation, const struct FRotator& ProjectileRotation)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FishingNetHelperFunction.FishingNetHelperFunction_C.Notify Net Collided With Water");
		
		UFishingNetHelperFunction_C_NotifyNetCollidedWithWater_Params params {};
		params.ProjectileOwner = ProjectileOwner;
		params.WaterCollideLocation = WaterCollideLocation;
		params.ProjectileRotation = ProjectileRotation;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function FishingNetHelperFunction.FishingNetHelperFunction_C.ExecuteUbergraph_FishingNetHelperFunction
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UFishingNetHelperFunction_C::ExecuteUbergraph_FishingNetHelperFunction(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FishingNetHelperFunction.FishingNetHelperFunction_C.ExecuteUbergraph_FishingNetHelperFunction");
		
		UFishingNetHelperFunction_C_ExecuteUbergraph_FishingNetHelperFunction_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UFishingNetHelperFunction_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UFishingNetHelperFunction_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass FishingNetHelperFunction.FishingNetHelperFunction_C");
		return ptr;
	}

}


