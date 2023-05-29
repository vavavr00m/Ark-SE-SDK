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
	 * 		Name   -> Function Env_DesertGeyser.Env_DesertGeyser_C.IsCharacterInGeyser
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class APrimalCharacter*                            Character                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AEnv_DesertGeyser_C::IsCharacterInGeyser(class APrimalCharacter* Character, bool* ReturnValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Env_DesertGeyser.Env_DesertGeyser_C.IsCharacterInGeyser");
		
		AEnv_DesertGeyser_C_IsCharacterInGeyser_Params params {};
		params.Character = Character;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (ReturnValue != nullptr)
			*ReturnValue = params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Env_DesertGeyser.Env_DesertGeyser_C.UserConstructionScript
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void AEnv_DesertGeyser_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Env_DesertGeyser.Env_DesertGeyser_C.UserConstructionScript");
		
		AEnv_DesertGeyser_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Env_DesertGeyser.Env_DesertGeyser_C.BndEvt__LaunchArea_K2Node_ComponentBoundEvent_6_ComponentBeginOverlapSignature__DelegateSignature
	 * 		Flags  -> (HasOutParms, BlueprintEvent)
	 * Parameters:
	 * 		class AActor*                                      OtherActor                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class UPrimitiveComponent*                         OtherComp                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		int32_t                                            OtherBodyIndex                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               bFromSweep                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FHitResult                                  SweepResult                                                (Parm, OutParm, ReferenceParm)
	 */
	void AEnv_DesertGeyser_C::BndEvt__LaunchArea_K2Node_ComponentBoundEvent_6_ComponentBeginOverlapSignature__DelegateSignature(class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, struct FHitResult* SweepResult)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Env_DesertGeyser.Env_DesertGeyser_C.BndEvt__LaunchArea_K2Node_ComponentBoundEvent_6_ComponentBeginOverlapSignature__DelegateSignature");
		
		AEnv_DesertGeyser_C_BndEvt__LaunchArea_K2Node_ComponentBoundEvent_6_ComponentBeginOverlapSignature__DelegateSignature_Params params {};
		params.OtherActor = OtherActor;
		params.OtherComp = OtherComp;
		params.OtherBodyIndex = OtherBodyIndex;
		params.bFromSweep = bFromSweep;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (SweepResult != nullptr)
			*SweepResult = params.SweepResult;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Env_DesertGeyser.Env_DesertGeyser_C.ServerRequestLaunch
	 * 		Flags  -> (NetReliable, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class APrimalCharacter*                            Character                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AEnv_DesertGeyser_C::ServerRequestLaunch(class APrimalCharacter* Character)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Env_DesertGeyser.Env_DesertGeyser_C.ServerRequestLaunch");
		
		AEnv_DesertGeyser_C_ServerRequestLaunch_Params params {};
		params.Character = Character;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Env_DesertGeyser.Env_DesertGeyser_C.ReceiveTick
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              DeltaSeconds                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AEnv_DesertGeyser_C::ReceiveTick(float DeltaSeconds)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Env_DesertGeyser.Env_DesertGeyser_C.ReceiveTick");
		
		AEnv_DesertGeyser_C_ReceiveTick_Params params {};
		params.DeltaSeconds = DeltaSeconds;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Env_DesertGeyser.Env_DesertGeyser_C.TurnGeyserOff
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AEnv_DesertGeyser_C::TurnGeyserOff()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Env_DesertGeyser.Env_DesertGeyser_C.TurnGeyserOff");
		
		AEnv_DesertGeyser_C_TurnGeyserOff_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Env_DesertGeyser.Env_DesertGeyser_C.Multi_ToggleParticles
	 * 		Flags  -> (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               On                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AEnv_DesertGeyser_C::Multi_ToggleParticles(bool On)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Env_DesertGeyser.Env_DesertGeyser_C.Multi_ToggleParticles");
		
		AEnv_DesertGeyser_C_Multi_ToggleParticles_Params params {};
		params.On = On;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Env_DesertGeyser.Env_DesertGeyser_C.ReceiveBeginPlay
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void AEnv_DesertGeyser_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Env_DesertGeyser.Env_DesertGeyser_C.ReceiveBeginPlay");
		
		AEnv_DesertGeyser_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Env_DesertGeyser.Env_DesertGeyser_C.ExecuteUbergraph_Env_DesertGeyser
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AEnv_DesertGeyser_C::ExecuteUbergraph_Env_DesertGeyser(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Env_DesertGeyser.Env_DesertGeyser_C.ExecuteUbergraph_Env_DesertGeyser");
		
		AEnv_DesertGeyser_C_ExecuteUbergraph_Env_DesertGeyser_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AEnv_DesertGeyser_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AEnv_DesertGeyser_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass Env_DesertGeyser.Env_DesertGeyser_C");
		return ptr;
	}

}


