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
	 * 		Name   -> Function Wyvern_Character_BP_ZombieBase.Wyvern_Character_BP_ZombieBase_C.RequestModData
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FName                                        Key                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class UJsonObject*                                 JsonData                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AWyvern_Character_BP_ZombieBase_C::RequestModData(const class FName& Key, class UJsonObject** JsonData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Wyvern_Character_BP_ZombieBase.Wyvern_Character_BP_ZombieBase_C.RequestModData");
		
		AWyvern_Character_BP_ZombieBase_C_RequestModData_Params params {};
		params.Key = Key;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (JsonData != nullptr)
			*JsonData = params.JsonData;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Wyvern_Character_BP_ZombieBase.Wyvern_Character_BP_ZombieBase_C.RequestModDataProcessing
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FName                                        Key                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class UJsonObject*                                 InJsonData                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class UJsonObject*                                 OutJsonData                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AWyvern_Character_BP_ZombieBase_C::RequestModDataProcessing(const class FName& Key, class UJsonObject* InJsonData, class UJsonObject** OutJsonData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Wyvern_Character_BP_ZombieBase.Wyvern_Character_BP_ZombieBase_C.RequestModDataProcessing");
		
		AWyvern_Character_BP_ZombieBase_C_RequestModDataProcessing_Params params {};
		params.Key = Key;
		params.InJsonData = InJsonData;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutJsonData != nullptr)
			*OutJsonData = params.OutJsonData;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Wyvern_Character_BP_ZombieBase.Wyvern_Character_BP_ZombieBase_C.UserConstructionScript
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void AWyvern_Character_BP_ZombieBase_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Wyvern_Character_BP_ZombieBase.Wyvern_Character_BP_ZombieBase_C.UserConstructionScript");
		
		AWyvern_Character_BP_ZombieBase_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Wyvern_Character_BP_ZombieBase.Wyvern_Character_BP_ZombieBase_C.ReceiveBeginPlay
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void AWyvern_Character_BP_ZombieBase_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Wyvern_Character_BP_ZombieBase.Wyvern_Character_BP_ZombieBase_C.ReceiveBeginPlay");
		
		AWyvern_Character_BP_ZombieBase_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Wyvern_Character_BP_ZombieBase.Wyvern_Character_BP_ZombieBase_C.SendModData
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FName                                        Key                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class UJsonObject*                                 JsonData                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AWyvern_Character_BP_ZombieBase_C::SendModData(const class FName& Key, class UJsonObject* JsonData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Wyvern_Character_BP_ZombieBase.Wyvern_Character_BP_ZombieBase_C.SendModData");
		
		AWyvern_Character_BP_ZombieBase_C_SendModData_Params params {};
		params.Key = Key;
		params.JsonData = JsonData;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Wyvern_Character_BP_ZombieBase.Wyvern_Character_BP_ZombieBase_C.ExecuteUbergraph_Wyvern_Character_BP_ZombieBase
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AWyvern_Character_BP_ZombieBase_C::ExecuteUbergraph_Wyvern_Character_BP_ZombieBase(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Wyvern_Character_BP_ZombieBase.Wyvern_Character_BP_ZombieBase_C.ExecuteUbergraph_Wyvern_Character_BP_ZombieBase");
		
		AWyvern_Character_BP_ZombieBase_C_ExecuteUbergraph_Wyvern_Character_BP_ZombieBase_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AWyvern_Character_BP_ZombieBase_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AWyvern_Character_BP_ZombieBase_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass Wyvern_Character_BP_ZombieBase.Wyvern_Character_BP_ZombieBase_C");
		return ptr;
	}

}


