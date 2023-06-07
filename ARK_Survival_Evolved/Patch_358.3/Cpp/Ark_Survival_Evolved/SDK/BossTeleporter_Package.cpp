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
	 * 		Name   -> Function BossTeleporter.BossTeleporter_C.ManageArenaDisableBuffsForCharacter
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class APrimalCharacter*                            forCharacter                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABossTeleporter_C::ManageArenaDisableBuffsForCharacter(class APrimalCharacter* forCharacter)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BossTeleporter.BossTeleporter_C.ManageArenaDisableBuffsForCharacter");
		
		ABossTeleporter_C_ManageArenaDisableBuffsForCharacter_Params params {};
		params.forCharacter = forCharacter;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function BossTeleporter.BossTeleporter_C.BackupCallArenaDidTeleportOnLevelLoaded
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABossTeleporter_C::BackupCallArenaDidTeleportOnLevelLoaded()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BossTeleporter.BossTeleporter_C.BackupCallArenaDidTeleportOnLevelLoaded");
		
		ABossTeleporter_C_BackupCallArenaDidTeleportOnLevelLoaded_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function BossTeleporter.BossTeleporter_C.Do TeleportSound
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABossTeleporter_C::DoTeleportSound()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BossTeleporter.BossTeleporter_C.Do TeleportSound");
		
		ABossTeleporter_C_DoTeleportSound_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function BossTeleporter.BossTeleporter_C.BuffTickClient
	 * 		Flags  -> (Event, Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              DeltaTime                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABossTeleporter_C::BuffTickClient(float DeltaTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BossTeleporter.BossTeleporter_C.BuffTickClient");
		
		ABossTeleporter_C_BuffTickClient_Params params {};
		params.DeltaTime = DeltaTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function BossTeleporter.BossTeleporter_C.DoTeleport
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABossTeleporter_C::DoTeleport()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BossTeleporter.BossTeleporter_C.DoTeleport");
		
		ABossTeleporter_C_DoTeleport_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function BossTeleporter.BossTeleporter_C.UserConstructionScript
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABossTeleporter_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BossTeleporter.BossTeleporter_C.UserConstructionScript");
		
		ABossTeleporter_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function BossTeleporter.BossTeleporter_C.NetDoTeleport
	 * 		Flags  -> (Net, NetMulticast, BlueprintCallable, BlueprintEvent)
	 */
	void ABossTeleporter_C::NetDoTeleport()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BossTeleporter.BossTeleporter_C.NetDoTeleport");
		
		ABossTeleporter_C_NetDoTeleport_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function BossTeleporter.BossTeleporter_C.ReceiveBeginPlay
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABossTeleporter_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BossTeleporter.BossTeleporter_C.ReceiveBeginPlay");
		
		ABossTeleporter_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function BossTeleporter.BossTeleporter_C.ExecuteUbergraph_BossTeleporter
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABossTeleporter_C::ExecuteUbergraph_BossTeleporter(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BossTeleporter.BossTeleporter_C.ExecuteUbergraph_BossTeleporter");
		
		ABossTeleporter_C_ExecuteUbergraph_BossTeleporter_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABossTeleporter_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABossTeleporter_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BossTeleporter.BossTeleporter_C");
		return ptr;
	}

}


