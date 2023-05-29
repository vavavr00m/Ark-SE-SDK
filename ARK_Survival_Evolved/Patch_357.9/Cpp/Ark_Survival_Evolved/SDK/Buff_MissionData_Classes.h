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
	 * BlueprintGeneratedClass Buff_MissionData.Buff_MissionData_C
	 * Size -> 0x0760 (FullSize[0x1218] - InheritedSize[0x0AB8])
	 */
	class ABuff_MissionData_C : public APrimalBuff_MissionData
	{
	public:
		float                                                      MissionSuccessFailAlertDuration;                         // 0x0AB8(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      AddedToMissionAlertDuration;                             // 0x0ABC(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		class FText                                                MissionFormatLineText;                                   // 0x0AC0(0x0018) ELEMENT_SIZE_MISMATCH Edit, BlueprintVisible, DisableEditOnInstance
		unsigned char                                              UnknownData_ECPU[0x10];                                  // 0x0AD8(0x0010) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
		class FScriptDelegate                                      K2Node_CreateDelegate_OutputDelegate;                    // 0x0AE8(0x0010) ZeroConstructor, Transient, DuplicateTransient, NoDestructor
		class FScriptDelegate                                      K2Node_CreateDelegate_OutputDelegate2;                   // 0x0AF8(0x0010) ZeroConstructor, Transient, DuplicateTransient, NoDestructor
		struct FFormatTextArgument                                 K2Node_MakeStruct_FormatTextArgument;                    // 0x0B08(0x0050) Transient, DuplicateTransient
		bool                                                       CallFunc_HasAuthority_ReturnValue;                       // 0x0B58(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_4Q4F[0x7];                                   // 0x0B59(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class APrimalBuff_MissionData*                             K2Node_CustomEvent_MissionDataBuff2;                     // 0x0B60(0x0008) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		class AMissionType*                                        K2Node_CustomEvent_Mission2;                             // 0x0B68(0x0008) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       K2Node_CustomEvent_bSuccess;                             // 0x0B70(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		EMissionAlertType                                          K2Node_Select_ReturnValue;                               // 0x0B71(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       K2Node_Select_CmpSuccess;                                // 0x0B72(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_UJJT[0x5];                                   // 0x0B73(0x0005) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class APlayerController*                                   CallFunc_GetOwnerController_ReturnValue;                 // 0x0B78(0x0008) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		class USoundBase*                                          K2Node_Select_ReturnValue2;                              // 0x0B80(0x0008) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       K2Node_Select2_CmpSuccess;                               // 0x0B88(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_7JB3[0x7];                                   // 0x0B89(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class AShooterPlayerController*                            K2Node_DynamicCast_AsShooterPlayerController;            // 0x0B90(0x0008) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       K2Node_DynamicCast_CastSuccess;                          // 0x0B98(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_AWAZ[0x7];                                   // 0x0B99(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		unsigned char                                              K2Node_DynamicCast_AsMissionRace_Interface_C[0x10];      // 0x0BA0(0x0010) UNKNOWN PROPERTY: InterfaceProperty Buff_MissionData.Buff_MissionData_C.K2Node_DynamicCast_AsMissionRace_Interface_C
		bool                                                       K2Node_DynamicCast2_CastSuccess;                         // 0x0BB0(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_H6R0[0x7];                                   // 0x0BB1(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		unsigned char                                              K2Node_DynamicCast_AsMissionRace_Interface_C2[0x10];     // 0x0BB8(0x0010) UNKNOWN PROPERTY: InterfaceProperty Buff_MissionData.Buff_MissionData_C.K2Node_DynamicCast_AsMissionRace_Interface_C2
		bool                                                       K2Node_DynamicCast3_CastSuccess;                         // 0x0BC8(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_RBA6[0x7];                                   // 0x0BC9(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FRacePlayerData>                             CallFunc_GetRaceData_RaceData;                           // 0x0BD0(0x0010) ZeroConstructor, Transient, DuplicateTransient
		bool                                                       CallFunc_DoesImplementInterface_ReturnValue;             // 0x0BE0(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_X4XU[0x3];                                   // 0x0BE1(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    CallFunc_RacePlayerData_IndexOfController_ReturnValue;   // 0x0BE4(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		int32_t                                                    CallFunc_RacePlayerData_NumCheckpoints_ReturnValue;      // 0x0BE8(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		int32_t                                                    CallFunc_GetPlayerRanking_Ranking;                       // 0x0BEC(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		int32_t                                                    CallFunc_Subtract_IntInt_ReturnValue;                    // 0x0BF0(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_RacePlayerData_GetCheckpointData_bCheckpointReached; // 0x0BF4(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_GWNT[0x3];                                   // 0x0BF5(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      CallFunc_RacePlayerData_GetCheckpointData_CheckpointTime; // 0x0BF8(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		int32_t                                                    CallFunc_Add_IntInt_ReturnValue;                         // 0x0BFC(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		class FText                                                CallFunc_Conv_FloatToText_ReturnValue;                   // 0x0C00(0x0018) ELEMENT_SIZE_MISMATCH Transient, DuplicateTransient
		unsigned char                                              UnknownData_4WVN[0x10];                                  // 0x0C18(0x0010) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
		class FText                                                CallFunc_Conv_IntToText_ReturnValue;                     // 0x0C28(0x0018) ELEMENT_SIZE_MISMATCH Transient, DuplicateTransient
		unsigned char                                              UnknownData_386G[0x10];                                  // 0x0C40(0x0010) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
		struct FFormatTextArgument                                 K2Node_MakeStruct_FormatTextArgument2;                   // 0x0C50(0x0050) Transient, DuplicateTransient
		struct FFormatTextArgument                                 K2Node_MakeStruct_FormatTextArgument3;                   // 0x0CA0(0x0050) Transient, DuplicateTransient
		TArray<struct FFormatTextArgument>                         K2Node_MakeArray_Array;                                  // 0x0CF0(0x0010) ZeroConstructor, Transient, DuplicateTransient
		class FText                                                CallFunc_Conv_StringToText_ReturnValue;                  // 0x0D00(0x0018) ELEMENT_SIZE_MISMATCH Transient, DuplicateTransient
		unsigned char                                              UnknownData_G0AJ[0x10];                                  // 0x0D18(0x0010) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
		class FText                                                CallFunc_Format_ReturnValue;                             // 0x0D28(0x0018) ELEMENT_SIZE_MISMATCH Transient, DuplicateTransient
		unsigned char                                              UnknownData_3WEE[0x10];                                  // 0x0D40(0x0010) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
		struct FFormatTextArgument                                 K2Node_MakeStruct_FormatTextArgument4;                   // 0x0D50(0x0050) Transient, DuplicateTransient
		class FText                                                K2Node_Select_ReturnValue3;                              // 0x0DA0(0x0018) ELEMENT_SIZE_MISMATCH Transient, DuplicateTransient
		unsigned char                                              UnknownData_1R16[0x10];                                  // 0x0DB8(0x0010) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
		bool                                                       K2Node_Select3_CmpSuccess;                               // 0x0DC8(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_INNK[0x7];                                   // 0x0DC9(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FFormatTextArgument                                 K2Node_MakeStruct_FormatTextArgument5;                   // 0x0DD0(0x0050) Transient, DuplicateTransient
		class FText                                                CallFunc_Conv_StringToText_ReturnValue2;                 // 0x0E20(0x0018) ELEMENT_SIZE_MISMATCH Transient, DuplicateTransient
		unsigned char                                              UnknownData_WBC8[0x10];                                  // 0x0E38(0x0010) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
		struct FFormatTextArgument                                 K2Node_MakeStruct_FormatTextArgument6;                   // 0x0E48(0x0050) Transient, DuplicateTransient
		int32_t                                                    CallFunc_Len_ReturnValue;                                // 0x0E98(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_MG9Z[0x4];                                   // 0x0E9C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FText                                                CallFunc_Conv_StringToText_ReturnValue3;                 // 0x0EA0(0x0018) ELEMENT_SIZE_MISMATCH Transient, DuplicateTransient
		unsigned char                                              UnknownData_3C37[0x10];                                  // 0x0EB8(0x0010) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
		bool                                                       CallFunc_EqualEqual_IntInt_ReturnValue;                  // 0x0EC8(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_GIPF[0x7];                                   // 0x0EC9(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FFormatTextArgument                                 K2Node_MakeStruct_FormatTextArgument7;                   // 0x0ED0(0x0050) Transient, DuplicateTransient
		TArray<struct FFormatTextArgument>                         K2Node_MakeArray_Array2;                                 // 0x0F20(0x0010) ZeroConstructor, Transient, DuplicateTransient
		int32_t                                                    CallFunc_Len_ReturnValue2;                               // 0x0F30(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_OO48[0x4];                                   // 0x0F34(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FText                                                CallFunc_Conv_StringToText_ReturnValue4;                 // 0x0F38(0x0018) ELEMENT_SIZE_MISMATCH Transient, DuplicateTransient
		unsigned char                                              UnknownData_IQFW[0x10];                                  // 0x0F50(0x0010) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
		bool                                                       CallFunc_EqualEqual_IntInt_ReturnValue2;                 // 0x0F60(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_9E9N[0x7];                                   // 0x0F61(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FFormatTextArgument                                 K2Node_MakeStruct_FormatTextArgument8;                   // 0x0F68(0x0050) Transient, DuplicateTransient
		bool                                                       CallFunc_BooleanOR_ReturnValue;                          // 0x0FB8(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_OAEH[0x7];                                   // 0x0FB9(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FFormatTextArgument>                         K2Node_MakeArray_Array3;                                 // 0x0FC0(0x0010) ZeroConstructor, Transient, DuplicateTransient
		TArray<struct FMissionAlertEntry>                          K2Node_MakeArray_Array4;                                 // 0x0FD0(0x0010) ZeroConstructor, Transient, DuplicateTransient
		class FText                                                CallFunc_Format_ReturnValue2;                            // 0x0FE0(0x0018) ELEMENT_SIZE_MISMATCH Transient, DuplicateTransient
		unsigned char                                              UnknownData_W5CF[0x10];                                  // 0x0FF8(0x0010) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
		class FText                                                CallFunc_Format_ReturnValue3;                            // 0x1008(0x0018) ELEMENT_SIZE_MISMATCH Transient, DuplicateTransient
		unsigned char                                              UnknownData_X4I8[0x10];                                  // 0x1020(0x0010) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
		class FString                                              CallFunc_Conv_TextToString_ReturnValue;                  // 0x1030(0x0010) ZeroConstructor, Transient, DuplicateTransient
		class FString                                              CallFunc_Conv_TextToString_ReturnValue2;                 // 0x1040(0x0010) ZeroConstructor, Transient, DuplicateTransient
		class APrimalBuff_MissionData*                             K2Node_CustomEvent_MissionDataBuff;                      // 0x1050(0x0008) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		class AMissionType*                                        K2Node_CustomEvent_Mission;                              // 0x1058(0x0008) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		class FString                                              K2Node_Select_ReturnValue4;                              // 0x1060(0x0010) ZeroConstructor, Transient, DuplicateTransient
		bool                                                       K2Node_Select4_CmpSuccess;                               // 0x1070(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_IsValid_ReturnValue;                            // 0x1071(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_G9IN[0x6];                                   // 0x1072(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FText                                                CallFunc_Conv_StringToText_ReturnValue5;                 // 0x1078(0x0018) ELEMENT_SIZE_MISMATCH Transient, DuplicateTransient
		unsigned char                                              UnknownData_I2MU[0x10];                                  // 0x1090(0x0010) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
		struct FFormatTextArgument                                 K2Node_MakeStruct_FormatTextArgument9;                   // 0x10A0(0x0050) Transient, DuplicateTransient
		class FText                                                CallFunc_Conv_StringToText_ReturnValue6;                 // 0x10F0(0x0018) ELEMENT_SIZE_MISMATCH Transient, DuplicateTransient
		unsigned char                                              UnknownData_ITHE[0x10];                                  // 0x1108(0x0010) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
		TArray<struct FFormatTextArgument>                         K2Node_MakeArray_Array5;                                 // 0x1118(0x0010) ZeroConstructor, Transient, DuplicateTransient
		struct FFormatTextArgument                                 K2Node_MakeStruct_FormatTextArgument10;                  // 0x1128(0x0050) Transient, DuplicateTransient
		class FText                                                CallFunc_Format_ReturnValue4;                            // 0x1178(0x0018) ELEMENT_SIZE_MISMATCH Transient, DuplicateTransient
		unsigned char                                              UnknownData_G295[0x10];                                  // 0x1190(0x0010) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
		TArray<struct FFormatTextArgument>                         K2Node_MakeArray_Array6;                                 // 0x11A0(0x0010) ZeroConstructor, Transient, DuplicateTransient
		class FString                                              CallFunc_Conv_TextToString_ReturnValue3;                 // 0x11B0(0x0010) ZeroConstructor, Transient, DuplicateTransient
		TArray<struct FMissionAlertEntry>                          K2Node_MakeArray_Array7;                                 // 0x11C0(0x0010) ZeroConstructor, Transient, DuplicateTransient
		class FText                                                CallFunc_Format_ReturnValue5;                            // 0x11D0(0x0018) ELEMENT_SIZE_MISMATCH Transient, DuplicateTransient
		unsigned char                                              UnknownData_3RN3[0x10];                                  // 0x11E8(0x0010) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
		class AShooterCharacter*                                   K2Node_DynamicCast_AsShooterCharacter;                   // 0x11F8(0x0008) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       K2Node_DynamicCast4_CastSuccess;                         // 0x1200(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_BKD7[0x7];                                   // 0x1201(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              CallFunc_Conv_TextToString_ReturnValue4;                 // 0x1208(0x0010) ZeroConstructor, Transient, DuplicateTransient

	public:
		void UserConstructionScript();
		void ReceiveBeginPlay();
		void OnPlayerRemovedFromMissionEvent(class APrimalBuff_MissionData* MissionDataBuff, class AMissionType* Mission, bool bSuccess);
		void OnPlayerAddedToMissionEvent(class APrimalBuff_MissionData* MissionDataBuff, class AMissionType* Mission);
		void ExecuteUbergraph_Buff_MissionData(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
