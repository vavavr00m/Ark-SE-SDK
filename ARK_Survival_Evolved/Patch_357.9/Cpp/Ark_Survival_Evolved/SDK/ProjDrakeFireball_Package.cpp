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
	 * 		Name   -> Function ProjDrakeFireball.ProjDrakeFireball_C.CalculateFragmentVectors
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void AProjDrakeFireball_C::CalculateFragmentVectors()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ProjDrakeFireball.ProjDrakeFireball_C.CalculateFragmentVectors");
		
		AProjDrakeFireball_C_CalculateFragmentVectors_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function ProjDrakeFireball.ProjDrakeFireball_C.ReceiveBeginPlay
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void AProjDrakeFireball_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ProjDrakeFireball.ProjDrakeFireball_C.ReceiveBeginPlay");
		
		AProjDrakeFireball_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function ProjDrakeFireball.ProjDrakeFireball_C.UserConstructionScript
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void AProjDrakeFireball_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ProjDrakeFireball.ProjDrakeFireball_C.UserConstructionScript");
		
		AProjDrakeFireball_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function ProjDrakeFireball.ProjDrakeFireball_C.OnExplode
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FHitResult                                  Result                                                     (Parm, OutParm, ReferenceParm)
	 */
	void AProjDrakeFireball_C::OnExplode(struct FHitResult* Result)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ProjDrakeFireball.ProjDrakeFireball_C.OnExplode");
		
		AProjDrakeFireball_C_OnExplode_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Result != nullptr)
			*Result = params.Result;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function ProjDrakeFireball.ProjDrakeFireball_C.ServerRequest_CreateFragment
	 * 		Flags  -> (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UClass*                                      ProjectileClass                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FVector                                     Origin                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FVector_NetQuantizeNormal                   ShootDir                                                   (Parm)
	 * 		float                                              OverrideInitialSpeed                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AProjDrakeFireball_C::ServerRequest_CreateFragment(class UClass* ProjectileClass, const struct FVector& Origin, const struct FVector_NetQuantizeNormal& ShootDir, float OverrideInitialSpeed)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ProjDrakeFireball.ProjDrakeFireball_C.ServerRequest_CreateFragment");
		
		AProjDrakeFireball_C_ServerRequest_CreateFragment_Params params {};
		params.ProjectileClass = ProjectileClass;
		params.Origin = Origin;
		params.ShootDir = ShootDir;
		params.OverrideInitialSpeed = OverrideInitialSpeed;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function ProjDrakeFireball.ProjDrakeFireball_C.ClientHideProjectile
	 * 		Flags  -> (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
	 */
	void AProjDrakeFireball_C::ClientHideProjectile()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ProjDrakeFireball.ProjDrakeFireball_C.ClientHideProjectile");
		
		AProjDrakeFireball_C_ClientHideProjectile_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function ProjDrakeFireball.ProjDrakeFireball_C.ReceiveAnyDamage
	 * 		Flags  -> (BlueprintAuthorityOnly, Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              Damage                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class UDamageType*                                 DamageType                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class AController*                                 InstigatedBy                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class AActor*                                      DamageCauser                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AProjDrakeFireball_C::ReceiveAnyDamage(float Damage, class UDamageType* DamageType, class AController* InstigatedBy, class AActor* DamageCauser)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ProjDrakeFireball.ProjDrakeFireball_C.ReceiveAnyDamage");
		
		AProjDrakeFireball_C_ReceiveAnyDamage_Params params {};
		params.Damage = Damage;
		params.DamageType = DamageType;
		params.InstigatedBy = InstigatedBy;
		params.DamageCauser = DamageCauser;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function ProjDrakeFireball.ProjDrakeFireball_C.Multi_DeactivateFragments
	 * 		Flags  -> (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
	 */
	void AProjDrakeFireball_C::Multi_DeactivateFragments()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ProjDrakeFireball.ProjDrakeFireball_C.Multi_DeactivateFragments");
		
		AProjDrakeFireball_C_Multi_DeactivateFragments_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function ProjDrakeFireball.ProjDrakeFireball_C.ExecuteUbergraph_ProjDrakeFireball
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AProjDrakeFireball_C::ExecuteUbergraph_ProjDrakeFireball(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ProjDrakeFireball.ProjDrakeFireball_C.ExecuteUbergraph_ProjDrakeFireball");
		
		AProjDrakeFireball_C_ExecuteUbergraph_ProjDrakeFireball_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AProjDrakeFireball_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AProjDrakeFireball_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass ProjDrakeFireball.ProjDrakeFireball_C");
		return ptr;
	}

}


