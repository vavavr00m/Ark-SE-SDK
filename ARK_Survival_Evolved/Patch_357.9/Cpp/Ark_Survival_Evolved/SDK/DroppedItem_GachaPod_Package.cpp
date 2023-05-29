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
	 * 		Name   -> Function DroppedItem_GachaPod.DroppedItem_GachaPod_C.UpdateItemName
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ADroppedItem_GachaPod_C::UpdateItemName()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DroppedItem_GachaPod.DroppedItem_GachaPod_C.UpdateItemName");
		
		ADroppedItem_GachaPod_C_UpdateItemName_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function DroppedItem_GachaPod.DroppedItem_GachaPod_C.ReceiveHit
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UPrimitiveComponent*                         MyComp                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class AActor*                                      Other                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class UPrimitiveComponent*                         OtherComp                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               bSelfMoved                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FVector                                     HitLocation                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FVector                                     HitNormal                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FVector                                     NormalImpulse                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FHitResult                                  Hit                                                        (Parm, OutParm, ReferenceParm)
	 */
	void ADroppedItem_GachaPod_C::ReceiveHit(class UPrimitiveComponent* MyComp, class AActor* Other, class UPrimitiveComponent* OtherComp, bool bSelfMoved, const struct FVector& HitLocation, const struct FVector& HitNormal, const struct FVector& NormalImpulse, struct FHitResult* Hit)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DroppedItem_GachaPod.DroppedItem_GachaPod_C.ReceiveHit");
		
		ADroppedItem_GachaPod_C_ReceiveHit_Params params {};
		params.MyComp = MyComp;
		params.Other = Other;
		params.OtherComp = OtherComp;
		params.bSelfMoved = bSelfMoved;
		params.HitLocation = HitLocation;
		params.HitNormal = HitNormal;
		params.NormalImpulse = NormalImpulse;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Hit != nullptr)
			*Hit = params.Hit;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function DroppedItem_GachaPod.DroppedItem_GachaPod_C.OnRep_ItemQuality
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ADroppedItem_GachaPod_C::OnRep_ItemQuality()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DroppedItem_GachaPod.DroppedItem_GachaPod_C.OnRep_ItemQuality");
		
		ADroppedItem_GachaPod_C_OnRep_ItemQuality_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function DroppedItem_GachaPod.DroppedItem_GachaPod_C.ReceiveBeginPlay
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void ADroppedItem_GachaPod_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DroppedItem_GachaPod.DroppedItem_GachaPod_C.ReceiveBeginPlay");
		
		ADroppedItem_GachaPod_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function DroppedItem_GachaPod.DroppedItem_GachaPod_C.CheckForItem
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void ADroppedItem_GachaPod_C::CheckForItem()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DroppedItem_GachaPod.DroppedItem_GachaPod_C.CheckForItem");
		
		ADroppedItem_GachaPod_C_CheckForItem_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function DroppedItem_GachaPod.DroppedItem_GachaPod_C.ActivateFX
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void ADroppedItem_GachaPod_C::ActivateFX()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DroppedItem_GachaPod.DroppedItem_GachaPod_C.ActivateFX");
		
		ADroppedItem_GachaPod_C_ActivateFX_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function DroppedItem_GachaPod.DroppedItem_GachaPod_C.UserConstructionScript
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void ADroppedItem_GachaPod_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DroppedItem_GachaPod.DroppedItem_GachaPod_C.UserConstructionScript");
		
		ADroppedItem_GachaPod_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function DroppedItem_GachaPod.DroppedItem_GachaPod_C.ColorShift
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ADroppedItem_GachaPod_C::ColorShift()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DroppedItem_GachaPod.DroppedItem_GachaPod_C.ColorShift");
		
		ADroppedItem_GachaPod_C_ColorShift_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function DroppedItem_GachaPod.DroppedItem_GachaPod_C.ExecuteUbergraph_DroppedItem_GachaPod
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ADroppedItem_GachaPod_C::ExecuteUbergraph_DroppedItem_GachaPod(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DroppedItem_GachaPod.DroppedItem_GachaPod_C.ExecuteUbergraph_DroppedItem_GachaPod");
		
		ADroppedItem_GachaPod_C_ExecuteUbergraph_DroppedItem_GachaPod_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ADroppedItem_GachaPod_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ADroppedItem_GachaPod_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass DroppedItem_GachaPod.DroppedItem_GachaPod_C");
		return ptr;
	}

}


