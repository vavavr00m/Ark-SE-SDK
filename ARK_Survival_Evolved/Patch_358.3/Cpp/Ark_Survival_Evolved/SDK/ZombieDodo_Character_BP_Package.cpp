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
	 * 		Name   -> Function ZombieDodo_Character_BP.ZombieDodo_Character_BP_C.RequestModData
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FName                                        Key                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class UJsonObject*                                 JsonData                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AZombieDodo_Character_BP_C::RequestModData(const class FName& Key, class UJsonObject** JsonData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ZombieDodo_Character_BP.ZombieDodo_Character_BP_C.RequestModData");
		
		AZombieDodo_Character_BP_C_RequestModData_Params params {};
		params.Key = Key;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (JsonData != nullptr)
			*JsonData = params.JsonData;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function ZombieDodo_Character_BP.ZombieDodo_Character_BP_C.RequestModDataProcessing
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FName                                        Key                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class UJsonObject*                                 InJsonData                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class UJsonObject*                                 OutJsonData                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AZombieDodo_Character_BP_C::RequestModDataProcessing(const class FName& Key, class UJsonObject* InJsonData, class UJsonObject** OutJsonData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ZombieDodo_Character_BP.ZombieDodo_Character_BP_C.RequestModDataProcessing");
		
		AZombieDodo_Character_BP_C_RequestModDataProcessing_Params params {};
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
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function ZombieDodo_Character_BP.ZombieDodo_Character_BP_C.UserConstructionScript
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void AZombieDodo_Character_BP_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ZombieDodo_Character_BP.ZombieDodo_Character_BP_C.UserConstructionScript");
		
		AZombieDodo_Character_BP_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function ZombieDodo_Character_BP.ZombieDodo_Character_BP_C.SendModData
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FName                                        Key                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class UJsonObject*                                 JsonData                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AZombieDodo_Character_BP_C::SendModData(const class FName& Key, class UJsonObject* JsonData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ZombieDodo_Character_BP.ZombieDodo_Character_BP_C.SendModData");
		
		AZombieDodo_Character_BP_C_SendModData_Params params {};
		params.Key = Key;
		params.JsonData = JsonData;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function ZombieDodo_Character_BP.ZombieDodo_Character_BP_C.ReceiveBeginPlay
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void AZombieDodo_Character_BP_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ZombieDodo_Character_BP.ZombieDodo_Character_BP_C.ReceiveBeginPlay");
		
		AZombieDodo_Character_BP_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function ZombieDodo_Character_BP.ZombieDodo_Character_BP_C.ExecuteUbergraph_ZombieDodo_Character_BP
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AZombieDodo_Character_BP_C::ExecuteUbergraph_ZombieDodo_Character_BP(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ZombieDodo_Character_BP.ZombieDodo_Character_BP_C.ExecuteUbergraph_ZombieDodo_Character_BP");
		
		AZombieDodo_Character_BP_C_ExecuteUbergraph_ZombieDodo_Character_BP_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AZombieDodo_Character_BP_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AZombieDodo_Character_BP_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass ZombieDodo_Character_BP.ZombieDodo_Character_BP_C");
		return ptr;
	}

}


