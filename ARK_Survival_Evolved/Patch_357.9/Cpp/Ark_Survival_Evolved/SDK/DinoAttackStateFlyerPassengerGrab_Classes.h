#pragma once

/**
 * Name: Ark_Survival_Evolved
 * Version: Patch_357.9
 */

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace CG
{
	// --------------------------------------------------
	// # Classes
	// --------------------------------------------------
	/**
	 * BlueprintGeneratedClass DinoAttackStateFlyerPassengerGrab.DinoAttackStateFlyerPassengerGrab_C
	 * Size -> 0x000F (FullSize[0x0067] - InheritedSize[0x0058])
	 */
	class UDinoAttackStateFlyerPassengerGrab_C : public UPrimalAIState
	{
	public:
		int32_t                                                    PassengerSlot;                                           // 0x0058(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		float                                                      TimeInState;                                             // 0x005C(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      GrabDelay;                                               // 0x0060(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		bool                                                       HitGrabStateAnimEvent;                                   // 0x0064(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       IsChildState;                                            // 0x0065(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       UsePassengerSystem;                                      // 0x0066(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor

	public:
		void GrabCharacter(class APrimalCharacter* Character, bool* ReturnValue);
		bool CanGrabCharacter(class APrimalCharacter* ACharacter, int32_t PassengerSeatIndex);
		void ResetState();
		void OnEndEvent();
		void OnTickEvent(float DeltaSeconds);
		void StartAnimationStateEvent(const class FName& CustomEventName, ENetRole Role);
		void GetAttackSocketLocations(TArray<struct UObject_FTransform>* Locations);
		void FindBestGrabTarget(class APrimalCharacter** bestTarget);
		void GetBestPassengerCandidate(TArray<class AActor*>* Chars, const struct FVector& SocketWorldPos, class AActor** BestChar);
		void OnBeginEvent(class UPrimalAIState* InParentState);
		void ExecuteUbergraph_DinoAttackStateFlyerPassengerGrab(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
