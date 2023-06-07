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
	// # Classes
	// --------------------------------------------------
	/**
	 * BlueprintGeneratedClass Shapeshifter_Large_AIController_BP.Shapeshifter_Large_AIController_BP_C
	 * Size -> 0x003F (FullSize[0x0958] - InheritedSize[0x0919])
	 */
	class AShapeshifter_Large_AIController_BP_C : public ADino_AIController_BP_C
	{
	public:
		unsigned char                                              UnknownData_ENW3[0x3];                                   // 0x0919(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      MinDistToTargetToConsiderUberpounce;                     // 0x091C(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      DistanceToTargetToEndRaptorPounce;                       // 0x0920(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_C6FA[0x4];                                   // 0x0924(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		double                                                     TimeBeginPlay;                                           // 0x0928(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		int32_t                                                    NumAttachedMeleeAttacks;                                 // 0x0930(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_1VH4[0x4];                                   // 0x0934(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		double                                                     TimeSinceLastUberpounceCharacter;                        // 0x0938(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       AllowGroundSurfaceUberpouncesInAllContexts;              // 0x0940(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_HALT[0x7];                                   // 0x0941(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		double                                                     TimeSinceLastUberpounceLocation;                         // 0x0948(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      UberpounceLocationRange;                                 // 0x0950(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      UberpounceCharacterRange;                                // 0x0954(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor

	public:
		void DinoUberpounce(bool* Success);
		void LocationUberpounce();
		void AllowSurfaceNormalForUberpounce(const struct FVector& surfaceNormal, bool* IsValid);
		void Enable();
		void StartUberpounce(const struct FUberpounceData& Data);
		void DeinonychusAttackedWhileLatched();
		void OnUberpounceStateChanged(EUberpounceState NewState, EUberpounceState PrevState);
		void UpdateUberpounce();
		void ReceiveBeginPlay();
		void ReceiveTick(float DeltaSeconds);
		void GetPrimalTarget(class APrimalCharacter** Target);
		void GetDino(class ADeinonychus_Character_BP_C** ret);
		void UserConstructionScript();
		void ExecuteUbergraph_Shapeshifter_Large_AIController_BP(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
