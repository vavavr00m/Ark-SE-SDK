/**
 * Name: ARK_Survival_Evolved
 * Version: Patch_346.14
 */

#include "../SDK.h"

namespace CG
{
	// --------------------------------------------------
	// # Structs Functions
	// --------------------------------------------------
	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UMovieScene.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UMovieScene::StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class MovieSceneCore.MovieScene");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UMovieSceneBindings.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UMovieSceneBindings::StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class MovieSceneCore.MovieSceneBindings");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UMovieSceneSection.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UMovieSceneSection::StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class MovieSceneCore.MovieSceneSection");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UMovieSceneTrack.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UMovieSceneTrack::StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class MovieSceneCore.MovieSceneTrack");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UMovieScenePropertyTrack.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UMovieScenePropertyTrack::StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class MovieSceneCore.MovieScenePropertyTrack");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x026B55D0
	 * 		Name   -> Function MovieSceneCore.RuntimeMovieScenePlayer.Play
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	void URuntimeMovieScenePlayer::Play()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function MovieSceneCore.RuntimeMovieScenePlayer.Play");
		
		URuntimeMovieScenePlayer_Play_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x026B55F0
	 * 		Name   -> Function MovieSceneCore.RuntimeMovieScenePlayer.Pause
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	void URuntimeMovieScenePlayer::Pause()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function MovieSceneCore.RuntimeMovieScenePlayer.Pause");
		
		URuntimeMovieScenePlayer_Pause_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x026B5610
	 * 		Name   -> Function MovieSceneCore.RuntimeMovieScenePlayer.CreateRuntimeMovieScenePlayer
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		class ULevel*                                      Level                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class UMovieSceneBindings*                         InMovieSceneBindings                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	class URuntimeMovieScenePlayer* URuntimeMovieScenePlayer::STATIC_CreateRuntimeMovieScenePlayer(class ULevel* Level, class UMovieSceneBindings* InMovieSceneBindings)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function MovieSceneCore.RuntimeMovieScenePlayer.CreateRuntimeMovieScenePlayer");
		
		URuntimeMovieScenePlayer_CreateRuntimeMovieScenePlayer_Params params {};
		params.Level = Level;
		params.InMovieSceneBindings = InMovieSceneBindings;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction URuntimeMovieScenePlayer.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* URuntimeMovieScenePlayer::StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class MovieSceneCore.RuntimeMovieScenePlayer");
		return ptr;
	}

}


