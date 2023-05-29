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
	 * BlueprintGeneratedClass Megalania_Character_BP.Megalania_Character_BP_C
	 * Size -> 0x0058 (FullSize[0x3008] - InheritedSize[0x2FB0])
	 */
	class AMegalania_Character_BP_C : public ADino_Character_BP_Climber_C
	{
	public:
		class UDinoCharacterStatusComponent_BP_Megalania_C*        DinoCharacterStatus_BP_Megalania_C1;                     // 0x2FB0(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		float                                                      RequiredNormalDotToClimb_AverageTrace;                   // 0x2FB8(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_L47N[0x4];                                   // 0x2FBC(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UParticleSystem*                                     Ref_FootstepFX_Seeking;                                  // 0x2FC0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		int32_t                                                    MaxAiTraceForSpawnPointCount;                            // 0x2FC8(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_ML52[0x4];                                   // 0x2FCC(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<float>                                              AiSpawnTrace_DirArray_Yaw;                               // 0x2FD0(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance
		TArray<float>                                              AiSpawnTrace_DirArray_Pitch;                             // 0x2FE0(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance
		float                                                      AiSpawnTrace_Distance;                                   // 0x2FF0(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      AiSpawnTraceDownForGroundDistance;                       // 0x2FF4(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		struct FVector2D                                           CurrClimbingBlendspacesAxes_Front;                       // 0x2FF8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      RequiredClearRadiusForClimberSpawn;                      // 0x3000(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      CallFunc_Multiply_FloatFloat_ReturnValue;                // 0x3004(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor

	public:
		void ClimbingIK_SetNewBlendspaceAxes();
		void GetClimbingIK_BlendspaceAxes_Front(struct FVector2D* axes);
		void GetCustomSurfaceTraceDistance(int32_t traceIndex, float* customDistance);
		void IsNormalClimbable(const struct FVector& Normal, bool isAverageNormal, bool* Result);
		void CheckForPreventStopClimbing(TArray<bool>* traceHitsArray, int32_t numValidHits, int32_t numTraces, bool* AllowClimbing);
		bool BlueprintCanAttack(int32_t AttackIndex, float Distance, float attackRangeOffset, class AActor* OtherTarget);
		bool BlueprintCanRiderAttack(int32_t AttackIndex);
		void UserConstructionScript();
		void ReceiveBeginPlay();
		void ExecuteUbergraph_Megalania_Character_BP(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
