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
	 * AnimBlueprintGeneratedClass BowTPVAnimBP.BowTPVAnimBP_C
	 * Size -> 0x0228 (FullSize[0x0568] - InheritedSize[0x0340])
	 */
	class UBowTPVAnimBP_C : public UAnimInstance
	{
	public:
		struct FAnimNode_Root                                      AnimGraphNode_Root_139D72C44E1A7C46DFCBE9BAD2073DC5;     // 0x0340(0x0028)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_443B71C84C86601ECFEB21AB10B0E85D; // 0x0368(0x0018)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_F2F53E764A3F2C241F66ABA5198D1BD1; // 0x0380(0x0018)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_AA08BC0244042421C6DDE18BB9667F0C; // 0x0398(0x0018)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_315D9E3A411092D0265E0EB3ED1771CB; // 0x03B0(0x0018)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_FCFF8BCD4185A3EC68EB7CA5B271A0FD; // 0x03C8(0x0030)
		struct FAnimNode_Root                                      AnimGraphNode_StateResult_430DD7FE4247F693810B31BC7B2B2170; // 0x03F8(0x0028)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_E905746546C261E649FA1DBCD36244E9; // 0x0420(0x0030)
		struct FAnimNode_Root                                      AnimGraphNode_StateResult_232E8A264E1DD53A6C10D2A3A012A062; // 0x0450(0x0028)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_DF81805A4178A6B48F8DC8855F1A288A; // 0x0478(0x0030)
		struct FAnimNode_Root                                      AnimGraphNode_StateResult_915A80264BDB1AAF5DB574A994FA5033; // 0x04A8(0x0028)
		struct FAnimNode_StateMachine                              AnimGraphNode_StateMachine_D64E12AA49500622BD29C6B38A684F93; // 0x04D0(0x0060)
		bool                                                       IsPullingString;                                         // 0x0530(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_8L3M[0x7];                                   // 0x0531(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class AActor*                                              CallFunc_GetOwningActor_ReturnValue;                     // 0x0538(0x0008) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		class AShooterWeapon*                                      K2Node_DynamicCast_AsShooterWeapon;                      // 0x0540(0x0008) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       K2Node_DynamicCast_CastSuccess;                          // 0x0548(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_H4MA[0x7];                                   // 0x0549(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class APrimalWeaponBow*                                    K2Node_DynamicCast_AsPrimalWeaponBow;                    // 0x0550(0x0008) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       K2Node_DynamicCast2_CastSuccess;                         // 0x0558(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_Not_PreBool_ReturnValue;                        // 0x0559(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_X858[0x2];                                   // 0x055A(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      CallFunc_GetAnimAssetPlayerTimeFromEnd_ReturnValue;      // 0x055C(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_LessEqual_FloatFloat_ReturnValue;               // 0x0560(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_Not_PreBool_ReturnValue2;                       // 0x0561(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_BooleanAND_ReturnValue;                         // 0x0562(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_0DZ6[0x1];                                   // 0x0563(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      K2Node_Event_DeltaTimeX;                                 // 0x0564(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor

	public:
		void EvaluateGraphExposedInputs_ExecuteUbergraph_BowTPVAnimBP_AnimGraphNode_TransitionResult_1858();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_BowTPVAnimBP_AnimGraphNode_TransitionResult_1857();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_BowTPVAnimBP_AnimGraphNode_TransitionResult_1856();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_BowTPVAnimBP_AnimGraphNode_TransitionResult_1855();
		void BlueprintUpdateAnimation(float DeltaTimeX);
		void ExecuteUbergraph_BowTPVAnimBP(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
