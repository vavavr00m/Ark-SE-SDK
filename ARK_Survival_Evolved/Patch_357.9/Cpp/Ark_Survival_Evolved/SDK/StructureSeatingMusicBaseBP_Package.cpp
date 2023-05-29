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
	 * 		Name   -> Function StructureSeatingMusicBaseBP.StructureSeatingMusicBaseBP_C.UserConstructionScript
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void AStructureSeatingMusicBaseBP_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function StructureSeatingMusicBaseBP.StructureSeatingMusicBaseBP_C.UserConstructionScript");
		
		AStructureSeatingMusicBaseBP_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function StructureSeatingMusicBaseBP.StructureSeatingMusicBaseBP_C.ExecuteUbergraph_StructureSeatingMusicBaseBP
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AStructureSeatingMusicBaseBP_C::ExecuteUbergraph_StructureSeatingMusicBaseBP(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function StructureSeatingMusicBaseBP.StructureSeatingMusicBaseBP_C.ExecuteUbergraph_StructureSeatingMusicBaseBP");
		
		AStructureSeatingMusicBaseBP_C_ExecuteUbergraph_StructureSeatingMusicBaseBP_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AStructureSeatingMusicBaseBP_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AStructureSeatingMusicBaseBP_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass StructureSeatingMusicBaseBP.StructureSeatingMusicBaseBP_C");
		return ptr;
	}

}


