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
	 * 		Name   -> Function Service_FKaijuMaybeSpawnTreesAndWyverns.Service_FKaijuMaybeSpawnTreesAndWyverns_C.SpawnBuffingTree
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               Success                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UService_FKaijuMaybeSpawnTreesAndWyverns_C::SpawnBuffingTree(bool* Success)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Service_FKaijuMaybeSpawnTreesAndWyverns.Service_FKaijuMaybeSpawnTreesAndWyverns_C.SpawnBuffingTree");
		
		UService_FKaijuMaybeSpawnTreesAndWyverns_C_SpawnBuffingTree_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Success != nullptr)
			*Success = params.Success;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Service_FKaijuMaybeSpawnTreesAndWyverns.Service_FKaijuMaybeSpawnTreesAndWyverns_C.ShouldSpawnBuffingTrees
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               Result                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UService_FKaijuMaybeSpawnTreesAndWyverns_C::ShouldSpawnBuffingTrees(bool* Result)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Service_FKaijuMaybeSpawnTreesAndWyverns.Service_FKaijuMaybeSpawnTreesAndWyverns_C.ShouldSpawnBuffingTrees");
		
		UService_FKaijuMaybeSpawnTreesAndWyverns_C_ShouldSpawnBuffingTrees_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Result != nullptr)
			*Result = params.Result;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Service_FKaijuMaybeSpawnTreesAndWyverns.Service_FKaijuMaybeSpawnTreesAndWyverns_C.MaybeSpawn Tree on Enemy
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UService_FKaijuMaybeSpawnTreesAndWyverns_C::MaybeSpawnTreeonEnemy()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Service_FKaijuMaybeSpawnTreesAndWyverns.Service_FKaijuMaybeSpawnTreesAndWyverns_C.MaybeSpawn Tree on Enemy");
		
		UService_FKaijuMaybeSpawnTreesAndWyverns_C_MaybeSpawnTreeonEnemy_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Service_FKaijuMaybeSpawnTreesAndWyverns.Service_FKaijuMaybeSpawnTreesAndWyverns_C.SpawnWyvern
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               Success                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UService_FKaijuMaybeSpawnTreesAndWyverns_C::SpawnWyvern(bool* Success)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Service_FKaijuMaybeSpawnTreesAndWyverns.Service_FKaijuMaybeSpawnTreesAndWyverns_C.SpawnWyvern");
		
		UService_FKaijuMaybeSpawnTreesAndWyverns_C_SpawnWyvern_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Success != nullptr)
			*Success = params.Success;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Service_FKaijuMaybeSpawnTreesAndWyverns.Service_FKaijuMaybeSpawnTreesAndWyverns_C.ShouldSpawnWyverns
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               Result                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UService_FKaijuMaybeSpawnTreesAndWyverns_C::ShouldSpawnWyverns(bool* Result)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Service_FKaijuMaybeSpawnTreesAndWyverns.Service_FKaijuMaybeSpawnTreesAndWyverns_C.ShouldSpawnWyverns");
		
		UService_FKaijuMaybeSpawnTreesAndWyverns_C_ShouldSpawnWyverns_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Result != nullptr)
			*Result = params.Result;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Service_FKaijuMaybeSpawnTreesAndWyverns.Service_FKaijuMaybeSpawnTreesAndWyverns_C.ShouldSpawnPoisonTrees
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               Result                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UService_FKaijuMaybeSpawnTreesAndWyverns_C::ShouldSpawnPoisonTrees(bool* Result)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Service_FKaijuMaybeSpawnTreesAndWyverns.Service_FKaijuMaybeSpawnTreesAndWyverns_C.ShouldSpawnPoisonTrees");
		
		UService_FKaijuMaybeSpawnTreesAndWyverns_C_ShouldSpawnPoisonTrees_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Result != nullptr)
			*Result = params.Result;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Service_FKaijuMaybeSpawnTreesAndWyverns.Service_FKaijuMaybeSpawnTreesAndWyverns_C.ReceiveTick
	 * 		Flags  -> (Event, Protected, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AActor*                                      OwnerActor                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		float                                              DeltaSeconds                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UService_FKaijuMaybeSpawnTreesAndWyverns_C::ReceiveTick(class AActor* OwnerActor, float DeltaSeconds)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Service_FKaijuMaybeSpawnTreesAndWyverns.Service_FKaijuMaybeSpawnTreesAndWyverns_C.ReceiveTick");
		
		UService_FKaijuMaybeSpawnTreesAndWyverns_C_ReceiveTick_Params params {};
		params.OwnerActor = OwnerActor;
		params.DeltaSeconds = DeltaSeconds;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Service_FKaijuMaybeSpawnTreesAndWyverns.Service_FKaijuMaybeSpawnTreesAndWyverns_C.ReceiveActivation
	 * 		Flags  -> (Event, Protected, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AActor*                                      OwnerActor                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UService_FKaijuMaybeSpawnTreesAndWyverns_C::ReceiveActivation(class AActor* OwnerActor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Service_FKaijuMaybeSpawnTreesAndWyverns.Service_FKaijuMaybeSpawnTreesAndWyverns_C.ReceiveActivation");
		
		UService_FKaijuMaybeSpawnTreesAndWyverns_C_ReceiveActivation_Params params {};
		params.OwnerActor = OwnerActor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Service_FKaijuMaybeSpawnTreesAndWyverns.Service_FKaijuMaybeSpawnTreesAndWyverns_C.ExecuteUbergraph_Service_FKaijuMaybeSpawnTreesAndWyverns
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UService_FKaijuMaybeSpawnTreesAndWyverns_C::ExecuteUbergraph_Service_FKaijuMaybeSpawnTreesAndWyverns(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Service_FKaijuMaybeSpawnTreesAndWyverns.Service_FKaijuMaybeSpawnTreesAndWyverns_C.ExecuteUbergraph_Service_FKaijuMaybeSpawnTreesAndWyverns");
		
		UService_FKaijuMaybeSpawnTreesAndWyverns_C_ExecuteUbergraph_Service_FKaijuMaybeSpawnTreesAndWyverns_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UService_FKaijuMaybeSpawnTreesAndWyverns_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UService_FKaijuMaybeSpawnTreesAndWyverns_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass Service_FKaijuMaybeSpawnTreesAndWyverns.Service_FKaijuMaybeSpawnTreesAndWyverns_C");
		return ptr;
	}

}


