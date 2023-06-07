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
	 * BlueprintGeneratedClass LionfishLion_AIController_BP.LionfishLion_AIController_BP_C
	 * Size -> 0x0027 (FullSize[0x0940] - InheritedSize[0x0919])
	 */
	class ALionfishLion_AIController_BP_C : public ADino_AIController_BP_C
	{
	public:
		bool                                                       iscloaked;                                               // 0x0919(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_D13B[0x2];                                   // 0x091A(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      daytimestarthour;                                        // 0x091C(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      nighttimestarthour;                                      // 0x0920(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      nighttimestalkingtargetingrange;                         // 0x0924(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       Delete;                                                  // 0x0928(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_1GJP[0x7];                                   // 0x0929(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class AActor*>                                      CallFunc_LineTraceMulti_NEW_ActorsToIgnore_RefProperty;  // 0x0930(0x0010) OutParm, ZeroConstructor, Transient, DuplicateTransient, ReferenceParm

	public:
		bool BPShouldNotifyNeighbor(class APrimalDinoCharacter* neighbor);
		void BPSetupFindTarget();
		bool isnight();
		void islineofsightblocked(bool* NewParam);
		void CheckifViewedbyPlayers();
		void BPNotifyTargetSet();
		void UserConstructionScript();
		void ExecuteUbergraph_LionfishLion_AIController_BP(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
