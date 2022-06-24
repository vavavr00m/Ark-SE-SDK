/**
 * Name: ARK_Survival_Evolved
 * Version: Patch_346.14
 */

#include "../SDK.h"

namespace CG
{
	// --------------------------------------------------
	// # Structs Functions
	// --------------------------------------------------
	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UScriptBlueprintGeneratedClass.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UScriptBlueprintGeneratedClass::StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class ScriptPlugin.ScriptBlueprintGeneratedClass");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UScriptBlueprint.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UScriptBlueprint::StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class ScriptPlugin.ScriptBlueprint");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03983FE0
	 * 		Name   -> Function ScriptPlugin.ScriptComponent.CallScriptFunction
	 * 		Flags  -> (Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class FString                                      FunctionName                                               (Parm, ZeroConstructor)
	 */
	bool UScriptComponent::CallScriptFunction(const class FString& FunctionName)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function ScriptPlugin.ScriptComponent.CallScriptFunction");
		
		UScriptComponent_CallScriptFunction_Params params {};
		params.FunctionName = FunctionName;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UScriptComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UScriptComponent::StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class ScriptPlugin.ScriptComponent");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x039840E0
	 * 		Name   -> Function ScriptPlugin.ScriptContext.CallScriptFunction
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class FString                                      FunctionName                                               (Parm, ZeroConstructor)
	 */
	void UScriptContext::CallScriptFunction(const class FString& FunctionName)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function ScriptPlugin.ScriptContext.CallScriptFunction");
		
		UScriptContext_CallScriptFunction_Params params {};
		params.FunctionName = FunctionName;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UScriptContext.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UScriptContext::StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class ScriptPlugin.ScriptContext");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x039841C0
	 * 		Name   -> Function ScriptPlugin.ScriptContextComponent.CallScriptFunction
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class FString                                      FunctionName                                               (Parm, ZeroConstructor)
	 */
	void UScriptContextComponent::CallScriptFunction(const class FString& FunctionName)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function ScriptPlugin.ScriptContextComponent.CallScriptFunction");
		
		UScriptContextComponent_CallScriptFunction_Params params {};
		params.FunctionName = FunctionName;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UScriptContextComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UScriptContextComponent::StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class ScriptPlugin.ScriptContextComponent");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x039842A0
	 * 		Name   -> Function ScriptPlugin.ScriptTestActor.TestFunction
	 * 		Flags  -> (Final, Native, Public)
	 * Parameters:
	 * 		float                                              InValue                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		float                                              InFactor                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               bMultiply                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	float AScriptTestActor::TestFunction(float InValue, float InFactor, bool bMultiply)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function ScriptPlugin.ScriptTestActor.TestFunction");
		
		AScriptTestActor_TestFunction_Params params {};
		params.InValue = InValue;
		params.InFactor = InFactor;
		params.bMultiply = bMultiply;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction AScriptTestActor.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AScriptTestActor::StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class ScriptPlugin.ScriptTestActor");
		return ptr;
	}

}


