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
	 * 		Name   -> Function Sinomacrops_AnimBP.Sinomacrops_AnimBP_C.UpdateAnimFromShooterChar
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AShooterCharacter*                           ShooterChar                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		float                                              DeltaTime                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               HasBuffFromPawnOwner                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void USinomacrops_AnimBP_C::UpdateAnimFromShooterChar(class AShooterCharacter* ShooterChar, float DeltaTime, bool* HasBuffFromPawnOwner)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Sinomacrops_AnimBP.Sinomacrops_AnimBP_C.UpdateAnimFromShooterChar");
		
		USinomacrops_AnimBP_C_UpdateAnimFromShooterChar_Params params {};
		params.ShooterChar = ShooterChar;
		params.DeltaTime = DeltaTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (HasBuffFromPawnOwner != nullptr)
			*HasBuffFromPawnOwner = params.HasBuffFromPawnOwner;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Sinomacrops_AnimBP.Sinomacrops_AnimBP_C.PassengerUpdateAnim
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class APrimalDinoCharacter*                        CarryingDino                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		float                                              DeltaTime                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void USinomacrops_AnimBP_C::PassengerUpdateAnim(class APrimalDinoCharacter* CarryingDino, float DeltaTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Sinomacrops_AnimBP.Sinomacrops_AnimBP_C.PassengerUpdateAnim");
		
		USinomacrops_AnimBP_C_PassengerUpdateAnim_Params params {};
		params.CarryingDino = CarryingDino;
		params.DeltaTime = DeltaTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Sinomacrops_AnimBP.Sinomacrops_AnimBP_C.ExecuteUbergraph_Sinomacrops_AnimBP
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void USinomacrops_AnimBP_C::ExecuteUbergraph_Sinomacrops_AnimBP(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Sinomacrops_AnimBP.Sinomacrops_AnimBP_C.ExecuteUbergraph_Sinomacrops_AnimBP");
		
		USinomacrops_AnimBP_C_ExecuteUbergraph_Sinomacrops_AnimBP_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction USinomacrops_AnimBP_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USinomacrops_AnimBP_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("AnimBlueprintGeneratedClass Sinomacrops_AnimBP.Sinomacrops_AnimBP_C");
		return ptr;
	}

}


