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
	 * 		Name   -> Function ZiplineComponent_Base.ZiplineComponent_Base_C.GetFinishedAttach_InterfaceCall
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               bOutAttached                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UZiplineComponent_Base_C::GetFinishedAttach_InterfaceCall(bool* bOutAttached)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ZiplineComponent_Base.ZiplineComponent_Base_C.GetFinishedAttach_InterfaceCall");
		
		UZiplineComponent_Base_C_GetFinishedAttach_InterfaceCall_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (bOutAttached != nullptr)
			*bOutAttached = params.bOutAttached;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function ZiplineComponent_Base.ZiplineComponent_Base_C.GetActiveTargetedZipline
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class APrimalStructure*                            Zipline                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UZiplineComponent_Base_C::GetActiveTargetedZipline(class APrimalStructure** Zipline)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ZiplineComponent_Base.ZiplineComponent_Base_C.GetActiveTargetedZipline");
		
		UZiplineComponent_Base_C_GetActiveTargetedZipline_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Zipline != nullptr)
			*Zipline = params.Zipline;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function ZiplineComponent_Base.ZiplineComponent_Base_C.Get Process Move to Order_InterfaceCall
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               Return                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UZiplineComponent_Base_C::GetProcessMovetoOrder_InterfaceCall(bool* Return)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ZiplineComponent_Base.ZiplineComponent_Base_C.Get Process Move to Order_InterfaceCall");
		
		UZiplineComponent_Base_C_GetProcessMovetoOrder_InterfaceCall_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Return != nullptr)
			*Return = params.Return;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function ZiplineComponent_Base.ZiplineComponent_Base_C.Get Current Move to Order Location_InterfaceCall
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FVector                                     OutLocation                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UZiplineComponent_Base_C::GetCurrentMovetoOrderLocation_InterfaceCall(struct FVector* OutLocation)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ZiplineComponent_Base.ZiplineComponent_Base_C.Get Current Move to Order Location_InterfaceCall");
		
		UZiplineComponent_Base_C_GetCurrentMovetoOrderLocation_InterfaceCall_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutLocation != nullptr)
			*OutLocation = params.OutLocation;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function ZiplineComponent_Base.ZiplineComponent_Base_C.GetClosestLocationToPointFromArray_InterfaceCall
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FVector                                     InPoint                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		TArray<struct FVector>                             InArray                                                    (Parm, OutParm, ZeroConstructor, ReferenceParm)
	 * 		struct FVector                                     OutClosestPoint                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		int32_t                                            OutIndex                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UZiplineComponent_Base_C::GetClosestLocationToPointFromArray_InterfaceCall(const struct FVector& InPoint, TArray<struct FVector>* InArray, struct FVector* OutClosestPoint, int32_t* OutIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ZiplineComponent_Base.ZiplineComponent_Base_C.GetClosestLocationToPointFromArray_InterfaceCall");
		
		UZiplineComponent_Base_C_GetClosestLocationToPointFromArray_InterfaceCall_Params params {};
		params.InPoint = InPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (InArray != nullptr)
			*InArray = params.InArray;
		if (OutClosestPoint != nullptr)
			*OutClosestPoint = params.OutClosestPoint;
		if (OutIndex != nullptr)
			*OutIndex = params.OutIndex;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function ZiplineComponent_Base.ZiplineComponent_Base_C.Get Zipline Buff_Interface Call
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class APrimalBuff*                                 Buff                                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UZiplineComponent_Base_C::GetZiplineBuff_InterfaceCall(class APrimalBuff** Buff)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ZiplineComponent_Base.ZiplineComponent_Base_C.Get Zipline Buff_Interface Call");
		
		UZiplineComponent_Base_C_GetZiplineBuff_InterfaceCall_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Buff != nullptr)
			*Buff = params.Buff;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function ZiplineComponent_Base.ZiplineComponent_Base_C.GetKeepHanging_InterfaceCall
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               bKeepHanging                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UZiplineComponent_Base_C::GetKeepHanging_InterfaceCall(bool* bKeepHanging)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ZiplineComponent_Base.ZiplineComponent_Base_C.GetKeepHanging_InterfaceCall");
		
		UZiplineComponent_Base_C_GetKeepHanging_InterfaceCall_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (bKeepHanging != nullptr)
			*bKeepHanging = params.bKeepHanging;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function ZiplineComponent_Base.ZiplineComponent_Base_C.Try Attaching to Zipline_InterfaceCall
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class APrimalStructure*                            OverrideAnchor                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FVector                                     OverrideStartLocation                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		float                                              OverrideFindLocationDistance                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FVector                                     OverrideFindLocationDirection                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               bDontUseLineOfSightCheck                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               bSuccess                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UZiplineComponent_Base_C::TryAttachingtoZipline_InterfaceCall(class APrimalStructure* OverrideAnchor, const struct FVector& OverrideStartLocation, float OverrideFindLocationDistance, const struct FVector& OverrideFindLocationDirection, bool bDontUseLineOfSightCheck, bool* bSuccess)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ZiplineComponent_Base.ZiplineComponent_Base_C.Try Attaching to Zipline_InterfaceCall");
		
		UZiplineComponent_Base_C_TryAttachingtoZipline_InterfaceCall_Params params {};
		params.OverrideAnchor = OverrideAnchor;
		params.OverrideStartLocation = OverrideStartLocation;
		params.OverrideFindLocationDistance = OverrideFindLocationDistance;
		params.OverrideFindLocationDirection = OverrideFindLocationDirection;
		params.bDontUseLineOfSightCheck = bDontUseLineOfSightCheck;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (bSuccess != nullptr)
			*bSuccess = params.bSuccess;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function ZiplineComponent_Base.ZiplineComponent_Base_C.Get Is Hanging_InterfaceCall
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               bIsHanging                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UZiplineComponent_Base_C::GetIsHanging_InterfaceCall(bool* bIsHanging)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ZiplineComponent_Base.ZiplineComponent_Base_C.Get Is Hanging_InterfaceCall");
		
		UZiplineComponent_Base_C_GetIsHanging_InterfaceCall_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (bIsHanging != nullptr)
			*bIsHanging = params.bIsHanging;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function ZiplineComponent_Base.ZiplineComponent_Base_C.Get Attach from Below_InterfaceCall
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               bAttachFromBelow                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UZiplineComponent_Base_C::GetAttachfromBelow_InterfaceCall(bool* bAttachFromBelow)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ZiplineComponent_Base.ZiplineComponent_Base_C.Get Attach from Below_InterfaceCall");
		
		UZiplineComponent_Base_C_GetAttachfromBelow_InterfaceCall_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (bAttachFromBelow != nullptr)
			*bAttachFromBelow = params.bAttachFromBelow;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function ZiplineComponent_Base.ZiplineComponent_Base_C.Get Zipline New Target Location_InterfaceCall
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FVector                                     NewTargetLocation                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UZiplineComponent_Base_C::GetZiplineNewTargetLocation_InterfaceCall(struct FVector* NewTargetLocation)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ZiplineComponent_Base.ZiplineComponent_Base_C.Get Zipline New Target Location_InterfaceCall");
		
		UZiplineComponent_Base_C_GetZiplineNewTargetLocation_InterfaceCall_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (NewTargetLocation != nullptr)
			*NewTargetLocation = params.NewTargetLocation;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function ZiplineComponent_Base.ZiplineComponent_Base_C.Get Is Zipline Jumping_InterfaceCall
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               bZiplineJumping                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UZiplineComponent_Base_C::GetIsZiplineJumping_InterfaceCall(bool* bZiplineJumping)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ZiplineComponent_Base.ZiplineComponent_Base_C.Get Is Zipline Jumping_InterfaceCall");
		
		UZiplineComponent_Base_C_GetIsZiplineJumping_InterfaceCall_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (bZiplineJumping != nullptr)
			*bZiplineJumping = params.bZiplineJumping;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function ZiplineComponent_Base.ZiplineComponent_Base_C.Get Sliding_InterfaceCall
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               bSliding                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UZiplineComponent_Base_C::GetSliding_InterfaceCall(bool* bSliding)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ZiplineComponent_Base.ZiplineComponent_Base_C.Get Sliding_InterfaceCall");
		
		UZiplineComponent_Base_C_GetSliding_InterfaceCall_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (bSliding != nullptr)
			*bSliding = params.bSliding;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function ZiplineComponent_Base.ZiplineComponent_Base_C.Get Current Targeted Zipline_InterfaceCall
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class APrimalStructure*                            Anchor                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UZiplineComponent_Base_C::GetCurrentTargetedZipline_InterfaceCall(class APrimalStructure** Anchor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ZiplineComponent_Base.ZiplineComponent_Base_C.Get Current Targeted Zipline_InterfaceCall");
		
		UZiplineComponent_Base_C_GetCurrentTargetedZipline_InterfaceCall_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Anchor != nullptr)
			*Anchor = params.Anchor;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function ZiplineComponent_Base.ZiplineComponent_Base_C.Get Using Zipline_InterfaceCall
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               bUsingZipline                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UZiplineComponent_Base_C::GetUsingZipline_InterfaceCall(bool* bUsingZipline)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ZiplineComponent_Base.ZiplineComponent_Base_C.Get Using Zipline_InterfaceCall");
		
		UZiplineComponent_Base_C_GetUsingZipline_InterfaceCall_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (bUsingZipline != nullptr)
			*bUsingZipline = params.bUsingZipline;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function ZiplineComponent_Base.ZiplineComponent_Base_C.Get Allow Zipline Jumping_InterfaceCall
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               bAllowZiplineJumping                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UZiplineComponent_Base_C::GetAllowZiplineJumping_InterfaceCall(bool* bAllowZiplineJumping)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ZiplineComponent_Base.ZiplineComponent_Base_C.Get Allow Zipline Jumping_InterfaceCall");
		
		UZiplineComponent_Base_C_GetAllowZiplineJumping_InterfaceCall_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (bAllowZiplineJumping != nullptr)
			*bAllowZiplineJumping = params.bAllowZiplineJumping;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function ZiplineComponent_Base.ZiplineComponent_Base_C.FinishedAttaching
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UZiplineComponent_Base_C::FinishedAttaching()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ZiplineComponent_Base.ZiplineComponent_Base_C.FinishedAttaching");
		
		UZiplineComponent_Base_C_FinishedAttaching_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function ZiplineComponent_Base.ZiplineComponent_Base_C.SoftSetTransform
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct UObject_FTransform                          NewTransform                                               (Parm, IsPlainOldData, NoDestructor)
	 */
	void UZiplineComponent_Base_C::SoftSetTransform(const struct UObject_FTransform& NewTransform)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ZiplineComponent_Base.ZiplineComponent_Base_C.SoftSetTransform");
		
		UZiplineComponent_Base_C_SoftSetTransform_Params params {};
		params.NewTransform = NewTransform;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function ZiplineComponent_Base.ZiplineComponent_Base_C.AnimNotifyCustomEvent
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FName                                        EventName                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UZiplineComponent_Base_C::AnimNotifyCustomEvent(const class FName& EventName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ZiplineComponent_Base.ZiplineComponent_Base_C.AnimNotifyCustomEvent");
		
		UZiplineComponent_Base_C_AnimNotifyCustomEvent_Params params {};
		params.EventName = EventName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function ZiplineComponent_Base.ZiplineComponent_Base_C.OverrideMoveToOrder
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FVector                                     Location                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               bOverride                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UZiplineComponent_Base_C::OverrideMoveToOrder(const struct FVector& Location, bool* bOverride)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ZiplineComponent_Base.ZiplineComponent_Base_C.OverrideMoveToOrder");
		
		UZiplineComponent_Base_C_OverrideMoveToOrder_Params params {};
		params.Location = Location;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (bOverride != nullptr)
			*bOverride = params.bOverride;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function ZiplineComponent_Base.ZiplineComponent_Base_C.TryAttachingToZipline
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AZipline_Anchor_C*                           OverrideAnchor                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FVector                                     OverrideStartLocation                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		float                                              OverrideFindLocationDistance                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FVector                                     OverrideFindLocationDirection                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               bSuccess                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UZiplineComponent_Base_C::TryAttachingToZipline(class AZipline_Anchor_C* OverrideAnchor, const struct FVector& OverrideStartLocation, float OverrideFindLocationDistance, const struct FVector& OverrideFindLocationDirection, bool* bSuccess)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ZiplineComponent_Base.ZiplineComponent_Base_C.TryAttachingToZipline");
		
		UZiplineComponent_Base_C_TryAttachingToZipline_Params params {};
		params.OverrideAnchor = OverrideAnchor;
		params.OverrideStartLocation = OverrideStartLocation;
		params.OverrideFindLocationDistance = OverrideFindLocationDistance;
		params.OverrideFindLocationDirection = OverrideFindLocationDirection;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (bSuccess != nullptr)
			*bSuccess = params.bSuccess;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function ZiplineComponent_Base.ZiplineComponent_Base_C.Create Zipline Buff and Start Riding
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AZipline_Anchor_C*                           Anchor                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UZiplineComponent_Base_C::CreateZiplineBuffandStartRiding(class AZipline_Anchor_C* Anchor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ZiplineComponent_Base.ZiplineComponent_Base_C.Create Zipline Buff and Start Riding");
		
		UZiplineComponent_Base_C_CreateZiplineBuffandStartRiding_Params params {};
		params.Anchor = Anchor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function ZiplineComponent_Base.ZiplineComponent_Base_C.IsTargetZiplineBlocked
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FVector                                     Location                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class AZipline_Anchor_C*                           Anchor                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		float                                              OverrideFindLocationDistance                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FHitResult                                  HitResult                                                  (Parm, OutParm)
	 * 		bool                                               HitReturn                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FVector                                     StartLocation                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UZiplineComponent_Base_C::IsTargetZiplineBlocked(const struct FVector& Location, class AZipline_Anchor_C* Anchor, float OverrideFindLocationDistance, struct FHitResult* HitResult, bool* HitReturn, struct FVector* StartLocation)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ZiplineComponent_Base.ZiplineComponent_Base_C.IsTargetZiplineBlocked");
		
		UZiplineComponent_Base_C_IsTargetZiplineBlocked_Params params {};
		params.Location = Location;
		params.Anchor = Anchor;
		params.OverrideFindLocationDistance = OverrideFindLocationDistance;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (HitResult != nullptr)
			*HitResult = params.HitResult;
		if (HitReturn != nullptr)
			*HitReturn = params.HitReturn;
		if (StartLocation != nullptr)
			*StartLocation = params.StartLocation;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function ZiplineComponent_Base.ZiplineComponent_Base_C.OnStartJump
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               Return                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UZiplineComponent_Base_C::OnStartJump(bool* Return)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ZiplineComponent_Base.ZiplineComponent_Base_C.OnStartJump");
		
		UZiplineComponent_Base_C_OnStartJump_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Return != nullptr)
			*Return = params.Return;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function ZiplineComponent_Base.ZiplineComponent_Base_C.NotifyClearRider
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AShooterCharacter*                           RiderClearing                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UZiplineComponent_Base_C::NotifyClearRider(class AShooterCharacter* RiderClearing)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ZiplineComponent_Base.ZiplineComponent_Base_C.NotifyClearRider");
		
		UZiplineComponent_Base_C_NotifyClearRider_Params params {};
		params.RiderClearing = RiderClearing;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function ZiplineComponent_Base.ZiplineComponent_Base_C.NotifyRider
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AShooterCharacter*                           Rider                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UZiplineComponent_Base_C::NotifyRider(class AShooterCharacter* Rider)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ZiplineComponent_Base.ZiplineComponent_Base_C.NotifyRider");
		
		UZiplineComponent_Base_C_NotifyRider_Params params {};
		params.Rider = Rider;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function ZiplineComponent_Base.ZiplineComponent_Base_C.SetServerTickEveryFrame
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               tickEveryFrame                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UZiplineComponent_Base_C::SetServerTickEveryFrame(bool tickEveryFrame)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ZiplineComponent_Base.ZiplineComponent_Base_C.SetServerTickEveryFrame");
		
		UZiplineComponent_Base_C_SetServerTickEveryFrame_Params params {};
		params.tickEveryFrame = tickEveryFrame;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function ZiplineComponent_Base.ZiplineComponent_Base_C.TimerServer
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UZiplineComponent_Base_C::TimerServer()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ZiplineComponent_Base.ZiplineComponent_Base_C.TimerServer");
		
		UZiplineComponent_Base_C_TimerServer_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function ZiplineComponent_Base.ZiplineComponent_Base_C.TimerNonDedicated
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UZiplineComponent_Base_C::TimerNonDedicated()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ZiplineComponent_Base.ZiplineComponent_Base_C.TimerNonDedicated");
		
		UZiplineComponent_Base_C_TimerNonDedicated_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function ZiplineComponent_Base.ZiplineComponent_Base_C.Get Target Mesh Relative Transform Pure
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		struct UObject_FTransform                          Result                                                     (Parm, OutParm, IsPlainOldData, NoDestructor)
	 */
	void UZiplineComponent_Base_C::GetTargetMeshRelativeTransformPure(struct UObject_FTransform* Result)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ZiplineComponent_Base.ZiplineComponent_Base_C.Get Target Mesh Relative Transform Pure");
		
		UZiplineComponent_Base_C_GetTargetMeshRelativeTransformPure_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Result != nullptr)
			*Result = params.Result;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function ZiplineComponent_Base.ZiplineComponent_Base_C.Update TPView Offset
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UZiplineComponent_Base_C::UpdateTPViewOffset()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ZiplineComponent_Base.ZiplineComponent_Base_C.Update TPView Offset");
		
		UZiplineComponent_Base_C_UpdateTPViewOffset_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function ZiplineComponent_Base.ZiplineComponent_Base_C.Update Non Dedi Active
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UZiplineComponent_Base_C::UpdateNonDediActive()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ZiplineComponent_Base.ZiplineComponent_Base_C.Update Non Dedi Active");
		
		UZiplineComponent_Base_C_UpdateNonDediActive_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function ZiplineComponent_Base.ZiplineComponent_Base_C.Get Closest Point on Line
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		struct FVector                                     A                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FVector                                     B                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FVector                                     Point                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FVector                                     closestPoint                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UZiplineComponent_Base_C::GetClosestPointonLine(const struct FVector& A, const struct FVector& B, const struct FVector& Point, struct FVector* closestPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ZiplineComponent_Base.ZiplineComponent_Base_C.Get Closest Point on Line");
		
		UZiplineComponent_Base_C_GetClosestPointonLine_Params params {};
		params.A = A;
		params.B = B;
		params.Point = Point;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (closestPoint != nullptr)
			*closestPoint = params.closestPoint;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function ZiplineComponent_Base.ZiplineComponent_Base_C.Update Crosshair
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UZiplineComponent_Base_C::UpdateCrosshair()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ZiplineComponent_Base.ZiplineComponent_Base_C.Update Crosshair");
		
		UZiplineComponent_Base_C_UpdateCrosshair_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function ZiplineComponent_Base.ZiplineComponent_Base_C.GetClosestLocationToPointFromArray
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		TArray<struct FVector>                             LocationsToTest                                            (Parm, OutParm, ZeroConstructor, ReferenceParm)
	 * 		struct FVector                                     Point                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FVector                                     ClosestLocation                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		int32_t                                            ArrayIndex                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UZiplineComponent_Base_C::GetClosestLocationToPointFromArray(TArray<struct FVector>* LocationsToTest, const struct FVector& Point, struct FVector* ClosestLocation, int32_t* ArrayIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ZiplineComponent_Base.ZiplineComponent_Base_C.GetClosestLocationToPointFromArray");
		
		UZiplineComponent_Base_C_GetClosestLocationToPointFromArray_Params params {};
		params.Point = Point;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (LocationsToTest != nullptr)
			*LocationsToTest = params.LocationsToTest;
		if (ClosestLocation != nullptr)
			*ClosestLocation = params.ClosestLocation;
		if (ArrayIndex != nullptr)
			*ArrayIndex = params.ArrayIndex;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function ZiplineComponent_Base.ZiplineComponent_Base_C.GetZiplineBuff
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class ABuff_Zipline_DinoBase_C*                    ZiplineBuff                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UZiplineComponent_Base_C::GetZiplineBuff(class ABuff_Zipline_DinoBase_C** ZiplineBuff)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ZiplineComponent_Base.ZiplineComponent_Base_C.GetZiplineBuff");
		
		UZiplineComponent_Base_C_GetZiplineBuff_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (ZiplineBuff != nullptr)
			*ZiplineBuff = params.ZiplineBuff;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function ZiplineComponent_Base.ZiplineComponent_Base_C.GetTargetedZipline
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AZipline_Anchor_C*                           targetedZipline                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FVector                                     Location                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UZiplineComponent_Base_C::GetTargetedZipline(class AZipline_Anchor_C** targetedZipline, struct FVector* Location)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ZiplineComponent_Base.ZiplineComponent_Base_C.GetTargetedZipline");
		
		UZiplineComponent_Base_C_GetTargetedZipline_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (targetedZipline != nullptr)
			*targetedZipline = params.targetedZipline;
		if (Location != nullptr)
			*Location = params.Location;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function ZiplineComponent_Base.ZiplineComponent_Base_C.UpdateNonDediLimits
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UZiplineComponent_Base_C::UpdateNonDediLimits()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ZiplineComponent_Base.ZiplineComponent_Base_C.UpdateNonDediLimits");
		
		UZiplineComponent_Base_C_UpdateNonDediLimits_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function ZiplineComponent_Base.ZiplineComponent_Base_C.SetNonDediTimerTickEveryFrame
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               tickEveryFrame                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UZiplineComponent_Base_C::SetNonDediTimerTickEveryFrame(bool tickEveryFrame)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ZiplineComponent_Base.ZiplineComponent_Base_C.SetNonDediTimerTickEveryFrame");
		
		UZiplineComponent_Base_C_SetNonDediTimerTickEveryFrame_Params params {};
		params.tickEveryFrame = tickEveryFrame;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function ZiplineComponent_Base.ZiplineComponent_Base_C.InterpMeshRelativeTransform
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              DeltaTime                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UZiplineComponent_Base_C::InterpMeshRelativeTransform(float DeltaTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ZiplineComponent_Base.ZiplineComponent_Base_C.InterpMeshRelativeTransform");
		
		UZiplineComponent_Base_C_InterpMeshRelativeTransform_Params params {};
		params.DeltaTime = DeltaTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function ZiplineComponent_Base.ZiplineComponent_Base_C.BPOnComponentCreated
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void UZiplineComponent_Base_C::BPOnComponentCreated()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ZiplineComponent_Base.ZiplineComponent_Base_C.BPOnComponentCreated");
		
		UZiplineComponent_Base_C_BPOnComponentCreated_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function ZiplineComponent_Base.ZiplineComponent_Base_C.ZiplineNonDediLogic
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void UZiplineComponent_Base_C::ZiplineNonDediLogic()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ZiplineComponent_Base.ZiplineComponent_Base_C.ZiplineNonDediLogic");
		
		UZiplineComponent_Base_C_ZiplineNonDediLogic_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function ZiplineComponent_Base.ZiplineComponent_Base_C.Multi Soft Set Transform_InterfaceCall
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct UObject_FTransform                          NewTransform                                               (Parm, IsPlainOldData, NoDestructor)
	 */
	void UZiplineComponent_Base_C::MultiSoftSetTransform_InterfaceCall(const struct UObject_FTransform& NewTransform)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ZiplineComponent_Base.ZiplineComponent_Base_C.Multi Soft Set Transform_InterfaceCall");
		
		UZiplineComponent_Base_C_MultiSoftSetTransform_InterfaceCall_Params params {};
		params.NewTransform = NewTransform;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function ZiplineComponent_Base.ZiplineComponent_Base_C.Set Initial Velocity Multicast_InterfaceCall
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FVector                                     Velocity                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UZiplineComponent_Base_C::SetInitialVelocityMulticast_InterfaceCall(const struct FVector& Velocity)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ZiplineComponent_Base.ZiplineComponent_Base_C.Set Initial Velocity Multicast_InterfaceCall");
		
		UZiplineComponent_Base_C_SetInitialVelocityMulticast_InterfaceCall_Params params {};
		params.Velocity = Velocity;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function ZiplineComponent_Base.ZiplineComponent_Base_C.Set Is Hanging_InterfaceCall
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               bNewIsHanging                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UZiplineComponent_Base_C::SetIsHanging_InterfaceCall(bool bNewIsHanging)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ZiplineComponent_Base.ZiplineComponent_Base_C.Set Is Hanging_InterfaceCall");
		
		UZiplineComponent_Base_C_SetIsHanging_InterfaceCall_Params params {};
		params.bNewIsHanging = bNewIsHanging;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function ZiplineComponent_Base.ZiplineComponent_Base_C.Set Non Dedi Tick Every Frame_InterfaceCall
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               bNewTickEveryFrame                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UZiplineComponent_Base_C::SetNonDediTickEveryFrame_InterfaceCall(bool bNewTickEveryFrame)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ZiplineComponent_Base.ZiplineComponent_Base_C.Set Non Dedi Tick Every Frame_InterfaceCall");
		
		UZiplineComponent_Base_C_SetNonDediTickEveryFrame_InterfaceCall_Params params {};
		params.bNewTickEveryFrame = bNewTickEveryFrame;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function ZiplineComponent_Base.ZiplineComponent_Base_C.Set Sliding_InterfaceCall
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               bNewSliding                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UZiplineComponent_Base_C::SetSliding_InterfaceCall(bool bNewSliding)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ZiplineComponent_Base.ZiplineComponent_Base_C.Set Sliding_InterfaceCall");
		
		UZiplineComponent_Base_C_SetSliding_InterfaceCall_Params params {};
		params.bNewSliding = bNewSliding;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function ZiplineComponent_Base.ZiplineComponent_Base_C.Set Zipline Jump Off Direction AI_InterfaceCall
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FVector                                     NewZiplineJumpOffDirectionAI                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UZiplineComponent_Base_C::SetZiplineJumpOffDirectionAI_InterfaceCall(const struct FVector& NewZiplineJumpOffDirectionAI)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ZiplineComponent_Base.ZiplineComponent_Base_C.Set Zipline Jump Off Direction AI_InterfaceCall");
		
		UZiplineComponent_Base_C_SetZiplineJumpOffDirectionAI_InterfaceCall_Params params {};
		params.NewZiplineJumpOffDirectionAI = NewZiplineJumpOffDirectionAI;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function ZiplineComponent_Base.ZiplineComponent_Base_C.Set Zipline New Target Location_InterfaceCall
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FVector                                     NewLocation                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UZiplineComponent_Base_C::SetZiplineNewTargetLocation_InterfaceCall(const struct FVector& NewLocation)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ZiplineComponent_Base.ZiplineComponent_Base_C.Set Zipline New Target Location_InterfaceCall");
		
		UZiplineComponent_Base_C_SetZiplineNewTargetLocation_InterfaceCall_Params params {};
		params.NewLocation = NewLocation;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function ZiplineComponent_Base.ZiplineComponent_Base_C.Start Zipline Jumping_InterfaceCall
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UZiplineComponent_Base_C::StartZiplineJumping_InterfaceCall()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ZiplineComponent_Base.ZiplineComponent_Base_C.Start Zipline Jumping_InterfaceCall");
		
		UZiplineComponent_Base_C_StartZiplineJumping_InterfaceCall_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function ZiplineComponent_Base.ZiplineComponent_Base_C.SetKeepHanging_InterfaceCall
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               bNewKeepHanging                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UZiplineComponent_Base_C::SetKeepHanging_InterfaceCall(bool bNewKeepHanging)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ZiplineComponent_Base.ZiplineComponent_Base_C.SetKeepHanging_InterfaceCall");
		
		UZiplineComponent_Base_C_SetKeepHanging_InterfaceCall_Params params {};
		params.bNewKeepHanging = bNewKeepHanging;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function ZiplineComponent_Base.ZiplineComponent_Base_C.SetUsingZipline_InterfaceCall
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               bUsingZipline                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UZiplineComponent_Base_C::SetUsingZipline_InterfaceCall(bool bUsingZipline)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ZiplineComponent_Base.ZiplineComponent_Base_C.SetUsingZipline_InterfaceCall");
		
		UZiplineComponent_Base_C_SetUsingZipline_InterfaceCall_Params params {};
		params.bUsingZipline = bUsingZipline;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function ZiplineComponent_Base.ZiplineComponent_Base_C.Set Zipline Jump Off Impulse AI_InterfaceCall
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FVector                                     NewZiplineJumpOffImpulseAI                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UZiplineComponent_Base_C::SetZiplineJumpOffImpulseAI_InterfaceCall(const struct FVector& NewZiplineJumpOffImpulseAI)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ZiplineComponent_Base.ZiplineComponent_Base_C.Set Zipline Jump Off Impulse AI_InterfaceCall");
		
		UZiplineComponent_Base_C_SetZiplineJumpOffImpulseAI_InterfaceCall_Params params {};
		params.NewZiplineJumpOffImpulseAI = NewZiplineJumpOffImpulseAI;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function ZiplineComponent_Base.ZiplineComponent_Base_C.Set Finished Attach_Interface Call
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               bNewFinishedAttach                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UZiplineComponent_Base_C::SetFinishedAttach_InterfaceCall(bool bNewFinishedAttach)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ZiplineComponent_Base.ZiplineComponent_Base_C.Set Finished Attach_Interface Call");
		
		UZiplineComponent_Base_C_SetFinishedAttach_InterfaceCall_Params params {};
		params.bNewFinishedAttach = bNewFinishedAttach;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function ZiplineComponent_Base.ZiplineComponent_Base_C.SetProcessMoveToOrder_InterfaceCall
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               NewValue                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UZiplineComponent_Base_C::SetProcessMoveToOrder_InterfaceCall(bool NewValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ZiplineComponent_Base.ZiplineComponent_Base_C.SetProcessMoveToOrder_InterfaceCall");
		
		UZiplineComponent_Base_C_SetProcessMoveToOrder_InterfaceCall_Params params {};
		params.NewValue = NewValue;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function ZiplineComponent_Base.ZiplineComponent_Base_C.Set Current Move To Order Location Interface Call
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FVector                                     NewLocation                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UZiplineComponent_Base_C::SetCurrentMoveToOrderLocationInterfaceCall(const struct FVector& NewLocation)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ZiplineComponent_Base.ZiplineComponent_Base_C.Set Current Move To Order Location Interface Call");
		
		UZiplineComponent_Base_C_SetCurrentMoveToOrderLocationInterfaceCall_Params params {};
		params.NewLocation = NewLocation;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function ZiplineComponent_Base.ZiplineComponent_Base_C.ZiplineTargetingTimer
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UZiplineComponent_Base_C::ZiplineTargetingTimer()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ZiplineComponent_Base.ZiplineComponent_Base_C.ZiplineTargetingTimer");
		
		UZiplineComponent_Base_C_ZiplineTargetingTimer_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function ZiplineComponent_Base.ZiplineComponent_Base_C.ResetZiplineJumping_RunOnServer
	 * 		Flags  -> (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
	 */
	void UZiplineComponent_Base_C::ResetZiplineJumping_RunOnServer()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ZiplineComponent_Base.ZiplineComponent_Base_C.ResetZiplineJumping_RunOnServer");
		
		UZiplineComponent_Base_C_ResetZiplineJumping_RunOnServer_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function ZiplineComponent_Base.ZiplineComponent_Base_C.ResetZiplineJumping_Multicast
	 * 		Flags  -> (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
	 */
	void UZiplineComponent_Base_C::ResetZiplineJumping_Multicast()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ZiplineComponent_Base.ZiplineComponent_Base_C.ResetZiplineJumping_Multicast");
		
		UZiplineComponent_Base_C_ResetZiplineJumping_Multicast_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function ZiplineComponent_Base.ZiplineComponent_Base_C.StartZiplineJumping
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UZiplineComponent_Base_C::StartZiplineJumping()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ZiplineComponent_Base.ZiplineComponent_Base_C.StartZiplineJumping");
		
		UZiplineComponent_Base_C_StartZiplineJumping_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function ZiplineComponent_Base.ZiplineComponent_Base_C.AttachToZipline_RunOnServer
	 * 		Flags  -> (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AZipline_Anchor_C*                           ZiplineAnchor                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FVector                                     Location                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UZiplineComponent_Base_C::AttachToZipline_RunOnServer(class AZipline_Anchor_C* ZiplineAnchor, const struct FVector& Location)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ZiplineComponent_Base.ZiplineComponent_Base_C.AttachToZipline_RunOnServer");
		
		UZiplineComponent_Base_C_AttachToZipline_RunOnServer_Params params {};
		params.ZiplineAnchor = ZiplineAnchor;
		params.Location = Location;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function ZiplineComponent_Base.ZiplineComponent_Base_C.AttachToZipline_Multicast
	 * 		Flags  -> (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AZipline_Anchor_C*                           ZiplineAnchor                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FVector                                     Location                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UZiplineComponent_Base_C::AttachToZipline_Multicast(class AZipline_Anchor_C* ZiplineAnchor, const struct FVector& Location)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ZiplineComponent_Base.ZiplineComponent_Base_C.AttachToZipline_Multicast");
		
		UZiplineComponent_Base_C_AttachToZipline_Multicast_Params params {};
		params.ZiplineAnchor = ZiplineAnchor;
		params.Location = Location;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function ZiplineComponent_Base.ZiplineComponent_Base_C.TryAttachToZipline_RunOnServer
	 * 		Flags  -> (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
	 */
	void UZiplineComponent_Base_C::TryAttachToZipline_RunOnServer()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ZiplineComponent_Base.ZiplineComponent_Base_C.TryAttachToZipline_RunOnServer");
		
		UZiplineComponent_Base_C_TryAttachToZipline_RunOnServer_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function ZiplineComponent_Base.ZiplineComponent_Base_C.DoZiplineTurn
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UZiplineComponent_Base_C::DoZiplineTurn()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ZiplineComponent_Base.ZiplineComponent_Base_C.DoZiplineTurn");
		
		UZiplineComponent_Base_C_DoZiplineTurn_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function ZiplineComponent_Base.ZiplineComponent_Base_C.PreZiplineTurn_Multicast
	 * 		Flags  -> (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
	 */
	void UZiplineComponent_Base_C::PreZiplineTurn_Multicast()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ZiplineComponent_Base.ZiplineComponent_Base_C.PreZiplineTurn_Multicast");
		
		UZiplineComponent_Base_C_PreZiplineTurn_Multicast_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function ZiplineComponent_Base.ZiplineComponent_Base_C.SetInitialVelocity_Multicast
	 * 		Flags  -> (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FVector                                     Velocity                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UZiplineComponent_Base_C::SetInitialVelocity_Multicast(const struct FVector& Velocity)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ZiplineComponent_Base.ZiplineComponent_Base_C.SetInitialVelocity_Multicast");
		
		UZiplineComponent_Base_C_SetInitialVelocity_Multicast_Params params {};
		params.Velocity = Velocity;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function ZiplineComponent_Base.ZiplineComponent_Base_C.Multi_SoftSetTransform
	 * 		Flags  -> (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct UObject_FTransform                          NewTransform                                               (Parm, IsPlainOldData, NoDestructor)
	 */
	void UZiplineComponent_Base_C::Multi_SoftSetTransform(const struct UObject_FTransform& NewTransform)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ZiplineComponent_Base.ZiplineComponent_Base_C.Multi_SoftSetTransform");
		
		UZiplineComponent_Base_C_Multi_SoftSetTransform_Params params {};
		params.NewTransform = NewTransform;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function ZiplineComponent_Base.ZiplineComponent_Base_C.ExecuteUbergraph_ZiplineComponent_Base
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UZiplineComponent_Base_C::ExecuteUbergraph_ZiplineComponent_Base(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ZiplineComponent_Base.ZiplineComponent_Base_C.ExecuteUbergraph_ZiplineComponent_Base");
		
		UZiplineComponent_Base_C_ExecuteUbergraph_ZiplineComponent_Base_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UZiplineComponent_Base_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UZiplineComponent_Base_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass ZiplineComponent_Base.ZiplineComponent_Base_C");
		return ptr;
	}

}


