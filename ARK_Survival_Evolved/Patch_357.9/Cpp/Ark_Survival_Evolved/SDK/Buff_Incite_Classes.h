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
	 * BlueprintGeneratedClass Buff_Incite.Buff_Incite_C
	 * Size -> 0x0238 (FullSize[0x0BB8] - InheritedSize[0x0980])
	 */
	class ABuff_Incite_C : public APrimalBuff
	{
	public:
		class APawn*                                               CallFunc_GetInstigator_ReturnValue;                      // 0x0980(0x0008) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		class FString                                              CallFunc_GetDisplayName_ReturnValue;                     // 0x0988(0x0010) ZeroConstructor, Transient, DuplicateTransient
		class FText                                                CallFunc_Conv_StringToText_ReturnValue;                  // 0x0998(0x0018) ELEMENT_SIZE_MISMATCH Transient, DuplicateTransient
		unsigned char                                              UnknownData_7KDY[0x10];                                  // 0x09B0(0x0010) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
		struct FFormatTextArgument                                 K2Node_MakeStruct_FormatTextArgument;                    // 0x09C0(0x0050) Transient, DuplicateTransient
		TArray<struct FFormatTextArgument>                         K2Node_MakeArray_Array;                                  // 0x0A10(0x0010) ZeroConstructor, Transient, DuplicateTransient
		float                                                      CallFunc_GetRemainingTime_ReturnValue;                   // 0x0A20(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_YWVP[0x4];                                   // 0x0A24(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FText                                                CallFunc_Format_ReturnValue;                             // 0x0A28(0x0018) ELEMENT_SIZE_MISMATCH Transient, DuplicateTransient
		unsigned char                                              UnknownData_BMQP[0x10];                                  // 0x0A40(0x0010) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
		class FText                                                CallFunc_Conv_FloatToText_ReturnValue;                   // 0x0A50(0x0018) ELEMENT_SIZE_MISMATCH Transient, DuplicateTransient
		unsigned char                                              UnknownData_6W5C[0x10];                                  // 0x0A68(0x0010) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
		class FString                                              CallFunc_Conv_TextToString_ReturnValue;                  // 0x0A78(0x0010) ZeroConstructor, Transient, DuplicateTransient
		struct FFormatTextArgument                                 K2Node_MakeStruct_FormatTextArgument2;                   // 0x0A88(0x0050) Transient, DuplicateTransient
		class APawn*                                               CallFunc_GetInstigator_ReturnValue2;                     // 0x0AD8(0x0008) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		EEndPlayReason                                             K2Node_Event_EndPlayReason;                              // 0x0AE0(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_80YU[0x7];                                   // 0x0AE1(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              CallFunc_GetDisplayName_ReturnValue2;                    // 0x0AE8(0x0010) ZeroConstructor, Transient, DuplicateTransient
		class FText                                                CallFunc_Conv_StringToText_ReturnValue2;                 // 0x0AF8(0x0018) ELEMENT_SIZE_MISMATCH Transient, DuplicateTransient
		unsigned char                                              UnknownData_3JF9[0x10];                                  // 0x0B10(0x0010) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
		struct FFormatTextArgument                                 K2Node_MakeStruct_FormatTextArgument3;                   // 0x0B20(0x0050) Transient, DuplicateTransient
		TArray<struct FFormatTextArgument>                         K2Node_MakeArray_Array2;                                 // 0x0B70(0x0010) ZeroConstructor, Transient, DuplicateTransient
		class FText                                                CallFunc_Format_ReturnValue2;                            // 0x0B80(0x0018) ELEMENT_SIZE_MISMATCH Transient, DuplicateTransient
		unsigned char                                              UnknownData_AVHI[0x10];                                  // 0x0B98(0x0010) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
		class FString                                              CallFunc_Conv_TextToString_ReturnValue2;                 // 0x0BA8(0x0010) ZeroConstructor, Transient, DuplicateTransient

	public:
		void ResetTimer();
		void BP_OnBuffLifetimeUpdated();
		void UserConstructionScript();
		void ReceiveBeginPlay();
		void ReceiveEndPlay(EEndPlayReason EndPlayReason);
		void ExecuteUbergraph_Buff_Incite(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
