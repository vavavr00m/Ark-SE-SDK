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
	 * 		Name   -> Function Hexagon_Trade_UI.Hexagon_Trade_UI_C.ExecuteUbergraph_Hexagon_Trade_UI
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UHexagon_Trade_UI_C::ExecuteUbergraph_Hexagon_Trade_UI(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Hexagon_Trade_UI.Hexagon_Trade_UI_C.ExecuteUbergraph_Hexagon_Trade_UI");
		
		UHexagon_Trade_UI_C_ExecuteUbergraph_Hexagon_Trade_UI_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UHexagon_Trade_UI_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UHexagon_Trade_UI_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass Hexagon_Trade_UI.Hexagon_Trade_UI_C");
		return ptr;
	}

}


