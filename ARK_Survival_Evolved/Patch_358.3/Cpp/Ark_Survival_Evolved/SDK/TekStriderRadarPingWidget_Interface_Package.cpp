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
	 * 		Name   -> Function TekStriderRadarPingWidget_Interface.TekStriderRadarPingWidget_Interface_C.GetHudData
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FVector                                     PingWorldLocation                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		float                                              ProgressBarValue                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FLinearColor                                BaseColor                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		float                                              RingScale                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		float                                              Visibility                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UTekStriderRadarPingWidget_Interface_C::GetHudData(struct FVector* PingWorldLocation, float* ProgressBarValue, struct FLinearColor* BaseColor, float* RingScale, float* Visibility)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TekStriderRadarPingWidget_Interface.TekStriderRadarPingWidget_Interface_C.GetHudData");
		
		UTekStriderRadarPingWidget_Interface_C_GetHudData_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (PingWorldLocation != nullptr)
			*PingWorldLocation = params.PingWorldLocation;
		if (ProgressBarValue != nullptr)
			*ProgressBarValue = params.ProgressBarValue;
		if (BaseColor != nullptr)
			*BaseColor = params.BaseColor;
		if (RingScale != nullptr)
			*RingScale = params.RingScale;
		if (Visibility != nullptr)
			*Visibility = params.Visibility;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UTekStriderRadarPingWidget_Interface_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UTekStriderRadarPingWidget_Interface_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass TekStriderRadarPingWidget_Interface.TekStriderRadarPingWidget_Interface_C");
		return ptr;
	}

}


