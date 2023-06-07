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
	 * 		Name   -> Function SupplyCrateBaseBP_NoMesh.SupplyCrateBaseBP_NoMesh_C.OnRep_bFinishedSpawn
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ASupplyCrateBaseBP_NoMesh_C::OnRep_bFinishedSpawn()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SupplyCrateBaseBP_NoMesh.SupplyCrateBaseBP_NoMesh_C.OnRep_bFinishedSpawn");
		
		ASupplyCrateBaseBP_NoMesh_C_OnRep_bFinishedSpawn_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function SupplyCrateBaseBP_NoMesh.SupplyCrateBaseBP_NoMesh_C.UserConstructionScript
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void ASupplyCrateBaseBP_NoMesh_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SupplyCrateBaseBP_NoMesh.SupplyCrateBaseBP_NoMesh_C.UserConstructionScript");
		
		ASupplyCrateBaseBP_NoMesh_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function SupplyCrateBaseBP_NoMesh.SupplyCrateBaseBP_NoMesh_C.ReceiveBeginPlay
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void ASupplyCrateBaseBP_NoMesh_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SupplyCrateBaseBP_NoMesh.SupplyCrateBaseBP_NoMesh_C.ReceiveBeginPlay");
		
		ASupplyCrateBaseBP_NoMesh_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function SupplyCrateBaseBP_NoMesh.SupplyCrateBaseBP_NoMesh_C.ReceiveDestroyed
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void ASupplyCrateBaseBP_NoMesh_C::ReceiveDestroyed()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SupplyCrateBaseBP_NoMesh.SupplyCrateBaseBP_NoMesh_C.ReceiveDestroyed");
		
		ASupplyCrateBaseBP_NoMesh_C_ReceiveDestroyed_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function SupplyCrateBaseBP_NoMesh.SupplyCrateBaseBP_NoMesh_C.OnSpawningIn
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ASupplyCrateBaseBP_NoMesh_C::OnSpawningIn()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SupplyCrateBaseBP_NoMesh.SupplyCrateBaseBP_NoMesh_C.OnSpawningIn");
		
		ASupplyCrateBaseBP_NoMesh_C_OnSpawningIn_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function SupplyCrateBaseBP_NoMesh.SupplyCrateBaseBP_NoMesh_C.OnCompletedSpawning
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ASupplyCrateBaseBP_NoMesh_C::OnCompletedSpawning()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SupplyCrateBaseBP_NoMesh.SupplyCrateBaseBP_NoMesh_C.OnCompletedSpawning");
		
		ASupplyCrateBaseBP_NoMesh_C_OnCompletedSpawning_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function SupplyCrateBaseBP_NoMesh.SupplyCrateBaseBP_NoMesh_C.ExecuteUbergraph_SupplyCrateBaseBP_NoMesh
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ASupplyCrateBaseBP_NoMesh_C::ExecuteUbergraph_SupplyCrateBaseBP_NoMesh(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SupplyCrateBaseBP_NoMesh.SupplyCrateBaseBP_NoMesh_C.ExecuteUbergraph_SupplyCrateBaseBP_NoMesh");
		
		ASupplyCrateBaseBP_NoMesh_C_ExecuteUbergraph_SupplyCrateBaseBP_NoMesh_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ASupplyCrateBaseBP_NoMesh_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ASupplyCrateBaseBP_NoMesh_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass SupplyCrateBaseBP_NoMesh.SupplyCrateBaseBP_NoMesh_C");
		return ptr;
	}

}


