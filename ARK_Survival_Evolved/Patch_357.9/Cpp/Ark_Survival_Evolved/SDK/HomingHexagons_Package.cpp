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
	 * 		Name   -> Function HomingHexagons.HomingHexagons_C.BeginMovingDirectlyToActor
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void AHomingHexagons_C::BeginMovingDirectlyToActor()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HomingHexagons.HomingHexagons_C.BeginMovingDirectlyToActor");
		
		AHomingHexagons_C_BeginMovingDirectlyToActor_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function HomingHexagons.HomingHexagons_C.HoverThenAttract
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void AHomingHexagons_C::HoverThenAttract()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HomingHexagons.HomingHexagons_C.HoverThenAttract");
		
		AHomingHexagons_C_HoverThenAttract_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function HomingHexagons.HomingHexagons_C.Spread Out
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void AHomingHexagons_C::SpreadOut()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HomingHexagons.HomingHexagons_C.Spread Out");
		
		AHomingHexagons_C_SpreadOut_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function HomingHexagons.HomingHexagons_C.SetVolume
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              NewVolume                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AHomingHexagons_C::SetVolume(float NewVolume)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HomingHexagons.HomingHexagons_C.SetVolume");
		
		AHomingHexagons_C_SetVolume_Params params {};
		params.NewVolume = NewVolume;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function HomingHexagons.HomingHexagons_C.constantly rotate
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void AHomingHexagons_C::constantlyrotate()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HomingHexagons.HomingHexagons_C.constantly rotate");
		
		AHomingHexagons_C_constantlyrotate_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function HomingHexagons.HomingHexagons_C.ReceiveBeginPlay
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void AHomingHexagons_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HomingHexagons.HomingHexagons_C.ReceiveBeginPlay");
		
		AHomingHexagons_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function HomingHexagons.HomingHexagons_C.UserConstructionScript
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void AHomingHexagons_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HomingHexagons.HomingHexagons_C.UserConstructionScript");
		
		AHomingHexagons_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function HomingHexagons.HomingHexagons_C.Timeline_0__FinishedFunc
	 * 		Flags  -> (BlueprintEvent)
	 */
	void AHomingHexagons_C::Timeline_0__FinishedFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HomingHexagons.HomingHexagons_C.Timeline_0__FinishedFunc");
		
		AHomingHexagons_C_Timeline_0__FinishedFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function HomingHexagons.HomingHexagons_C.Timeline_0__UpdateFunc
	 * 		Flags  -> (BlueprintEvent)
	 */
	void AHomingHexagons_C::Timeline_0__UpdateFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HomingHexagons.HomingHexagons_C.Timeline_0__UpdateFunc");
		
		AHomingHexagons_C_Timeline_0__UpdateFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function HomingHexagons.HomingHexagons_C.Timeline_1__FinishedFunc
	 * 		Flags  -> (BlueprintEvent)
	 */
	void AHomingHexagons_C::Timeline_1__FinishedFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HomingHexagons.HomingHexagons_C.Timeline_1__FinishedFunc");
		
		AHomingHexagons_C_Timeline_1__FinishedFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function HomingHexagons.HomingHexagons_C.Timeline_1__UpdateFunc
	 * 		Flags  -> (BlueprintEvent)
	 */
	void AHomingHexagons_C::Timeline_1__UpdateFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HomingHexagons.HomingHexagons_C.Timeline_1__UpdateFunc");
		
		AHomingHexagons_C_Timeline_1__UpdateFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function HomingHexagons.HomingHexagons_C.Timeline_2__FinishedFunc
	 * 		Flags  -> (BlueprintEvent)
	 */
	void AHomingHexagons_C::Timeline_2__FinishedFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HomingHexagons.HomingHexagons_C.Timeline_2__FinishedFunc");
		
		AHomingHexagons_C_Timeline_2__FinishedFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function HomingHexagons.HomingHexagons_C.Timeline_2__UpdateFunc
	 * 		Flags  -> (BlueprintEvent)
	 */
	void AHomingHexagons_C::Timeline_2__UpdateFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HomingHexagons.HomingHexagons_C.Timeline_2__UpdateFunc");
		
		AHomingHexagons_C_Timeline_2__UpdateFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function HomingHexagons.HomingHexagons_C.burst__FinishedFunc
	 * 		Flags  -> (BlueprintEvent)
	 */
	void AHomingHexagons_C::burst__FinishedFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HomingHexagons.HomingHexagons_C.burst__FinishedFunc");
		
		AHomingHexagons_C_burst__FinishedFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function HomingHexagons.HomingHexagons_C.burst__UpdateFunc
	 * 		Flags  -> (BlueprintEvent)
	 */
	void AHomingHexagons_C::burst__UpdateFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HomingHexagons.HomingHexagons_C.burst__UpdateFunc");
		
		AHomingHexagons_C_burst__UpdateFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function HomingHexagons.HomingHexagons_C.begin move towards screen position
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AHomingHexagons_C::beginmovetowardsscreenposition()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HomingHexagons.HomingHexagons_C.begin move towards screen position");
		
		AHomingHexagons_C_beginmovetowardsscreenposition_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function HomingHexagons.HomingHexagons_C.begin moving towards point in screen space
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AActor*                                      AttachActor                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AHomingHexagons_C::beginmovingtowardspointinscreenspace(class AActor* AttachActor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HomingHexagons.HomingHexagons_C.begin moving towards point in screen space");
		
		AHomingHexagons_C_beginmovingtowardspointinscreenspace_Params params {};
		params.AttachActor = AttachActor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function HomingHexagons.HomingHexagons_C.begin moving towards point attached to actor
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AActor*                                      AttachActor                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AHomingHexagons_C::beginmovingtowardspointattachedtoactor(class AActor* AttachActor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HomingHexagons.HomingHexagons_C.begin moving towards point attached to actor");
		
		AHomingHexagons_C_beginmovingtowardspointattachedtoactor_Params params {};
		params.AttachActor = AttachActor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function HomingHexagons.HomingHexagons_C.skip hover
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AHomingHexagons_C::skiphover()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HomingHexagons.HomingHexagons_C.skip hover");
		
		AHomingHexagons_C_skiphover_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function HomingHexagons.HomingHexagons_C.ExecuteUbergraph_HomingHexagons
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AHomingHexagons_C::ExecuteUbergraph_HomingHexagons(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HomingHexagons.HomingHexagons_C.ExecuteUbergraph_HomingHexagons");
		
		AHomingHexagons_C_ExecuteUbergraph_HomingHexagons_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AHomingHexagons_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AHomingHexagons_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass HomingHexagons.HomingHexagons_C");
		return ptr;
	}

}


