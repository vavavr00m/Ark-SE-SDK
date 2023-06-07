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
	 * 		Name   -> Function StorageBox_ChristmasGift.StorageBox_ChristmasGift_C.BPOverrideDemolish
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AShooterPlayerController*                    ForPC                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	bool AStorageBox_ChristmasGift_C::BPOverrideDemolish(class AShooterPlayerController* ForPC)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function StorageBox_ChristmasGift.StorageBox_ChristmasGift_C.BPOverrideDemolish");
		
		AStorageBox_ChristmasGift_C_BPOverrideDemolish_Params params {};
		params.ForPC = ForPC;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function StorageBox_ChristmasGift.StorageBox_ChristmasGift_C.BPOverrideAllowStructureAccess
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AShooterPlayerController*                    ForPC                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               bIsAccessAllowed                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               bForInventoryOnly                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	bool AStorageBox_ChristmasGift_C::BPOverrideAllowStructureAccess(class AShooterPlayerController* ForPC, bool bIsAccessAllowed, bool bForInventoryOnly)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function StorageBox_ChristmasGift.StorageBox_ChristmasGift_C.BPOverrideAllowStructureAccess");
		
		AStorageBox_ChristmasGift_C_BPOverrideAllowStructureAccess_Params params {};
		params.ForPC = ForPC;
		params.bIsAccessAllowed = bIsAccessAllowed;
		params.bForInventoryOnly = bForInventoryOnly;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function StorageBox_ChristmasGift.StorageBox_ChristmasGift_C.UserConstructionScript
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void AStorageBox_ChristmasGift_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function StorageBox_ChristmasGift.StorageBox_ChristmasGift_C.UserConstructionScript");
		
		AStorageBox_ChristmasGift_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function StorageBox_ChristmasGift.StorageBox_ChristmasGift_C.ReceiveBeginPlay
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void AStorageBox_ChristmasGift_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function StorageBox_ChristmasGift.StorageBox_ChristmasGift_C.ReceiveBeginPlay");
		
		AStorageBox_ChristmasGift_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function StorageBox_ChristmasGift.StorageBox_ChristmasGift_C.ExecuteUbergraph_StorageBox_ChristmasGift
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AStorageBox_ChristmasGift_C::ExecuteUbergraph_StorageBox_ChristmasGift(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function StorageBox_ChristmasGift.StorageBox_ChristmasGift_C.ExecuteUbergraph_StorageBox_ChristmasGift");
		
		AStorageBox_ChristmasGift_C_ExecuteUbergraph_StorageBox_ChristmasGift_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AStorageBox_ChristmasGift_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AStorageBox_ChristmasGift_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass StorageBox_ChristmasGift.StorageBox_ChristmasGift_C");
		return ptr;
	}

}


