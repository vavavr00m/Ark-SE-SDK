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
	 * 		Name   -> Function SantaRaptor_Blueprint.SantaRaptor_Blueprint_C.InterpSantaSpeed
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ASantaRaptor_Blueprint_C::InterpSantaSpeed()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SantaRaptor_Blueprint.SantaRaptor_Blueprint_C.InterpSantaSpeed");
		
		ASantaRaptor_Blueprint_C_InterpSantaSpeed_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function SantaRaptor_Blueprint.SantaRaptor_Blueprint_C.UserConstructionScript
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void ASantaRaptor_Blueprint_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SantaRaptor_Blueprint.SantaRaptor_Blueprint_C.UserConstructionScript");
		
		ASantaRaptor_Blueprint_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function SantaRaptor_Blueprint.SantaRaptor_Blueprint_C.ReceiveBeginPlay
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void ASantaRaptor_Blueprint_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SantaRaptor_Blueprint.SantaRaptor_Blueprint_C.ReceiveBeginPlay");
		
		ASantaRaptor_Blueprint_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function SantaRaptor_Blueprint.SantaRaptor_Blueprint_C.RunOpenSequence
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ASantaRaptor_Blueprint_C::RunOpenSequence()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SantaRaptor_Blueprint.SantaRaptor_Blueprint_C.RunOpenSequence");
		
		ASantaRaptor_Blueprint_C_RunOpenSequence_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function SantaRaptor_Blueprint.SantaRaptor_Blueprint_C.ReceiveTick
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              DeltaSeconds                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ASantaRaptor_Blueprint_C::ReceiveTick(float DeltaSeconds)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SantaRaptor_Blueprint.SantaRaptor_Blueprint_C.ReceiveTick");
		
		ASantaRaptor_Blueprint_C_ReceiveTick_Params params {};
		params.DeltaSeconds = DeltaSeconds;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function SantaRaptor_Blueprint.SantaRaptor_Blueprint_C.DoGiftDrop
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ASantaRaptor_Blueprint_C::DoGiftDrop()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SantaRaptor_Blueprint.SantaRaptor_Blueprint_C.DoGiftDrop");
		
		ASantaRaptor_Blueprint_C_DoGiftDrop_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function SantaRaptor_Blueprint.SantaRaptor_Blueprint_C.DoSantaHo
	 * 		Flags  -> (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FVector                                     AtLoc                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ASantaRaptor_Blueprint_C::DoSantaHo(const struct FVector& AtLoc)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SantaRaptor_Blueprint.SantaRaptor_Blueprint_C.DoSantaHo");
		
		ASantaRaptor_Blueprint_C_DoSantaHo_Params params {};
		params.AtLoc = AtLoc;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function SantaRaptor_Blueprint.SantaRaptor_Blueprint_C.ReceiveDestroyed
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void ASantaRaptor_Blueprint_C::ReceiveDestroyed()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SantaRaptor_Blueprint.SantaRaptor_Blueprint_C.ReceiveDestroyed");
		
		ASantaRaptor_Blueprint_C_ReceiveDestroyed_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function SantaRaptor_Blueprint.SantaRaptor_Blueprint_C.ExecuteUbergraph_SantaRaptor_Blueprint
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ASantaRaptor_Blueprint_C::ExecuteUbergraph_SantaRaptor_Blueprint(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SantaRaptor_Blueprint.SantaRaptor_Blueprint_C.ExecuteUbergraph_SantaRaptor_Blueprint");
		
		ASantaRaptor_Blueprint_C_ExecuteUbergraph_SantaRaptor_Blueprint_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ASantaRaptor_Blueprint_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ASantaRaptor_Blueprint_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass SantaRaptor_Blueprint.SantaRaptor_Blueprint_C");
		return ptr;
	}

}


