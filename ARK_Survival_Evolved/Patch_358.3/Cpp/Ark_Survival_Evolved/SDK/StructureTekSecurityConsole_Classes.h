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
	 * BlueprintGeneratedClass StructureTekSecurityConsole.StructureTekSecurityConsole_C
	 * Size -> 0x0109 (FullSize[0x0F19] - InheritedSize[0x0E10])
	 */
	class AStructureTekSecurityConsole_C : public AStructureItemContainerBaseBP_C
	{
	public:
		class UParticleSystemComponent*                            HolographicControls;                                     // 0x0E10(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		class UPrimalInventoryBP_TekSecurityConsole_C*             PrimalInventoryBP_TekSecurityConsole_C1;                 // 0x0E18(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		TArray<class APrimalStructure*>                            LinkedCameras_Server;                                    // 0x0E20(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, SaveGame, PersistentInstance, NativeAccessSpecifierPublic
		int32_t                                                    CameraIndex;                                             // 0x0E30(0x0004) Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, SaveGame, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_M45C[0x4];                                   // 0x0E34(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class ARemoteCamera_Character_BP_C*                        SpawnedCameraCharacter;                                  // 0x0E38(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor
		TArray<struct FRemoteCameraData>                           LinkedCameraData_Client;                                 // 0x0E40(0x0010) Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, SaveGame, PersistentInstance, NativeAccessSpecifierPublic
		bool                                                       CameraActive;                                            // 0x0E50(0x0001) Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_P8DB[0x3];                                   // 0x0E51(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      MaxCameraDistance;                                       // 0x0E54(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      ConsoleID;                                               // 0x0E58(0x0004) Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, SaveGame, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		int32_t                                                    MaxLinkedCameras;                                        // 0x0E5C(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		class FString                                              DefaultCameraName;                                       // 0x0E60(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance
		int32_t                                                    K2Node_Event_CameraIndex;                                // 0x0E70(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_B1PX[0x4];                                   // 0x0E74(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		unsigned char                                              K2Node_DynamicCast_AsSecurityConsoleInterface_C[0x10];   // 0x0E78(0x0010) UNKNOWN PROPERTY: InterfaceProperty StructureTekSecurityConsole.StructureTekSecurityConsole_C.K2Node_DynamicCast_AsSecurityConsoleInterface_C
		bool                                                       K2Node_DynamicCast_CastSuccess;                          // 0x0E88(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_IsValid_ReturnValue;                            // 0x0E89(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_5L5B[0x2];                                   // 0x0E8A(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FRotator                                            K2Node_Event_NewRotation;                                // 0x0E8C(0x000C) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		class FString                                              K2Node_Event_Name;                                       // 0x0E98(0x0010) ZeroConstructor, Transient, DuplicateTransient
		class APrimalStructure*                                    K2Node_Event_NewStructure;                               // 0x0EA8(0x0008) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		class APrimalStructure*                                    K2Node_Event_CameraToRemove;                             // 0x0EB0(0x0008) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		int32_t                                                    K2Node_CustomEvent_Index2;                               // 0x0EB8(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_J7IZ[0x4];                                   // 0x0EBC(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              K2Node_CustomEvent_Name;                                 // 0x0EC0(0x0010) ZeroConstructor, Transient, DuplicateTransient
		struct FVector                                             K2Node_CustomEvent_Position;                             // 0x0ED0(0x000C) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		int32_t                                                    K2Node_CustomEvent_Index;                                // 0x0EDC(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		struct FRemoteCameraData                                   K2Node_MakeStruct_RemoteCameraData;                      // 0x0EE0(0x0020) Transient, DuplicateTransient
		int32_t                                                    CallFunc_Array_Length_ReturnValue;                       // 0x0F00(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_LessEqual_IntInt_ReturnValue;                   // 0x0F04(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_IsValid_ReturnValue2;                           // 0x0F05(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_J9FS[0x2];                                   // 0x0F06(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		unsigned char                                              K2Node_DynamicCast_AsSecurityConsoleInterface_C2[0x10];  // 0x0F08(0x0010) UNKNOWN PROPERTY: InterfaceProperty StructureTekSecurityConsole.StructureTekSecurityConsole_C.K2Node_DynamicCast_AsSecurityConsoleInterface_C2
		bool                                                       K2Node_DynamicCast2_CastSuccess;                         // 0x0F18(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor

	public:
		void GetConsoleData(float* ID, class FString* Name, bool* CanAddCamera);
		void CanAddCamera(bool* Allowed);
		void GetConsoleID(float* ID);
		void GetCameraData(TArray<class APrimalStructure*>* Cameras, int32_t* index);
		void GetCameraLocation(struct FVector* CameraViewPoint, struct FRotator* CameraRotation);
		class FString GetCameraName(struct FRemoteCameraData* RemoteCameraData, int32_t index);
		void OnContainerRenamed();
		void BPContainerActivated();
		bool CanCameraBeAdded();
		void VerifyCameraList();
		void BPPlacedStructure(class APlayerController* ForPC);
		void OnStructurePlacementRefreshed();
		void VerifyActiveCamera();
		void ReceiveDestroyed();
		void BPUnstasis();
		void RemoveLinkedCamera(class APrimalStructure* Camera);
		void ReceiveBeginPlay();
		void AddCamera(class APrimalStructure* NewCamera);
		bool BPPreventStasis();
		void BPContainerDeactivated();
		void BPClientDoMultiUse(class APlayerController* ForPC, int32_t ClientUseIndex);
		TArray<struct FMultiUseEntry> BPGetMultiUseEntries(class APlayerController* ForPC, TArray<struct FMultiUseEntry>* MultiUseEntries);
		bool BPTryMultiUse(class APlayerController* ForPC, int32_t UseIndex);
		void UserConstructionScript();
		void SetCurrentCamera(int32_t CameraIndex);
		void UpdateCameraRotation(const struct FRotator& NewRotation);
		void UpdateConsoleName(const class FString& Name);
		void ActivateCamera();
		void AddNewCamera(class APrimalStructure* NewStructure);
		void RemoveCamera(class APrimalStructure* CameraToRemove);
		void ClientAddCamera(int32_t index, const class FString& Name, const struct FVector& Position);
		void ClientRemoveCamera(int32_t index);
		void ExecuteUbergraph_StructureTekSecurityConsole(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
