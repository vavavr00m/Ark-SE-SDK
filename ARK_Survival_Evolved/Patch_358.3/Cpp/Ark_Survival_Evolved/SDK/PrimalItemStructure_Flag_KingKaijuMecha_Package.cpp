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
	 * 		Name   -> Function PrimalItemStructure_Flag_KingKaijuMecha.PrimalItemStructure_Flag_KingKaijuMecha_C.ExecuteUbergraph_PrimalItemStructure_Flag_KingKaijuMecha
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UPrimalItemStructure_Flag_KingKaijuMecha_C::ExecuteUbergraph_PrimalItemStructure_Flag_KingKaijuMecha(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PrimalItemStructure_Flag_KingKaijuMecha.PrimalItemStructure_Flag_KingKaijuMecha_C.ExecuteUbergraph_PrimalItemStructure_Flag_KingKaijuMecha");
		
		UPrimalItemStructure_Flag_KingKaijuMecha_C_ExecuteUbergraph_PrimalItemStructure_Flag_KingKaijuMecha_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UPrimalItemStructure_Flag_KingKaijuMecha_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UPrimalItemStructure_Flag_KingKaijuMecha_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass PrimalItemStructure_Flag_KingKaijuMecha.PrimalItemStructure_Flag_KingKaijuMecha_C");
		return ptr;
	}

}


