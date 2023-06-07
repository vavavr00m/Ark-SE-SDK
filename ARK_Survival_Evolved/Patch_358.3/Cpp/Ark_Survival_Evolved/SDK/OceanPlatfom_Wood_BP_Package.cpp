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
	 * 		Name   -> Function OceanPlatfom_Wood_BP.OceanPlatfom_Wood_BP_C.BPOnDemolish
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class APlayerController*                           ForPC                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class AActor*                                      DamageCauser                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AOceanPlatfom_Wood_BP_C::BPOnDemolish(class APlayerController* ForPC, class AActor* DamageCauser)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OceanPlatfom_Wood_BP.OceanPlatfom_Wood_BP_C.BPOnDemolish");
		
		AOceanPlatfom_Wood_BP_C_BPOnDemolish_Params params {};
		params.ForPC = ForPC;
		params.DamageCauser = DamageCauser;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function OceanPlatfom_Wood_BP.OceanPlatfom_Wood_BP_C.BPOnStructurePickup
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class APlayerController*                           PlayerController                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class UClass*                                      ItemType                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class UPrimalItem*                                 NewlyPickedUpItem                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               bIsQuickPickup                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AOceanPlatfom_Wood_BP_C::BPOnStructurePickup(class APlayerController* PlayerController, class UClass* ItemType, class UPrimalItem* NewlyPickedUpItem, bool bIsQuickPickup)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OceanPlatfom_Wood_BP.OceanPlatfom_Wood_BP_C.BPOnStructurePickup");
		
		AOceanPlatfom_Wood_BP_C_BPOnStructurePickup_Params params {};
		params.PlayerController = PlayerController;
		params.ItemType = ItemType;
		params.NewlyPickedUpItem = NewlyPickedUpItem;
		params.bIsQuickPickup = bIsQuickPickup;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function OceanPlatfom_Wood_BP.OceanPlatfom_Wood_BP_C.BPPlacedStructure
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class APlayerController*                           ForPC                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AOceanPlatfom_Wood_BP_C::BPPlacedStructure(class APlayerController* ForPC)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OceanPlatfom_Wood_BP.OceanPlatfom_Wood_BP_C.BPPlacedStructure");
		
		AOceanPlatfom_Wood_BP_C_BPPlacedStructure_Params params {};
		params.ForPC = ForPC;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function OceanPlatfom_Wood_BP.OceanPlatfom_Wood_BP_C.BPOverrideSnappedFromTransform
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class APrimalStructure*                            ParentStructure                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		int32_t                                            ParentSnapFromIndex                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class FName                                        ParentSnapFromName                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FVector                                     UnsnappedPlacementPos                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FRotator                                    UnsnappedPlacementRot                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FVector                                     SnappedPlacementPos                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FRotator                                    SnappedPlacementRot                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		int32_t                                            SnapToIndex                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class FName                                        SnapToName                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FVector                                     OutLocation                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FRotator                                    OutRotation                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		int32_t                                            bForceInvalidateSnap                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	bool AOceanPlatfom_Wood_BP_C::BPOverrideSnappedFromTransform(class APrimalStructure* ParentStructure, int32_t ParentSnapFromIndex, const class FName& ParentSnapFromName, const struct FVector& UnsnappedPlacementPos, const struct FRotator& UnsnappedPlacementRot, const struct FVector& SnappedPlacementPos, const struct FRotator& SnappedPlacementRot, int32_t SnapToIndex, const class FName& SnapToName, struct FVector* OutLocation, struct FRotator* OutRotation, int32_t* bForceInvalidateSnap)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OceanPlatfom_Wood_BP.OceanPlatfom_Wood_BP_C.BPOverrideSnappedFromTransform");
		
		AOceanPlatfom_Wood_BP_C_BPOverrideSnappedFromTransform_Params params {};
		params.ParentStructure = ParentStructure;
		params.ParentSnapFromIndex = ParentSnapFromIndex;
		params.ParentSnapFromName = ParentSnapFromName;
		params.UnsnappedPlacementPos = UnsnappedPlacementPos;
		params.UnsnappedPlacementRot = UnsnappedPlacementRot;
		params.SnappedPlacementPos = SnappedPlacementPos;
		params.SnappedPlacementRot = SnappedPlacementRot;
		params.SnapToIndex = SnapToIndex;
		params.SnapToName = SnapToName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutLocation != nullptr)
			*OutLocation = params.OutLocation;
		if (OutRotation != nullptr)
			*OutRotation = params.OutRotation;
		if (bForceInvalidateSnap != nullptr)
			*bForceInvalidateSnap = params.bForceInvalidateSnap;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function OceanPlatfom_Wood_BP.OceanPlatfom_Wood_BP_C.BPOverrideSnappedToTransform
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class APrimalStructure*                            childStructure                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		int32_t                                            ChildSnapFromIndex                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class FName                                        ChildSnapFromName                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FVector                                     UnsnappedPlacementPos                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FRotator                                    UnsnappedPlacementRot                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FVector                                     SnappedPlacementPos                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FRotator                                    SnappedPlacementRot                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		int32_t                                            SnapToIndex                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class FName                                        SnapToName                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FVector                                     OutLocation                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FRotator                                    OutRotation                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		int32_t                                            bForceInvalidateSnap                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	bool AOceanPlatfom_Wood_BP_C::BPOverrideSnappedToTransform(class APrimalStructure* childStructure, int32_t ChildSnapFromIndex, const class FName& ChildSnapFromName, const struct FVector& UnsnappedPlacementPos, const struct FRotator& UnsnappedPlacementRot, const struct FVector& SnappedPlacementPos, const struct FRotator& SnappedPlacementRot, int32_t SnapToIndex, const class FName& SnapToName, struct FVector* OutLocation, struct FRotator* OutRotation, int32_t* bForceInvalidateSnap)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OceanPlatfom_Wood_BP.OceanPlatfom_Wood_BP_C.BPOverrideSnappedToTransform");
		
		AOceanPlatfom_Wood_BP_C_BPOverrideSnappedToTransform_Params params {};
		params.childStructure = childStructure;
		params.ChildSnapFromIndex = ChildSnapFromIndex;
		params.ChildSnapFromName = ChildSnapFromName;
		params.UnsnappedPlacementPos = UnsnappedPlacementPos;
		params.UnsnappedPlacementRot = UnsnappedPlacementRot;
		params.SnappedPlacementPos = SnappedPlacementPos;
		params.SnappedPlacementRot = SnappedPlacementRot;
		params.SnapToIndex = SnapToIndex;
		params.SnapToName = SnapToName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutLocation != nullptr)
			*OutLocation = params.OutLocation;
		if (OutRotation != nullptr)
			*OutRotation = params.OutRotation;
		if (bForceInvalidateSnap != nullptr)
			*bForceInvalidateSnap = params.bForceInvalidateSnap;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function OceanPlatfom_Wood_BP.OceanPlatfom_Wood_BP_C.UserConstructionScript
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void AOceanPlatfom_Wood_BP_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OceanPlatfom_Wood_BP.OceanPlatfom_Wood_BP_C.UserConstructionScript");
		
		AOceanPlatfom_Wood_BP_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function OceanPlatfom_Wood_BP.OceanPlatfom_Wood_BP_C.ReceiveBeginPlay
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void AOceanPlatfom_Wood_BP_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OceanPlatfom_Wood_BP.OceanPlatfom_Wood_BP_C.ReceiveBeginPlay");
		
		AOceanPlatfom_Wood_BP_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function OceanPlatfom_Wood_BP.OceanPlatfom_Wood_BP_C.ExecuteUbergraph_OceanPlatfom_Wood_BP
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AOceanPlatfom_Wood_BP_C::ExecuteUbergraph_OceanPlatfom_Wood_BP(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OceanPlatfom_Wood_BP.OceanPlatfom_Wood_BP_C.ExecuteUbergraph_OceanPlatfom_Wood_BP");
		
		AOceanPlatfom_Wood_BP_C_ExecuteUbergraph_OceanPlatfom_Wood_BP_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AOceanPlatfom_Wood_BP_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AOceanPlatfom_Wood_BP_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass OceanPlatfom_Wood_BP.OceanPlatfom_Wood_BP_C");
		return ptr;
	}

}


