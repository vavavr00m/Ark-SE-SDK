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
	 * 		Name   -> Function Buff_TekStrider_Attachment_Base.Buff_TekStrider_Attachment_Base_C.get socket loc
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FVector                                     fallbackloc                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class FName                                        socketname                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class APrimalCharacter*                            Character                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FVector                                     Loc                                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               couldgetsocketloc                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABuff_TekStrider_Attachment_Base_C::getsocketloc(const struct FVector& fallbackloc, const class FName& socketname, class APrimalCharacter* Character, struct FVector* Loc, bool* couldgetsocketloc)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_TekStrider_Attachment_Base.Buff_TekStrider_Attachment_Base_C.get socket loc");
		
		ABuff_TekStrider_Attachment_Base_C_getsocketloc_Params params {};
		params.fallbackloc = fallbackloc;
		params.socketname = socketname;
		params.Character = Character;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Loc != nullptr)
			*Loc = params.Loc;
		if (couldgetsocketloc != nullptr)
			*couldgetsocketloc = params.couldgetsocketloc;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Buff_TekStrider_Attachment_Base.Buff_TekStrider_Attachment_Base_C.is head clear
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FName                                        extrasocket                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               fromanimbp                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               headisclear                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               couldfindsocket                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABuff_TekStrider_Attachment_Base_C::isheadclear(const class FName& extrasocket, bool fromanimbp, bool* headisclear, bool* couldfindsocket)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_TekStrider_Attachment_Base.Buff_TekStrider_Attachment_Base_C.is head clear");
		
		ABuff_TekStrider_Attachment_Base_C_isheadclear_Params params {};
		params.extrasocket = extrasocket;
		params.fromanimbp = fromanimbp;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (headisclear != nullptr)
			*headisclear = params.headisclear;
		if (couldfindsocket != nullptr)
			*couldfindsocket = params.couldfindsocket;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Buff_TekStrider_Attachment_Base.Buff_TekStrider_Attachment_Base_C.trace check for blockers between locations
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FVector                                     Start                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FVector                                     End                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               ignorefoliage                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FHitResult                                  OutHit                                                     (Parm, OutParm)
	 */
	bool ABuff_TekStrider_Attachment_Base_C::tracecheckforblockersbetweenlocations(const struct FVector& Start, const struct FVector& End, bool ignorefoliage, struct FHitResult* OutHit)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_TekStrider_Attachment_Base.Buff_TekStrider_Attachment_Base_C.trace check for blockers between locations");
		
		ABuff_TekStrider_Attachment_Base_C_tracecheckforblockersbetweenlocations_Params params {};
		params.Start = Start;
		params.End = End;
		params.ignorefoliage = ignorefoliage;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutHit != nullptr)
			*OutHit = params.OutHit;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Buff_TekStrider_Attachment_Base.Buff_TekStrider_Attachment_Base_C.BuffTickServer
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              DeltaTime                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABuff_TekStrider_Attachment_Base_C::BuffTickServer(float DeltaTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_TekStrider_Attachment_Base.Buff_TekStrider_Attachment_Base_C.BuffTickServer");
		
		ABuff_TekStrider_Attachment_Base_C_BuffTickServer_Params params {};
		params.DeltaTime = DeltaTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Buff_TekStrider_Attachment_Base.Buff_TekStrider_Attachment_Base_C.clear rider
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AShooterCharacter*                           prevrider                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABuff_TekStrider_Attachment_Base_C::clearrider(class AShooterCharacter* prevrider)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_TekStrider_Attachment_Base.Buff_TekStrider_Attachment_Base_C.clear rider");
		
		ABuff_TekStrider_Attachment_Base_C_clearrider_Params params {};
		params.prevrider = prevrider;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Buff_TekStrider_Attachment_Base.Buff_TekStrider_Attachment_Base_C.set rider
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABuff_TekStrider_Attachment_Base_C::setrider()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_TekStrider_Attachment_Base.Buff_TekStrider_Attachment_Base_C.set rider");
		
		ABuff_TekStrider_Attachment_Base_C_setrider_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Buff_TekStrider_Attachment_Base.Buff_TekStrider_Attachment_Base_C.TriggerDoubletapped
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABuff_TekStrider_Attachment_Base_C::TriggerDoubletapped()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_TekStrider_Attachment_Base.Buff_TekStrider_Attachment_Base_C.TriggerDoubletapped");
		
		ABuff_TekStrider_Attachment_Base_C_TriggerDoubletapped_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Buff_TekStrider_Attachment_Base.Buff_TekStrider_Attachment_Base_C.TriggerReleased
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABuff_TekStrider_Attachment_Base_C::TriggerReleased()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_TekStrider_Attachment_Base.Buff_TekStrider_Attachment_Base_C.TriggerReleased");
		
		ABuff_TekStrider_Attachment_Base_C_TriggerReleased_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Buff_TekStrider_Attachment_Base.Buff_TekStrider_Attachment_Base_C.BPDeactivated
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AActor*                                      ForInstigator                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABuff_TekStrider_Attachment_Base_C::BPDeactivated(class AActor* ForInstigator)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_TekStrider_Attachment_Base.Buff_TekStrider_Attachment_Base_C.BPDeactivated");
		
		ABuff_TekStrider_Attachment_Base_C_BPDeactivated_Params params {};
		params.ForInstigator = ForInstigator;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Buff_TekStrider_Attachment_Base.Buff_TekStrider_Attachment_Base_C.BPSetupForInstigator
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AActor*                                      ForInstigator                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABuff_TekStrider_Attachment_Base_C::BPSetupForInstigator(class AActor* ForInstigator)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_TekStrider_Attachment_Base.Buff_TekStrider_Attachment_Base_C.BPSetupForInstigator");
		
		ABuff_TekStrider_Attachment_Base_C_BPSetupForInstigator_Params params {};
		params.ForInstigator = ForInstigator;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Buff_TekStrider_Attachment_Base.Buff_TekStrider_Attachment_Base_C.Trigger
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABuff_TekStrider_Attachment_Base_C::Trigger()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_TekStrider_Attachment_Base.Buff_TekStrider_Attachment_Base_C.Trigger");
		
		ABuff_TekStrider_Attachment_Base_C_Trigger_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Buff_TekStrider_Attachment_Base.Buff_TekStrider_Attachment_Base_C.UserConstructionScript
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABuff_TekStrider_Attachment_Base_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_TekStrider_Attachment_Base.Buff_TekStrider_Attachment_Base_C.UserConstructionScript");
		
		ABuff_TekStrider_Attachment_Base_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Buff_TekStrider_Attachment_Base.Buff_TekStrider_Attachment_Base_C.ExecuteUbergraph_Buff_TekStrider_Attachment_Base
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABuff_TekStrider_Attachment_Base_C::ExecuteUbergraph_Buff_TekStrider_Attachment_Base(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_TekStrider_Attachment_Base.Buff_TekStrider_Attachment_Base_C.ExecuteUbergraph_Buff_TekStrider_Attachment_Base");
		
		ABuff_TekStrider_Attachment_Base_C_ExecuteUbergraph_Buff_TekStrider_Attachment_Base_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABuff_TekStrider_Attachment_Base_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABuff_TekStrider_Attachment_Base_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass Buff_TekStrider_Attachment_Base.Buff_TekStrider_Attachment_Base_C");
		return ptr;
	}

}


