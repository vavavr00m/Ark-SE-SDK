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
	 * 		Name   -> Function DinoAttackStateMelee_Exosuit.DinoAttackStateMelee_Exosuit_C.BPGetSocketLocation
	 * 		Flags  -> (Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FName                                        SocketName                                                 (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor)
	 * 		struct FVector                                     SocketLocation                                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UDinoAttackStateMelee_Exosuit_C::BPGetSocketLocation(class FName* SocketName, struct FVector* SocketLocation)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DinoAttackStateMelee_Exosuit.DinoAttackStateMelee_Exosuit_C.BPGetSocketLocation");
		
		UDinoAttackStateMelee_Exosuit_C_BPGetSocketLocation_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (SocketName != nullptr)
			*SocketName = params.SocketName;
		if (SocketLocation != nullptr)
			*SocketLocation = params.SocketLocation;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function DinoAttackStateMelee_Exosuit.DinoAttackStateMelee_Exosuit_C.ExecuteUbergraph_DinoAttackStateMelee_Exosuit
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UDinoAttackStateMelee_Exosuit_C::ExecuteUbergraph_DinoAttackStateMelee_Exosuit(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DinoAttackStateMelee_Exosuit.DinoAttackStateMelee_Exosuit_C.ExecuteUbergraph_DinoAttackStateMelee_Exosuit");
		
		UDinoAttackStateMelee_Exosuit_C_ExecuteUbergraph_DinoAttackStateMelee_Exosuit_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UDinoAttackStateMelee_Exosuit_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UDinoAttackStateMelee_Exosuit_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass DinoAttackStateMelee_Exosuit.DinoAttackStateMelee_Exosuit_C");
		return ptr;
	}

}


