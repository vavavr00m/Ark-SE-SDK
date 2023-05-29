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
	 * Class ScriptPlugin.ScriptBlueprintGeneratedClass
	 * Size -> 0x0030 (FullSize[0x0208] - InheritedSize[0x01D8])
	 */
	class UScriptBlueprintGeneratedClass : public UBlueprintGeneratedClass
	{
	public:
		TArray<unsigned char>                                      ByteCode;                                                // 0x01D8(0x0010) ZeroConstructor
		class FString                                              SourceCode;                                              // 0x01E8(0x0010) ZeroConstructor
		TArray<class UProperty*>                                   ScriptProperties;                                        // 0x01F8(0x0010) ZeroConstructor

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class ScriptPlugin.ScriptBlueprint
	 * Size -> 0x0040 (FullSize[0x0100] - InheritedSize[0x00C0])
	 */
	class UScriptBlueprint : public UBlueprint
	{
	public:
		class FString                                              SourceFilePath;                                          // 0x00C0(0x0010) Edit, BlueprintVisible, ZeroConstructor, EditConst
		class FString                                              SourceFileTimestamp;                                     // 0x00D0(0x0010) Edit, ZeroConstructor, EditConst
		TArray<unsigned char>                                      ByteCode;                                                // 0x00E0(0x0010) ZeroConstructor
		class FString                                              SourceCode;                                              // 0x00F0(0x0010) ZeroConstructor

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class ScriptPlugin.ScriptComponent
	 * Size -> 0x0008 (FullSize[0x00E0] - InheritedSize[0x00D8])
	 */
	class UScriptComponent : public UActorComponent
	{
	public:
		unsigned char                                              UnknownData_4415[0x8];                                   // 0x00D8(0x0008) MISSED OFFSET (PADDING)

	public:
		bool CallScriptFunction(const class FString& FunctionName);
		static UClass* StaticClass();
	};

	/**
	 * Class ScriptPlugin.ScriptContext
	 * Size -> 0x0008 (FullSize[0x0030] - InheritedSize[0x0028])
	 */
	class UScriptContext : public UObject
	{
	public:
		unsigned char                                              UnknownData_UC2F[0x8];                                   // 0x0028(0x0008) MISSED OFFSET (PADDING)

	public:
		void CallScriptFunction(const class FString& FunctionName);
		static UClass* StaticClass();
	};

	/**
	 * Class ScriptPlugin.ScriptContextComponent
	 * Size -> 0x0008 (FullSize[0x00E0] - InheritedSize[0x00D8])
	 */
	class UScriptContextComponent : public UActorComponent
	{
	public:
		unsigned char                                              UnknownData_IHH2[0x8];                                   // 0x00D8(0x0008) MISSED OFFSET (PADDING)

	public:
		void CallScriptFunction(const class FString& FunctionName);
		static UClass* StaticClass();
	};

	/**
	 * Class ScriptPlugin.ScriptTestActor
	 * Size -> 0x0018 (FullSize[0x0480] - InheritedSize[0x0468])
	 */
	class AScriptTestActor : public AActor
	{
	public:
		class FString                                              TestString;                                              // 0x0468(0x0010) Edit, BlueprintVisible, ZeroConstructor
		float                                                      TestValue;                                               // 0x0478(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		bool                                                       TestBool;                                                // 0x047C(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_K8ZQ[0x3];                                   // 0x047D(0x0003) MISSED OFFSET (PADDING)

	public:
		float TestFunction(float InValue, float InFactor, bool bMultiply);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
