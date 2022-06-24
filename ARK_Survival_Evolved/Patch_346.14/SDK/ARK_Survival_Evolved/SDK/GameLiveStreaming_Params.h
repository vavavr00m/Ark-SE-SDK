#pragma once

/**
 * Name: ARK_Survival_Evolved
 * Version: Patch_346.14
 */

#include "../SDK.h"

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace CG
{
	// --------------------------------------------------
	// # Structs
	// --------------------------------------------------
	/**
	 * Function GameLiveStreaming.GameLiveStreamingFunctionLibrary.StopBroadcastingGame
	 */
	struct UGameLiveStreamingFunctionLibrary_StopBroadcastingGame_Params
	{	};

	/**
	 * Function GameLiveStreaming.GameLiveStreamingFunctionLibrary.StartBroadcastingGame
	 */
	struct UGameLiveStreamingFunctionLibrary_StartBroadcastingGame_Params
	{
	public:
		int32_t                                                    FrameRate;                                               // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		float                                                      ScreenScaling;                                           // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       bEnableWebCam;                                           // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		int32_t                                                    DesiredWebCamWidth;                                      // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		int32_t                                                    DesiredWebCamHeight;                                     // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       bMirrorWebCamImage;                                      // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       bCaptureAudioFromComputer;                               // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       bCaptureAudioFromMicrophone;                             // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       bDrawSimpleWebCamVideo;                                  // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function GameLiveStreaming.GameLiveStreamingFunctionLibrary.IsBroadcastingGame
	 */
	struct UGameLiveStreamingFunctionLibrary_IsBroadcastingGame_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function GameLiveStreaming.QueryLiveStreamsCallbackProxy.QueryLiveStreams
	 */
	struct UQueryLiveStreamsCallbackProxy_QueryLiveStreams_Params
	{
	public:
		class FString                                              GameName;                                                // 0x0000(0x0010)  (Parm, ZeroConstructor)
		class UQueryLiveStreamsCallbackProxy*                      ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function GameLiveStreaming.QueryLiveStreamsCallbackProxy.OnQueryLiveStreamsCompleted__DelegateSignature
	 */
	struct UQueryLiveStreamsCallbackProxy_OnQueryLiveStreamsCompleted__DelegateSignature_Params
	{
	public:
		TArray<struct FBlueprintLiveStreamInfo>                    LiveStreams;                                             // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
		bool                                                       bWasSuccessful;                                          // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
