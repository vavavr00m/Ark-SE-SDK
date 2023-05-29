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
	 * BlueprintGeneratedClass Sign_WarMap.Sign_WarMap_C
	 * Size -> 0x0049 (FullSize[0x0B31] - InheritedSize[0x0AE8])
	 */
	class ASign_WarMap_C : public AStructureBaseBP_C
	{
	public:
		class UStructurePaintingComponent*                         StructurePainting1;                                      // 0x0AE8(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		class UWorld*                                              CallFunc_K2_GetWorld_ReturnValue;                        // 0x0AF0(0x0008) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		class AWorldSettings*                                      CallFunc_GetWorldSettings_ReturnValue;                   // 0x0AF8(0x0008) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		class APrimalWorldSettings*                                K2Node_DynamicCast_AsPrimalWorldSettings;                // 0x0B00(0x0008) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       K2Node_DynamicCast_CastSuccess;                          // 0x0B08(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_5XQC[0x7];                                   // 0x0B09(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class APrimalWorldSettings*                                K2Node_DynamicCast_AsPrimalWorldSettings2;               // 0x0B10(0x0008) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       K2Node_DynamicCast2_CastSuccess;                         // 0x0B18(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_NotEqual_ObjectObject_ReturnValue;              // 0x0B19(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_IsDedicatedServer_ReturnValue;                  // 0x0B1A(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_ZQEN[0x5];                                   // 0x0B1B(0x0005) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UMaterialInterface*                                  CallFunc_GetMaterial_ReturnValue;                        // 0x0B20(0x0008) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		class UMaterialInstanceDynamic*                            K2Node_DynamicCast_AsMaterialInstanceDynamic;            // 0x0B28(0x0008) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       K2Node_DynamicCast3_CastSuccess;                         // 0x0B30(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor

	public:
		void UserConstructionScript();
		void ReceiveBeginPlay();
		void SetupMat();
		void ExecuteUbergraph_Sign_WarMap(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
