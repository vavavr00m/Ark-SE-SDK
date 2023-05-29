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
	 * 		Name   -> Function Bee_Queen_Character_BP.Bee_Queen_Character_BP_C.CanSpawnDrones
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 */
	bool ABee_Queen_Character_BP_C::CanSpawnDrones()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Bee_Queen_Character_BP.Bee_Queen_Character_BP_C.CanSpawnDrones");
		
		ABee_Queen_Character_BP_C_CanSpawnDrones_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Bee_Queen_Character_BP.Bee_Queen_Character_BP_C.On Drone Died
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              Damage                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class APawn*                                       InstigatorPawn                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABee_Queen_Character_BP_C::OnDroneDied(float Damage, class APawn* InstigatorPawn)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Bee_Queen_Character_BP.Bee_Queen_Character_BP_C.On Drone Died");
		
		ABee_Queen_Character_BP_C_OnDroneDied_Params params {};
		params.Damage = Damage;
		params.InstigatorPawn = InstigatorPawn;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Bee_Queen_Character_BP.Bee_Queen_Character_BP_C.BPSetupTamed
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               bWasJustTamed                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABee_Queen_Character_BP_C::BPSetupTamed(bool bWasJustTamed)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Bee_Queen_Character_BP.Bee_Queen_Character_BP_C.BPSetupTamed");
		
		ABee_Queen_Character_BP_C_BPSetupTamed_Params params {};
		params.bWasJustTamed = bWasJustTamed;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Bee_Queen_Character_BP.Bee_Queen_Character_BP_C.TimerUpdateDrones
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABee_Queen_Character_BP_C::TimerUpdateDrones()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Bee_Queen_Character_BP.Bee_Queen_Character_BP_C.TimerUpdateDrones");
		
		ABee_Queen_Character_BP_C_TimerUpdateDrones_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Bee_Queen_Character_BP.Bee_Queen_Character_BP_C.GetHiveSocketName
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UHierarchicalInstancedStaticMeshComponent*   Mesh                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class FName                                        Selected                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABee_Queen_Character_BP_C::GetHiveSocketName(class UHierarchicalInstancedStaticMeshComponent* Mesh, class FName* Selected)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Bee_Queen_Character_BP.Bee_Queen_Character_BP_C.GetHiveSocketName");
		
		ABee_Queen_Character_BP_C_GetHiveSocketName_Params params {};
		params.Mesh = Mesh;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Selected != nullptr)
			*Selected = params.Selected;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Bee_Queen_Character_BP.Bee_Queen_Character_BP_C.UpdateDrones
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABee_Queen_Character_BP_C::UpdateDrones()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Bee_Queen_Character_BP.Bee_Queen_Character_BP_C.UpdateDrones");
		
		ABee_Queen_Character_BP_C_UpdateDrones_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Bee_Queen_Character_BP.Bee_Queen_Character_BP_C.AddBeeReference
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class APrimalDinoCharacter*                        BeeReference                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABee_Queen_Character_BP_C::AddBeeReference(class APrimalDinoCharacter* BeeReference)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Bee_Queen_Character_BP.Bee_Queen_Character_BP_C.AddBeeReference");
		
		ABee_Queen_Character_BP_C_AddBeeReference_Params params {};
		params.BeeReference = BeeReference;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Bee_Queen_Character_BP.Bee_Queen_Character_BP_C.BPTryMultiUse
	 * 		Flags  -> (Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class APlayerController*                           ForPC                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		int32_t                                            UseIndex                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	bool ABee_Queen_Character_BP_C::BPTryMultiUse(class APlayerController* ForPC, int32_t UseIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Bee_Queen_Character_BP.Bee_Queen_Character_BP_C.BPTryMultiUse");
		
		ABee_Queen_Character_BP_C_BPTryMultiUse_Params params {};
		params.ForPC = ForPC;
		params.UseIndex = UseIndex;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Bee_Queen_Character_BP.Bee_Queen_Character_BP_C.BPGetMultiUseEntries
	 * 		Flags  -> (Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class APlayerController*                           ForPC                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		TArray<struct FMultiUseEntry>                      MultiUseEntries                                            (Parm, OutParm, ZeroConstructor, ReferenceParm)
	 */
	TArray<struct FMultiUseEntry> ABee_Queen_Character_BP_C::BPGetMultiUseEntries(class APlayerController* ForPC, TArray<struct FMultiUseEntry>* MultiUseEntries)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Bee_Queen_Character_BP.Bee_Queen_Character_BP_C.BPGetMultiUseEntries");
		
		ABee_Queen_Character_BP_C_BPGetMultiUseEntries_Params params {};
		params.ForPC = ForPC;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (MultiUseEntries != nullptr)
			*MultiUseEntries = params.MultiUseEntries;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Bee_Queen_Character_BP.Bee_Queen_Character_BP_C.BPClientDoMultiUse
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class APlayerController*                           ForPC                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		int32_t                                            ClientUseIndex                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABee_Queen_Character_BP_C::BPClientDoMultiUse(class APlayerController* ForPC, int32_t ClientUseIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Bee_Queen_Character_BP.Bee_Queen_Character_BP_C.BPClientDoMultiUse");
		
		ABee_Queen_Character_BP_C_BPClientDoMultiUse_Params params {};
		params.ForPC = ForPC;
		params.ClientUseIndex = ClientUseIndex;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Bee_Queen_Character_BP.Bee_Queen_Character_BP_C.BPAdjustDamage
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              IncomingDamage                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FDamageEvent                                TheDamageEvent                                             (Parm)
	 * 		class AController*                                 EventInstigator                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class AActor*                                      DamageCauser                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               bIsPointDamage                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FHitResult                                  PointHitInfo                                               (Parm)
	 */
	float ABee_Queen_Character_BP_C::BPAdjustDamage(float IncomingDamage, const struct FDamageEvent& TheDamageEvent, class AController* EventInstigator, class AActor* DamageCauser, bool bIsPointDamage, const struct FHitResult& PointHitInfo)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Bee_Queen_Character_BP.Bee_Queen_Character_BP_C.BPAdjustDamage");
		
		ABee_Queen_Character_BP_C_BPAdjustDamage_Params params {};
		params.IncomingDamage = IncomingDamage;
		params.TheDamageEvent = TheDamageEvent;
		params.EventInstigator = EventInstigator;
		params.DamageCauser = DamageCauser;
		params.bIsPointDamage = bIsPointDamage;
		params.PointHitInfo = PointHitInfo;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Bee_Queen_Character_BP.Bee_Queen_Character_BP_C.HideNotify
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABee_Queen_Character_BP_C::HideNotify()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Bee_Queen_Character_BP.Bee_Queen_Character_BP_C.HideNotify");
		
		ABee_Queen_Character_BP_C_HideNotify_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Bee_Queen_Character_BP.Bee_Queen_Character_BP_C.OnRep_bIsHidden
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ABee_Queen_Character_BP_C::OnRep_bIsHidden()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Bee_Queen_Character_BP.Bee_Queen_Character_BP_C.OnRep_bIsHidden");
		
		ABee_Queen_Character_BP_C_OnRep_bIsHidden_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Bee_Queen_Character_BP.Bee_Queen_Character_BP_C.SearchTreesForValidHiveSpawnLocation
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               succeeded                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct UObject_FTransform                          Transform                                                  (Parm, OutParm, IsPlainOldData, NoDestructor)
	 */
	void ABee_Queen_Character_BP_C::SearchTreesForValidHiveSpawnLocation(bool* succeeded, struct UObject_FTransform* Transform)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Bee_Queen_Character_BP.Bee_Queen_Character_BP_C.SearchTreesForValidHiveSpawnLocation");
		
		ABee_Queen_Character_BP_C_SearchTreesForValidHiveSpawnLocation_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (succeeded != nullptr)
			*succeeded = params.succeeded;
		if (Transform != nullptr)
			*Transform = params.Transform;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Bee_Queen_Character_BP.Bee_Queen_Character_BP_C.HideInHive
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class ABeeHive_C*                                  Hive                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABee_Queen_Character_BP_C::HideInHive(class ABeeHive_C* Hive)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Bee_Queen_Character_BP.Bee_Queen_Character_BP_C.HideInHive");
		
		ABee_Queen_Character_BP_C_HideInHive_Params params {};
		params.Hive = Hive;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Bee_Queen_Character_BP.Bee_Queen_Character_BP_C.Try to Spawn Drones
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            NumToSpawn                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               PlayAnim                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABee_Queen_Character_BP_C::TrytoSpawnDrones(int32_t NumToSpawn, bool PlayAnim)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Bee_Queen_Character_BP.Bee_Queen_Character_BP_C.Try to Spawn Drones");
		
		ABee_Queen_Character_BP_C_TrytoSpawnDrones_Params params {};
		params.NumToSpawn = NumToSpawn;
		params.PlayAnim = PlayAnim;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Bee_Queen_Character_BP.Bee_Queen_Character_BP_C.BPTimerServer
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABee_Queen_Character_BP_C::BPTimerServer()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Bee_Queen_Character_BP.Bee_Queen_Character_BP_C.BPTimerServer");
		
		ABee_Queen_Character_BP_C_BPTimerServer_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Bee_Queen_Character_BP.Bee_Queen_Character_BP_C.UserConstructionScript
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABee_Queen_Character_BP_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Bee_Queen_Character_BP.Bee_Queen_Character_BP_C.UserConstructionScript");
		
		ABee_Queen_Character_BP_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Bee_Queen_Character_BP.Bee_Queen_Character_BP_C.SpawnDrone
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            NumToSpawn                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               PlayedAnim                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABee_Queen_Character_BP_C::SpawnDrone(int32_t NumToSpawn, bool PlayedAnim)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Bee_Queen_Character_BP.Bee_Queen_Character_BP_C.SpawnDrone");
		
		ABee_Queen_Character_BP_C_SpawnDrone_Params params {};
		params.NumToSpawn = NumToSpawn;
		params.PlayedAnim = PlayedAnim;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Bee_Queen_Character_BP.Bee_Queen_Character_BP_C.BPUnstasis
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABee_Queen_Character_BP_C::BPUnstasis()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Bee_Queen_Character_BP.Bee_Queen_Character_BP_C.BPUnstasis");
		
		ABee_Queen_Character_BP_C_BPUnstasis_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Bee_Queen_Character_BP.Bee_Queen_Character_BP_C.Init
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ABee_Queen_Character_BP_C::Init()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Bee_Queen_Character_BP.Bee_Queen_Character_BP_C.Init");
		
		ABee_Queen_Character_BP_C_Init_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Bee_Queen_Character_BP.Bee_Queen_Character_BP_C.SpawnSmoke
	 * 		Flags  -> (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
	 */
	void ABee_Queen_Character_BP_C::SpawnSmoke()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Bee_Queen_Character_BP.Bee_Queen_Character_BP_C.SpawnSmoke");
		
		ABee_Queen_Character_BP_C_SpawnSmoke_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Bee_Queen_Character_BP.Bee_Queen_Character_BP_C.Suicide
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ABee_Queen_Character_BP_C::Suicide()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Bee_Queen_Character_BP.Bee_Queen_Character_BP_C.Suicide");
		
		ABee_Queen_Character_BP_C_Suicide_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Bee_Queen_Character_BP.Bee_Queen_Character_BP_C.ReceiveBeginPlay
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABee_Queen_Character_BP_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Bee_Queen_Character_BP.Bee_Queen_Character_BP_C.ReceiveBeginPlay");
		
		ABee_Queen_Character_BP_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Bee_Queen_Character_BP.Bee_Queen_Character_BP_C.OnDied_Event
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class APrimalCharacter*                            DiedCharacter                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABee_Queen_Character_BP_C::OnDied_Event(class APrimalCharacter* DiedCharacter)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Bee_Queen_Character_BP.Bee_Queen_Character_BP_C.OnDied_Event");
		
		ABee_Queen_Character_BP_C_OnDied_Event_Params params {};
		params.DiedCharacter = DiedCharacter;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Bee_Queen_Character_BP.Bee_Queen_Character_BP_C.SpawnedDronePart
	 * 		Flags  -> (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FVector                                     Location                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABee_Queen_Character_BP_C::SpawnedDronePart(const struct FVector& Location)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Bee_Queen_Character_BP.Bee_Queen_Character_BP_C.SpawnedDronePart");
		
		ABee_Queen_Character_BP_C_SpawnedDronePart_Params params {};
		params.Location = Location;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Bee_Queen_Character_BP.Bee_Queen_Character_BP_C.ExecuteUbergraph_Bee_Queen_Character_BP
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABee_Queen_Character_BP_C::ExecuteUbergraph_Bee_Queen_Character_BP(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Bee_Queen_Character_BP.Bee_Queen_Character_BP_C.ExecuteUbergraph_Bee_Queen_Character_BP");
		
		ABee_Queen_Character_BP_C_ExecuteUbergraph_Bee_Queen_Character_BP_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABee_Queen_Character_BP_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABee_Queen_Character_BP_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass Bee_Queen_Character_BP.Bee_Queen_Character_BP_C");
		return ptr;
	}

}


