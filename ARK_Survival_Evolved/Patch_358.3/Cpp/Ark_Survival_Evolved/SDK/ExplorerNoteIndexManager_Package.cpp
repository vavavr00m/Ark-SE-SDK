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
	 * 		Name   -> Function ExplorerNoteIndexManager.ExplorerNoteIndexManager_C.Story Explorer Note Unlocked Count and Max
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            UnlockedCount                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		int32_t                                            MaxStoryExplorerNotes                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UExplorerNoteIndexManager_C::StoryExplorerNoteUnlockedCountandMax(int32_t* UnlockedCount, int32_t* MaxStoryExplorerNotes)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ExplorerNoteIndexManager.ExplorerNoteIndexManager_C.Story Explorer Note Unlocked Count and Max");
		
		UExplorerNoteIndexManager_C_StoryExplorerNoteUnlockedCountandMax_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (UnlockedCount != nullptr)
			*UnlockedCount = params.UnlockedCount;
		if (MaxStoryExplorerNotes != nullptr)
			*MaxStoryExplorerNotes = params.MaxStoryExplorerNotes;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function ExplorerNoteIndexManager.ExplorerNoteIndexManager_C.Still Has Story Explorer Note This Player Can Unlock
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               stillhassometounlock                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UExplorerNoteIndexManager_C::StillHasStoryExplorerNoteThisPlayerCanUnlock(bool* stillhassometounlock)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ExplorerNoteIndexManager.ExplorerNoteIndexManager_C.Still Has Story Explorer Note This Player Can Unlock");
		
		UExplorerNoteIndexManager_C_StillHasStoryExplorerNoteThisPlayerCanUnlock_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (stillhassometounlock != nullptr)
			*stillhassometounlock = params.stillhassometounlock;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function ExplorerNoteIndexManager.ExplorerNoteIndexManager_C.Still Has Factoid Explorer Note This Player Can Unlock
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               stillhassometounlock                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UExplorerNoteIndexManager_C::StillHasFactoidExplorerNoteThisPlayerCanUnlock(bool* stillhassometounlock)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ExplorerNoteIndexManager.ExplorerNoteIndexManager_C.Still Has Factoid Explorer Note This Player Can Unlock");
		
		UExplorerNoteIndexManager_C_StillHasFactoidExplorerNoteThisPlayerCanUnlock_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (stillhassometounlock != nullptr)
			*stillhassometounlock = params.stillhassometounlock;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function ExplorerNoteIndexManager.ExplorerNoteIndexManager_C.Get Next Gen 1 Glitch Story Mission Explorer Note Index
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            nextunlockableglitchstorymissionnoteindex                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UExplorerNoteIndexManager_C::GetNextGen1GlitchStoryMissionExplorerNoteIndex(int32_t* nextunlockableglitchstorymissionnoteindex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ExplorerNoteIndexManager.ExplorerNoteIndexManager_C.Get Next Gen 1 Glitch Story Mission Explorer Note Index");
		
		UExplorerNoteIndexManager_C_GetNextGen1GlitchStoryMissionExplorerNoteIndex_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (nextunlockableglitchstorymissionnoteindex != nullptr)
			*nextunlockableglitchstorymissionnoteindex = params.nextunlockableglitchstorymissionnoteindex;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function ExplorerNoteIndexManager.ExplorerNoteIndexManager_C.Get Random Gen 1 Factoid Explorer Note Index
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            unlockablerandomexplorernoteindex                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UExplorerNoteIndexManager_C::GetRandomGen1FactoidExplorerNoteIndex(int32_t* unlockablerandomexplorernoteindex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ExplorerNoteIndexManager.ExplorerNoteIndexManager_C.Get Random Gen 1 Factoid Explorer Note Index");
		
		UExplorerNoteIndexManager_C_GetRandomGen1FactoidExplorerNoteIndex_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (unlockablerandomexplorernoteindex != nullptr)
			*unlockablerandomexplorernoteindex = params.unlockablerandomexplorernoteindex;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function ExplorerNoteIndexManager.ExplorerNoteIndexManager_C.GetNextUnlockableExplorerNoteIndex
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		TArray<int32_t>                                    arrayofexplorernoteindicies                                (Parm, OutParm, ZeroConstructor, ReferenceParm)
	 * 		bool                                               Success                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		int32_t                                            nextindex                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UExplorerNoteIndexManager_C::GetNextUnlockableExplorerNoteIndex(TArray<int32_t>* arrayofexplorernoteindicies, bool* Success, int32_t* nextindex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ExplorerNoteIndexManager.ExplorerNoteIndexManager_C.GetNextUnlockableExplorerNoteIndex");
		
		UExplorerNoteIndexManager_C_GetNextUnlockableExplorerNoteIndex_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (arrayofexplorernoteindicies != nullptr)
			*arrayofexplorernoteindicies = params.arrayofexplorernoteindicies;
		if (Success != nullptr)
			*Success = params.Success;
		if (nextindex != nullptr)
			*nextindex = params.nextindex;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function ExplorerNoteIndexManager.ExplorerNoteIndexManager_C.GetRandomUnlockableExplorerNoteIndex
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		TArray<int32_t>                                    arrayofexplorernoteindicies                                (Parm, OutParm, ZeroConstructor, ReferenceParm)
	 * 		bool                                               Success                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		int32_t                                            randomunlockableindex                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UExplorerNoteIndexManager_C::GetRandomUnlockableExplorerNoteIndex(TArray<int32_t>* arrayofexplorernoteindicies, bool* Success, int32_t* randomunlockableindex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ExplorerNoteIndexManager.ExplorerNoteIndexManager_C.GetRandomUnlockableExplorerNoteIndex");
		
		UExplorerNoteIndexManager_C_GetRandomUnlockableExplorerNoteIndex_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (arrayofexplorernoteindicies != nullptr)
			*arrayofexplorernoteindicies = params.arrayofexplorernoteindicies;
		if (Success != nullptr)
			*Success = params.Success;
		if (randomunlockableindex != nullptr)
			*randomunlockableindex = params.randomunlockableindex;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function ExplorerNoteIndexManager.ExplorerNoteIndexManager_C.ExecuteUbergraph_ExplorerNoteIndexManager
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UExplorerNoteIndexManager_C::ExecuteUbergraph_ExplorerNoteIndexManager(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ExplorerNoteIndexManager.ExplorerNoteIndexManager_C.ExecuteUbergraph_ExplorerNoteIndexManager");
		
		UExplorerNoteIndexManager_C_ExecuteUbergraph_ExplorerNoteIndexManager_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UExplorerNoteIndexManager_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UExplorerNoteIndexManager_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass ExplorerNoteIndexManager.ExplorerNoteIndexManager_C");
		return ptr;
	}

}


