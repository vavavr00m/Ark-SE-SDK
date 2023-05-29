/**
 * Name: Ark_Survival_Evolved
 * Version: Patch_357.9
 */

#include "pch.h"

namespace CG
{
	// --------------------------------------------------
	// # Structs Static Fields
	// --------------------------------------------------
	class TUObjectArray*                                        UObject::GObjects = nullptr;                             // 0x0000(0x0008) PREDEFINED PROPERTY

	// --------------------------------------------------
	// # Structs Functions
	// --------------------------------------------------
	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> 
	 * 		Flags  -> ()
	 */
	TUObjectArray& UObject::GetGlobalObjects()
	{
		return *GObjects;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> 
	 * 		Flags  -> ()
	 */
	std::string UObject::GetName() const
	{
		std::string name(Name.GetName());
		if (Name.Number > 0)
			name += '_' + std::to_string(Name.Number);
		auto pos = name.rfind('/');
		if (pos == std::string::npos)
			return name;
		return name.substr(pos + 1);
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> 
	 * 		Flags  -> ()
	 */
	std::string UObject::GetFullName() const
	{
		std::string name;
		if (Class != nullptr)
		{
			std::string temp;
			for (auto p = Outer; p; p = p->Outer)
			{
				temp = p->GetName() + "." + temp;
			}
			name = Class->GetName();
			name += " ";
			name += temp;
			name += GetName();
		}
		return name;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> 
	 * 		Flags  -> ()
	 * Parameters:
	 * 		const std::string&                                 name
	 */
	UClass* UObject::FindClass(const std::string& name)
	{
		return FindObject<UClass>(name);
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> 
	 * 		Flags  -> ()
	 * Parameters:
	 * 		UClass*                                            cmp
	 */
	bool UObject::IsA(UClass* cmp) const
	{
		for (auto super = Class; super; super = static_cast<UClass*>(super->SuperField))
		{
			if (super == cmp)
				return true;
		}
		
		return false;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function CoreUObject.Object.ExecuteUbergraph
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UObject::ExecuteUbergraph(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CoreUObject.Object.ExecuteUbergraph");
		
		UObject_ExecuteUbergraph_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> 
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UFunction*                                   function
	 * 		void*                                              parms
	 */
	void UObject::ProcessEvent(class UFunction* function, void* parms)
	{
		GetVFunction<void(*)(UObject*, class UFunction*, void*)>(this, PROCESS_EVENTS_INDEX)(this, function, parms);
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UObject.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UObject::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class CoreUObject.Object");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UInterface.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UInterface::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class CoreUObject.Interface");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UGCObjectReferencer.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UGCObjectReferencer::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class CoreUObject.GCObjectReferencer");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UTextBuffer.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UTextBuffer::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class CoreUObject.TextBuffer");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UField.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UField::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class CoreUObject.Field");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UStruct.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UStruct::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class CoreUObject.Struct");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UScriptStruct.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UScriptStruct::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class CoreUObject.ScriptStruct");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UPackage.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UPackage::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class CoreUObject.Package");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> 
	 * 		Flags  -> ()
	 */
	UObject* UClass::CreateDefaultObject()
	{
		return GetVFunction<UObject*(*)(UClass*)>(this, CREATE_DEFAULT_OBJECT_INDEX)(this);
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UClass.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UClass::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class CoreUObject.Class");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UFunction.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UFunction::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class CoreUObject.Function");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UPackageMap.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UPackageMap::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class CoreUObject.PackageMap");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UEnum.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UEnum::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class CoreUObject.Enum");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ULinker.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ULinker::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class CoreUObject.Linker");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ULinkerLoad.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ULinkerLoad::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class CoreUObject.LinkerLoad");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ULinkerSave.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ULinkerSave::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class CoreUObject.LinkerSave");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UMetaData.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UMetaData::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class CoreUObject.MetaData");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UObjectRedirector.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UObjectRedirector::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class CoreUObject.ObjectRedirector");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UProperty.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UProperty::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class CoreUObject.Property");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UNumericProperty.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UNumericProperty::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class CoreUObject.NumericProperty");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UArrayProperty.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UArrayProperty::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class CoreUObject.ArrayProperty");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UObjectPropertyBase.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UObjectPropertyBase::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class CoreUObject.ObjectPropertyBase");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAssetObjectProperty.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAssetObjectProperty::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class CoreUObject.AssetObjectProperty");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAssetClassProperty.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAssetClassProperty::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class CoreUObject.AssetClassProperty");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBoolProperty.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBoolProperty::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class CoreUObject.BoolProperty");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UByteProperty.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UByteProperty::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class CoreUObject.ByteProperty");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UObjectProperty.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UObjectProperty::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class CoreUObject.ObjectProperty");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UClassProperty.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UClassProperty::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class CoreUObject.ClassProperty");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UDelegateProperty.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UDelegateProperty::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class CoreUObject.DelegateProperty");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UDoubleProperty.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UDoubleProperty::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class CoreUObject.DoubleProperty");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UFloatProperty.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UFloatProperty::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class CoreUObject.FloatProperty");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UIntProperty.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UIntProperty::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class CoreUObject.IntProperty");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UInt16Property.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UInt16Property::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class CoreUObject.Int16Property");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UInt64Property.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UInt64Property::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class CoreUObject.Int64Property");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UInt8Property.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UInt8Property::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class CoreUObject.Int8Property");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UInterfaceProperty.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UInterfaceProperty::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class CoreUObject.InterfaceProperty");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ULazyObjectProperty.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ULazyObjectProperty::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class CoreUObject.LazyObjectProperty");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UMulticastDelegateProperty.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UMulticastDelegateProperty::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class CoreUObject.MulticastDelegateProperty");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UNameProperty.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UNameProperty::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class CoreUObject.NameProperty");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UStrProperty.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UStrProperty::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class CoreUObject.StrProperty");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UStructProperty.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UStructProperty::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class CoreUObject.StructProperty");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UUInt16Property.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UUInt16Property::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class CoreUObject.UInt16Property");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UUInt32Property.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UUInt32Property::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class CoreUObject.UInt32Property");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UUInt64Property.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UUInt64Property::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class CoreUObject.UInt64Property");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UWeakObjectProperty.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UWeakObjectProperty::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class CoreUObject.WeakObjectProperty");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UTextProperty.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UTextProperty::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class CoreUObject.TextProperty");
		return ptr;
	}

	FMatrix FMatrix::operator *(const FMatrix& other) const
	{
		FMatrix ret;

		ret.XPlane.X = XPlane.X * other.XPlane.X + XPlane.Y * other.YPlane.X + XPlane.Z * other.ZPlane.X + XPlane.W * other.WPlane.X;
		ret.XPlane.Y = XPlane.X * other.XPlane.Y + XPlane.Y * other.YPlane.Y + XPlane.Z * other.ZPlane.Y + XPlane.W * other.WPlane.Y;
		ret.XPlane.Z = XPlane.X * other.XPlane.Z + XPlane.Y * other.YPlane.Z + XPlane.Z * other.ZPlane.Z + XPlane.W * other.WPlane.Z;
		ret.XPlane.W = XPlane.X * other.XPlane.W + XPlane.Y * other.YPlane.W + XPlane.Z * other.ZPlane.W + XPlane.W * other.WPlane.W;

		ret.YPlane.X = YPlane.X * other.XPlane.X + YPlane.Y * other.YPlane.X + YPlane.Z * other.ZPlane.X + YPlane.W * other.WPlane.X;
		ret.YPlane.Y = YPlane.X * other.XPlane.Y + YPlane.Y * other.YPlane.Y + YPlane.Z * other.ZPlane.Y + YPlane.W * other.WPlane.Y;
		ret.YPlane.Z = YPlane.X * other.XPlane.Z + YPlane.Y * other.YPlane.Z + YPlane.Z * other.ZPlane.Z + YPlane.W * other.WPlane.Z;
		ret.YPlane.W = YPlane.X * other.XPlane.W + YPlane.Y * other.YPlane.W + YPlane.Z * other.ZPlane.W + YPlane.W * other.WPlane.W;

		ret.ZPlane.X = ZPlane.X * other.XPlane.X + ZPlane.Y * other.YPlane.X + ZPlane.Z * other.ZPlane.X + ZPlane.W * other.WPlane.X;
		ret.ZPlane.Y = ZPlane.X * other.XPlane.Y + ZPlane.Y * other.YPlane.Y + ZPlane.Z * other.ZPlane.Y + ZPlane.W * other.WPlane.Y;
		ret.ZPlane.Z = ZPlane.X * other.XPlane.Z + ZPlane.Y * other.YPlane.Z + ZPlane.Z * other.ZPlane.Z + ZPlane.W * other.WPlane.Z;
		ret.ZPlane.W = ZPlane.X * other.XPlane.W + ZPlane.Y * other.YPlane.W + ZPlane.Z * other.ZPlane.W + ZPlane.W * other.WPlane.W;

		ret.WPlane.X = WPlane.X * other.XPlane.X + WPlane.Y * other.YPlane.X + WPlane.Z * other.ZPlane.X + WPlane.W * other.WPlane.X;
		ret.WPlane.Y = WPlane.X * other.XPlane.Y + WPlane.Y * other.YPlane.Y + WPlane.Z * other.ZPlane.Y + WPlane.W * other.WPlane.Y;
		ret.WPlane.Z = WPlane.X * other.XPlane.Z + WPlane.Y * other.YPlane.Z + WPlane.Z * other.ZPlane.Z + WPlane.W * other.WPlane.Z;
		ret.WPlane.W = WPlane.X * other.XPlane.W + WPlane.Y * other.YPlane.W + WPlane.Z * other.ZPlane.W + WPlane.W * other.WPlane.W;

		return ret;
	}

	FMatrix UObject_FTransform::ToMatrixWithScale() const
	{
		FMatrix OutMatrix;
		OutMatrix.WPlane.X = Translation.X;
		OutMatrix.WPlane.Y = Translation.Y;
		OutMatrix.WPlane.Z = Translation.Z;

		const float x2 = Rotation.X + Rotation.X;
		const float y2 = Rotation.Y + Rotation.Y;
		const float z2 = Rotation.Z + Rotation.Z;

		{
			const float xx2 = Rotation.X * x2;
			const float yy2 = Rotation.Y * y2;
			const float zz2 = Rotation.Z * z2;

			OutMatrix.XPlane.X = (1.0f - (yy2 + zz2)) * Scale3D.X;
			OutMatrix.YPlane.Y = (1.0f - (xx2 + zz2)) * Scale3D.Y;
			OutMatrix.ZPlane.Z = (1.0f - (xx2 + yy2)) * Scale3D.Z;
		}

		{
			const float yz2 = Rotation.Y * z2;
			const float wx2 = Rotation.W * x2;

			OutMatrix.ZPlane.Y = (yz2 - wx2) * Scale3D.Z;
			OutMatrix.YPlane.Z = (yz2 + wx2) * Scale3D.Y;
		}

		{
			const float xy2 = Rotation.X * y2;
			const float wz2 = Rotation.W * z2;

			OutMatrix.YPlane.X = (xy2 - wz2) * Scale3D.Y;
			OutMatrix.XPlane.Y = (xy2 + wz2) * Scale3D.X;
		}

		{
			const float xz2 = Rotation.X * z2;
			const float wy2 = Rotation.W * y2;

			OutMatrix.ZPlane.X = (xz2 + wy2) * Scale3D.Z;
			OutMatrix.XPlane.Z = (xz2 - wy2) * Scale3D.X;
		}

		OutMatrix.XPlane.W = 0.0f;
		OutMatrix.YPlane.W = 0.0f;
		OutMatrix.ZPlane.W = 0.0f;
		OutMatrix.WPlane.W = 1.0f;

		return OutMatrix;
	}
}


