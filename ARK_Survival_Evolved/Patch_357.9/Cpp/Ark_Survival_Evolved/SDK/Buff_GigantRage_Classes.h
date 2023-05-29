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
	 * BlueprintGeneratedClass Buff_GigantRage.Buff_GigantRage_C
	 * Size -> 0x0080 (FullSize[0x0A00] - InheritedSize[0x0980])
	 */
	class ABuff_GigantRage_C : public APrimalBuff
	{
	public:
		float                                                      CurrentRage;                                             // 0x0980(0x0004) Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, Interp, NoDestructor
		float                                                      MaxRageCooldownTime;                                     // 0x0984(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      CurrentMaxRageCooldown;                                  // 0x0988(0x0004) Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      RageCoolDownSpeed;                                       // 0x098C(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      EnterRageDamageThreshold;                                // 0x0990(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      RageFallDamageMultiplier;                                // 0x0994(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      MaxRageDamageAddition;                                   // 0x0998(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      RageNeighborRadius;                                      // 0x099C(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      K2Node_Event_DeltaSeconds;                               // 0x09A0(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_Greater_FloatFloat_ReturnValue;                 // 0x09A4(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_YW35[0x3];                                   // 0x09A5(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      CallFunc_Subtract_FloatFloat_ReturnValue;                // 0x09A8(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		float                                                      CallFunc_FMax_ReturnValue;                               // 0x09AC(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_Greater_FloatFloat_ReturnValue2;                // 0x09B0(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_UPRJ[0x3];                                   // 0x09B1(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      CallFunc_Multiply_FloatFloat_ReturnValue;                // 0x09B4(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		class APrimalDinoCharacter*                                K2Node_DynamicCast_AsPrimalDinoCharacter;                // 0x09B8(0x0008) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       K2Node_DynamicCast_CastSuccess;                          // 0x09C0(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_G19H[0x3];                                   // 0x09C1(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      CallFunc_Subtract_FloatFloat_ReturnValue2;               // 0x09C4(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		class APrimalDinoCharacter*                                K2Node_DynamicCast_AsPrimalDinoCharacter2;               // 0x09C8(0x0008) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       K2Node_DynamicCast2_CastSuccess;                         // 0x09D0(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_5BEC[0x3];                                   // 0x09D1(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      CallFunc_FMax_ReturnValue2;                              // 0x09D4(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_LessEqual_FloatFloat_ReturnValue;               // 0x09D8(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_IsServer_ReturnValue;                           // 0x09D9(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_Greater_FloatFloat_ReturnValue3;                // 0x09DA(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_IsDedicatedServer_ReturnValue;                  // 0x09DB(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		float                                                      CallFunc_Multiply_FloatFloat_ReturnValue2;               // 0x09DC(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_Greater_FloatFloat_ReturnValue4;                // 0x09E0(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_EX84[0x3];                                   // 0x09E1(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      CallFunc_Add_FloatFloat_ReturnValue;                     // 0x09E4(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		EObjectTypeQuery                                           CallFunc_Array_Add_NewItem_RefProperty;                  // 0x09E8(0x0001) OutParm, ZeroConstructor, Transient, DuplicateTransient, ReferenceParm, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_LNTK[0x7];                                   // 0x09E9(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class AActor*>                                      CallFunc_SphereOverlapActors_NEW_ActorsToIgnore_RefProperty; // 0x09F0(0x0010) OutParm, ZeroConstructor, Transient, DuplicateTransient, ReferenceParm

	public:
		float BuffAdjustDamage(float Damage, struct FHitResult* HitInfo, class AController* EventInstigator, class AActor* DamageCauser, class UClass* TheDamgeType);
		void EnterRage();
		float GetHUDProgressBarPercent();
		void UserConstructionScript();
		void ReceiveTick(float DeltaSeconds);
		void ExecuteUbergraph_Buff_GigantRage(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
