#pragma once

/**
 * Name: Ark_Survival_Evolved
 * Version: Patch_358.3
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
	 * Function DinoAttackStateFlyerPassengerGrab.DinoAttackStateFlyerPassengerGrab_C.Grab Character
	 */
	struct UDinoAttackStateFlyerPassengerGrab_C_GrabCharacter_Params
	{
	public:
		class APrimalCharacter*                                    Character;                                               // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       returnvalue;                                             // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function DinoAttackStateFlyerPassengerGrab.DinoAttackStateFlyerPassengerGrab_C.Can Grab Character
	 */
	struct UDinoAttackStateFlyerPassengerGrab_C_CanGrabCharacter_Params
	{
	public:
		class APrimalCharacter*                                    ACharacter;                                              // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		int32_t                                                    PassengerSeatIndex;                                      // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       ReturnValue;                                             // 0x000C(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_S3O7[0x3];                                   // 0x000D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function DinoAttackStateFlyerPassengerGrab.DinoAttackStateFlyerPassengerGrab_C.Reset State
	 */
	struct UDinoAttackStateFlyerPassengerGrab_C_ResetState_Params
	{	};

	/**
	 * Function DinoAttackStateFlyerPassengerGrab.DinoAttackStateFlyerPassengerGrab_C.OnEndEvent
	 */
	struct UDinoAttackStateFlyerPassengerGrab_C_OnEndEvent_Params
	{	};

	/**
	 * Function DinoAttackStateFlyerPassengerGrab.DinoAttackStateFlyerPassengerGrab_C.OnTickEvent
	 */
	struct UDinoAttackStateFlyerPassengerGrab_C_OnTickEvent_Params
	{
	public:
		float                                                      DeltaSeconds;                                            // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function DinoAttackStateFlyerPassengerGrab.DinoAttackStateFlyerPassengerGrab_C.StartAnimationStateEvent
	 */
	struct UDinoAttackStateFlyerPassengerGrab_C_StartAnimationStateEvent_Params
	{
	public:
		class FName                                                CustomEventName;                                         // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		ENetRole                                                   Role;                                                    // 0x0008(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function DinoAttackStateFlyerPassengerGrab.DinoAttackStateFlyerPassengerGrab_C.GetAttackSocketLocations
	 */
	struct UDinoAttackStateFlyerPassengerGrab_C_GetAttackSocketLocations_Params
	{
	public:
		TArray<struct UObject_FTransform>                          Locations;                                               // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor)
	};

	/**
	 * Function DinoAttackStateFlyerPassengerGrab.DinoAttackStateFlyerPassengerGrab_C.Find Best Grab Target
	 */
	struct UDinoAttackStateFlyerPassengerGrab_C_FindBestGrabTarget_Params
	{
	public:
		class APrimalCharacter*                                    bestTarget;                                              // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function DinoAttackStateFlyerPassengerGrab.DinoAttackStateFlyerPassengerGrab_C.Get Best Passenger Candidate
	 */
	struct UDinoAttackStateFlyerPassengerGrab_C_GetBestPassengerCandidate_Params
	{
	public:
		TArray<class AActor*>                                      Chars;                                                   // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReferenceParm)
		struct FVector                                             SocketWorldPos;                                          // 0x0010(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_BE8J[0x4];                                   // 0x001C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class AActor*                                              BestChar;                                                // 0x0020(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function DinoAttackStateFlyerPassengerGrab.DinoAttackStateFlyerPassengerGrab_C.OnBeginEvent
	 */
	struct UDinoAttackStateFlyerPassengerGrab_C_OnBeginEvent_Params
	{
	public:
		class UPrimalAIState*                                      InParentState;                                           // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function DinoAttackStateFlyerPassengerGrab.DinoAttackStateFlyerPassengerGrab_C.ExecuteUbergraph_DinoAttackStateFlyerPassengerGrab
	 */
	struct UDinoAttackStateFlyerPassengerGrab_C_ExecuteUbergraph_DinoAttackStateFlyerPassengerGrab_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
