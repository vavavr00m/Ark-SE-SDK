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
	 * AnimBlueprintGeneratedClass Sinomacrops_AnimBP.Sinomacrops_AnimBP_C
	 * Size -> 0x0023 (FullSize[0x1C6C] - InheritedSize[0x1C49])
	 */
	class USinomacrops_AnimBP_C : public UDinoBlueprintBase_RootTransform_Glider_C
	{
	public:
		unsigned char                                              UnknownData_FCF0[0x3];                                   // 0x1C49(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      MinZVelForMountUp;                                       // 0x1C4C(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		struct FRotator                                            LastMountedCharRot;                                      // 0x1C50(0x000C) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_7YL3[0x4];                                   // 0x1C5C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		double                                                     LastUpdateExAnimPlayRateTime;                            // 0x1C60(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      MaxExAnimPlayRate;                                       // 0x1C68(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor

	public:
		void UpdateAnimFromShooterChar(class AShooterCharacter* ShooterChar, float DeltaTime, bool* HasBuffFromPawnOwner);
		void PassengerUpdateAnim(class APrimalDinoCharacter* CarryingDino, float DeltaTime);
		void ExecuteUbergraph_Sinomacrops_AnimBP(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
