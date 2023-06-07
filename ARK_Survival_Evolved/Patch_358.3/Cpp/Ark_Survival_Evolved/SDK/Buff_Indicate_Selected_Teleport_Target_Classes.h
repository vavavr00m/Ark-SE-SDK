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
	 * BlueprintGeneratedClass Buff_Indicate_Selected_Teleport_Target.Buff_Indicate_Selected_Teleport_Target_C
	 * Size -> 0x0048 (FullSize[0x09C8] - InheritedSize[0x0980])
	 */
	class ABuff_Indicate_Selected_Teleport_Target_C : public ABuff_Base_C
	{
	public:
		struct FBPNetExecParams                                    K2Node_MakeStruct_BPNetExecParams;                       // 0x0980(0x0040) Transient, DuplicateTransient
		class APlayerController*                                   K2Node_CustomEvent_NewParam;                             // 0x09C0(0x0008) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor

	public:
		bool BPClientHandleNetExecCommand(const class FName& CommandName, struct FBPNetExecParams* ExecParams, class APlayerController* ForPC);
		void UserConstructionScript();
		void toggleactiveontargetingclient(class APlayerController* NewParam);
		void ExecuteUbergraph_Buff_Indicate_Selected_Teleport_Target(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
