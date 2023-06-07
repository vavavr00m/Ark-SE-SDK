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
	 * 		Name   -> Function WeapFishingNet.WeapFishingNet_C.destroy net item
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void AWeapFishingNet_C::destroynetitem()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WeapFishingNet.WeapFishingNet_C.destroy net item");
		
		AWeapFishingNet_C_destroynetitem_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function WeapFishingNet.WeapFishingNet_C.BPServerHandleNetExecCommand
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class APlayerController*                           FromPC                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class FName                                        CommandName                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FBPNetExecParams                            ExecParams                                                 (Parm, OutParm, ReferenceParm)
	 */
	bool AWeapFishingNet_C::BPServerHandleNetExecCommand(class APlayerController* FromPC, const class FName& CommandName, struct FBPNetExecParams* ExecParams)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WeapFishingNet.WeapFishingNet_C.BPServerHandleNetExecCommand");
		
		AWeapFishingNet_C_BPServerHandleNetExecCommand_Params params {};
		params.FromPC = FromPC;
		params.CommandName = CommandName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (ExecParams != nullptr)
			*ExecParams = params.ExecParams;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function WeapFishingNet.WeapFishingNet_C.Show Or Hide Net
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               Show                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               PostCatchCheck                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AWeapFishingNet_C::ShowOrHideNet(bool Show, bool PostCatchCheck)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WeapFishingNet.WeapFishingNet_C.Show Or Hide Net");
		
		AWeapFishingNet_C_ShowOrHideNet_Params params {};
		params.Show = Show;
		params.PostCatchCheck = PostCatchCheck;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function WeapFishingNet.WeapFishingNet_C.Set All Components Render Custom Depth
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AActor*                                      actortoset                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               bValue                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AWeapFishingNet_C::SetAllComponentsRenderCustomDepth(class AActor* actortoset, bool bValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WeapFishingNet.WeapFishingNet_C.Set All Components Render Custom Depth");
		
		AWeapFishingNet_C_SetAllComponentsRenderCustomDepth_Params params {};
		params.actortoset = actortoset;
		params.bValue = bValue;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function WeapFishingNet.WeapFishingNet_C.Set All Components Custom Depth Stencil Value
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AActor*                                      actortoset                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		int32_t                                            Value                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AWeapFishingNet_C::SetAllComponentsCustomDepthStencilValue(class AActor* actortoset, int32_t Value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WeapFishingNet.WeapFishingNet_C.Set All Components Custom Depth Stencil Value");
		
		AWeapFishingNet_C_SetAllComponentsCustomDepthStencilValue_Params params {};
		params.actortoset = actortoset;
		params.Value = Value;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function WeapFishingNet.WeapFishingNet_C.Restrict Auto Reel
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void AWeapFishingNet_C::RestrictAutoReel()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WeapFishingNet.WeapFishingNet_C.Restrict Auto Reel");
		
		AWeapFishingNet_C_RestrictAutoReel_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function WeapFishingNet.WeapFishingNet_C.Restrict Reel Anim And Sound
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void AWeapFishingNet_C::RestrictReelAnimAndSound()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WeapFishingNet.WeapFishingNet_C.Restrict Reel Anim And Sound");
		
		AWeapFishingNet_C_RestrictReelAnimAndSound_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function WeapFishingNet.WeapFishingNet_C.Generate Fish Meat En Masse
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              totalwildscale                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class APrimalDinoCharacter*                        usedfishforinventory                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AWeapFishingNet_C::GenerateFishMeatEnMasse(float totalwildscale, class APrimalDinoCharacter* usedfishforinventory)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WeapFishingNet.WeapFishingNet_C.Generate Fish Meat En Masse");
		
		AWeapFishingNet_C_GenerateFishMeatEnMasse_Params params {};
		params.totalwildscale = totalwildscale;
		params.usedfishforinventory = usedfishforinventory;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function WeapFishingNet.WeapFishingNet_C.Restrict Reel Server
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void AWeapFishingNet_C::RestrictReelServer()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WeapFishingNet.WeapFishingNet_C.Restrict Reel Server");
		
		AWeapFishingNet_C_RestrictReelServer_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function WeapFishingNet.WeapFishingNet_C.Restrict Reel Client
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void AWeapFishingNet_C::RestrictReelClient()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WeapFishingNet.WeapFishingNet_C.Restrict Reel Client");
		
		AWeapFishingNet_C_RestrictReelClient_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function WeapFishingNet.WeapFishingNet_C.Server Occasional Timer Events
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void AWeapFishingNet_C::ServerOccasionalTimerEvents()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WeapFishingNet.WeapFishingNet_C.Server Occasional Timer Events");
		
		AWeapFishingNet_C_ServerOccasionalTimerEvents_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function WeapFishingNet.WeapFishingNet_C.set net rotation to face player
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void AWeapFishingNet_C::setnetrotationtofaceplayer()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WeapFishingNet.WeapFishingNet_C.set net rotation to face player");
		
		AWeapFishingNet_C_setnetrotationtofaceplayer_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function WeapFishingNet.WeapFishingNet_C.FishStruggle
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void AWeapFishingNet_C::FishStruggle()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WeapFishingNet.WeapFishingNet_C.FishStruggle");
		
		AWeapFishingNet_C_FishStruggle_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function WeapFishingNet.WeapFishingNet_C.spawn vfx at location where cable intersects with water
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void AWeapFishingNet_C::spawnvfxatlocationwherecableintersectswithwater()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WeapFishingNet.WeapFishingNet_C.spawn vfx at location where cable intersects with water");
		
		AWeapFishingNet_C_spawnvfxatlocationwherecableintersectswithwater_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function WeapFishingNet.WeapFishingNet_C.BPStartEquippedNotify
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void AWeapFishingNet_C::BPStartEquippedNotify()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WeapFishingNet.WeapFishingNet_C.BPStartEquippedNotify");
		
		AWeapFishingNet_C_BPStartEquippedNotify_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function WeapFishingNet.WeapFishingNet_C.Cancel Cast Hide Cable Components
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void AWeapFishingNet_C::CancelCastHideCableComponents()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WeapFishingNet.WeapFishingNet_C.Cancel Cast Hide Cable Components");
		
		AWeapFishingNet_C_CancelCastHideCableComponents_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function WeapFishingNet.WeapFishingNet_C.play hooked fish HLNA reaction
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void AWeapFishingNet_C::playhookedfishHLNAreaction()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WeapFishingNet.WeapFishingNet_C.play hooked fish HLNA reaction");
		
		AWeapFishingNet_C_playhookedfishHLNAreaction_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function WeapFishingNet.WeapFishingNet_C.delay showing fpv mesh a bit longer
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void AWeapFishingNet_C::delayshowingfpvmeshabitlonger()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WeapFishingNet.WeapFishingNet_C.delay showing fpv mesh a bit longer");
		
		AWeapFishingNet_C_delayshowingfpvmeshabitlonger_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function WeapFishingNet.WeapFishingNet_C.backup cancel timer
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void AWeapFishingNet_C::backupcanceltimer()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WeapFishingNet.WeapFishingNet_C.backup cancel timer");
		
		AWeapFishingNet_C_backupcanceltimer_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function WeapFishingNet.WeapFishingNet_C.cancelling cast during reel casting or casted
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void AWeapFishingNet_C::cancellingcastduringreelcastingorcasted()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WeapFishingNet.WeapFishingNet_C.cancelling cast during reel casting or casted");
		
		AWeapFishingNet_C_cancellingcastduringreelcastingorcasted_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function WeapFishingNet.WeapFishingNet_C.set enable throw anim when not jumping and has buff
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void AWeapFishingNet_C::setenablethrowanimwhennotjumpingandhasbuff()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WeapFishingNet.WeapFishingNet_C.set enable throw anim when not jumping and has buff");
		
		AWeapFishingNet_C_setenablethrowanimwhennotjumpingandhasbuff_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function WeapFishingNet.WeapFishingNet_C.restrict movement while cooking
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void AWeapFishingNet_C::restrictmovementwhilecooking()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WeapFishingNet.WeapFishingNet_C.restrict movement while cooking");
		
		AWeapFishingNet_C_restrictmovementwhilecooking_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function WeapFishingNet.WeapFishingNet_C.force idle anim while moving
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void AWeapFishingNet_C::forceidleanimwhilemoving()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WeapFishingNet.WeapFishingNet_C.force idle anim while moving");
		
		AWeapFishingNet_C_forceidleanimwhilemoving_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function WeapFishingNet.WeapFishingNet_C.set state to casting if net exists during idle
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void AWeapFishingNet_C::setstatetocastingifnetexistsduringidle()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WeapFishingNet.WeapFishingNet_C.set state to casting if net exists during idle");
		
		AWeapFishingNet_C_setstatetocastingifnetexistsduringidle_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function WeapFishingNet.WeapFishingNet_C.hide 1p mesh when appropriate
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void AWeapFishingNet_C::hide1pmeshwhenappropriate()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WeapFishingNet.WeapFishingNet_C.hide 1p mesh when appropriate");
		
		AWeapFishingNet_C_hide1pmeshwhenappropriate_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function WeapFishingNet.WeapFishingNet_C.cancel cast if player is in water
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void AWeapFishingNet_C::cancelcastifplayerisinwater()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WeapFishingNet.WeapFishingNet_C.cancel cast if player is in water");
		
		AWeapFishingNet_C_cancelcastifplayerisinwater_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function WeapFishingNet.WeapFishingNet_C.set fish location with net
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void AWeapFishingNet_C::setfishlocationwithnet()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WeapFishingNet.WeapFishingNet_C.set fish location with net");
		
		AWeapFishingNet_C_setfishlocationwithnet_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function WeapFishingNet.WeapFishingNet_C.finish reel if net is close enough to player
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void AWeapFishingNet_C::finishreelifnetiscloseenoughtoplayer()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WeapFishingNet.WeapFishingNet_C.finish reel if net is close enough to player");
		
		AWeapFishingNet_C_finishreelifnetiscloseenoughtoplayer_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function WeapFishingNet.WeapFishingNet_C.set start position of fishing cable
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void AWeapFishingNet_C::setstartpositionoffishingcable()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WeapFishingNet.WeapFishingNet_C.set start position of fishing cable");
		
		AWeapFishingNet_C_setstartpositionoffishingcable_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function WeapFishingNet.WeapFishingNet_C.update net location
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void AWeapFishingNet_C::updatenetlocation()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WeapFishingNet.WeapFishingNet_C.update net location");
		
		AWeapFishingNet_C_updatenetlocation_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function WeapFishingNet.WeapFishingNet_C.break if net is invalid during casted state
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void AWeapFishingNet_C::breakifnetisinvalidduringcastedstate()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WeapFishingNet.WeapFishingNet_C.break if net is invalid during casted state");
		
		AWeapFishingNet_C_breakifnetisinvalidduringcastedstate_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function WeapFishingNet.WeapFishingNet_C.break if net is too far
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void AWeapFishingNet_C::breakifnetistoofar()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WeapFishingNet.WeapFishingNet_C.break if net is too far");
		
		AWeapFishingNet_C_breakifnetistoofar_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function WeapFishingNet.WeapFishingNet_C.Kill all fish in net
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void AWeapFishingNet_C::Killallfishinnet()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WeapFishingNet.WeapFishingNet_C.Kill all fish in net");
		
		AWeapFishingNet_C_Killallfishinnet_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function WeapFishingNet.WeapFishingNet_C.Send Caught Fish Message to Player
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void AWeapFishingNet_C::SendCaughtFishMessagetoPlayer()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WeapFishingNet.WeapFishingNet_C.Send Caught Fish Message to Player");
		
		AWeapFishingNet_C_SendCaughtFishMessagetoPlayer_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function WeapFishingNet.WeapFishingNet_C.Fully Catch Fish In Net
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void AWeapFishingNet_C::FullyCatchFishInNet()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WeapFishingNet.WeapFishingNet_C.Fully Catch Fish In Net");
		
		AWeapFishingNet_C_FullyCatchFishInNet_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function WeapFishingNet.WeapFishingNet_C.Cancel Cast Remove Buff And Reset Anim
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               CaughtSuccess                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AWeapFishingNet_C::CancelCastRemoveBuffAndResetAnim(bool CaughtSuccess)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WeapFishingNet.WeapFishingNet_C.Cancel Cast Remove Buff And Reset Anim");
		
		AWeapFishingNet_C_CancelCastRemoveBuffAndResetAnim_Params params {};
		params.CaughtSuccess = CaughtSuccess;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function WeapFishingNet.WeapFishingNet_C.Cancel Cast Destroy Cable Components
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void AWeapFishingNet_C::CancelCastDestroyCableComponents()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WeapFishingNet.WeapFishingNet_C.Cancel Cast Destroy Cable Components");
		
		AWeapFishingNet_C_CancelCastDestroyCableComponents_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function WeapFishingNet.WeapFishingNet_C.cancel cast destroy net projectile
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void AWeapFishingNet_C::cancelcastdestroynetprojectile()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WeapFishingNet.WeapFishingNet_C.cancel cast destroy net projectile");
		
		AWeapFishingNet_C_cancelcastdestroynetprojectile_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function WeapFishingNet.WeapFishingNet_C.cancel cast release fish
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void AWeapFishingNet_C::cancelcastreleasefish()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WeapFishingNet.WeapFishingNet_C.cancel cast release fish");
		
		AWeapFishingNet_C_cancelcastreleasefish_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function WeapFishingNet.WeapFishingNet_C.reset variables on cancel reel
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               successfulcatch                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AWeapFishingNet_C::resetvariablesoncancelreel(bool successfulcatch)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WeapFishingNet.WeapFishingNet_C.reset variables on cancel reel");
		
		AWeapFishingNet_C_resetvariablesoncancelreel_Params params {};
		params.successfulcatch = successfulcatch;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function WeapFishingNet.WeapFishingNet_C.update cable component location
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UPrimalCableComponent*                       Cable                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class USceneComponent*                             _1PAttachSocketStart                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class USceneComponent*                             _1PAttachSocketEnd                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class USceneComponent*                             _3PAttachSocketEnd                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               newcablecomponent                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FVector                                     _1PEndpointOverride                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FVector                                     _3PEndpointOverride                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class USceneComponent*                             SwappedHandComponent1P                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class FName                                        _3PAttachSocketStartName                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AWeapFishingNet_C::updatecablecomponentlocation(class UPrimalCableComponent* Cable, class USceneComponent* _1PAttachSocketStart, class USceneComponent* _1PAttachSocketEnd, class USceneComponent* _3PAttachSocketEnd, bool newcablecomponent, const struct FVector& _1PEndpointOverride, const struct FVector& _3PEndpointOverride, class USceneComponent* SwappedHandComponent1P, const class FName& _3PAttachSocketStartName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WeapFishingNet.WeapFishingNet_C.update cable component location");
		
		AWeapFishingNet_C_updatecablecomponentlocation_Params params {};
		params.Cable = Cable;
		params._1PAttachSocketStart = _1PAttachSocketStart;
		params._1PAttachSocketEnd = _1PAttachSocketEnd;
		params._3PAttachSocketEnd = _3PAttachSocketEnd;
		params.newcablecomponent = newcablecomponent;
		params._1PEndpointOverride = _1PEndpointOverride;
		params._3PEndpointOverride = _3PEndpointOverride;
		params.SwappedHandComponent1P = SwappedHandComponent1P;
		params._3PAttachSocketStartName = _3PAttachSocketStartName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function WeapFishingNet.WeapFishingNet_C.Get Cable Attach Info
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		bool                                               isfirstperson                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class USceneComponent*                             CableComp                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class USceneComponent*                             MeshComp                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AWeapFishingNet_C::GetCableAttachInfo(bool* isfirstperson, class USceneComponent** CableComp, class USceneComponent** MeshComp)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WeapFishingNet.WeapFishingNet_C.Get Cable Attach Info");
		
		AWeapFishingNet_C_GetCableAttachInfo_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (isfirstperson != nullptr)
			*isfirstperson = params.isfirstperson;
		if (CableComp != nullptr)
			*CableComp = params.CableComp;
		if (MeshComp != nullptr)
			*MeshComp = params.MeshComp;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function WeapFishingNet.WeapFishingNet_C.Attach Cable To Hand
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               Left                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               InterpCable                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AWeapFishingNet_C::AttachCableToHand(bool Left, bool InterpCable)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WeapFishingNet.WeapFishingNet_C.Attach Cable To Hand");
		
		AWeapFishingNet_C_AttachCableToHand_Params params {};
		params.Left = Left;
		params.InterpCable = InterpCable;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function WeapFishingNet.WeapFishingNet_C.CreateCable
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UPrimalCableComponent*                       ExistingCableComponentToCheck                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class FName                                        Name                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		float                                              CableLength                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		int32_t                                            CableSegments                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               AdaptiveSegments                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class USceneComponent*                             AttachedComponent1P                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class FName                                        AttachSocketName1P                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class FName                                        AttachSocketName3P                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class UPrimalCableComponent*                       cablecomponent                                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               NewlyCreated                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AWeapFishingNet_C::CreateCable(class UPrimalCableComponent* ExistingCableComponentToCheck, const class FName& Name, float CableLength, int32_t CableSegments, bool AdaptiveSegments, class USceneComponent* AttachedComponent1P, const class FName& AttachSocketName1P, const class FName& AttachSocketName3P, class UPrimalCableComponent** cablecomponent, bool* NewlyCreated)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WeapFishingNet.WeapFishingNet_C.CreateCable");
		
		AWeapFishingNet_C_CreateCable_Params params {};
		params.ExistingCableComponentToCheck = ExistingCableComponentToCheck;
		params.Name = Name;
		params.CableLength = CableLength;
		params.CableSegments = CableSegments;
		params.AdaptiveSegments = AdaptiveSegments;
		params.AttachedComponent1P = AttachedComponent1P;
		params.AttachSocketName1P = AttachSocketName1P;
		params.AttachSocketName3P = AttachSocketName3P;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (cablecomponent != nullptr)
			*cablecomponent = params.cablecomponent;
		if (NewlyCreated != nullptr)
			*NewlyCreated = params.NewlyCreated;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function WeapFishingNet.WeapFishingNet_C.Give Fish Rewards
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void AWeapFishingNet_C::GiveFishRewards()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WeapFishingNet.WeapFishingNet_C.Give Fish Rewards");
		
		AWeapFishingNet_C_GiveFishRewards_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function WeapFishingNet.WeapFishingNet_C.Set Fish Position To Normal Offset
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               CaughtSuccess                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AWeapFishingNet_C::SetFishPositionToNormalOffset(bool CaughtSuccess)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WeapFishingNet.WeapFishingNet_C.Set Fish Position To Normal Offset");
		
		AWeapFishingNet_C_SetFishPositionToNormalOffset_Params params {};
		params.CaughtSuccess = CaughtSuccess;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function WeapFishingNet.WeapFishingNet_C.Get Initial Fish Location Offset
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AActor*                                      fish                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FVector                                     Offset                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AWeapFishingNet_C::GetInitialFishLocationOffset(class AActor* fish, struct FVector* Offset)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WeapFishingNet.WeapFishingNet_C.Get Initial Fish Location Offset");
		
		AWeapFishingNet_C_GetInitialFishLocationOffset_Params params {};
		params.fish = fish;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Offset != nullptr)
			*Offset = params.Offset;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function WeapFishingNet.WeapFishingNet_C.BPRemainEquipped
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 */
	bool AWeapFishingNet_C::BPRemainEquipped()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WeapFishingNet.WeapFishingNet_C.BPRemainEquipped");
		
		AWeapFishingNet_C_BPRemainEquipped_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function WeapFishingNet.WeapFishingNet_C.BPCanEquip
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AShooterCharacter*                           ByCharacter                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	bool AWeapFishingNet_C::BPCanEquip(class AShooterCharacter* ByCharacter)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WeapFishingNet.WeapFishingNet_C.BPCanEquip");
		
		AWeapFishingNet_C_BPCanEquip_Params params {};
		params.ByCharacter = ByCharacter;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function WeapFishingNet.WeapFishingNet_C.Reel Velocity
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FVector                                     WeaponLocation                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class AProjFishingNet_C*                           netprojectile                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	struct FVector AWeapFishingNet_C::ReelVelocity(const struct FVector& WeaponLocation, class AProjFishingNet_C* netprojectile)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WeapFishingNet.WeapFishingNet_C.Reel Velocity");
		
		AWeapFishingNet_C_ReelVelocity_Params params {};
		params.WeaponLocation = WeaponLocation;
		params.netprojectile = netprojectile;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function WeapFishingNet.WeapFishingNet_C.BPAnimNotifyCustomEvent
	 * 		Flags  -> (Event, Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FName                                        CustomEventName                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class USkeletalMeshComponent*                      MeshComp                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class UAnimSequenceBase*                           Animation                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class UAnimNotify*                                 AnimNotifyObject                                           (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AWeapFishingNet_C::BPAnimNotifyCustomEvent(const class FName& CustomEventName, class USkeletalMeshComponent* MeshComp, class UAnimSequenceBase* Animation, class UAnimNotify* AnimNotifyObject)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WeapFishingNet.WeapFishingNet_C.BPAnimNotifyCustomEvent");
		
		AWeapFishingNet_C_BPAnimNotifyCustomEvent_Params params {};
		params.CustomEventName = CustomEventName;
		params.MeshComp = MeshComp;
		params.Animation = Animation;
		params.AnimNotifyObject = AnimNotifyObject;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function WeapFishingNet.WeapFishingNet_C.Give Fish Loot
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UClass*                                      Class                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class APrimalDinoCharacter*                        Outer                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		float                                              AmountMultiplier                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AWeapFishingNet_C::GiveFishLoot(class UClass* Class, class APrimalDinoCharacter* Outer, float AmountMultiplier)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WeapFishingNet.WeapFishingNet_C.Give Fish Loot");
		
		AWeapFishingNet_C_GiveFishLoot_Params params {};
		params.Class = Class;
		params.Outer = Outer;
		params.AmountMultiplier = AmountMultiplier;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function WeapFishingNet.WeapFishingNet_C.Generate Fish Meat
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class APrimalDinoCharacter*                        fish                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AWeapFishingNet_C::GenerateFishMeat(class APrimalDinoCharacter* fish)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WeapFishingNet.WeapFishingNet_C.Generate Fish Meat");
		
		AWeapFishingNet_C_GenerateFishMeat_Params params {};
		params.fish = fish;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function WeapFishingNet.WeapFishingNet_C.Check For Fish Collision
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void AWeapFishingNet_C::CheckForFishCollision()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WeapFishingNet.WeapFishingNet_C.Check For Fish Collision");
		
		AWeapFishingNet_C_CheckForFishCollision_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function WeapFishingNet.WeapFishingNet_C.On Fish Released
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class APrimalDinoCharacter*                        fish                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AWeapFishingNet_C::OnFishReleased(class APrimalDinoCharacter* fish)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WeapFishingNet.WeapFishingNet_C.On Fish Released");
		
		AWeapFishingNet_C_OnFishReleased_Params params {};
		params.fish = fish;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function WeapFishingNet.WeapFishingNet_C.release fish
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UObject*                                     fish                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               pulledcompletelyup                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AWeapFishingNet_C::releasefish(class UObject* fish, bool pulledcompletelyup)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WeapFishingNet.WeapFishingNet_C.release fish");
		
		AWeapFishingNet_C_releasefish_Params params {};
		params.fish = fish;
		params.pulledcompletelyup = pulledcompletelyup;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function WeapFishingNet.WeapFishingNet_C.PlayFishAttackAnimation
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void AWeapFishingNet_C::PlayFishAttackAnimation()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WeapFishingNet.WeapFishingNet_C.PlayFishAttackAnimation");
		
		AWeapFishingNet_C_PlayFishAttackAnimation_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function WeapFishingNet.WeapFishingNet_C.On Fish Snared
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class APrimalDinoCharacter*                        localSnaredFish                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AWeapFishingNet_C::OnFishSnared(class APrimalDinoCharacter* localSnaredFish)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WeapFishingNet.WeapFishingNet_C.On Fish Snared");
		
		AWeapFishingNet_C_OnFishSnared_Params params {};
		params.localSnaredFish = localSnaredFish;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function WeapFishingNet.WeapFishingNet_C.snare fish
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class APrimalDinoCharacter*                        snaredfish                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AWeapFishingNet_C::snarefish(class APrimalDinoCharacter* snaredfish)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WeapFishingNet.WeapFishingNet_C.snare fish");
		
		AWeapFishingNet_C_snarefish_Params params {};
		params.snaredfish = snaredfish;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function WeapFishingNet.WeapFishingNet_C.StartUnequipEvent
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void AWeapFishingNet_C::StartUnequipEvent()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WeapFishingNet.WeapFishingNet_C.StartUnequipEvent");
		
		AWeapFishingNet_C_StartUnequipEvent_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function WeapFishingNet.WeapFishingNet_C.Update Rope Length
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void AWeapFishingNet_C::UpdateRopeLength()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WeapFishingNet.WeapFishingNet_C.Update Rope Length");
		
		AWeapFishingNet_C_UpdateRopeLength_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function WeapFishingNet.WeapFishingNet_C.StartSecondaryActionEvent
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void AWeapFishingNet_C::StartSecondaryActionEvent()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WeapFishingNet.WeapFishingNet_C.StartSecondaryActionEvent");
		
		AWeapFishingNet_C_StartSecondaryActionEvent_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function WeapFishingNet.WeapFishingNet_C.BPFiredWeapon
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void AWeapFishingNet_C::BPFiredWeapon()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WeapFishingNet.WeapFishingNet_C.BPFiredWeapon");
		
		AWeapFishingNet_C_BPFiredWeapon_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function WeapFishingNet.WeapFishingNet_C.ReceiveTick
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              DeltaSeconds                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AWeapFishingNet_C::ReceiveTick(float DeltaSeconds)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WeapFishingNet.WeapFishingNet_C.ReceiveTick");
		
		AWeapFishingNet_C_ReceiveTick_Params params {};
		params.DeltaSeconds = DeltaSeconds;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function WeapFishingNet.WeapFishingNet_C.ReceiveBeginPlay
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void AWeapFishingNet_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WeapFishingNet.WeapFishingNet_C.ReceiveBeginPlay");
		
		AWeapFishingNet_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function WeapFishingNet.WeapFishingNet_C.BPWeaponCanFire
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 */
	bool AWeapFishingNet_C::BPWeaponCanFire()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WeapFishingNet.WeapFishingNet_C.BPWeaponCanFire");
		
		AWeapFishingNet_C_BPWeaponCanFire_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function WeapFishingNet.WeapFishingNet_C.Update Cable Component
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FVector                                     EndCableLocation                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               hasbuff                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AWeapFishingNet_C::UpdateCableComponent(const struct FVector& EndCableLocation, bool* hasbuff)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WeapFishingNet.WeapFishingNet_C.Update Cable Component");
		
		AWeapFishingNet_C_UpdateCableComponent_Params params {};
		params.EndCableLocation = EndCableLocation;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (hasbuff != nullptr)
			*hasbuff = params.hasbuff;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function WeapFishingNet.WeapFishingNet_C.Net Collided with Water
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FVector                                     WaterLocation                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FRotator                                    ProjectileRotation                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AWeapFishingNet_C::NetCollidedwithWater(const struct FVector& WaterLocation, const struct FRotator& ProjectileRotation)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WeapFishingNet.WeapFishingNet_C.Net Collided with Water");
		
		AWeapFishingNet_C_NetCollidedwithWater_Params params {};
		params.WaterLocation = WaterLocation;
		params.ProjectileRotation = ProjectileRotation;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function WeapFishingNet.WeapFishingNet_C.BPGetProjectileSpeed
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 */
	float AWeapFishingNet_C::BPGetProjectileSpeed()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WeapFishingNet.WeapFishingNet_C.BPGetProjectileSpeed");
		
		AWeapFishingNet_C_BPGetProjectileSpeed_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function WeapFishingNet.WeapFishingNet_C.UserConstructionScript
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void AWeapFishingNet_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WeapFishingNet.WeapFishingNet_C.UserConstructionScript");
		
		AWeapFishingNet_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function WeapFishingNet.WeapFishingNet_C.move net to player timeline__FinishedFunc
	 * 		Flags  -> (BlueprintEvent)
	 */
	void AWeapFishingNet_C::movenettoplayertimeline__FinishedFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WeapFishingNet.WeapFishingNet_C.move net to player timeline__FinishedFunc");
		
		AWeapFishingNet_C_movenettoplayertimeline__FinishedFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function WeapFishingNet.WeapFishingNet_C.move net to player timeline__UpdateFunc
	 * 		Flags  -> (BlueprintEvent)
	 */
	void AWeapFishingNet_C::movenettoplayertimeline__UpdateFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WeapFishingNet.WeapFishingNet_C.move net to player timeline__UpdateFunc");
		
		AWeapFishingNet_C_movenettoplayertimeline__UpdateFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function WeapFishingNet.WeapFishingNet_C.Timeline_0__FinishedFunc
	 * 		Flags  -> (BlueprintEvent)
	 */
	void AWeapFishingNet_C::Timeline_0__FinishedFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WeapFishingNet.WeapFishingNet_C.Timeline_0__FinishedFunc");
		
		AWeapFishingNet_C_Timeline_0__FinishedFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function WeapFishingNet.WeapFishingNet_C.Timeline_0__UpdateFunc
	 * 		Flags  -> (BlueprintEvent)
	 */
	void AWeapFishingNet_C::Timeline_0__UpdateFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WeapFishingNet.WeapFishingNet_C.Timeline_0__UpdateFunc");
		
		AWeapFishingNet_C_Timeline_0__UpdateFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function WeapFishingNet.WeapFishingNet_C.Cancel Cast
	 * 		Flags  -> (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               CaughtSuccess                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               ForceResetHasCaughtAnyFish                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AWeapFishingNet_C::CancelCast(bool CaughtSuccess, bool ForceResetHasCaughtAnyFish)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WeapFishingNet.WeapFishingNet_C.Cancel Cast");
		
		AWeapFishingNet_C_CancelCast_Params params {};
		params.CaughtSuccess = CaughtSuccess;
		params.ForceResetHasCaughtAnyFish = ForceResetHasCaughtAnyFish;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function WeapFishingNet.WeapFishingNet_C.Reel Net In
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AWeapFishingNet_C::ReelNetIn()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WeapFishingNet.WeapFishingNet_C.Reel Net In");
		
		AWeapFishingNet_C_ReelNetIn_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function WeapFishingNet.WeapFishingNet_C.server reel
	 * 		Flags  -> (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
	 */
	void AWeapFishingNet_C::serverreel()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WeapFishingNet.WeapFishingNet_C.server reel");
		
		AWeapFishingNet_C_serverreel_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function WeapFishingNet.WeapFishingNet_C.OnFishSnaredEvent
	 * 		Flags  -> (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class APrimalDinoCharacter*                        fish                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AWeapFishingNet_C::OnFishSnaredEvent(class APrimalDinoCharacter* fish)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WeapFishingNet.WeapFishingNet_C.OnFishSnaredEvent");
		
		AWeapFishingNet_C_OnFishSnaredEvent_Params params {};
		params.fish = fish;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function WeapFishingNet.WeapFishingNet_C.Projectile net collided with fish
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class APrimalDinoCharacter*                        fish                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AWeapFishingNet_C::Projectilenetcollidedwithfish(class APrimalDinoCharacter* fish)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WeapFishingNet.WeapFishingNet_C.Projectile net collided with fish");
		
		AWeapFishingNet_C_Projectilenetcollidedwithfish_Params params {};
		params.fish = fish;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function WeapFishingNet.WeapFishingNet_C.Cancel Cast Events
	 * 		Flags  -> (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               CaughtSuccess                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AWeapFishingNet_C::CancelCastEvents(bool CaughtSuccess)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WeapFishingNet.WeapFishingNet_C.Cancel Cast Events");
		
		AWeapFishingNet_C_CancelCastEvents_Params params {};
		params.CaughtSuccess = CaughtSuccess;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function WeapFishingNet.WeapFishingNet_C.fully catch fish
	 * 		Flags  -> (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
	 */
	void AWeapFishingNet_C::fullycatchfish()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WeapFishingNet.WeapFishingNet_C.fully catch fish");
		
		AWeapFishingNet_C_fullycatchfish_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function WeapFishingNet.WeapFishingNet_C.client do death harvesting
	 * 		Flags  -> (Net, NetMulticast, BlueprintCallable, BlueprintEvent)
	 */
	void AWeapFishingNet_C::clientdodeathharvesting()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WeapFishingNet.WeapFishingNet_C.client do death harvesting");
		
		AWeapFishingNet_C_clientdodeathharvesting_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function WeapFishingNet.WeapFishingNet_C.play reel anim
	 * 		Flags  -> (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
	 */
	void AWeapFishingNet_C::playreelanim()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WeapFishingNet.WeapFishingNet_C.play reel anim");
		
		AWeapFishingNet_C_playreelanim_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function WeapFishingNet.WeapFishingNet_C.cancel fire anim if there's fish in net
	 * 		Flags  -> (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
	 */
	void AWeapFishingNet_C::cancelfireanimiftheresfishinnet()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WeapFishingNet.WeapFishingNet_C.cancel fire anim if there's fish in net");
		
		AWeapFishingNet_C_cancelfireanimiftheresfishinnet_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function WeapFishingNet.WeapFishingNet_C.Set Reeling On Projectile
	 * 		Flags  -> (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
	 */
	void AWeapFishingNet_C::SetReelingOnProjectile()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WeapFishingNet.WeapFishingNet_C.Set Reeling On Projectile");
		
		AWeapFishingNet_C_SetReelingOnProjectile_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function WeapFishingNet.WeapFishingNet_C.play fire anim for TPV
	 * 		Flags  -> (NetReliable, BlueprintCallable, BlueprintEvent)
	 */
	void AWeapFishingNet_C::playfireanimforTPV()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WeapFishingNet.WeapFishingNet_C.play fire anim for TPV");
		
		AWeapFishingNet_C_playfireanimforTPV_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function WeapFishingNet.WeapFishingNet_C.play fire anim for FPV
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AWeapFishingNet_C::playfireanimforFPV()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WeapFishingNet.WeapFishingNet_C.play fire anim for FPV");
		
		AWeapFishingNet_C_playfireanimforFPV_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function WeapFishingNet.WeapFishingNet_C.play blended idle anim - cancel cast
	 * 		Flags  -> (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
	 */
	void AWeapFishingNet_C::playblendedidleanimcancelcast()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WeapFishingNet.WeapFishingNet_C.play blended idle anim - cancel cast");
		
		AWeapFishingNet_C_playblendedidleanimcancelcast_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function WeapFishingNet.WeapFishingNet_C.cancel fire anim
	 * 		Flags  -> (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
	 */
	void AWeapFishingNet_C::cancelfireanim()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WeapFishingNet.WeapFishingNet_C.cancel fire anim");
		
		AWeapFishingNet_C_cancelfireanim_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function WeapFishingNet.WeapFishingNet_C.Play Fish Caught Animation and remove item after
	 * 		Flags  -> (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               HasCaughtFish                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AWeapFishingNet_C::PlayFishCaughtAnimationandremoveitemafter(bool HasCaughtFish)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WeapFishingNet.WeapFishingNet_C.Play Fish Caught Animation and remove item after");
		
		AWeapFishingNet_C_PlayFishCaughtAnimationandremoveitemafter_Params params {};
		params.HasCaughtFish = HasCaughtFish;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function WeapFishingNet.WeapFishingNet_C.move net towards player
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               pullnetin                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AWeapFishingNet_C::movenettowardsplayer(bool pullnetin)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WeapFishingNet.WeapFishingNet_C.move net towards player");
		
		AWeapFishingNet_C_movenettowardsplayer_Params params {};
		params.pullnetin = pullnetin;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function WeapFishingNet.WeapFishingNet_C.client fully catch fish
	 * 		Flags  -> (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               catchfishsuccess                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               pullnetin                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AWeapFishingNet_C::clientfullycatchfish(bool catchfishsuccess, bool pullnetin)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WeapFishingNet.WeapFishingNet_C.client fully catch fish");
		
		AWeapFishingNet_C_clientfullycatchfish_Params params {};
		params.catchfishsuccess = catchfishsuccess;
		params.pullnetin = pullnetin;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function WeapFishingNet.WeapFishingNet_C.delay and cancel cast
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               successfullycaughtfish                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AWeapFishingNet_C::delayandcancelcast(bool successfullycaughtfish)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WeapFishingNet.WeapFishingNet_C.delay and cancel cast");
		
		AWeapFishingNet_C_delayandcancelcast_Params params {};
		params.successfullycaughtfish = successfullycaughtfish;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function WeapFishingNet.WeapFishingNet_C.multicast collided with water
	 * 		Flags  -> (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FVector                                     hitwaterlocation                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AWeapFishingNet_C::multicastcollidedwithwater(const struct FVector& hitwaterlocation)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WeapFishingNet.WeapFishingNet_C.multicast collided with water");
		
		AWeapFishingNet_C_multicastcollidedwithwater_Params params {};
		params.hitwaterlocation = hitwaterlocation;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function WeapFishingNet.WeapFishingNet_C.multicast set variables on cast
	 * 		Flags  -> (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
	 */
	void AWeapFishingNet_C::multicastsetvariablesoncast()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WeapFishingNet.WeapFishingNet_C.multicast set variables on cast");
		
		AWeapFishingNet_C_multicastsetvariablesoncast_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function WeapFishingNet.WeapFishingNet_C.multicast release fish
	 * 		Flags  -> (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
	 */
	void AWeapFishingNet_C::multicastreleasefish()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WeapFishingNet.WeapFishingNet_C.multicast release fish");
		
		AWeapFishingNet_C_multicastreleasefish_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function WeapFishingNet.WeapFishingNet_C.client request cancel cast
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               CaughtSuccess                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               ResetHasCaughtAnyFIsh                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AWeapFishingNet_C::clientrequestcancelcast(bool CaughtSuccess, bool ResetHasCaughtAnyFIsh)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WeapFishingNet.WeapFishingNet_C.client request cancel cast");
		
		AWeapFishingNet_C_clientrequestcancelcast_Params params {};
		params.CaughtSuccess = CaughtSuccess;
		params.ResetHasCaughtAnyFIsh = ResetHasCaughtAnyFIsh;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function WeapFishingNet.WeapFishingNet_C.Rotate projectile away from player while reeling_Client
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AWeapFishingNet_C::Rotateprojectileawayfromplayerwhilereeling_Client()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WeapFishingNet.WeapFishingNet_C.Rotate projectile away from player while reeling_Client");
		
		AWeapFishingNet_C_Rotateprojectileawayfromplayerwhilereeling_Client_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function WeapFishingNet.WeapFishingNet_C.multicast fish struggle
	 * 		Flags  -> (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
	 */
	void AWeapFishingNet_C::multicastfishstruggle()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WeapFishingNet.WeapFishingNet_C.multicast fish struggle");
		
		AWeapFishingNet_C_multicastfishstruggle_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function WeapFishingNet.WeapFishingNet_C.delay pass allowed fish classes to fish vision buff
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AWeapFishingNet_C::delaypassallowedfishclassestofishvisionbuff()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WeapFishingNet.WeapFishingNet_C.delay pass allowed fish classes to fish vision buff");
		
		AWeapFishingNet_C_delaypassallowedfishclassestofishvisionbuff_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function WeapFishingNet.WeapFishingNet_C.ExecuteUbergraph_WeapFishingNet
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AWeapFishingNet_C::ExecuteUbergraph_WeapFishingNet(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WeapFishingNet.WeapFishingNet_C.ExecuteUbergraph_WeapFishingNet");
		
		AWeapFishingNet_C_ExecuteUbergraph_WeapFishingNet_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function WeapFishingNet.WeapFishingNet_C.FishCaughtDispatcherSingle__DelegateSignature
	 * 		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              caughtfishwildrandomscale                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class AActor*                                      NetOwner                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class UClass*                                      FishClass                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class UObject*                                     fishref                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AWeapFishingNet_C::FishCaughtDispatcherSingle__DelegateSignature(float caughtfishwildrandomscale, class AActor* NetOwner, class UClass* FishClass, class UObject* fishref)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WeapFishingNet.WeapFishingNet_C.FishCaughtDispatcherSingle__DelegateSignature");
		
		AWeapFishingNet_C_FishCaughtDispatcherSingle__DelegateSignature_Params params {};
		params.caughtfishwildrandomscale = caughtfishwildrandomscale;
		params.NetOwner = NetOwner;
		params.FishClass = FishClass;
		params.fishref = fishref;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function WeapFishingNet.WeapFishingNet_C.FishCaughtDispatcher__DelegateSignature
	 * 		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              caughtfishweight                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		int32_t                                            caughtfishcount                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class AActor*                                      NetOwner                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AWeapFishingNet_C::FishCaughtDispatcher__DelegateSignature(float caughtfishweight, int32_t caughtfishcount, class AActor* NetOwner)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WeapFishingNet.WeapFishingNet_C.FishCaughtDispatcher__DelegateSignature");
		
		AWeapFishingNet_C_FishCaughtDispatcher__DelegateSignature_Params params {};
		params.caughtfishweight = caughtfishweight;
		params.caughtfishcount = caughtfishcount;
		params.NetOwner = NetOwner;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AWeapFishingNet_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AWeapFishingNet_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass WeapFishingNet.WeapFishingNet_C");
		return ptr;
	}

}


