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
	 * 		Name   -> Function Tent_BP.Tent_BP_C.UseFullPickup
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class APrimalStructure*                            StructToPickUp                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               UseFull                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ATent_BP_C::UseFullPickup(class APrimalStructure* StructToPickUp, bool* UseFull)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Tent_BP.Tent_BP_C.UseFullPickup");
		
		ATent_BP_C_UseFullPickup_Params params {};
		params.StructToPickUp = StructToPickUp;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (UseFull != nullptr)
			*UseFull = params.UseFull;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Tent_BP.Tent_BP_C.BPAllowPickupGiveItem
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class APlayerController*                           ForPC                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	bool ATent_BP_C::BPAllowPickupGiveItem(class APlayerController* ForPC)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Tent_BP.Tent_BP_C.BPAllowPickupGiveItem");
		
		ATent_BP_C_BPAllowPickupGiveItem_Params params {};
		params.ForPC = ForPC;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Tent_BP.Tent_BP_C.BPPreventUsingAsFloorForStructure
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FPlacementData                              theOutPlacementData                                        (Parm, OutParm, ReferenceParm)
	 * 		class APrimalStructure*                            StructureToPlaceOnMe                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	bool ATent_BP_C::BPPreventUsingAsFloorForStructure(struct FPlacementData* theOutPlacementData, class APrimalStructure* StructureToPlaceOnMe)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Tent_BP.Tent_BP_C.BPPreventUsingAsFloorForStructure");
		
		ATent_BP_C_BPPreventUsingAsFloorForStructure_Params params {};
		params.StructureToPlaceOnMe = StructureToPlaceOnMe;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (theOutPlacementData != nullptr)
			*theOutPlacementData = params.theOutPlacementData;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Tent_BP.Tent_BP_C.GiveChildStructuresToInventory
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UPrimalInventoryComponent*                   ToInv                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ATent_BP_C::GiveChildStructuresToInventory(class UPrimalInventoryComponent* ToInv)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Tent_BP.Tent_BP_C.GiveChildStructuresToInventory");
		
		ATent_BP_C_GiveChildStructuresToInventory_Params params {};
		params.ToInv = ToInv;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Tent_BP.Tent_BP_C.GiveFloorStructures
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ATent_BP_C::GiveFloorStructures()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Tent_BP.Tent_BP_C.GiveFloorStructures");
		
		ATent_BP_C_GiveFloorStructures_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Tent_BP.Tent_BP_C.ReceiveEndPlay
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		EEndPlayReason                                     EndPlayReason                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ATent_BP_C::ReceiveEndPlay(EEndPlayReason EndPlayReason)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Tent_BP.Tent_BP_C.ReceiveEndPlay");
		
		ATent_BP_C_ReceiveEndPlay_Params params {};
		params.EndPlayReason = EndPlayReason;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Tent_BP.Tent_BP_C.UserConstructionScript
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void ATent_BP_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Tent_BP.Tent_BP_C.UserConstructionScript");
		
		ATent_BP_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Tent_BP.Tent_BP_C.ReceiveBeginPlay
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void ATent_BP_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Tent_BP.Tent_BP_C.ReceiveBeginPlay");
		
		ATent_BP_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Tent_BP.Tent_BP_C.PeriodicDamage
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ATent_BP_C::PeriodicDamage()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Tent_BP.Tent_BP_C.PeriodicDamage");
		
		ATent_BP_C_PeriodicDamage_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Tent_BP.Tent_BP_C.BPApplyCustomDurabilityOnPickup
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UPrimalItem*                                 PickedUp                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ATent_BP_C::BPApplyCustomDurabilityOnPickup(class UPrimalItem* PickedUp)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Tent_BP.Tent_BP_C.BPApplyCustomDurabilityOnPickup");
		
		ATent_BP_C_BPApplyCustomDurabilityOnPickup_Params params {};
		params.PickedUp = PickedUp;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Tent_BP.Tent_BP_C.ExecuteUbergraph_Tent_BP
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ATent_BP_C::ExecuteUbergraph_Tent_BP(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Tent_BP.Tent_BP_C.ExecuteUbergraph_Tent_BP");
		
		ATent_BP_C_ExecuteUbergraph_Tent_BP_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ATent_BP_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ATent_BP_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass Tent_BP.Tent_BP_C");
		return ptr;
	}

}


