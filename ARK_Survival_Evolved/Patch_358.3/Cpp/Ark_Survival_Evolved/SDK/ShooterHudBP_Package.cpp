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
	 * 		Name   -> Function ShooterHudBP.ShooterHudBP_C.GetAdditionalExplorerNoteDynamicMaterialParams
	 * 		Flags  -> (Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FExplorerNoteEntry                          ExplorerNote                                               (Parm, OutParm, ReferenceParm)
	 * 		TArray<struct FNameScalarPair>                     ScalarMaterialParams                                       (Parm, OutParm, ZeroConstructor)
	 * 		TArray<struct FNameColorPair>                      ColorMaterialParams                                        (Parm, OutParm, ZeroConstructor)
	 */
	void AShooterHudBP_C::GetAdditionalExplorerNoteDynamicMaterialParams(struct FExplorerNoteEntry* ExplorerNote, TArray<struct FNameScalarPair>* ScalarMaterialParams, TArray<struct FNameColorPair>* ColorMaterialParams)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ShooterHudBP.ShooterHudBP_C.GetAdditionalExplorerNoteDynamicMaterialParams");
		
		AShooterHudBP_C_GetAdditionalExplorerNoteDynamicMaterialParams_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (ExplorerNote != nullptr)
			*ExplorerNote = params.ExplorerNote;
		if (ScalarMaterialParams != nullptr)
			*ScalarMaterialParams = params.ScalarMaterialParams;
		if (ColorMaterialParams != nullptr)
			*ColorMaterialParams = params.ColorMaterialParams;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function ShooterHudBP.ShooterHudBP_C.UserConstructionScript
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void AShooterHudBP_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ShooterHudBP.ShooterHudBP_C.UserConstructionScript");
		
		AShooterHudBP_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function ShooterHudBP.ShooterHudBP_C.ExecuteUbergraph_ShooterHudBP
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AShooterHudBP_C::ExecuteUbergraph_ShooterHudBP(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ShooterHudBP.ShooterHudBP_C.ExecuteUbergraph_ShooterHudBP");
		
		AShooterHudBP_C_ExecuteUbergraph_ShooterHudBP_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AShooterHudBP_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AShooterHudBP_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass ShooterHudBP.ShooterHudBP_C");
		return ptr;
	}

}


