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
	 * 		Name   -> Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.hard fix missing gen1 explorer notes
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void ABuff_Companion_HLNA_C::hardfixmissinggen1explorernotes()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.hard fix missing gen1 explorer notes");
		
		ABuff_Companion_HLNA_C_hardfixmissinggen1explorernotes_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.Get total Glitch Mission Complete Count
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AShooterCharacter*                           Player                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		int32_t                                            Count                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABuff_Companion_HLNA_C::GettotalGlitchMissionCompleteCount(class AShooterCharacter* Player, int32_t* Count)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.Get total Glitch Mission Complete Count");
		
		ABuff_Companion_HLNA_C_GettotalGlitchMissionCompleteCount_Params params {};
		params.Player = Player;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Count != nullptr)
			*Count = params.Count;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.Get Glitch Mission Complete Count
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FName                                        MissionTag                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class AShooterCharacter*                           Player                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		int32_t                                            Count                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABuff_Companion_HLNA_C::GetGlitchMissionCompleteCount(const class FName& MissionTag, class AShooterCharacter* Player, int32_t* Count)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.Get Glitch Mission Complete Count");
		
		ABuff_Companion_HLNA_C_GetGlitchMissionCompleteCount_Params params {};
		params.MissionTag = MissionTag;
		params.Player = Player;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Count != nullptr)
			*Count = params.Count;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.Randomly Pick Orbit Location Timer
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABuff_Companion_HLNA_C::RandomlyPickOrbitLocationTimer()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.Randomly Pick Orbit Location Timer");
		
		ABuff_Companion_HLNA_C_RandomlyPickOrbitLocationTimer_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.Should Force Play Post Intro Reactions
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	bool ABuff_Companion_HLNA_C::ShouldForcePlayPostIntroReactions()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.Should Force Play Post Intro Reactions");
		
		ABuff_Companion_HLNA_C_ShouldForcePlayPostIntroReactions_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.IsPlayerControllingValidPrimalChar
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		bool                                               bResult                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABuff_Companion_HLNA_C::IsPlayerControllingValidPrimalChar(bool* bResult)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.IsPlayerControllingValidPrimalChar");
		
		ABuff_Companion_HLNA_C_IsPlayerControllingValidPrimalChar_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (bResult != nullptr)
			*bResult = params.bResult;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.call finish on vr world
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABuff_Companion_HLNA_C::callfinishonvrworld()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.call finish on vr world");
		
		ABuff_Companion_HLNA_C_callfinishonvrworld_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.set player camera manager on death vfx manager
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABuff_Companion_HLNA_C::setplayercameramanagerondeathvfxmanager()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.set player camera manager on death vfx manager");
		
		ABuff_Companion_HLNA_C_setplayercameramanagerondeathvfxmanager_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.setup intro anim masking
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABuff_Companion_HLNA_C::setupintroanimmasking()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.setup intro anim masking");
		
		ABuff_Companion_HLNA_C_setupintroanimmasking_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.destroy intro teleport sphere
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABuff_Companion_HLNA_C::destroyintroteleportsphere()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.destroy intro teleport sphere");
		
		ABuff_Companion_HLNA_C_destroyintroteleportsphere_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.spawn post mass teleport vfx
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FVector                                     Location                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABuff_Companion_HLNA_C::spawnpostmassteleportvfx(const struct FVector& Location)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.spawn post mass teleport vfx");
		
		ABuff_Companion_HLNA_C_spawnpostmassteleportvfx_Params params {};
		params.Location = Location;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.spawn mass teleport vfx
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABuff_Companion_HLNA_C::spawnmassteleportvfx()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.spawn mass teleport vfx");
		
		ABuff_Companion_HLNA_C_spawnmassteleportvfx_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.Pass Mass Teleport Event to Vfx And Destroy ref
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		EMassTeleportState                                 State                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABuff_Companion_HLNA_C::PassMassTeleportEventtoVfxAndDestroyref(EMassTeleportState State)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.Pass Mass Teleport Event to Vfx And Destroy ref");
		
		ABuff_Companion_HLNA_C_PassMassTeleportEventtoVfxAndDestroyref_Params params {};
		params.State = State;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.cancel mass teleport vfx
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABuff_Companion_HLNA_C::cancelmassteleportvfx()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.cancel mass teleport vfx");
		
		ABuff_Companion_HLNA_C_cancelmassteleportvfx_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.pass players to teleport vfx
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		TArray<class FString>                              teleportingplayernames                                     (Parm, OutParm, ZeroConstructor, ReferenceParm)
	 */
	void ABuff_Companion_HLNA_C::passplayerstoteleportvfx(TArray<class FString>* teleportingplayernames)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.pass players to teleport vfx");
		
		ABuff_Companion_HLNA_C_passplayerstoteleportvfx_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (teleportingplayernames != nullptr)
			*teleportingplayernames = params.teleportingplayernames;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.UpdateSpawnedBeamParticle
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UParticleSystem*                             ParticleTemplate                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class AActor*                                      EndPointActor                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FVector                                     Offset                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABuff_Companion_HLNA_C::UpdateSpawnedBeamParticle(class UParticleSystem* ParticleTemplate, class AActor* EndPointActor, const struct FVector& Offset)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.UpdateSpawnedBeamParticle");
		
		ABuff_Companion_HLNA_C_UpdateSpawnedBeamParticle_Params params {};
		params.ParticleTemplate = ParticleTemplate;
		params.EndPointActor = EndPointActor;
		params.Offset = Offset;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.Pre Teleport Dismount
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABuff_Companion_HLNA_C::PreTeleportDismount()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.Pre Teleport Dismount");
		
		ABuff_Companion_HLNA_C_PreTeleportDismount_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.unmount teleporting players
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		TArray<class APrimalCharacter*>                    teleportingplayers                                         (Parm, OutParm, ZeroConstructor, ReferenceParm)
	 */
	void ABuff_Companion_HLNA_C::unmountteleportingplayers(TArray<class APrimalCharacter*>* teleportingplayers)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.unmount teleporting players");
		
		ABuff_Companion_HLNA_C_unmountteleportingplayers_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (teleportingplayers != nullptr)
			*teleportingplayers = params.teleportingplayers;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.Notify Players That They Cant Teleport Unconsious or Dead Dinos
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void ABuff_Companion_HLNA_C::NotifyPlayersThatTheyCantTeleportUnconsiousorDeadDinos()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.Notify Players That They Cant Teleport Unconsious or Dead Dinos");
		
		ABuff_Companion_HLNA_C_NotifyPlayersThatTheyCantTeleportUnconsiousorDeadDinos_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.Notify Players That They Cant Teleport Unconsious Or Dead Players
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void ABuff_Companion_HLNA_C::NotifyPlayersThatTheyCantTeleportUnconsiousOrDeadPlayers()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.Notify Players That They Cant Teleport Unconsious Or Dead Players");
		
		ABuff_Companion_HLNA_C_NotifyPlayersThatTheyCantTeleportUnconsiousOrDeadPlayers_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.Prevent Glitch Use Sphere Collision
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABuff_Companion_HLNA_C::PreventGlitchUseSphereCollision()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.Prevent Glitch Use Sphere Collision");
		
		ABuff_Companion_HLNA_C_PreventGlitchUseSphereCollision_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.Notify Players That They Exceed Final Boss player Count
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void ABuff_Companion_HLNA_C::NotifyPlayersThatTheyExceedFinalBossplayerCount()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.Notify Players That They Exceed Final Boss player Count");
		
		ABuff_Companion_HLNA_C_NotifyPlayersThatTheyExceedFinalBossplayerCount_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.notify players that they exceed final boss tame count
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void ABuff_Companion_HLNA_C::notifyplayersthattheyexceedfinalbosstamecount()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.notify players that they exceed final boss tame count");
		
		ABuff_Companion_HLNA_C_notifyplayersthattheyexceedfinalbosstamecount_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.find associated anim texture from localized sound wave pairs
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		TArray<struct FLocalizedSoundWaveAnimTexturePairArrays> Array                                                      (Parm, OutParm, ZeroConstructor, ReferenceParm)
	 * 		class FString                                      soundwavepath                                              (Parm, ZeroConstructor)
	 * 		class FString                                      animtexturepath                                            (Parm, OutParm, ZeroConstructor)
	 */
	void ABuff_Companion_HLNA_C::findassociatedanimtexturefromlocalizedsoundwavepairs(TArray<struct FLocalizedSoundWaveAnimTexturePairArrays>* Array, const class FString& soundwavepath, class FString* animtexturepath)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.find associated anim texture from localized sound wave pairs");
		
		ABuff_Companion_HLNA_C_findassociatedanimtexturefromlocalizedsoundwavepairs_Params params {};
		params.soundwavepath = soundwavepath;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Array != nullptr)
			*Array = params.Array;
		if (animtexturepath != nullptr)
			*animtexturepath = params.animtexturepath;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.Recently Released ADS
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABuff_Companion_HLNA_C::RecentlyReleasedADS()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.Recently Released ADS");
		
		ABuff_Companion_HLNA_C_RecentlyReleasedADS_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.begin scan random location orbit
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABuff_Companion_HLNA_C::beginscanrandomlocationorbit()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.begin scan random location orbit");
		
		ABuff_Companion_HLNA_C_beginscanrandomlocationorbit_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.is fixing glitch
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               isfixing                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABuff_Companion_HLNA_C::isfixingglitch(bool* isfixing)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.is fixing glitch");
		
		ABuff_Companion_HLNA_C_isfixingglitch_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (isfixing != nullptr)
			*isfixing = params.isfixing;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.Check if You Can Play Post Intro HLNA Target Alert Message
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABuff_Companion_HLNA_C::CheckifYouCanPlayPostIntroHLNATargetAlertMessage()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.Check if You Can Play Post Intro HLNA Target Alert Message");
		
		ABuff_Companion_HLNA_C_CheckifYouCanPlayPostIntroHLNATargetAlertMessage_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.Show Post Intro Mission Alert Message
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABuff_Companion_HLNA_C::ShowPostIntroMissionAlertMessage()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.Show Post Intro Mission Alert Message");
		
		ABuff_Companion_HLNA_C_ShowPostIntroMissionAlertMessage_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.Show Post Intro HLNA Target Alert Message
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void ABuff_Companion_HLNA_C::ShowPostIntroHLNATargetAlertMessage()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.Show Post Intro HLNA Target Alert Message");
		
		ABuff_Companion_HLNA_C_ShowPostIntroHLNATargetAlertMessage_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.Reaction Equals Reaction
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FCompanionReactionData                      reaction1                                                  (Parm)
	 * 		struct FCompanionReactionData                      reaction2                                                  (Parm)
	 * 		bool                                               isequal                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABuff_Companion_HLNA_C::ReactionEqualsReaction(const struct FCompanionReactionData& reaction1, const struct FCompanionReactionData& reaction2, bool* isequal)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.Reaction Equals Reaction");
		
		ABuff_Companion_HLNA_C_ReactionEqualsReaction_Params params {};
		params.reaction1 = reaction1;
		params.reaction2 = reaction2;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (isequal != nullptr)
			*isequal = params.isequal;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.set up aysnc loaded anim texture
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UObject*                                     InputPin                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               EyeOnly                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABuff_Companion_HLNA_C::setupaysncloadedanimtexture(class UObject* InputPin, bool EyeOnly)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.set up aysnc loaded anim texture");
		
		ABuff_Companion_HLNA_C_setupaysncloadedanimtexture_Params params {};
		params.InputPin = InputPin;
		params.EyeOnly = EyeOnly;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.is player tpv and hlna is in the way
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FVector                                     locoverride                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               isintheway                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABuff_Companion_HLNA_C::isplayertpvandhlnaisintheway(const struct FVector& locoverride, bool* isintheway)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.is player tpv and hlna is in the way");
		
		ABuff_Companion_HLNA_C_isplayertpvandhlnaisintheway_Params params {};
		params.locoverride = locoverride;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (isintheway != nullptr)
			*isintheway = params.isintheway;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.force play mission alert
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FString                                      Title                                                      (Parm, ZeroConstructor)
	 * 		class FString                                      Label                                                      (Parm, ZeroConstructor)
	 * 		EMissionAlertType                                  alerttype                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		float                                              displaytime                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class UTexture2D*                                  Icon                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABuff_Companion_HLNA_C::forceplaymissionalert(const class FString& Title, const class FString& Label, EMissionAlertType alerttype, float displaytime, class UTexture2D* Icon)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.force play mission alert");
		
		ABuff_Companion_HLNA_C_forceplaymissionalert_Params params {};
		params.Title = Title;
		params.Label = Label;
		params.alerttype = alerttype;
		params.displaytime = displaytime;
		params.Icon = Icon;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.Delay to Play Hlna Subtitles Move Out Anim
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABuff_Companion_HLNA_C::DelaytoPlayHlnaSubtitlesMoveOutAnim()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.Delay to Play Hlna Subtitles Move Out Anim");
		
		ABuff_Companion_HLNA_C_DelaytoPlayHlnaSubtitlesMoveOutAnim_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.create dynamic materials
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void ABuff_Companion_HLNA_C::createdynamicmaterials()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.create dynamic materials");
		
		ABuff_Companion_HLNA_C_createdynamicmaterials_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.Clear Async Loaded Audio
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABuff_Companion_HLNA_C::ClearAsyncLoadedAudio()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.Clear Async Loaded Audio");
		
		ABuff_Companion_HLNA_C_ClearAsyncLoadedAudio_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.Is Player On Mission
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AShooterCharacter*                           Player                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               RetVal                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class AMissionType*                                activemission                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABuff_Companion_HLNA_C::IsPlayerOnMission(class AShooterCharacter* Player, bool* RetVal, class AMissionType** activemission)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.Is Player On Mission");
		
		ABuff_Companion_HLNA_C_IsPlayerOnMission_Params params {};
		params.Player = Player;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (RetVal != nullptr)
			*RetVal = params.RetVal;
		if (activemission != nullptr)
			*activemission = params.activemission;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.is player on mission and cant teleport
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AShooterCharacter*                           InputPin                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               RetVal                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABuff_Companion_HLNA_C::isplayeronmissionandcantteleport(class AShooterCharacter* InputPin, bool* RetVal)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.is player on mission and cant teleport");
		
		ABuff_Companion_HLNA_C_isplayeronmissionandcantteleport_Params params {};
		params.InputPin = InputPin;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (RetVal != nullptr)
			*RetVal = params.RetVal;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.Notify Player That They Cannot Teleport Players On Mission
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void ABuff_Companion_HLNA_C::NotifyPlayerThatTheyCannotTeleportPlayersOnMission()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.Notify Player That They Cannot Teleport Players On Mission");
		
		ABuff_Companion_HLNA_C_NotifyPlayerThatTheyCannotTeleportPlayersOnMission_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.Colliding with Something
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABuff_Companion_HLNA_C::CollidingwithSomething()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.Colliding with Something");
		
		ABuff_Companion_HLNA_C_CollidingwithSomething_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.BPNotifyOtherBuffDeactivated
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class APrimalBuff*                                 OtherBuff                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABuff_Companion_HLNA_C::BPNotifyOtherBuffDeactivated(class APrimalBuff* OtherBuff)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.BPNotifyOtherBuffDeactivated");
		
		ABuff_Companion_HLNA_C_BPNotifyOtherBuffDeactivated_Params params {};
		params.OtherBuff = OtherBuff;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.IsCompanionAbleToMonologue
	 * 		Flags  -> (Event, Protected, HasOutParms, BlueprintCallable, BlueprintEvent)
	 */
	bool ABuff_Companion_HLNA_C::IsCompanionAbleToMonologue()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.IsCompanionAbleToMonologue");
		
		ABuff_Companion_HLNA_C_IsCompanionAbleToMonologue_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.Awaiting Set Of Initial Spawn Intro Anim Timer
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABuff_Companion_HLNA_C::AwaitingSetOfInitialSpawnIntroAnimTimer()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.Awaiting Set Of Initial Spawn Intro Anim Timer");
		
		ABuff_Companion_HLNA_C_AwaitingSetOfInitialSpawnIntroAnimTimer_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.Notify Player That They Cannot Teleport Large Dinos To Final Boss
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void ABuff_Companion_HLNA_C::NotifyPlayerThatTheyCannotTeleportLargeDinosToFinalBoss()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.Notify Player That They Cannot Teleport Large Dinos To Final Boss");
		
		ABuff_Companion_HLNA_C_NotifyPlayerThatTheyCannotTeleportLargeDinosToFinalBoss_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.Notify Player That They Cannot Teleport Players On Seated Structures
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void ABuff_Companion_HLNA_C::NotifyPlayerThatTheyCannotTeleportPlayersOnSeatedStructures()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.Notify Player That They Cannot Teleport Players On Seated Structures");
		
		ABuff_Companion_HLNA_C_NotifyPlayerThatTheyCannotTeleportPlayersOnSeatedStructures_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.Temp Keep Movement Volume Up
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABuff_Companion_HLNA_C::TempKeepMovementVolumeUp()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.Temp Keep Movement Volume Up");
		
		ABuff_Companion_HLNA_C_TempKeepMovementVolumeUp_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.Set Intro sphere Mask Amount
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              InputPin                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABuff_Companion_HLNA_C::SetIntrosphereMaskAmount(float InputPin)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.Set Intro sphere Mask Amount");
		
		ABuff_Companion_HLNA_C_SetIntrosphereMaskAmount_Params params {};
		params.InputPin = InputPin;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.Move Cuz In The Way
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABuff_Companion_HLNA_C::MoveCuzInTheWay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.Move Cuz In The Way");
		
		ABuff_Companion_HLNA_C_MoveCuzInTheWay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.should hlna move away from the camera
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               _return_                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABuff_Companion_HLNA_C::shouldhlnamoveawayfromthecamera(bool* _return_)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.should hlna move away from the camera");
		
		ABuff_Companion_HLNA_C_shouldhlnamoveawayfromthecamera_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (_return_ != nullptr)
			*_return_ = params._return_;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.Is Probably Firing
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABuff_Companion_HLNA_C::IsProbablyFiring()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.Is Probably Firing");
		
		ABuff_Companion_HLNA_C_IsProbablyFiring_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.BPHandleOnStopFire
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               bFromGamepad                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABuff_Companion_HLNA_C::BPHandleOnStopFire(bool bFromGamepad)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.BPHandleOnStopFire");
		
		ABuff_Companion_HLNA_C_BPHandleOnStopFire_Params params {};
		params.bFromGamepad = bFromGamepad;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.Restrict Getting In Front Of Camera During Firing Or Ads
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABuff_Companion_HLNA_C::RestrictGettingInFrontOfCameraDuringFiringOrAds()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.Restrict Getting In Front Of Camera During Firing Or Ads");
		
		ABuff_Companion_HLNA_C_RestrictGettingInFrontOfCameraDuringFiringOrAds_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.StopCompanionEvent
	 * 		Flags  -> (Event, Protected, BlueprintCallable, BlueprintEvent)
	 */
	void ABuff_Companion_HLNA_C::StopCompanionEvent()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.StopCompanionEvent");
		
		ABuff_Companion_HLNA_C_StopCompanionEvent_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.FocusOnRemoteTarget
	 * 		Flags  -> (Event, Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void ABuff_Companion_HLNA_C::FocusOnRemoteTarget()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.FocusOnRemoteTarget");
		
		ABuff_Companion_HLNA_C_FocusOnRemoteTarget_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.play focused scan sfx and vfx
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABuff_Companion_HLNA_C::playfocusedscansfxandvfx()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.play focused scan sfx and vfx");
		
		ABuff_Companion_HLNA_C_playfocusedscansfxandvfx_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.Focused Selected Remote Target Timeout
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABuff_Companion_HLNA_C::FocusedSelectedRemoteTargetTimeout()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.Focused Selected Remote Target Timeout");
		
		ABuff_Companion_HLNA_C_FocusedSelectedRemoteTargetTimeout_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.play hexagon sfx
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABuff_Companion_HLNA_C::playhexagonsfx()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.play hexagon sfx");
		
		ABuff_Companion_HLNA_C_playhexagonsfx_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.OnSpawnHexagons
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              OverrideCollectSFXVolume                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               VFXImmediatelyAttracts                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABuff_Companion_HLNA_C::OnSpawnHexagons(float OverrideCollectSFXVolume, bool VFXImmediatelyAttracts)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.OnSpawnHexagons");
		
		ABuff_Companion_HLNA_C_OnSpawnHexagons_Params params {};
		params.OverrideCollectSFXVolume = OverrideCollectSFXVolume;
		params.VFXImmediatelyAttracts = VFXImmediatelyAttracts;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.OnMadeHexagonPurchase
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABuff_Companion_HLNA_C::OnMadeHexagonPurchase()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.OnMadeHexagonPurchase");
		
		ABuff_Companion_HLNA_C_OnMadeHexagonPurchase_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.HLNa Mass Teleport Trigger to VR Boss Battle Flow Test
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABuff_Companion_HLNA_C::HLNaMassTeleportTriggertoVRBossBattleFlowTest()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.HLNa Mass Teleport Trigger to VR Boss Battle Flow Test");
		
		ABuff_Companion_HLNA_C_HLNaMassTeleportTriggertoVRBossBattleFlowTest_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.find or get mission dispatcher
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AMissionDispatcher*                          AsMissionDispatcher                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABuff_Companion_HLNA_C::findorgetmissiondispatcher(class AMissionDispatcher** AsMissionDispatcher)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.find or get mission dispatcher");
		
		ABuff_Companion_HLNA_C_findorgetmissiondispatcher_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (AsMissionDispatcher != nullptr)
			*AsMissionDispatcher = params.AsMissionDispatcher;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.Remove Cosmetic HLNA
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABuff_Companion_HLNA_C::RemoveCosmeticHLNA()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.Remove Cosmetic HLNA");
		
		ABuff_Companion_HLNA_C_RemoveCosmeticHLNA_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.RefreshCompanionColorization
	 * 		Flags  -> (Event, Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void ABuff_Companion_HLNA_C::RefreshCompanionColorization()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.RefreshCompanionColorization");
		
		ABuff_Companion_HLNA_C_RefreshCompanionColorization_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.start boss battle
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UClass*                                      InputPin                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABuff_Companion_HLNA_C::startbossbattle(class UClass* InputPin)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.start boss battle");
		
		ABuff_Companion_HLNA_C_startbossbattle_Params params {};
		params.InputPin = InputPin;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.start mission and set reverse teleports
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void ABuff_Companion_HLNA_C::startmissionandsetreverseteleports()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.start mission and set reverse teleports");
		
		ABuff_Companion_HLNA_C_startmissionandsetreverseteleports_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.Set Return Teleport Locations
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void ABuff_Companion_HLNA_C::SetReturnTeleportLocations()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.Set Return Teleport Locations");
		
		ABuff_Companion_HLNA_C_SetReturnTeleportLocations_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.BPGetMultiUseEntries
	 * 		Flags  -> (Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class APlayerController*                           ForPC                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		TArray<struct FMultiUseEntry>                      MultiUseEntries                                            (Parm, OutParm, ZeroConstructor, ReferenceParm)
	 */
	TArray<struct FMultiUseEntry> ABuff_Companion_HLNA_C::BPGetMultiUseEntries(class APlayerController* ForPC, TArray<struct FMultiUseEntry>* MultiUseEntries)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.BPGetMultiUseEntries");
		
		ABuff_Companion_HLNA_C_BPGetMultiUseEntries_Params params {};
		params.ForPC = ForPC;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (MultiUseEntries != nullptr)
			*MultiUseEntries = params.MultiUseEntries;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.HLNa Mass Teleport Trigger To VR Boss Battle Hard
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABuff_Companion_HLNA_C::HLNaMassTeleportTriggerToVRBossBattleHard()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.HLNa Mass Teleport Trigger To VR Boss Battle Hard");
		
		ABuff_Companion_HLNA_C_HLNaMassTeleportTriggerToVRBossBattleHard_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.HLNa Mass Teleport Trigger To VR Boss Battle Med
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABuff_Companion_HLNA_C::HLNaMassTeleportTriggerToVRBossBattleMed()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.HLNa Mass Teleport Trigger To VR Boss Battle Med");
		
		ABuff_Companion_HLNA_C_HLNaMassTeleportTriggerToVRBossBattleMed_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.HLNa Mass Teleport Trigger To VR Boss Battle Easy
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABuff_Companion_HLNA_C::HLNaMassTeleportTriggerToVRBossBattleEasy()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.HLNa Mass Teleport Trigger To VR Boss Battle Easy");
		
		ABuff_Companion_HLNA_C_HLNaMassTeleportTriggerToVRBossBattleEasy_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.sync mission complete status
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void ABuff_Companion_HLNA_C::syncmissioncompletestatus()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.sync mission complete status");
		
		ABuff_Companion_HLNA_C_syncmissioncompletestatus_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.Restrict Sync Mission Complete Status
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABuff_Companion_HLNA_C::RestrictSyncMissionCompleteStatus()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.Restrict Sync Mission Complete Status");
		
		ABuff_Companion_HLNA_C_RestrictSyncMissionCompleteStatus_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.format VR boss battle teleport multiuse options
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		int32_t                                            RequiredMissions                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class FString                                      MissionTitle                                               (Parm, ZeroConstructor)
	 * 		bool                                               RequiresAllStoryGlitches                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class FString                                      AppendedString                                             (Parm, OutParm, ZeroConstructor)
	 * 		bool                                               Disabled                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABuff_Companion_HLNA_C::formatVRbossbattleteleportmultiuseoptions(int32_t RequiredMissions, const class FString& MissionTitle, bool RequiresAllStoryGlitches, class FString* AppendedString, bool* Disabled)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.format VR boss battle teleport multiuse options");
		
		ABuff_Companion_HLNA_C_formatVRbossbattleteleportmultiuseoptions_Params params {};
		params.RequiredMissions = RequiredMissions;
		params.MissionTitle = MissionTitle;
		params.RequiresAllStoryGlitches = RequiresAllStoryGlitches;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (AppendedString != nullptr)
			*AppendedString = params.AppendedString;
		if (Disabled != nullptr)
			*Disabled = params.Disabled;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.Restricted_Timed_Hexagon_Collection
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABuff_Companion_HLNA_C::Restricted_Timed_Hexagon_Collection()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.Restricted_Timed_Hexagon_Collection");
		
		ABuff_Companion_HLNA_C_Restricted_Timed_Hexagon_Collection_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.restricted time since last played movement sounds
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABuff_Companion_HLNA_C::restrictedtimesincelastplayedmovementsounds()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.restricted time since last played movement sounds");
		
		ABuff_Companion_HLNA_C_restrictedtimesincelastplayedmovementsounds_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.Play movement sound
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              Distance                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABuff_Companion_HLNA_C::Playmovementsound(float Distance)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.Play movement sound");
		
		ABuff_Companion_HLNA_C_Playmovementsound_Params params {};
		params.Distance = Distance;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.Randomly pick orbit location
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABuff_Companion_HLNA_C::Randomlypickorbitlocation()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.Randomly pick orbit location");
		
		ABuff_Companion_HLNA_C_Randomlypickorbitlocation_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.Notify Player That They Cannot Teleport Fish
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void ABuff_Companion_HLNA_C::NotifyPlayerThatTheyCannotTeleportFish()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.Notify Player That They Cannot Teleport Fish");
		
		ABuff_Companion_HLNA_C_NotifyPlayerThatTheyCannotTeleportFish_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.notify player that they cannot teleport rafts
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void ABuff_Companion_HLNA_C::notifyplayerthattheycannotteleportrafts()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.notify player that they cannot teleport rafts");
		
		ABuff_Companion_HLNA_C_notifyplayerthattheycannotteleportrafts_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.Play HLNA Respawn Anim
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABuff_Companion_HLNA_C::PlayHLNARespawnAnim()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.Play HLNA Respawn Anim");
		
		ABuff_Companion_HLNA_C_PlayHLNARespawnAnim_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.play spawn anim
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UClass*                                      anActorClass                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class UAnimMontage*                                AnimToPlay                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABuff_Companion_HLNA_C::playspawnanim(class UClass* anActorClass, class UAnimMontage* AnimToPlay)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.play spawn anim");
		
		ABuff_Companion_HLNA_C_playspawnanim_Params params {};
		params.anActorClass = anActorClass;
		params.AnimToPlay = AnimToPlay;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.Simple Play Localized Audio cue
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FHLNALocalizedAudioEntry                    HLNALocalizedAudioEntry                                    (Parm, OutParm, ReferenceParm)
	 * 		bool                                               playanimtextures                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABuff_Companion_HLNA_C::SimplePlayLocalizedAudiocue(struct FHLNALocalizedAudioEntry* HLNALocalizedAudioEntry, bool playanimtextures)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.Simple Play Localized Audio cue");
		
		ABuff_Companion_HLNA_C_SimplePlayLocalizedAudiocue_Params params {};
		params.playanimtextures = playanimtextures;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (HLNALocalizedAudioEntry != nullptr)
			*HLNALocalizedAudioEntry = params.HLNALocalizedAudioEntry;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.BPAnimNotifyCustomEvent
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FName                                        CustomEventName                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class USkeletalMeshComponent*                      MeshComp                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class UAnimSequenceBase*                           Animation                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class UAnimNotify*                                 AnimNotifyObject                                           (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABuff_Companion_HLNA_C::BPAnimNotifyCustomEvent(const class FName& CustomEventName, class USkeletalMeshComponent* MeshComp, class UAnimSequenceBase* Animation, class UAnimNotify* AnimNotifyObject)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.BPAnimNotifyCustomEvent");
		
		ABuff_Companion_HLNA_C_BPAnimNotifyCustomEvent_Params params {};
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
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.set all components custom depth stencil value
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            StencilValue                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class AActor*                                      Actor                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABuff_Companion_HLNA_C::setallcomponentscustomdepthstencilvalue(int32_t StencilValue, class AActor* Actor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.set all components custom depth stencil value");
		
		ABuff_Companion_HLNA_C_setallcomponentscustomdepthstencilvalue_Params params {};
		params.StencilValue = StencilValue;
		params.Actor = Actor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.CanPlayEnvironmentalCompanionReaction
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FCompanionReactionData                      CanPlayReactionData                                        (Parm, OutParm, ReferenceParm)
	 */
	bool ABuff_Companion_HLNA_C::CanPlayEnvironmentalCompanionReaction(struct FCompanionReactionData* CanPlayReactionData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.CanPlayEnvironmentalCompanionReaction");
		
		ABuff_Companion_HLNA_C_CanPlayEnvironmentalCompanionReaction_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (CanPlayReactionData != nullptr)
			*CanPlayReactionData = params.CanPlayReactionData;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.Server Update Purchasable Items
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABuff_Companion_HLNA_C::ServerUpdatePurchasableItems()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.Server Update Purchasable Items");
		
		ABuff_Companion_HLNA_C_ServerUpdatePurchasableItems_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.Restricted Interval For Checking Updated Hex Store Purchasable Items
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABuff_Companion_HLNA_C::RestrictedIntervalForCheckingUpdatedHexStorePurchasableItems()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.Restricted Interval For Checking Updated Hex Store Purchasable Items");
		
		ABuff_Companion_HLNA_C_RestrictedIntervalForCheckingUpdatedHexStorePurchasableItems_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.Play HLNA Initial Spawn Anim
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABuff_Companion_HLNA_C::PlayHLNAInitialSpawnAnim()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.Play HLNA Initial Spawn Anim");
		
		ABuff_Companion_HLNA_C_PlayHLNAInitialSpawnAnim_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.Companion is in first person in a seat
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		bool                                               Result                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABuff_Companion_HLNA_C::Companionisinfirstpersoninaseat(bool* Result)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.Companion is in first person in a seat");
		
		ABuff_Companion_HLNA_C_Companionisinfirstpersoninaseat_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Result != nullptr)
			*Result = params.Result;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.Finish Intro Anim
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABuff_Companion_HLNA_C::FinishIntroAnim()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.Finish Intro Anim");
		
		ABuff_Companion_HLNA_C_FinishIntroAnim_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.NotifyHasTamedDino
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UClass*                                      DinoClass                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABuff_Companion_HLNA_C::NotifyHasTamedDino(class UClass* DinoClass)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.NotifyHasTamedDino");
		
		ABuff_Companion_HLNA_C_NotifyHasTamedDino_Params params {};
		params.DinoClass = DinoClass;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.NotifyItemCrafted
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UPrimalItem*                                 anItem                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABuff_Companion_HLNA_C::NotifyItemCrafted(class UPrimalItem* anItem)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.NotifyItemCrafted");
		
		ABuff_Companion_HLNA_C_NotifyItemCrafted_Params params {};
		params.anItem = anItem;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.Keep Eye Hidden For Emotes
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void ABuff_Companion_HLNA_C::KeepEyeHiddenForEmotes()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.Keep Eye Hidden For Emotes");
		
		ABuff_Companion_HLNA_C_KeepEyeHiddenForEmotes_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.BuffTickClient
	 * 		Flags  -> (Event, Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              DeltaTime                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABuff_Companion_HLNA_C::BuffTickClient(float DeltaTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.BuffTickClient");
		
		ABuff_Companion_HLNA_C_BuffTickClient_Params params {};
		params.DeltaTime = DeltaTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.Reset Delay Between Environmental Reactions
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABuff_Companion_HLNA_C::ResetDelayBetweenEnvironmentalReactions()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.Reset Delay Between Environmental Reactions");
		
		ABuff_Companion_HLNA_C_ResetDelayBetweenEnvironmentalReactions_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.Check Recieve Damage For Reactions
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABuff_Companion_HLNA_C::CheckRecieveDamageForReactions()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.Check Recieve Damage For Reactions");
		
		ABuff_Companion_HLNA_C_CheckRecieveDamageForReactions_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.Reset Recent Damage Recieved
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABuff_Companion_HLNA_C::ResetRecentDamageRecieved()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.Reset Recent Damage Recieved");
		
		ABuff_Companion_HLNA_C_ResetRecentDamageRecieved_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.BPServerHandleNetExecCommand
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class APlayerController*                           FromPC                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class FName                                        CommandName                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FBPNetExecParams                            ExecParams                                                 (Parm, OutParm, ReferenceParm)
	 */
	bool ABuff_Companion_HLNA_C::BPServerHandleNetExecCommand(class APlayerController* FromPC, const class FName& CommandName, struct FBPNetExecParams* ExecParams)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.BPServerHandleNetExecCommand");
		
		ABuff_Companion_HLNA_C_BPServerHandleNetExecCommand_Params params {};
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
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.Play World Reaction
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FCompanionReactionData                      WithReactionData                                           (Parm, OutParm, ReferenceParm)
	 */
	void ABuff_Companion_HLNA_C::PlayWorldReaction(struct FCompanionReactionData* WithReactionData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.Play World Reaction");
		
		ABuff_Companion_HLNA_C_PlayWorldReaction_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (WithReactionData != nullptr)
			*WithReactionData = params.WithReactionData;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.Interval to check for HLNA world reactions
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABuff_Companion_HLNA_C::IntervaltocheckforHLNAworldreactions()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.Interval to check for HLNA world reactions");
		
		ABuff_Companion_HLNA_C_IntervaltocheckforHLNAworldreactions_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.Restrict Random World Reactions
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABuff_Companion_HLNA_C::RestrictRandomWorldReactions()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.Restrict Random World Reactions");
		
		ABuff_Companion_HLNA_C_RestrictRandomWorldReactions_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.Check Current Status of various things to react to
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABuff_Companion_HLNA_C::CheckCurrentStatusofvariousthingstoreactto()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.Check Current Status of various things to react to");
		
		ABuff_Companion_HLNA_C_CheckCurrentStatusofvariousthingstoreactto_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.BPInventoryItemUsed
	 * 		Flags  -> (Event, Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UObject*                                     InventoryItemObject                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABuff_Companion_HLNA_C::BPInventoryItemUsed(class UObject* InventoryItemObject)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.BPInventoryItemUsed");
		
		ABuff_Companion_HLNA_C_BPInventoryItemUsed_Params params {};
		params.InventoryItemObject = InventoryItemObject;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.BPDeactivated
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AActor*                                      ForInstigator                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABuff_Companion_HLNA_C::BPDeactivated(class AActor* ForInstigator)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.BPDeactivated");
		
		ABuff_Companion_HLNA_C_BPDeactivated_Params params {};
		params.ForInstigator = ForInstigator;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.BPNotifyOtherBuffActivated
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class APrimalBuff*                                 OtherBuff                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABuff_Companion_HLNA_C::BPNotifyOtherBuffActivated(class APrimalBuff* OtherBuff)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.BPNotifyOtherBuffActivated");
		
		ABuff_Companion_HLNA_C_BPNotifyOtherBuffActivated_Params params {};
		params.OtherBuff = OtherBuff;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.BPNotifyExperienceGained
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              ActualExpGained                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		float                                              ExpectedExpGain                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		EXPType                                            ExpTypeGained                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABuff_Companion_HLNA_C::BPNotifyExperienceGained(float ActualExpGained, float ExpectedExpGain, EXPType ExpTypeGained)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.BPNotifyExperienceGained");
		
		ABuff_Companion_HLNA_C_BPNotifyExperienceGained_Params params {};
		params.ActualExpGained = ActualExpGained;
		params.ExpectedExpGain = ExpectedExpGain;
		params.ExpTypeGained = ExpTypeGained;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.BPInstigatorDied
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABuff_Companion_HLNA_C::BPInstigatorDied()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.BPInstigatorDied");
		
		ABuff_Companion_HLNA_C_BPInstigatorDied_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.BPHandleOnStartFire
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               bFromGamepad                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABuff_Companion_HLNA_C::BPHandleOnStartFire(bool bFromGamepad)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.BPHandleOnStartFire");
		
		ABuff_Companion_HLNA_C_BPHandleOnStartFire_Params params {};
		params.bFromGamepad = bFromGamepad;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.PlayJustAboutToTeleportReaction
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABuff_Companion_HLNA_C::PlayJustAboutToTeleportReaction()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.PlayJustAboutToTeleportReaction");
		
		ABuff_Companion_HLNA_C_PlayJustAboutToTeleportReaction_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.FinishedScanDispatcher
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AShooterCharacter*                           ShooterChar                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABuff_Companion_HLNA_C::FinishedScanDispatcher(class AShooterCharacter* ShooterChar)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.FinishedScanDispatcher");
		
		ABuff_Companion_HLNA_C_FinishedScanDispatcher_Params params {};
		params.ShooterChar = ShooterChar;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.FinishedScan
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABuff_Companion_HLNA_C::FinishedScan()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.FinishedScan");
		
		ABuff_Companion_HLNA_C_FinishedScan_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.Play Scan Reactions
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FCompanionReactionData                      PostScanReaction                                           (Parm)
	 * 		float                                              OverrideScanDuration                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		float                                              TotalReactionsDuration                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABuff_Companion_HLNA_C::PlayScanReactions(const struct FCompanionReactionData& PostScanReaction, float OverrideScanDuration, float* TotalReactionsDuration)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.Play Scan Reactions");
		
		ABuff_Companion_HLNA_C_PlayScanReactions_Params params {};
		params.PostScanReaction = PostScanReaction;
		params.OverrideScanDuration = OverrideScanDuration;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (TotalReactionsDuration != nullptr)
			*TotalReactionsDuration = params.TotalReactionsDuration;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.Clean Up Teleport VFX
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABuff_Companion_HLNA_C::CleanUpTeleportVFX()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.Clean Up Teleport VFX");
		
		ABuff_Companion_HLNA_C_CleanUpTeleportVFX_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.On Mass Teleport Event VFX
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		EMassTeleportState                                 Event                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABuff_Companion_HLNA_C::OnMassTeleportEventVFX(EMassTeleportState Event)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.On Mass Teleport Event VFX");
		
		ABuff_Companion_HLNA_C_OnMassTeleportEventVFX_Params params {};
		params.Event = Event;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.Find Best Teleport Location
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            selectedcoordinatedirectionindex                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		int32_t                                            regionindex                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class APlayerController*                           PlayerController                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               onlytestiftheresanyavailable                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               HasFoundSpot                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABuff_Companion_HLNA_C::FindBestTeleportLocation(int32_t selectedcoordinatedirectionindex, int32_t regionindex, class APlayerController* PlayerController, bool onlytestiftheresanyavailable, bool* HasFoundSpot)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.Find Best Teleport Location");
		
		ABuff_Companion_HLNA_C_FindBestTeleportLocation_Params params {};
		params.selectedcoordinatedirectionindex = selectedcoordinatedirectionindex;
		params.regionindex = regionindex;
		params.PlayerController = PlayerController;
		params.onlytestiftheresanyavailable = onlytestiftheresanyavailable;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (HasFoundSpot != nullptr)
			*HasFoundSpot = params.HasFoundSpot;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.NotifyDamage
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              DamageAmount                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class UClass*                                      DamageClass                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class AController*                                 EventInstigator                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class AActor*                                      TheDamageCauser                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABuff_Companion_HLNA_C::NotifyDamage(float DamageAmount, class UClass* DamageClass, class AController* EventInstigator, class AActor* TheDamageCauser)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.NotifyDamage");
		
		ABuff_Companion_HLNA_C_NotifyDamage_Params params {};
		params.DamageAmount = DamageAmount;
		params.DamageClass = DamageClass;
		params.EventInstigator = EventInstigator;
		params.TheDamageCauser = TheDamageCauser;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.Set Best Teleport Spot From Sorted Start Points
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		TArray<class AActor*>                              Array                                                      (Parm, OutParm, ZeroConstructor, ReferenceParm)
	 * 		bool                                               abletosetspot                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABuff_Companion_HLNA_C::SetBestTeleportSpotFromSortedStartPoints(TArray<class AActor*>* Array, bool* abletosetspot)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.Set Best Teleport Spot From Sorted Start Points");
		
		ABuff_Companion_HLNA_C_SetBestTeleportSpotFromSortedStartPoints_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Array != nullptr)
			*Array = params.Array;
		if (abletosetspot != nullptr)
			*abletosetspot = params.abletosetspot;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.Get Biome Names
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		TArray<class FString>                              OverridePlayerSpawnRegions                                 (Parm, OutParm, ZeroConstructor)
	 */
	void ABuff_Companion_HLNA_C::GetBiomeNames(TArray<class FString>* OverridePlayerSpawnRegions)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.Get Biome Names");
		
		ABuff_Companion_HLNA_C_GetBiomeNames_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OverridePlayerSpawnRegions != nullptr)
			*OverridePlayerSpawnRegions = params.OverridePlayerSpawnRegions;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.GetCompanionWorldLocation
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 */
	struct FVector ABuff_Companion_HLNA_C::GetCompanionWorldLocation()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.GetCompanionWorldLocation");
		
		ABuff_Companion_HLNA_C_GetCompanionWorldLocation_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.GetCurrentOrbitRadius
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		float                                              Radius                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABuff_Companion_HLNA_C::GetCurrentOrbitRadius(float* Radius)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.GetCurrentOrbitRadius");
		
		ABuff_Companion_HLNA_C_GetCurrentOrbitRadius_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Radius != nullptr)
			*Radius = params.Radius;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.BPOnOwnerMassTeleportEvent
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		EMassTeleportState                                 EventState                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class APrimalCharacter*                            TeleportInitiatedByChar                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABuff_Companion_HLNA_C::BPOnOwnerMassTeleportEvent(EMassTeleportState EventState, class APrimalCharacter* TeleportInitiatedByChar)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.BPOnOwnerMassTeleportEvent");
		
		ABuff_Companion_HLNA_C_BPOnOwnerMassTeleportEvent_Params params {};
		params.EventState = EventState;
		params.TeleportInitiatedByChar = TeleportInitiatedByChar;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.OnMassTeleportEventReceived
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		EMassTeleportState                                 EventState                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABuff_Companion_HLNA_C::OnMassTeleportEventReceived(EMassTeleportState EventState)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.OnMassTeleportEventReceived");
		
		ABuff_Companion_HLNA_C_OnMassTeleportEventReceived_Params params {};
		params.EventState = EventState;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.HLNaMassTeleport_Cancel
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABuff_Companion_HLNA_C::HLNaMassTeleport_Cancel()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.HLNaMassTeleport_Cancel");
		
		ABuff_Companion_HLNA_C_HLNaMassTeleport_Cancel_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.CleanUpMassTeleport
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABuff_Companion_HLNA_C::CleanUpMassTeleport()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.CleanUpMassTeleport");
		
		ABuff_Companion_HLNA_C_CleanUpMassTeleport_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.Tick_UpdateCompanionState
	 * 		Flags  -> (Event, Protected, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              DeltaTime                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABuff_Companion_HLNA_C::Tick_UpdateCompanionState(float DeltaTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.Tick_UpdateCompanionState");
		
		ABuff_Companion_HLNA_C_Tick_UpdateCompanionState_Params params {};
		params.DeltaTime = DeltaTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.BPTryMultiUse
	 * 		Flags  -> (Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class APlayerController*                           ForPC                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		int32_t                                            UseIndex                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	bool ABuff_Companion_HLNA_C::BPTryMultiUse(class APlayerController* ForPC, int32_t UseIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.BPTryMultiUse");
		
		ABuff_Companion_HLNA_C_BPTryMultiUse_Params params {};
		params.ForPC = ForPC;
		params.UseIndex = UseIndex;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.Tick_SearchForMassTeleportChars
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               bIsFinalCheck                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABuff_Companion_HLNA_C::Tick_SearchForMassTeleportChars(bool bIsFinalCheck)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.Tick_SearchForMassTeleportChars");
		
		ABuff_Companion_HLNA_C_Tick_SearchForMassTeleportChars_Params params {};
		params.bIsFinalCheck = bIsFinalCheck;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.BuffTickServer
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              DeltaTime                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABuff_Companion_HLNA_C::BuffTickServer(float DeltaTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.BuffTickServer");
		
		ABuff_Companion_HLNA_C_BuffTickServer_Params params {};
		params.DeltaTime = DeltaTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.HLNaMassTeleport_Trigger
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void ABuff_Companion_HLNA_C::HLNaMassTeleport_Trigger()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.HLNaMassTeleport_Trigger");
		
		ABuff_Companion_HLNA_C_HLNaMassTeleport_Trigger_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.HLNaMassTeleport_Start
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            regionindex                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               TeleportToVRBossBattleeasy                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               TeleportToVRBossBattlemed                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               TeleportToVRBossBattlehard                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               TeleportToVRBossBattleFLOWTEST                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABuff_Companion_HLNA_C::HLNaMassTeleport_Start(int32_t regionindex, bool TeleportToVRBossBattleeasy, bool TeleportToVRBossBattlemed, bool TeleportToVRBossBattlehard, bool TeleportToVRBossBattleFLOWTEST)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.HLNaMassTeleport_Start");
		
		ABuff_Companion_HLNA_C_HLNaMassTeleport_Start_Params params {};
		params.regionindex = regionindex;
		params.TeleportToVRBossBattleeasy = TeleportToVRBossBattleeasy;
		params.TeleportToVRBossBattlemed = TeleportToVRBossBattlemed;
		params.TeleportToVRBossBattlehard = TeleportToVRBossBattlehard;
		params.TeleportToVRBossBattleFLOWTEST = TeleportToVRBossBattleFLOWTEST;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.GetTeleportationDestinations
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		TArray<struct FTeleportDestination>                Destinations                                               (Parm, OutParm, ZeroConstructor)
	 */
	void ABuff_Companion_HLNA_C::GetTeleportationDestinations(TArray<struct FTeleportDestination>* Destinations)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.GetTeleportationDestinations");
		
		ABuff_Companion_HLNA_C_GetTeleportationDestinations_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Destinations != nullptr)
			*Destinations = params.Destinations;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.GetLookAtPlayerRotation
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		struct FRotator                                    Rotation                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABuff_Companion_HLNA_C::GetLookAtPlayerRotation(struct FRotator* Rotation)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.GetLookAtPlayerRotation");
		
		ABuff_Companion_HLNA_C_GetLookAtPlayerRotation_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Rotation != nullptr)
			*Rotation = params.Rotation;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.GetAnimMoveVelocityAxes
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FVector                                     VelocityAxes                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABuff_Companion_HLNA_C::GetAnimMoveVelocityAxes(struct FVector* VelocityAxes)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.GetAnimMoveVelocityAxes");
		
		ABuff_Companion_HLNA_C_GetAnimMoveVelocityAxes_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (VelocityAxes != nullptr)
			*VelocityAxes = params.VelocityAxes;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.ShouldBeCompact
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               Result                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABuff_Companion_HLNA_C::ShouldBeCompact(bool* Result)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.ShouldBeCompact");
		
		ABuff_Companion_HLNA_C_ShouldBeCompact_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Result != nullptr)
			*Result = params.Result;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.Determine Best Teleport Spot
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABuff_Companion_HLNA_C::DetermineBestTeleportSpot()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.Determine Best Teleport Spot");
		
		ABuff_Companion_HLNA_C_DetermineBestTeleportSpot_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.OnCompanionEventStarted
	 * 		Flags  -> (Event, Protected, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FCompanionEventData                         StartingEventData                                          (Parm, OutParm, ReferenceParm)
	 */
	void ABuff_Companion_HLNA_C::OnCompanionEventStarted(struct FCompanionEventData* StartingEventData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.OnCompanionEventStarted");
		
		ABuff_Companion_HLNA_C_OnCompanionEventStarted_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (StartingEventData != nullptr)
			*StartingEventData = params.StartingEventData;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.CanStartCompanionEvent
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AActor*                                      EventActor                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FCompanionEventData                         WithEventData                                              (Parm, OutParm, ReferenceParm)
	 */
	bool ABuff_Companion_HLNA_C::CanStartCompanionEvent(class AActor* EventActor, struct FCompanionEventData* WithEventData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.CanStartCompanionEvent");
		
		ABuff_Companion_HLNA_C_CanStartCompanionEvent_Params params {};
		params.EventActor = EventActor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (WithEventData != nullptr)
			*WithEventData = params.WithEventData;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.OnCompanionReactionPlayed
	 * 		Flags  -> (Event, Protected, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FCompanionReactionData                      PlayedReactionData                                         (Parm, OutParm, ReferenceParm)
	 * 		int32_t                                            UniqueID                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABuff_Companion_HLNA_C::OnCompanionReactionPlayed(struct FCompanionReactionData* PlayedReactionData, int32_t UniqueID)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.OnCompanionReactionPlayed");
		
		ABuff_Companion_HLNA_C_OnCompanionReactionPlayed_Params params {};
		params.UniqueID = UniqueID;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (PlayedReactionData != nullptr)
			*PlayedReactionData = params.PlayedReactionData;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.SetCompactState
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               bNewCompactState                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABuff_Companion_HLNA_C::SetCompactState(bool bNewCompactState)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.SetCompactState");
		
		ABuff_Companion_HLNA_C_SetCompactState_Params params {};
		params.bNewCompactState = bNewCompactState;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.OnCompanionReactionStopped
	 * 		Flags  -> (Event, Protected, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FCompanionReactionData                      StoppedReactionData                                        (Parm, OutParm, ReferenceParm)
	 * 		int32_t                                            UniqueID                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABuff_Companion_HLNA_C::OnCompanionReactionStopped(struct FCompanionReactionData* StoppedReactionData, int32_t UniqueID)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.OnCompanionReactionStopped");
		
		ABuff_Companion_HLNA_C_OnCompanionReactionStopped_Params params {};
		params.UniqueID = UniqueID;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (StoppedReactionData != nullptr)
			*StoppedReactionData = params.StoppedReactionData;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.CanPlayCompanionReaction
	 * 		Flags  -> (Event, Protected, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FCompanionReactionData                      CanPlayReactionData                                        (Parm, OutParm, ReferenceParm)
	 */
	bool ABuff_Companion_HLNA_C::CanPlayCompanionReaction(struct FCompanionReactionData* CanPlayReactionData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.CanPlayCompanionReaction");
		
		ABuff_Companion_HLNA_C_CanPlayCompanionReaction_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (CanPlayReactionData != nullptr)
			*CanPlayReactionData = params.CanPlayReactionData;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.Tick_UpdateHLNaSounds
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              DeltaTime                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABuff_Companion_HLNA_C::Tick_UpdateHLNaSounds(float DeltaTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.Tick_UpdateHLNaSounds");
		
		ABuff_Companion_HLNA_C_Tick_UpdateHLNaSounds_Params params {};
		params.DeltaTime = DeltaTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.Tick_CompactMode
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABuff_Companion_HLNA_C::Tick_CompactMode()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.Tick_CompactMode");
		
		ABuff_Companion_HLNA_C_Tick_CompactMode_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.IsCurrentEventMonalogue
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               Result                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABuff_Companion_HLNA_C::IsCurrentEventMonalogue(bool* Result)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.IsCurrentEventMonalogue");
		
		ABuff_Companion_HLNA_C_IsCurrentEventMonalogue_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Result != nullptr)
			*Result = params.Result;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.CalculateFakeVelocityLagOffset
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              DeltaTime                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FVector                                     VelocityLag                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABuff_Companion_HLNA_C::CalculateFakeVelocityLagOffset(float DeltaTime, struct FVector* VelocityLag)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.CalculateFakeVelocityLagOffset");
		
		ABuff_Companion_HLNA_C_CalculateFakeVelocityLagOffset_Params params {};
		params.DeltaTime = DeltaTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (VelocityLag != nullptr)
			*VelocityLag = params.VelocityLag;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.CalculateHLNaHeightOffset
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              DeltaTime                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FVector                                     HeightOffset_Base                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FVector                                     HeightOffset_WithBob                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FVector                                     BobOffset                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABuff_Companion_HLNA_C::CalculateHLNaHeightOffset(float DeltaTime, struct FVector* HeightOffset_Base, struct FVector* HeightOffset_WithBob, struct FVector* BobOffset)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.CalculateHLNaHeightOffset");
		
		ABuff_Companion_HLNA_C_CalculateHLNaHeightOffset_Params params {};
		params.DeltaTime = DeltaTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (HeightOffset_Base != nullptr)
			*HeightOffset_Base = params.HeightOffset_Base;
		if (HeightOffset_WithBob != nullptr)
			*HeightOffset_WithBob = params.HeightOffset_WithBob;
		if (BobOffset != nullptr)
			*BobOffset = params.BobOffset;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.IsAttachedToCamera
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               bResult                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABuff_Companion_HLNA_C::IsAttachedToCamera(bool* bResult)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.IsAttachedToCamera");
		
		ABuff_Companion_HLNA_C_IsAttachedToCamera_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (bResult != nullptr)
			*bResult = params.bResult;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.IsAttachedToPlayer
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               bResult                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABuff_Companion_HLNA_C::IsAttachedToPlayer(bool* bResult)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.IsAttachedToPlayer");
		
		ABuff_Companion_HLNA_C_IsAttachedToPlayer_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (bResult != nullptr)
			*bResult = params.bResult;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.Tick_CompanionEvents
	 * 		Flags  -> (Event, Protected, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              DeltaTime                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABuff_Companion_HLNA_C::Tick_CompanionEvents(float DeltaTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.Tick_CompanionEvents");
		
		ABuff_Companion_HLNA_C_Tick_CompanionEvents_Params params {};
		params.DeltaTime = DeltaTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.IsCompanionReadyToMonologue
	 * 		Flags  -> (Event, Protected, HasOutParms, BlueprintCallable, BlueprintEvent)
	 */
	bool ABuff_Companion_HLNA_C::IsCompanionReadyToMonologue()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.IsCompanionReadyToMonologue");
		
		ABuff_Companion_HLNA_C_IsCompanionReadyToMonologue_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.ConvertTargetRelOffsetToWorld
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FVector                                     WorldLocation                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABuff_Companion_HLNA_C::ConvertTargetRelOffsetToWorld(struct FVector* WorldLocation)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.ConvertTargetRelOffsetToWorld");
		
		ABuff_Companion_HLNA_C_ConvertTargetRelOffsetToWorld_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (WorldLocation != nullptr)
			*WorldLocation = params.WorldLocation;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.IsAttachedToCamera_Pure
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		bool                                               bResult                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABuff_Companion_HLNA_C::IsAttachedToCamera_Pure(bool* bResult)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.IsAttachedToCamera_Pure");
		
		ABuff_Companion_HLNA_C_IsAttachedToCamera_Pure_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (bResult != nullptr)
			*bResult = params.bResult;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.UpdateHLNaTargetRelLocFPV
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FVector                                     WithWorldLocation                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		float                                              DeltaTime                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABuff_Companion_HLNA_C::UpdateHLNaTargetRelLocFPV(const struct FVector& WithWorldLocation, float DeltaTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.UpdateHLNaTargetRelLocFPV");
		
		ABuff_Companion_HLNA_C_UpdateHLNaTargetRelLocFPV_Params params {};
		params.WithWorldLocation = WithWorldLocation;
		params.DeltaTime = DeltaTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.CalculateHLNaOrbitDir
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              DeltaTime                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FVector                                     OrbitDir                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABuff_Companion_HLNA_C::CalculateHLNaOrbitDir(float DeltaTime, struct FVector* OrbitDir)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.CalculateHLNaOrbitDir");
		
		ABuff_Companion_HLNA_C_CalculateHLNaOrbitDir_Params params {};
		params.DeltaTime = DeltaTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OrbitDir != nullptr)
			*OrbitDir = params.OrbitDir;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.GetScreenPercentageWorldLocation
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FVector2D                                   Percentage                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		float                                              ProjectionDist                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FVector                                     WorldLocation                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABuff_Companion_HLNA_C::GetScreenPercentageWorldLocation(const struct FVector2D& Percentage, float ProjectionDist, struct FVector* WorldLocation)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.GetScreenPercentageWorldLocation");
		
		ABuff_Companion_HLNA_C_GetScreenPercentageWorldLocation_Params params {};
		params.Percentage = Percentage;
		params.ProjectionDist = ProjectionDist;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (WorldLocation != nullptr)
			*WorldLocation = params.WorldLocation;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.TickUpdateHLNaEventMovement
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              DeltaTime                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABuff_Companion_HLNA_C::TickUpdateHLNaEventMovement(float DeltaTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.TickUpdateHLNaEventMovement");
		
		ABuff_Companion_HLNA_C_TickUpdateHLNaEventMovement_Params params {};
		params.DeltaTime = DeltaTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.CalculateHLNaTargetWorldRotation
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FRotator                                    TargetWorldRotation                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABuff_Companion_HLNA_C::CalculateHLNaTargetWorldRotation(struct FRotator* TargetWorldRotation)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.CalculateHLNaTargetWorldRotation");
		
		ABuff_Companion_HLNA_C_CalculateHLNaTargetWorldRotation_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (TargetWorldRotation != nullptr)
			*TargetWorldRotation = params.TargetWorldRotation;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.CalculateHLNaTargetWorldLocation
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              DeltaTime                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FVector                                     TargetWorldLocation                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABuff_Companion_HLNA_C::CalculateHLNaTargetWorldLocation(float DeltaTime, struct FVector* TargetWorldLocation)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.CalculateHLNaTargetWorldLocation");
		
		ABuff_Companion_HLNA_C_CalculateHLNaTargetWorldLocation_Params params {};
		params.DeltaTime = DeltaTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (TargetWorldLocation != nullptr)
			*TargetWorldLocation = params.TargetWorldLocation;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.OnPlayerDeath
	 * 		Flags  -> (Event, Protected, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class APrimalCharacter*                            DiedCharacter                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABuff_Companion_HLNA_C::OnPlayerDeath(class APrimalCharacter* DiedCharacter)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.OnPlayerDeath");
		
		ABuff_Companion_HLNA_C_OnPlayerDeath_Params params {};
		params.DiedCharacter = DiedCharacter;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.Tick_UpdateCompanionTransform
	 * 		Flags  -> (Event, Protected, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              DeltaTime                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABuff_Companion_HLNA_C::Tick_UpdateCompanionTransform(float DeltaTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.Tick_UpdateCompanionTransform");
		
		ABuff_Companion_HLNA_C_Tick_UpdateCompanionTransform_Params params {};
		params.DeltaTime = DeltaTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.PlayParallelEmoteMontage
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UAnimMontage*                                PlayerEmote                                                (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor)
	 * 		bool                                               bSuccess                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABuff_Companion_HLNA_C::PlayParallelEmoteMontage(class UAnimMontage** PlayerEmote, bool* bSuccess)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.PlayParallelEmoteMontage");
		
		ABuff_Companion_HLNA_C_PlayParallelEmoteMontage_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (PlayerEmote != nullptr)
			*PlayerEmote = params.PlayerEmote;
		if (bSuccess != nullptr)
			*bSuccess = params.bSuccess;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.OnPlayerPlayAnimation
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UAnimMontage*                                PlayedAnim                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		float                                              AnimDuration                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class FName                                        StartSectionName                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABuff_Companion_HLNA_C::OnPlayerPlayAnimation(class UAnimMontage* PlayedAnim, float AnimDuration, const class FName& StartSectionName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.OnPlayerPlayAnimation");
		
		ABuff_Companion_HLNA_C_OnPlayerPlayAnimation_Params params {};
		params.PlayedAnim = PlayedAnim;
		params.AnimDuration = AnimDuration;
		params.StartSectionName = StartSectionName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.OnCompanionStateChanged
	 * 		Flags  -> (Event, Protected, BlueprintCallable, BlueprintEvent)
	 */
	void ABuff_Companion_HLNA_C::OnCompanionStateChanged()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.OnCompanionStateChanged");
		
		ABuff_Companion_HLNA_C_OnCompanionStateChanged_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.SoftSetHLNaLocationRelative
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FVector                                     NewLocation                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABuff_Companion_HLNA_C::SoftSetHLNaLocationRelative(const struct FVector& NewLocation)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.SoftSetHLNaLocationRelative");
		
		ABuff_Companion_HLNA_C_SoftSetHLNaLocationRelative_Params params {};
		params.NewLocation = NewLocation;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.GetMeshRotationInterpSpeed
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              Speed                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABuff_Companion_HLNA_C::GetMeshRotationInterpSpeed(float* Speed)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.GetMeshRotationInterpSpeed");
		
		ABuff_Companion_HLNA_C_GetMeshRotationInterpSpeed_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Speed != nullptr)
			*Speed = params.Speed;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.SoftSetHLNaRotation
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FRotator                                    NewRotation                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABuff_Companion_HLNA_C::SoftSetHLNaRotation(const struct FRotator& NewRotation)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.SoftSetHLNaRotation");
		
		ABuff_Companion_HLNA_C_SoftSetHLNaRotation_Params params {};
		params.NewRotation = NewRotation;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.GetPlayerVelocity
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		struct FVector                                     Velocity                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABuff_Companion_HLNA_C::GetPlayerVelocity(struct FVector* Velocity)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.GetPlayerVelocity");
		
		ABuff_Companion_HLNA_C_GetPlayerVelocity_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Velocity != nullptr)
			*Velocity = params.Velocity;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.IsAttachedToPlayer_Pure
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		bool                                               bResult                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABuff_Companion_HLNA_C::IsAttachedToPlayer_Pure(bool* bResult)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.IsAttachedToPlayer_Pure");
		
		ABuff_Companion_HLNA_C_IsAttachedToPlayer_Pure_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (bResult != nullptr)
			*bResult = params.bResult;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.PretendWeAreInWorldSpace
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABuff_Companion_HLNA_C::PretendWeAreInWorldSpace()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.PretendWeAreInWorldSpace");
		
		ABuff_Companion_HLNA_C_PretendWeAreInWorldSpace_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.OnFoundPoI
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FPointOfInterestData_ForCompanion           FoundPointData                                             (Parm, OutParm, ReferenceParm)
	 * 		class AActor*                                      FoundPointActor                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABuff_Companion_HLNA_C::OnFoundPoI(struct FPointOfInterestData_ForCompanion* FoundPointData, class AActor* FoundPointActor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.OnFoundPoI");
		
		ABuff_Companion_HLNA_C_OnFoundPoI_Params params {};
		params.FoundPointActor = FoundPointActor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (FoundPointData != nullptr)
			*FoundPointData = params.FoundPointData;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.IsPlayerADS
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 */
	bool ABuff_Companion_HLNA_C::IsPlayerADS()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.IsPlayerADS");
		
		ABuff_Companion_HLNA_C_IsPlayerADS_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.GetMeshLocationInterpSpeed
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              Speed                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABuff_Companion_HLNA_C::GetMeshLocationInterpSpeed(float* Speed)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.GetMeshLocationInterpSpeed");
		
		ABuff_Companion_HLNA_C_GetMeshLocationInterpSpeed_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Speed != nullptr)
			*Speed = params.Speed;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.GetPlayerOrbitOrigin
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FVector                                     Origin                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABuff_Companion_HLNA_C::GetPlayerOrbitOrigin(struct FVector* Origin)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.GetPlayerOrbitOrigin");
		
		ABuff_Companion_HLNA_C_GetPlayerOrbitOrigin_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Origin != nullptr)
			*Origin = params.Origin;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.InterpHLNaRootToOrigin
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              DeltaTime                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABuff_Companion_HLNA_C::InterpHLNaRootToOrigin(float DeltaTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.InterpHLNaRootToOrigin");
		
		ABuff_Companion_HLNA_C_InterpHLNaRootToOrigin_Params params {};
		params.DeltaTime = DeltaTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.SoftSetHLNaLocation
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FVector                                     NewLocation                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABuff_Companion_HLNA_C::SoftSetHLNaLocation(const struct FVector& NewLocation)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.SoftSetHLNaLocation");
		
		ABuff_Companion_HLNA_C_SoftSetHLNaLocation_Params params {};
		params.NewLocation = NewLocation;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.UpdateHLNaAttachment
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABuff_Companion_HLNA_C::UpdateHLNaAttachment()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.UpdateHLNaAttachment");
		
		ABuff_Companion_HLNA_C_UpdateHLNaAttachment_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.IsPlayerLookingAtCompanion
	 * 		Flags  -> (Event, Protected, HasOutParms, BlueprintCallable, BlueprintEvent)
	 */
	bool ABuff_Companion_HLNA_C::IsPlayerLookingAtCompanion()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.IsPlayerLookingAtCompanion");
		
		ABuff_Companion_HLNA_C_IsPlayerLookingAtCompanion_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.OnSpawnedForPlayer
	 * 		Flags  -> (Event, Protected, BlueprintCallable, BlueprintEvent)
	 */
	void ABuff_Companion_HLNA_C::OnSpawnedForPlayer()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.OnSpawnedForPlayer");
		
		ABuff_Companion_HLNA_C_OnSpawnedForPlayer_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.BPClientDoMultiUse
	 * 		Flags  -> (Event, Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class APlayerController*                           ForPC                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		int32_t                                            ClientUseIndex                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABuff_Companion_HLNA_C::BPClientDoMultiUse(class APlayerController* ForPC, int32_t ClientUseIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.BPClientDoMultiUse");
		
		ABuff_Companion_HLNA_C_BPClientDoMultiUse_Params params {};
		params.ForPC = ForPC;
		params.ClientUseIndex = ClientUseIndex;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.UserConstructionScript
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABuff_Companion_HLNA_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.UserConstructionScript");
		
		ABuff_Companion_HLNA_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.Timeline_0__FinishedFunc
	 * 		Flags  -> (BlueprintEvent)
	 */
	void ABuff_Companion_HLNA_C::Timeline_0__FinishedFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.Timeline_0__FinishedFunc");
		
		ABuff_Companion_HLNA_C_Timeline_0__FinishedFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.Timeline_0__UpdateFunc
	 * 		Flags  -> (BlueprintEvent)
	 */
	void ABuff_Companion_HLNA_C::Timeline_0__UpdateFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.Timeline_0__UpdateFunc");
		
		ABuff_Companion_HLNA_C_Timeline_0__UpdateFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.Timeline_1__FinishedFunc
	 * 		Flags  -> (BlueprintEvent)
	 */
	void ABuff_Companion_HLNA_C::Timeline_1__FinishedFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.Timeline_1__FinishedFunc");
		
		ABuff_Companion_HLNA_C_Timeline_1__FinishedFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.Timeline_1__UpdateFunc
	 * 		Flags  -> (BlueprintEvent)
	 */
	void ABuff_Companion_HLNA_C::Timeline_1__UpdateFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.Timeline_1__UpdateFunc");
		
		ABuff_Companion_HLNA_C_Timeline_1__UpdateFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.Timeline_3__FinishedFunc
	 * 		Flags  -> (BlueprintEvent)
	 */
	void ABuff_Companion_HLNA_C::Timeline_3__FinishedFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.Timeline_3__FinishedFunc");
		
		ABuff_Companion_HLNA_C_Timeline_3__FinishedFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.Timeline_3__UpdateFunc
	 * 		Flags  -> (BlueprintEvent)
	 */
	void ABuff_Companion_HLNA_C::Timeline_3__UpdateFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.Timeline_3__UpdateFunc");
		
		ABuff_Companion_HLNA_C_Timeline_3__UpdateFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.Timeline_5__FinishedFunc
	 * 		Flags  -> (BlueprintEvent)
	 */
	void ABuff_Companion_HLNA_C::Timeline_5__FinishedFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.Timeline_5__FinishedFunc");
		
		ABuff_Companion_HLNA_C_Timeline_5__FinishedFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.Timeline_5__UpdateFunc
	 * 		Flags  -> (BlueprintEvent)
	 */
	void ABuff_Companion_HLNA_C::Timeline_5__UpdateFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.Timeline_5__UpdateFunc");
		
		ABuff_Companion_HLNA_C_Timeline_5__UpdateFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.Timeline_6__FinishedFunc
	 * 		Flags  -> (BlueprintEvent)
	 */
	void ABuff_Companion_HLNA_C::Timeline_6__FinishedFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.Timeline_6__FinishedFunc");
		
		ABuff_Companion_HLNA_C_Timeline_6__FinishedFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.Timeline_6__UpdateFunc
	 * 		Flags  -> (BlueprintEvent)
	 */
	void ABuff_Companion_HLNA_C::Timeline_6__UpdateFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.Timeline_6__UpdateFunc");
		
		ABuff_Companion_HLNA_C_Timeline_6__UpdateFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.Timeline_7__FinishedFunc
	 * 		Flags  -> (BlueprintEvent)
	 */
	void ABuff_Companion_HLNA_C::Timeline_7__FinishedFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.Timeline_7__FinishedFunc");
		
		ABuff_Companion_HLNA_C_Timeline_7__FinishedFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.Timeline_7__UpdateFunc
	 * 		Flags  -> (BlueprintEvent)
	 */
	void ABuff_Companion_HLNA_C::Timeline_7__UpdateFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.Timeline_7__UpdateFunc");
		
		ABuff_Companion_HLNA_C_Timeline_7__UpdateFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.delay before intro shatter__FinishedFunc
	 * 		Flags  -> (BlueprintEvent)
	 */
	void ABuff_Companion_HLNA_C::delaybeforeintroshatter__FinishedFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.delay before intro shatter__FinishedFunc");
		
		ABuff_Companion_HLNA_C_delaybeforeintroshatter__FinishedFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.delay before intro shatter__UpdateFunc
	 * 		Flags  -> (BlueprintEvent)
	 */
	void ABuff_Companion_HLNA_C::delaybeforeintroshatter__UpdateFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.delay before intro shatter__UpdateFunc");
		
		ABuff_Companion_HLNA_C_delaybeforeintroshatter__UpdateFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.fixed orientation timeline__FinishedFunc
	 * 		Flags  -> (BlueprintEvent)
	 */
	void ABuff_Companion_HLNA_C::fixedorientationtimeline__FinishedFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.fixed orientation timeline__FinishedFunc");
		
		ABuff_Companion_HLNA_C_fixedorientationtimeline__FinishedFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.fixed orientation timeline__UpdateFunc
	 * 		Flags  -> (BlueprintEvent)
	 */
	void ABuff_Companion_HLNA_C::fixedorientationtimeline__UpdateFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.fixed orientation timeline__UpdateFunc");
		
		ABuff_Companion_HLNA_C_fixedorientationtimeline__UpdateFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.ReceiveBeginPlay
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABuff_Companion_HLNA_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.ReceiveBeginPlay");
		
		ABuff_Companion_HLNA_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.Client_OnMassTeleportStarted
	 * 		Flags  -> (Net, NetReliable, NetClient, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FVector                                     WithPlayerLocation                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABuff_Companion_HLNA_C::Client_OnMassTeleportStarted(const struct FVector& WithPlayerLocation)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.Client_OnMassTeleportStarted");
		
		ABuff_Companion_HLNA_C_Client_OnMassTeleportStarted_Params params {};
		params.WithPlayerLocation = WithPlayerLocation;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.Client_OnMassTeleportEnded
	 * 		Flags  -> (Net, NetReliable, NetClient, BlueprintCallable, BlueprintEvent)
	 */
	void ABuff_Companion_HLNA_C::Client_OnMassTeleportEnded()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.Client_OnMassTeleportEnded");
		
		ABuff_Companion_HLNA_C_Client_OnMassTeleportEnded_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.Client_OnMassTeleportEventReceived
	 * 		Flags  -> (Net, NetReliable, NetClient, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		EMassTeleportState                                 EventState                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABuff_Companion_HLNA_C::Client_OnMassTeleportEventReceived(EMassTeleportState EventState)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.Client_OnMassTeleportEventReceived");
		
		ABuff_Companion_HLNA_C_Client_OnMassTeleportEventReceived_Params params {};
		params.EventState = EventState;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.Multi_UpdateTeleportingChars
	 * 		Flags  -> (Net, NetReliable, NetMulticast, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		TArray<class APrimalCharacter*>                    NewTeleportCharsList                                       (Parm, OutParm, ZeroConstructor, ReferenceParm)
	 */
	void ABuff_Companion_HLNA_C::Multi_UpdateTeleportingChars(TArray<class APrimalCharacter*>* NewTeleportCharsList)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.Multi_UpdateTeleportingChars");
		
		ABuff_Companion_HLNA_C_Multi_UpdateTeleportingChars_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (NewTeleportCharsList != nullptr)
			*NewTeleportCharsList = params.NewTeleportCharsList;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.update teleporting characters vfx
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ABuff_Companion_HLNA_C::updateteleportingcharactersvfx()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.update teleporting characters vfx");
		
		ABuff_Companion_HLNA_C_updateteleportingcharactersvfx_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.Multi_OnMassTeleportEvent
	 * 		Flags  -> (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		EMassTeleportState                                 EventState                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABuff_Companion_HLNA_C::Multi_OnMassTeleportEvent(EMassTeleportState EventState)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.Multi_OnMassTeleportEvent");
		
		ABuff_Companion_HLNA_C_Multi_OnMassTeleportEvent_Params params {};
		params.EventState = EventState;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.Fresnel Flash
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FLinearColor                                Color                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABuff_Companion_HLNA_C::FresnelFlash(const struct FLinearColor& Color)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.Fresnel Flash");
		
		ABuff_Companion_HLNA_C_FresnelFlash_Params params {};
		params.Color = Color;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.Show Hexagon Conversion Shop on Client
	 * 		Flags  -> (Net, NetReliable, NetClient, BlueprintCallable, BlueprintEvent)
	 */
	void ABuff_Companion_HLNA_C::ShowHexagonConversionShoponClient()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.Show Hexagon Conversion Shop on Client");
		
		ABuff_Companion_HLNA_C_ShowHexagonConversionShoponClient_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.post teleport reaction
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ABuff_Companion_HLNA_C::postteleportreaction()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.post teleport reaction");
		
		ABuff_Companion_HLNA_C_postteleportreaction_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.play hexagon absorb anim
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ABuff_Companion_HLNA_C::playhexagonabsorbanim()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.play hexagon absorb anim");
		
		ABuff_Companion_HLNA_C_playhexagonabsorbanim_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.Play Scanning SFX and VFX
	 * 		Flags  -> (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
	 */
	void ABuff_Companion_HLNA_C::PlayScanningSFXandVFX()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.Play Scanning SFX and VFX");
		
		ABuff_Companion_HLNA_C_PlayScanningSFXandVFX_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.Play Post Scan Reaction
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              ScanDuration                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FCompanionReactionData                      PostScanReaction                                           (Parm)
	 */
	void ABuff_Companion_HLNA_C::PlayPostScanReaction(float ScanDuration, const struct FCompanionReactionData& PostScanReaction)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.Play Post Scan Reaction");
		
		ABuff_Companion_HLNA_C_PlayPostScanReaction_Params params {};
		params.ScanDuration = ScanDuration;
		params.PostScanReaction = PostScanReaction;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.Delay and React to Shot Event
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ABuff_Companion_HLNA_C::DelayandReacttoShotEvent()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.Delay and React to Shot Event");
		
		ABuff_Companion_HLNA_C_DelayandReacttoShotEvent_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.Server React To Shot Event
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ABuff_Companion_HLNA_C::ServerReactToShotEvent()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.Server React To Shot Event");
		
		ABuff_Companion_HLNA_C_ServerReactToShotEvent_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.try play friendly fire reaction
	 * 		Flags  -> (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               isdead                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABuff_Companion_HLNA_C::tryplayfriendlyfirereaction(bool isdead)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.try play friendly fire reaction");
		
		ABuff_Companion_HLNA_C_tryplayfriendlyfirereaction_Params params {};
		params.isdead = isdead;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.try play attacked opponent reaction
	 * 		Flags  -> (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               isdead                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABuff_Companion_HLNA_C::tryplayattackedopponentreaction(bool isdead)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.try play attacked opponent reaction");
		
		ABuff_Companion_HLNA_C_tryplayattackedopponentreaction_Params params {};
		params.isdead = isdead;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.try play creature almost dead
	 * 		Flags  -> (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
	 */
	void ABuff_Companion_HLNA_C::tryplaycreaturealmostdead()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.try play creature almost dead");
		
		ABuff_Companion_HLNA_C_tryplaycreaturealmostdead_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.React To Equipping Low Durability Weapon
	 * 		Flags  -> (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
	 */
	void ABuff_Companion_HLNA_C::ReactToEquippingLowDurabilityWeapon()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.React To Equipping Low Durability Weapon");
		
		ABuff_Companion_HLNA_C_ReactToEquippingLowDurabilityWeapon_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.Client_ReactToCraftedItem
	 * 		Flags  -> (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FString                                      ItemName                                                   (Parm, ZeroConstructor)
	 */
	void ABuff_Companion_HLNA_C::Client_ReactToCraftedItem(const class FString& ItemName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.Client_ReactToCraftedItem");
		
		ABuff_Companion_HLNA_C_Client_ReactToCraftedItem_Params params {};
		params.ItemName = ItemName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.Bind Dino Death Reaction
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class APrimalDinoCharacter*                        riddendino                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABuff_Companion_HLNA_C::BindDinoDeathReaction(class APrimalDinoCharacter* riddendino)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.Bind Dino Death Reaction");
		
		ABuff_Companion_HLNA_C_BindDinoDeathReaction_Params params {};
		params.riddendino = riddendino;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.Try HLNA Environmental Reaction
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FCompanionReactionData                      reaction                                                   (Parm)
	 */
	void ABuff_Companion_HLNA_C::TryHLNAEnvironmentalReaction(const struct FCompanionReactionData& reaction)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.Try HLNA Environmental Reaction");
		
		ABuff_Companion_HLNA_C_TryHLNAEnvironmentalReaction_Params params {};
		params.reaction = reaction;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.Ridden Dino Died Reaction
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class APrimalCharacter*                            DiedCharacter                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABuff_Companion_HLNA_C::RiddenDinoDiedReaction(class APrimalCharacter* DiedCharacter)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.Ridden Dino Died Reaction");
		
		ABuff_Companion_HLNA_C_RiddenDinoDiedReaction_Params params {};
		params.DiedCharacter = DiedCharacter;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.Update Purchasable Item State and update store on client
	 * 		Flags  -> (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            StoreItemIndex                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               NewIndexValue                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABuff_Companion_HLNA_C::UpdatePurchasableItemStateandupdatestoreonclient(int32_t StoreItemIndex, bool NewIndexValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.Update Purchasable Item State and update store on client");
		
		ABuff_Companion_HLNA_C_UpdatePurchasableItemStateandupdatestoreonclient_Params params {};
		params.StoreItemIndex = StoreItemIndex;
		params.NewIndexValue = NewIndexValue;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.Delay and Disable Item Visibility In Store
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ABuff_Companion_HLNA_C::DelayandDisableItemVisibilityInStore()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.Delay and Disable Item Visibility In Store");
		
		ABuff_Companion_HLNA_C_DelayandDisableItemVisibilityInStore_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.intro teleport materials
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ABuff_Companion_HLNA_C::introteleportmaterials()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.intro teleport materials");
		
		ABuff_Companion_HLNA_C_introteleportmaterials_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.force set hlna location and rotation
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FVector                                     Location                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FRotator                                    Rotation                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABuff_Companion_HLNA_C::forcesethlnalocationandrotation(const struct FVector& Location, const struct FRotator& Rotation)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.force set hlna location and rotation");
		
		ABuff_Companion_HLNA_C_forcesethlnalocationandrotation_Params params {};
		params.Location = Location;
		params.Rotation = Rotation;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.fade away intro PP mask
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ABuff_Companion_HLNA_C::fadeawayintroPPmask()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.fade away intro PP mask");
		
		ABuff_Companion_HLNA_C_fadeawayintroPPmask_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.PrimalCharacterNotifyLevelUp
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            ExtraCharacterLevel                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABuff_Companion_HLNA_C::PrimalCharacterNotifyLevelUp(int32_t ExtraCharacterLevel)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.PrimalCharacterNotifyLevelUp");
		
		ABuff_Companion_HLNA_C_PrimalCharacterNotifyLevelUp_Params params {};
		params.ExtraCharacterLevel = ExtraCharacterLevel;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.React To Player Level Up
	 * 		Flags  -> (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
	 */
	void ABuff_Companion_HLNA_C::ReactToPlayerLevelUp()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.React To Player Level Up");
		
		ABuff_Companion_HLNA_C_ReactToPlayerLevelUp_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.delay and scan
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ABuff_Companion_HLNA_C::delayandscan()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.delay and scan");
		
		ABuff_Companion_HLNA_C_delayandscan_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.Tell Client To React With Hlna After Respawn
	 * 		Flags  -> (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
	 */
	void ABuff_Companion_HLNA_C::TellClientToReactWithHlnaAfterRespawn()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.Tell Client To React With Hlna After Respawn");
		
		ABuff_Companion_HLNA_C_TellClientToReactWithHlnaAfterRespawn_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.delay start VR mission easy
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ABuff_Companion_HLNA_C::delaystartVRmissioneasy()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.delay start VR mission easy");
		
		ABuff_Companion_HLNA_C_delaystartVRmissioneasy_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.delay start VR mission med
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ABuff_Companion_HLNA_C::delaystartVRmissionmed()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.delay start VR mission med");
		
		ABuff_Companion_HLNA_C_delaystartVRmissionmed_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.delay start VR mission hard
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ABuff_Companion_HLNA_C::delaystartVRmissionhard()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.delay start VR mission hard");
		
		ABuff_Companion_HLNA_C_delaystartVRmissionhard_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.fade in audio comp
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ABuff_Companion_HLNA_C::fadeinaudiocomp()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.fade in audio comp");
		
		ABuff_Companion_HLNA_C_fadeinaudiocomp_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.fade out audio comp
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ABuff_Companion_HLNA_C::fadeoutaudiocomp()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.fade out audio comp");
		
		ABuff_Companion_HLNA_C_fadeoutaudiocomp_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.delay start vr mission flow test
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ABuff_Companion_HLNA_C::delaystartvrmissionflowtest()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.delay start vr mission flow test");
		
		ABuff_Companion_HLNA_C_delaystartvrmissionflowtest_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.move hlna to focused target for tooltip
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ABuff_Companion_HLNA_C::movehlnatofocusedtargetfortooltip()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.move hlna to focused target for tooltip");
		
		ABuff_Companion_HLNA_C_movehlnatofocusedtargetfortooltip_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.start looping scans
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ABuff_Companion_HLNA_C::startloopingscans()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.start looping scans");
		
		ABuff_Companion_HLNA_C_startloopingscans_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.stop looping scans
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ABuff_Companion_HLNA_C::stoploopingscans()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.stop looping scans");
		
		ABuff_Companion_HLNA_C_stoploopingscans_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.keep looping scans
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ABuff_Companion_HLNA_C::keeploopingscans()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.keep looping scans");
		
		ABuff_Companion_HLNA_C_keeploopingscans_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.Simple Load Async Sound Cue
	 * 		Flags  -> (HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		TArray<struct FLocalizedSoundCueEntry>             Localized                                                  (Parm, OutParm, ZeroConstructor, ReferenceParm)
	 * 		bool                                               playanimtextures                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABuff_Companion_HLNA_C::SimpleLoadAsyncSoundCue(TArray<struct FLocalizedSoundCueEntry>* Localized, bool playanimtextures)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.Simple Load Async Sound Cue");
		
		ABuff_Companion_HLNA_C_SimpleLoadAsyncSoundCue_Params params {};
		params.playanimtextures = playanimtextures;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Localized != nullptr)
			*Localized = params.Localized;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.AsyncAssetLoadedDelegate__ExplorerNoteAudio
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FString                                      AssetPath                                                  (Parm, ZeroConstructor)
	 * 		class UObject*                                     LoadedAsset                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABuff_Companion_HLNA_C::AsyncAssetLoadedDelegate__ExplorerNoteAudio(const class FString& AssetPath, class UObject* LoadedAsset)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.AsyncAssetLoadedDelegate__ExplorerNoteAudio");
		
		ABuff_Companion_HLNA_C_AsyncAssetLoadedDelegate__ExplorerNoteAudio_Params params {};
		params.AssetPath = AssetPath;
		params.LoadedAsset = LoadedAsset;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.play intro reaction
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ABuff_Companion_HLNA_C::playintroreaction()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.play intro reaction");
		
		ABuff_Companion_HLNA_C_playintroreaction_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.ignore respawn reaction
	 * 		Flags  -> (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
	 */
	void ABuff_Companion_HLNA_C::ignorerespawnreaction()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.ignore respawn reaction");
		
		ABuff_Companion_HLNA_C_ignorerespawnreaction_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.prematurely cancel intro stuff
	 * 		Flags  -> (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
	 */
	void ABuff_Companion_HLNA_C::prematurelycancelintrostuff()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.prematurely cancel intro stuff");
		
		ABuff_Companion_HLNA_C_prematurelycancelintrostuff_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.finished loading async loaded anim texture
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FString                                      AssetPath                                                  (Parm, ZeroConstructor)
	 * 		class UObject*                                     LoadedAsset                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABuff_Companion_HLNA_C::finishedloadingasyncloadedanimtexture(const class FString& AssetPath, class UObject* LoadedAsset)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.finished loading async loaded anim texture");
		
		ABuff_Companion_HLNA_C_finishedloadingasyncloadedanimtexture_Params params {};
		params.AssetPath = AssetPath;
		params.LoadedAsset = LoadedAsset;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.Simple Load Async Sound Wave
	 * 		Flags  -> (HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		TArray<struct FLocalizedSoundWaveAnimTexturePairArrays> Localized                                                  (Parm, OutParm, ZeroConstructor, ReferenceParm)
	 * 		bool                                               playanimtextures                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABuff_Companion_HLNA_C::SimpleLoadAsyncSoundWave(TArray<struct FLocalizedSoundWaveAnimTexturePairArrays>* Localized, bool playanimtextures)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.Simple Load Async Sound Wave");
		
		ABuff_Companion_HLNA_C_SimpleLoadAsyncSoundWave_Params params {};
		params.playanimtextures = playanimtextures;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Localized != nullptr)
			*Localized = params.Localized;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.ResetHexTimer
	 * 		Flags  -> (Net, NetReliable, NetClient, BlueprintCallable, BlueprintEvent)
	 */
	void ABuff_Companion_HLNA_C::ResetHexTimer()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.ResetHexTimer");
		
		ABuff_Companion_HLNA_C_ResetHexTimer_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.Multi_UpdateSpawnedBeamParticle
	 * 		Flags  -> (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UParticleSystem*                             ParticleTemplate                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class AActor*                                      EndPointActor                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FVector                                     Offset                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABuff_Companion_HLNA_C::Multi_UpdateSpawnedBeamParticle(class UParticleSystem* ParticleTemplate, class AActor* EndPointActor, const struct FVector& Offset)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.Multi_UpdateSpawnedBeamParticle");
		
		ABuff_Companion_HLNA_C_Multi_UpdateSpawnedBeamParticle_Params params {};
		params.ParticleTemplate = ParticleTemplate;
		params.EndPointActor = EndPointActor;
		params.Offset = Offset;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.Server_HasStartedGen2Intro
	 * 		Flags  -> (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
	 */
	void ABuff_Companion_HLNA_C::Server_HasStartedGen2Intro()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.Server_HasStartedGen2Intro");
		
		ABuff_Companion_HLNA_C_Server_HasStartedGen2Intro_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.ClientGen2IntroFinished
	 * 		Flags  -> (Net, NetReliable, NetClient, BlueprintCallable, BlueprintEvent)
	 */
	void ABuff_Companion_HLNA_C::ClientGen2IntroFinished()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.ClientGen2IntroFinished");
		
		ABuff_Companion_HLNA_C_ClientGen2IntroFinished_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.ClientGen2IntroStart
	 * 		Flags  -> (Net, NetReliable, NetClient, BlueprintCallable, BlueprintEvent)
	 */
	void ABuff_Companion_HLNA_C::ClientGen2IntroStart()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.ClientGen2IntroStart");
		
		ABuff_Companion_HLNA_C_ClientGen2IntroStart_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.LevelNotifyGen2IntroFinished
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ABuff_Companion_HLNA_C::LevelNotifyGen2IntroFinished()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.LevelNotifyGen2IntroFinished");
		
		ABuff_Companion_HLNA_C_LevelNotifyGen2IntroFinished_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.NotifyServerIntroFinished
	 * 		Flags  -> (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
	 */
	void ABuff_Companion_HLNA_C::NotifyServerIntroFinished()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.NotifyServerIntroFinished");
		
		ABuff_Companion_HLNA_C_NotifyServerIntroFinished_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.LevelCheatSetGen2IntroPlaying
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               NewValue                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABuff_Companion_HLNA_C::LevelCheatSetGen2IntroPlaying(bool NewValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.LevelCheatSetGen2IntroPlaying");
		
		ABuff_Companion_HLNA_C_LevelCheatSetGen2IntroPlaying_Params params {};
		params.NewValue = NewValue;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.NotifyServerCheatSetGen2IntroPlaying
	 * 		Flags  -> (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               NewValue                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABuff_Companion_HLNA_C::NotifyServerCheatSetGen2IntroPlaying(bool NewValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.NotifyServerCheatSetGen2IntroPlaying");
		
		ABuff_Companion_HLNA_C_NotifyServerCheatSetGen2IntroPlaying_Params params {};
		params.NewValue = NewValue;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.delay play death line
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ABuff_Companion_HLNA_C::delayplaydeathline()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.delay play death line");
		
		ABuff_Companion_HLNA_C_delayplaydeathline_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.OnActorCustomEvent_Event
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FName                                        EventCustomName                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class FString                                      EventCustomString                                          (Parm, ZeroConstructor)
	 * 		class AActor*                                      InstigatorActor                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABuff_Companion_HLNA_C::OnActorCustomEvent_Event(const class FName& EventCustomName, const class FString& EventCustomString, class AActor* InstigatorActor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.OnActorCustomEvent_Event");
		
		ABuff_Companion_HLNA_C_OnActorCustomEvent_Event_Params params {};
		params.EventCustomName = EventCustomName;
		params.EventCustomString = EventCustomString;
		params.InstigatorActor = InstigatorActor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.ExecuteUbergraph_Buff_Companion_HLNA
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABuff_Companion_HLNA_C::ExecuteUbergraph_Buff_Companion_HLNA(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.ExecuteUbergraph_Buff_Companion_HLNA");
		
		ABuff_Companion_HLNA_C_ExecuteUbergraph_Buff_Companion_HLNA_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.Finished Scan Dispatcher__DelegateSignature
	 * 		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AShooterCharacter*                           ShooterChar                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABuff_Companion_HLNA_C::FinishedScanDispatcher__DelegateSignature(class AShooterCharacter* ShooterChar)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.Finished Scan Dispatcher__DelegateSignature");
		
		ABuff_Companion_HLNA_C_FinishedScanDispatcher__DelegateSignature_Params params {};
		params.ShooterChar = ShooterChar;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABuff_Companion_HLNA_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABuff_Companion_HLNA_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass Buff_Companion_HLNA.Buff_Companion_HLNA_C");
		return ptr;
	}

}


