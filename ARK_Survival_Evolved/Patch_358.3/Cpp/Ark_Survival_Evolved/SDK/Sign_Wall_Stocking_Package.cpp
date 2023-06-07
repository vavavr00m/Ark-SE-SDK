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
	 * 		Name   -> Function Sign_Wall_Stocking.Sign_Wall_Stocking_C.UserConstructionScript
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void ASign_Wall_Stocking_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Sign_Wall_Stocking.Sign_Wall_Stocking_C.UserConstructionScript");
		
		ASign_Wall_Stocking_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Sign_Wall_Stocking.Sign_Wall_Stocking_C.ReceiveBeginPlay
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void ASign_Wall_Stocking_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Sign_Wall_Stocking.Sign_Wall_Stocking_C.ReceiveBeginPlay");
		
		ASign_Wall_Stocking_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Sign_Wall_Stocking.Sign_Wall_Stocking_C.ExecuteUbergraph_Sign_Wall_Stocking
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ASign_Wall_Stocking_C::ExecuteUbergraph_Sign_Wall_Stocking(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Sign_Wall_Stocking.Sign_Wall_Stocking_C.ExecuteUbergraph_Sign_Wall_Stocking");
		
		ASign_Wall_Stocking_C_ExecuteUbergraph_Sign_Wall_Stocking_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ASign_Wall_Stocking_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ASign_Wall_Stocking_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass Sign_Wall_Stocking.Sign_Wall_Stocking_C");
		return ptr;
	}

}


