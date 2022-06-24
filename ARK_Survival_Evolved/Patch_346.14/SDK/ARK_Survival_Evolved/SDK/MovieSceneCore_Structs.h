#pragma once

/**
 * Name: ARK_Survival_Evolved
 * Version: Patch_346.14
 */

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace CG
{
	// --------------------------------------------------
	// # Structs
	// --------------------------------------------------
	/**
	 * ScriptStruct MovieSceneCore.MovieScene.MovieSceneSpawnable
	 * Size -> 0x0048
	 */
	struct FMovieSceneSpawnable
	{
	public:
		struct FGuid                                               Guid;                                                    // 0x0000(0x0010) ZeroConstructor
		class FText                                                Name;                                                    // 0x0010(0x0018) ELEMENT_SIZE_MISMATCH
		unsigned char                                              UnknownData_TWEL[0x10];                                  // 0x0010(0x0010) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
		class UClass*                                              GeneratedClass;                                          // 0x0038(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_HXTY[0x8];                                   // 0x0040(0x0008) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct MovieSceneCore.MovieScene.MovieScenePossessable
	 * Size -> 0x0040
	 */
	struct FMovieScenePossessable
	{
	public:
		struct FGuid                                               Guid;                                                    // 0x0000(0x0010) ZeroConstructor
		class FText                                                Name;                                                    // 0x0010(0x0018) ELEMENT_SIZE_MISMATCH
		unsigned char                                              UnknownData_MC6K[0x10];                                  // 0x0010(0x0010) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
		class UClass*                                              PossessedObjectClass;                                    // 0x0038(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor
	};

	/**
	 * ScriptStruct MovieSceneCore.MovieScene.MovieSceneObjectBinding
	 * Size -> 0x0048
	 */
	struct FMovieSceneObjectBinding
	{
	public:
		struct FGuid                                               ObjectGuid;                                              // 0x0000(0x0010) ZeroConstructor
		class FText                                                BindingName;                                             // 0x0010(0x0018) ELEMENT_SIZE_MISMATCH
		unsigned char                                              UnknownData_SKJC[0x10];                                  // 0x0010(0x0010) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
		TArray<class UMovieSceneTrack*>                            Tracks;                                                  // 0x0038(0x0010) ZeroConstructor
	};

	/**
	 * ScriptStruct MovieSceneCore.MovieSceneBindings.MovieSceneBoundObject
	 * Size -> 0x0020
	 */
	struct FMovieSceneBoundObject
	{
	public:
		struct FGuid                                               PossessableGuid;                                         // 0x0000(0x0010) ZeroConstructor
		TArray<class UObject*>                                     Objects;                                                 // 0x0010(0x0010) ZeroConstructor
	};

	/**
	 * ScriptStruct MovieSceneCore.MovieScene.MovieSceneEditorData
	 * Size -> 0x0010
	 */
	struct FMovieSceneEditorData
	{
	public:
		TArray<class FString>                                      CollapsedSequencerNodes;                                 // 0x0000(0x0010) ZeroConstructor
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
