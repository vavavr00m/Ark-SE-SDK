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
	 * 		Name   -> Function ModCommunication_Interface.ModCommunication_Interface_C.RequestModDataProcessing
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FName                                        Key                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class UJsonObject*                                 InJsonData                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class UJsonObject*                                 OutJsonData                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UModCommunication_Interface_C::RequestModDataProcessing(const class FName& Key, class UJsonObject* InJsonData, class UJsonObject** OutJsonData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ModCommunication_Interface.ModCommunication_Interface_C.RequestModDataProcessing");
		
		UModCommunication_Interface_C_RequestModDataProcessing_Params params {};
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
	 * 		Name   -> Function ModCommunication_Interface.ModCommunication_Interface_C.RequestModData
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FName                                        Key                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class UJsonObject*                                 JsonData                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UModCommunication_Interface_C::RequestModData(const class FName& Key, class UJsonObject** JsonData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ModCommunication_Interface.ModCommunication_Interface_C.RequestModData");
		
		UModCommunication_Interface_C_RequestModData_Params params {};
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
	 * 		Name   -> Function ModCommunication_Interface.ModCommunication_Interface_C.SendModData
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FName                                        Key                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class UJsonObject*                                 JsonData                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UModCommunication_Interface_C::SendModData(const class FName& Key, class UJsonObject* JsonData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ModCommunication_Interface.ModCommunication_Interface_C.SendModData");
		
		UModCommunication_Interface_C_SendModData_Params params {};
		params.Key = Key;
		params.JsonData = JsonData;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UModCommunication_Interface_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UModCommunication_Interface_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass ModCommunication_Interface.ModCommunication_Interface_C");
		return ptr;
	}

}


