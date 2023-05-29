﻿#pragma once

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
	 * BlueprintGeneratedClass Buff_ChainBola.Buff_ChainBola_C
	 * Size -> 0x00A2 (FullSize[0x0A22] - InheritedSize[0x0980])
	 */
	class ABuff_ChainBola_C : public APrimalBuff
	{
	public:
		TArray<class FName>                                        BolaSockets;                                             // 0x0980(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance
		float                                                      MaxBolaDragWeight;                                       // 0x0990(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      MinBolaDragWeight;                                       // 0x0994(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		class AActor*                                              K2Node_Event_ForInstigator;                              // 0x0998(0x0008) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		class APrimalDinoCharacter*                                K2Node_DynamicCast_AsPrimalDinoCharacter;                // 0x09A0(0x0008) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       K2Node_DynamicCast_CastSuccess;                          // 0x09A8(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_1IWD[0x3];                                   // 0x09A9(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    CallFunc_Array_Length_ReturnValue;                       // 0x09AC(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		class APrimalCharacter*                                    K2Node_DynamicCast_AsPrimalCharacter;                    // 0x09B0(0x0008) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       K2Node_DynamicCast2_CastSuccess;                         // 0x09B8(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_ME4X[0x3];                                   // 0x09B9(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    Temp_int_Loop_Counter_Variable;                          // 0x09BC(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_IsDedicatedServer_ReturnValue;                  // 0x09C0(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_Less_IntInt_ReturnValue;                        // 0x09C1(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_YDN8[0x2];                                   // 0x09C2(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FName                                                CallFunc_Array_Get_Item;                                 // 0x09C4(0x0008) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		int32_t                                                    CallFunc_Add_IntInt_ReturnValue;                         // 0x09CC(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		class FName                                                CallFunc_GetSocketBoneName_ReturnValue;                  // 0x09D0(0x0008) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_NotEqual_NameName_ReturnValue;                  // 0x09D8(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_7AIL[0x7];                                   // 0x09D9(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UStaticMeshComponent*                                CallFunc_AddComponent_ReturnValue;                       // 0x09E0(0x0008) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_XPB7[0x8];                                   // 0x09E8(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct UObject_FTransform                                  CallFunc_AddComponent_RelativeTransform_AddComponentDefaultTransform; // 0x09F0(0x0030) Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_IsServer_ReturnValue;                           // 0x0A20(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_SetStaticMesh_ReturnValue;                      // 0x0A21(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor

	public:
		bool BPTryMultiUse(class APlayerController* ForPC, int32_t UseIndex);
		TArray<struct FMultiUseEntry> BPGetMultiUseEntries(class APlayerController* ForPC, TArray<struct FMultiUseEntry>* MultiUseEntries);
		bool BPCustomAllowAddBuff(class APrimalCharacter* forCharacter, class AActor* DamageCauser);
		void UserConstructionScript();
		void BPSetupForInstigator(class AActor* ForInstigator);
		void ExecuteUbergraph_Buff_ChainBola(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
