﻿#pragma once

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
	 * BlueprintGeneratedClass MainMenu.MainMenu_C
	 * Size -> 0x0038 (FullSize[0x04A8] - InheritedSize[0x0470])
	 */
	class AMainMenu_C : public ALevelScriptActor
	{
	public:
		float                                                      Counter;                                                 // 0x0470(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_N5CE[0x4];                                   // 0x0474(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class USphereReflectionCaptureComponent*                   CaptureComp;                                             // 0x0478(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		class UMainMenuUI_C*                                       CallFunc_Create_ReturnValue;                             // 0x0480(0x0008) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		class UGameInstance*                                       CallFunc_GetGameInstance_ReturnValue;                    // 0x0488(0x0008) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		class UShooterGameInstance*                                K2Node_DynamicCast_AsShooterGameInstance;                // 0x0490(0x0008) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       K2Node_DynamicCast_CastSuccess;                          // 0x0498(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_JOPK[0x7];                                   // 0x0499(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class AMatineeActor*                                       MatineeActor_0_ExecuteUbergraph_MainMenu_RefProperty;    // 0x04A0(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor

	public:
		void K2Node_MatineeController_1_MatineeEvent();
		void K2Node_MatineeController_1_Finished();
		void ReceiveBeginPlay();
		void ExecuteUbergraph_MainMenu(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
