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
	 * 		Name   -> Function Buff_Liopleurodon_Magic.Buff_Liopleurodon_Magic_C.BPResetBuffStart
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABuff_Liopleurodon_Magic_C::BPResetBuffStart()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_Liopleurodon_Magic.Buff_Liopleurodon_Magic_C.BPResetBuffStart");
		
		ABuff_Liopleurodon_Magic_C_BPResetBuffStart_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Buff_Liopleurodon_Magic.Buff_Liopleurodon_Magic_C.BuffTickClient
	 * 		Flags  -> (Event, Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              DeltaTime                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABuff_Liopleurodon_Magic_C::BuffTickClient(float DeltaTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_Liopleurodon_Magic.Buff_Liopleurodon_Magic_C.BuffTickClient");
		
		ABuff_Liopleurodon_Magic_C_BuffTickClient_Params params {};
		params.DeltaTime = DeltaTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Buff_Liopleurodon_Magic.Buff_Liopleurodon_Magic_C.BPDrawBuffStatusHUD
	 * 		Flags  -> (Event, Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AShooterHUD*                                 HUD                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		float                                              XPos                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		float                                              YPos                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		float                                              ScaleMult                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABuff_Liopleurodon_Magic_C::BPDrawBuffStatusHUD(class AShooterHUD* HUD, float XPos, float YPos, float ScaleMult)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_Liopleurodon_Magic.Buff_Liopleurodon_Magic_C.BPDrawBuffStatusHUD");
		
		ABuff_Liopleurodon_Magic_C_BPDrawBuffStatusHUD_Params params {};
		params.HUD = HUD;
		params.XPos = XPos;
		params.YPos = YPos;
		params.ScaleMult = ScaleMult;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Buff_Liopleurodon_Magic.Buff_Liopleurodon_Magic_C.UserConstructionScript
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABuff_Liopleurodon_Magic_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_Liopleurodon_Magic.Buff_Liopleurodon_Magic_C.UserConstructionScript");
		
		ABuff_Liopleurodon_Magic_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Buff_Liopleurodon_Magic.Buff_Liopleurodon_Magic_C.SpawnCrateBuffedParticle
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class APrimalStructureItemContainer_SupplyCrate*   TargetCrate                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABuff_Liopleurodon_Magic_C::SpawnCrateBuffedParticle(class APrimalStructureItemContainer_SupplyCrate* TargetCrate)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_Liopleurodon_Magic.Buff_Liopleurodon_Magic_C.SpawnCrateBuffedParticle");
		
		ABuff_Liopleurodon_Magic_C_SpawnCrateBuffedParticle_Params params {};
		params.TargetCrate = TargetCrate;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Buff_Liopleurodon_Magic.Buff_Liopleurodon_Magic_C.HideTimer
	 * 		Flags  -> (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               ShouldHide                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABuff_Liopleurodon_Magic_C::HideTimer(bool ShouldHide)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_Liopleurodon_Magic.Buff_Liopleurodon_Magic_C.HideTimer");
		
		ABuff_Liopleurodon_Magic_C_HideTimer_Params params {};
		params.ShouldHide = ShouldHide;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Buff_Liopleurodon_Magic.Buff_Liopleurodon_Magic_C.RevealBuffTimerAfterDelay
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ABuff_Liopleurodon_Magic_C::RevealBuffTimerAfterDelay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_Liopleurodon_Magic.Buff_Liopleurodon_Magic_C.RevealBuffTimerAfterDelay");
		
		ABuff_Liopleurodon_Magic_C_RevealBuffTimerAfterDelay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Buff_Liopleurodon_Magic.Buff_Liopleurodon_Magic_C.ReceiveBeginPlay
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABuff_Liopleurodon_Magic_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_Liopleurodon_Magic.Buff_Liopleurodon_Magic_C.ReceiveBeginPlay");
		
		ABuff_Liopleurodon_Magic_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Buff_Liopleurodon_Magic.Buff_Liopleurodon_Magic_C.ExecuteUbergraph_Buff_Liopleurodon_Magic
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABuff_Liopleurodon_Magic_C::ExecuteUbergraph_Buff_Liopleurodon_Magic(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_Liopleurodon_Magic.Buff_Liopleurodon_Magic_C.ExecuteUbergraph_Buff_Liopleurodon_Magic");
		
		ABuff_Liopleurodon_Magic_C_ExecuteUbergraph_Buff_Liopleurodon_Magic_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABuff_Liopleurodon_Magic_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABuff_Liopleurodon_Magic_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass Buff_Liopleurodon_Magic.Buff_Liopleurodon_Magic_C");
		return ptr;
	}

}


