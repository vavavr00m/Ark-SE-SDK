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
	 * 		Name   -> Function Proj_TekWyvern_Projectile_Mine.Proj_TekWyvern_Projectile_Mine_C.BPPostInitializeComponents
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void AProj_TekWyvern_Projectile_Mine_C::BPPostInitializeComponents()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Proj_TekWyvern_Projectile_Mine.Proj_TekWyvern_Projectile_Mine_C.BPPostInitializeComponents");
		
		AProj_TekWyvern_Projectile_Mine_C_BPPostInitializeComponents_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Proj_TekWyvern_Projectile_Mine.Proj_TekWyvern_Projectile_Mine_C.UpdateBeam
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		TArray<class AActor*>                              actors                                                     (Parm, OutParm, ZeroConstructor, ReferenceParm)
	 */
	void AProj_TekWyvern_Projectile_Mine_C::UpdateBeam(TArray<class AActor*>* actors)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Proj_TekWyvern_Projectile_Mine.Proj_TekWyvern_Projectile_Mine_C.UpdateBeam");
		
		AProj_TekWyvern_Projectile_Mine_C_UpdateBeam_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (actors != nullptr)
			*actors = params.actors;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Proj_TekWyvern_Projectile_Mine.Proj_TekWyvern_Projectile_Mine_C.ReceiveTick
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              DeltaSeconds                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AProj_TekWyvern_Projectile_Mine_C::ReceiveTick(float DeltaSeconds)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Proj_TekWyvern_Projectile_Mine.Proj_TekWyvern_Projectile_Mine_C.ReceiveTick");
		
		AProj_TekWyvern_Projectile_Mine_C_ReceiveTick_Params params {};
		params.DeltaSeconds = DeltaSeconds;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Proj_TekWyvern_Projectile_Mine.Proj_TekWyvern_Projectile_Mine_C.UserConstructionScript
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void AProj_TekWyvern_Projectile_Mine_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Proj_TekWyvern_Projectile_Mine.Proj_TekWyvern_Projectile_Mine_C.UserConstructionScript");
		
		AProj_TekWyvern_Projectile_Mine_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Proj_TekWyvern_Projectile_Mine.Proj_TekWyvern_Projectile_Mine_C.ReceiveBeginPlay
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void AProj_TekWyvern_Projectile_Mine_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Proj_TekWyvern_Projectile_Mine.Proj_TekWyvern_Projectile_Mine_C.ReceiveBeginPlay");
		
		AProj_TekWyvern_Projectile_Mine_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Proj_TekWyvern_Projectile_Mine.Proj_TekWyvern_Projectile_Mine_C.ExecuteUbergraph_Proj_TekWyvern_Projectile_Mine
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AProj_TekWyvern_Projectile_Mine_C::ExecuteUbergraph_Proj_TekWyvern_Projectile_Mine(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Proj_TekWyvern_Projectile_Mine.Proj_TekWyvern_Projectile_Mine_C.ExecuteUbergraph_Proj_TekWyvern_Projectile_Mine");
		
		AProj_TekWyvern_Projectile_Mine_C_ExecuteUbergraph_Proj_TekWyvern_Projectile_Mine_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AProj_TekWyvern_Projectile_Mine_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AProj_TekWyvern_Projectile_Mine_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass Proj_TekWyvern_Projectile_Mine.Proj_TekWyvern_Projectile_Mine_C");
		return ptr;
	}

}


