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
	 * 		Name   -> Function TestGameMode.TestGameMode_C.SetNewYearLocation
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void ATestGameMode_C::SetNewYearLocation()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TestGameMode.TestGameMode_C.SetNewYearLocation");
		
		ATestGameMode_C_SetNewYearLocation_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function TestGameMode.TestGameMode_C.TickPreNewYear
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              TimeTillNewYear                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ATestGameMode_C::TickPreNewYear(float TimeTillNewYear)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TestGameMode.TestGameMode_C.TickPreNewYear");
		
		ATestGameMode_C_TickPreNewYear_Params params {};
		params.TimeTillNewYear = TimeTillNewYear;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function TestGameMode.TestGameMode_C.StartNewYear
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ATestGameMode_C::StartNewYear()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TestGameMode.TestGameMode_C.StartNewYear");
		
		ATestGameMode_C_StartNewYear_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function TestGameMode.TestGameMode_C.SpawnNewYearGift
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FVector                                     Location                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ATestGameMode_C::SpawnNewYearGift(const struct FVector& Location)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TestGameMode.TestGameMode_C.SpawnNewYearGift");
		
		ATestGameMode_C_SpawnNewYearGift_Params params {};
		params.Location = Location;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function TestGameMode.TestGameMode_C.BPPreSpawnedDino
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class APrimalDinoCharacter*                        theDino                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ATestGameMode_C::BPPreSpawnedDino(class APrimalDinoCharacter* theDino)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TestGameMode.TestGameMode_C.BPPreSpawnedDino");
		
		ATestGameMode_C_BPPreSpawnedDino_Params params {};
		params.theDino = theDino;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function TestGameMode.TestGameMode_C.UserConstructionScript
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void ATestGameMode_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TestGameMode.TestGameMode_C.UserConstructionScript");
		
		ATestGameMode_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function TestGameMode.TestGameMode_C.ReceiveBeginPlay
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void ATestGameMode_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TestGameMode.TestGameMode_C.ReceiveBeginPlay");
		
		ATestGameMode_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function TestGameMode.TestGameMode_C.OnShooterCharacterSpawned_Event
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AShooterCharacter*                           TheShooterCharacter                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ATestGameMode_C::OnShooterCharacterSpawned_Event(class AShooterCharacter* TheShooterCharacter)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TestGameMode.TestGameMode_C.OnShooterCharacterSpawned_Event");
		
		ATestGameMode_C_OnShooterCharacterSpawned_Event_Params params {};
		params.TheShooterCharacter = TheShooterCharacter;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function TestGameMode.TestGameMode_C.ReceiveTick
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              DeltaSeconds                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ATestGameMode_C::ReceiveTick(float DeltaSeconds)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TestGameMode.TestGameMode_C.ReceiveTick");
		
		ATestGameMode_C_ReceiveTick_Params params {};
		params.DeltaSeconds = DeltaSeconds;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function TestGameMode.TestGameMode_C.ExecuteUbergraph_TestGameMode
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ATestGameMode_C::ExecuteUbergraph_TestGameMode(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TestGameMode.TestGameMode_C.ExecuteUbergraph_TestGameMode");
		
		ATestGameMode_C_ExecuteUbergraph_TestGameMode_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ATestGameMode_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ATestGameMode_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass TestGameMode.TestGameMode_C");
		return ptr;
	}

}


