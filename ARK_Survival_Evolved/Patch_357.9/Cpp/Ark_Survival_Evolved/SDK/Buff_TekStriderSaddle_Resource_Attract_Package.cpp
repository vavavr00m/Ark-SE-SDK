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
	 * 		Name   -> Function Buff_TekStriderSaddle_Resource_Attract.Buff_TekStriderSaddle_Resource_Attract_C.create material on mining drill
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void ABuff_TekStriderSaddle_Resource_Attract_C::creatematerialonminingdrill()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_TekStriderSaddle_Resource_Attract.Buff_TekStriderSaddle_Resource_Attract_C.create material on mining drill");
		
		ABuff_TekStriderSaddle_Resource_Attract_C_creatematerialonminingdrill_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Buff_TekStriderSaddle_Resource_Attract.Buff_TekStriderSaddle_Resource_Attract_C.ReceiveBeginPlay
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABuff_TekStriderSaddle_Resource_Attract_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_TekStriderSaddle_Resource_Attract.Buff_TekStriderSaddle_Resource_Attract_C.ReceiveBeginPlay");
		
		ABuff_TekStriderSaddle_Resource_Attract_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Buff_TekStriderSaddle_Resource_Attract.Buff_TekStriderSaddle_Resource_Attract_C.Start Gather VFX
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABuff_TekStriderSaddle_Resource_Attract_C::StartGatherVFX()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_TekStriderSaddle_Resource_Attract.Buff_TekStriderSaddle_Resource_Attract_C.Start Gather VFX");
		
		ABuff_TekStriderSaddle_Resource_Attract_C_StartGatherVFX_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Buff_TekStriderSaddle_Resource_Attract.Buff_TekStriderSaddle_Resource_Attract_C.Has Stopped Gathering Resources
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABuff_TekStriderSaddle_Resource_Attract_C::HasStoppedGatheringResources()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_TekStriderSaddle_Resource_Attract.Buff_TekStriderSaddle_Resource_Attract_C.Has Stopped Gathering Resources");
		
		ABuff_TekStriderSaddle_Resource_Attract_C_HasStoppedGatheringResources_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Buff_TekStriderSaddle_Resource_Attract.Buff_TekStriderSaddle_Resource_Attract_C.BuffTickClient
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              DeltaTime                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABuff_TekStriderSaddle_Resource_Attract_C::BuffTickClient(float DeltaTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_TekStriderSaddle_Resource_Attract.Buff_TekStriderSaddle_Resource_Attract_C.BuffTickClient");
		
		ABuff_TekStriderSaddle_Resource_Attract_C_BuffTickClient_Params params {};
		params.DeltaTime = DeltaTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Buff_TekStriderSaddle_Resource_Attract.Buff_TekStriderSaddle_Resource_Attract_C.BuffTickServer
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              DeltaTime                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABuff_TekStriderSaddle_Resource_Attract_C::BuffTickServer(float DeltaTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_TekStriderSaddle_Resource_Attract.Buff_TekStriderSaddle_Resource_Attract_C.BuffTickServer");
		
		ABuff_TekStriderSaddle_Resource_Attract_C_BuffTickServer_Params params {};
		params.DeltaTime = DeltaTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Buff_TekStriderSaddle_Resource_Attract.Buff_TekStriderSaddle_Resource_Attract_C.UserConstructionScript
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABuff_TekStriderSaddle_Resource_Attract_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_TekStriderSaddle_Resource_Attract.Buff_TekStriderSaddle_Resource_Attract_C.UserConstructionScript");
		
		ABuff_TekStriderSaddle_Resource_Attract_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Buff_TekStriderSaddle_Resource_Attract.Buff_TekStriderSaddle_Resource_Attract_C.InventoryItemAdded__DelegateSignature_Event
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UPrimalInventoryComponent*                   inventory                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class UPrimalItem*                                 Item                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		int32_t                                            AmountAdded                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               bEquippedItem                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABuff_TekStriderSaddle_Resource_Attract_C::InventoryItemAdded__DelegateSignature_Event(class UPrimalInventoryComponent* inventory, class UPrimalItem* Item, int32_t AmountAdded, bool bEquippedItem)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_TekStriderSaddle_Resource_Attract.Buff_TekStriderSaddle_Resource_Attract_C.InventoryItemAdded__DelegateSignature_Event");
		
		ABuff_TekStriderSaddle_Resource_Attract_C_InventoryItemAdded__DelegateSignature_Event_Params params {};
		params.inventory = inventory;
		params.Item = Item;
		params.AmountAdded = AmountAdded;
		params.bEquippedItem = bEquippedItem;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Buff_TekStriderSaddle_Resource_Attract.Buff_TekStriderSaddle_Resource_Attract_C.bind item added
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ABuff_TekStriderSaddle_Resource_Attract_C::binditemadded()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_TekStriderSaddle_Resource_Attract.Buff_TekStriderSaddle_Resource_Attract_C.bind item added");
		
		ABuff_TekStriderSaddle_Resource_Attract_C_binditemadded_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Buff_TekStriderSaddle_Resource_Attract.Buff_TekStriderSaddle_Resource_Attract_C.set strider ref
	 * 		Flags  -> (NetReliable, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AActor*                                      striderref                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABuff_TekStriderSaddle_Resource_Attract_C::setstriderref(class AActor* striderref)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_TekStriderSaddle_Resource_Attract.Buff_TekStriderSaddle_Resource_Attract_C.set strider ref");
		
		ABuff_TekStriderSaddle_Resource_Attract_C_setstriderref_Params params {};
		params.striderref = striderref;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Buff_TekStriderSaddle_Resource_Attract.Buff_TekStriderSaddle_Resource_Attract_C.set strider ref on clients
	 * 		Flags  -> (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AActor*                                      strider                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABuff_TekStriderSaddle_Resource_Attract_C::setstriderrefonclients(class AActor* strider)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_TekStriderSaddle_Resource_Attract.Buff_TekStriderSaddle_Resource_Attract_C.set strider ref on clients");
		
		ABuff_TekStriderSaddle_Resource_Attract_C_setstriderrefonclients_Params params {};
		params.strider = strider;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Buff_TekStriderSaddle_Resource_Attract.Buff_TekStriderSaddle_Resource_Attract_C.ExecuteUbergraph_Buff_TekStriderSaddle_Resource_Attract
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABuff_TekStriderSaddle_Resource_Attract_C::ExecuteUbergraph_Buff_TekStriderSaddle_Resource_Attract(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_TekStriderSaddle_Resource_Attract.Buff_TekStriderSaddle_Resource_Attract_C.ExecuteUbergraph_Buff_TekStriderSaddle_Resource_Attract");
		
		ABuff_TekStriderSaddle_Resource_Attract_C_ExecuteUbergraph_Buff_TekStriderSaddle_Resource_Attract_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABuff_TekStriderSaddle_Resource_Attract_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABuff_TekStriderSaddle_Resource_Attract_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass Buff_TekStriderSaddle_Resource_Attract.Buff_TekStriderSaddle_Resource_Attract_C");
		return ptr;
	}

}


