/**
 * Name: ARK_Survival_Evolved
 * Version: Patch_346.14
 */

#include "../SDK.h"

namespace CG
{
	// --------------------------------------------------
	// # Structs Functions
	// --------------------------------------------------
	/**
	 * Function:
	 * 		RVA    -> 0x03987F80
	 * 		Name   -> Function Telemetry.TelemetryFunctionLibrary.ZoneColor
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		float                                              red                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		float                                              green                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		float                                              blue                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UTelemetryFunctionLibrary::STATIC_ZoneColor(float red, float green, float blue)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function Telemetry.TelemetryFunctionLibrary.ZoneColor");
		
		UTelemetryFunctionLibrary_ZoneColor_Params params {};
		params.red = red;
		params.green = green;
		params.blue = blue;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x039880C0
	 * 		Name   -> Function Telemetry.TelemetryFunctionLibrary.Stop
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 */
	void UTelemetryFunctionLibrary::STATIC_Stop()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function Telemetry.TelemetryFunctionLibrary.Stop");
		
		UTelemetryFunctionLibrary_Stop_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x039880F0
	 * 		Name   -> Function Telemetry.TelemetryFunctionLibrary.Start
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		class FString                                      server_ip                                                  (Parm, ZeroConstructor)
	 */
	void UTelemetryFunctionLibrary::STATIC_Start(const class FString& server_ip)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function Telemetry.TelemetryFunctionLibrary.Start");
		
		UTelemetryFunctionLibrary_Start_Params params {};
		params.server_ip = server_ip;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x039881C0
	 * 		Name   -> Function Telemetry.TelemetryFunctionLibrary.SetZoneFlag
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		ETmZoneFlags                                       Flags                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UTelemetryFunctionLibrary::STATIC_SetZoneFlag(ETmZoneFlags Flags)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function Telemetry.TelemetryFunctionLibrary.SetZoneFlag");
		
		UTelemetryFunctionLibrary_SetZoneFlag_Params params {};
		params.Flags = Flags;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03988250
	 * 		Name   -> Function Telemetry.TelemetryFunctionLibrary.SetZoneFilterThreshold
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		int32_t                                            filter_clocks                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UTelemetryFunctionLibrary::STATIC_SetZoneFilterThreshold(int32_t filter_clocks)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function Telemetry.TelemetryFunctionLibrary.SetZoneFilterThreshold");
		
		UTelemetryFunctionLibrary_SetZoneFilterThreshold_Params params {};
		params.filter_clocks = filter_clocks;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x039882E0
	 * 		Name   -> Function Telemetry.TelemetryFunctionLibrary.SetSendBufferSize
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		int32_t                                            buffer_size                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UTelemetryFunctionLibrary::STATIC_SetSendBufferSize(int32_t buffer_size)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function Telemetry.TelemetryFunctionLibrary.SetSendBufferSize");
		
		UTelemetryFunctionLibrary_SetSendBufferSize_Params params {};
		params.buffer_size = buffer_size;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03988370
	 * 		Name   -> Function Telemetry.TelemetryFunctionLibrary.SetSendBufferCount
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		int32_t                                            buffer_count                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UTelemetryFunctionLibrary::STATIC_SetSendBufferCount(int32_t buffer_count)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function Telemetry.TelemetryFunctionLibrary.SetSendBufferCount");
		
		UTelemetryFunctionLibrary_SetSendBufferCount_Params params {};
		params.buffer_count = buffer_count;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03988400
	 * 		Name   -> Function Telemetry.TelemetryFunctionLibrary.SetMaxTimeSpanTrackCount
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		int32_t                                            max_track_count                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UTelemetryFunctionLibrary::STATIC_SetMaxTimeSpanTrackCount(int32_t max_track_count)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function Telemetry.TelemetryFunctionLibrary.SetMaxTimeSpanTrackCount");
		
		UTelemetryFunctionLibrary_SetMaxTimeSpanTrackCount_Params params {};
		params.max_track_count = max_track_count;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03988490
	 * 		Name   -> Function Telemetry.TelemetryFunctionLibrary.SetCaptureMask
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		int32_t                                            capture_mask                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UTelemetryFunctionLibrary::STATIC_SetCaptureMask(int32_t capture_mask)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function Telemetry.TelemetryFunctionLibrary.SetCaptureMask");
		
		UTelemetryFunctionLibrary_SetCaptureMask_Params params {};
		params.capture_mask = capture_mask;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03988530
	 * 		Name   -> Function Telemetry.TelemetryFunctionLibrary.Running
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 */
	int32_t UTelemetryFunctionLibrary::STATIC_Running()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function Telemetry.TelemetryFunctionLibrary.Running");
		
		UTelemetryFunctionLibrary_Running_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03988580
	 * 		Name   -> Function Telemetry.TelemetryFunctionLibrary.RenameZone
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		int32_t                                            capture_mask                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class FString                                      Name                                                       (Parm, ZeroConstructor)
	 */
	void UTelemetryFunctionLibrary::STATIC_RenameZone(int32_t capture_mask, const class FString& Name)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function Telemetry.TelemetryFunctionLibrary.RenameZone");
		
		UTelemetryFunctionLibrary_RenameZone_Params params {};
		params.capture_mask = capture_mask;
		params.Name = Name;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x039886B0
	 * 		Name   -> Function Telemetry.TelemetryFunctionLibrary.Ploti
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		int32_t                                            capture_mask                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class FString                                      Name                                                       (Parm, ZeroConstructor)
	 * 		int32_t                                            Value                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UTelemetryFunctionLibrary::STATIC_Ploti(int32_t capture_mask, const class FString& Name, int32_t Value)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function Telemetry.TelemetryFunctionLibrary.Ploti");
		
		UTelemetryFunctionLibrary_Ploti_Params params {};
		params.capture_mask = capture_mask;
		params.Name = Name;
		params.Value = Value;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03988830
	 * 		Name   -> Function Telemetry.TelemetryFunctionLibrary.Plotf
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		int32_t                                            capture_mask                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class FString                                      Name                                                       (Parm, ZeroConstructor)
	 * 		float                                              Value                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UTelemetryFunctionLibrary::STATIC_Plotf(int32_t capture_mask, const class FString& Name, float Value)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function Telemetry.TelemetryFunctionLibrary.Plotf");
		
		UTelemetryFunctionLibrary_Plotf_Params params {};
		params.capture_mask = capture_mask;
		params.Name = Name;
		params.Value = Value;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x039889B0
	 * 		Name   -> Function Telemetry.TelemetryFunctionLibrary.Message
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		int32_t                                            capture_mask                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		ETmMessageFlags                                    Flags                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class FString                                      Message                                                    (Parm, ZeroConstructor)
	 */
	void UTelemetryFunctionLibrary::STATIC_Message(int32_t capture_mask, ETmMessageFlags Flags, const class FString& Message)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function Telemetry.TelemetryFunctionLibrary.Message");
		
		UTelemetryFunctionLibrary_Message_Params params {};
		params.capture_mask = capture_mask;
		params.Flags = Flags;
		params.Message = Message;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03988B30
	 * 		Name   -> Function Telemetry.TelemetryFunctionLibrary.LeaveAccumulationZone
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		int32_t                                            capture_mask                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FTmAccumulator                              accumulator                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	struct FTmAccumulator UTelemetryFunctionLibrary::STATIC_LeaveAccumulationZone(int32_t capture_mask, const struct FTmAccumulator& accumulator)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function Telemetry.TelemetryFunctionLibrary.LeaveAccumulationZone");
		
		UTelemetryFunctionLibrary_LeaveAccumulationZone_Params params {};
		params.capture_mask = capture_mask;
		params.accumulator = accumulator;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03988C40
	 * 		Name   -> Function Telemetry.TelemetryFunctionLibrary.Leave
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		int32_t                                            capture_mask                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UTelemetryFunctionLibrary::STATIC_Leave(int32_t capture_mask)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function Telemetry.TelemetryFunctionLibrary.Leave");
		
		UTelemetryFunctionLibrary_Leave_Params params {};
		params.capture_mask = capture_mask;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03988CE0
	 * 		Name   -> Function Telemetry.TelemetryFunctionLibrary.GetSendBufferSize
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 */
	int32_t UTelemetryFunctionLibrary::STATIC_GetSendBufferSize()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function Telemetry.TelemetryFunctionLibrary.GetSendBufferSize");
		
		UTelemetryFunctionLibrary_GetSendBufferSize_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03988D30
	 * 		Name   -> Function Telemetry.TelemetryFunctionLibrary.GetSendBufferCount
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 */
	int32_t UTelemetryFunctionLibrary::STATIC_GetSendBufferCount()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function Telemetry.TelemetryFunctionLibrary.GetSendBufferCount");
		
		UTelemetryFunctionLibrary_GetSendBufferCount_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03988D80
	 * 		Name   -> Function Telemetry.TelemetryFunctionLibrary.GetMaxTimeSpanTrackCount
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 */
	int32_t UTelemetryFunctionLibrary::STATIC_GetMaxTimeSpanTrackCount()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function Telemetry.TelemetryFunctionLibrary.GetMaxTimeSpanTrackCount");
		
		UTelemetryFunctionLibrary_GetMaxTimeSpanTrackCount_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03988DD0
	 * 		Name   -> Function Telemetry.TelemetryFunctionLibrary.GetCaptureMask
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 */
	int32_t UTelemetryFunctionLibrary::STATIC_GetCaptureMask()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function Telemetry.TelemetryFunctionLibrary.GetCaptureMask");
		
		UTelemetryFunctionLibrary_GetCaptureMask_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03988E20
	 * 		Name   -> Function Telemetry.TelemetryFunctionLibrary.EnterAccumulationZone
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		int32_t                                            capture_mask                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FTmAccumulator                              accumulator                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	struct FTmAccumulator UTelemetryFunctionLibrary::STATIC_EnterAccumulationZone(int32_t capture_mask, const struct FTmAccumulator& accumulator)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function Telemetry.TelemetryFunctionLibrary.EnterAccumulationZone");
		
		UTelemetryFunctionLibrary_EnterAccumulationZone_Params params {};
		params.capture_mask = capture_mask;
		params.accumulator = accumulator;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03988F30
	 * 		Name   -> Function Telemetry.TelemetryFunctionLibrary.Enter
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		int32_t                                            capture_mask                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		ETmZoneFlags                                       Flags                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class FString                                      Name                                                       (Parm, ZeroConstructor)
	 */
	void UTelemetryFunctionLibrary::STATIC_Enter(int32_t capture_mask, ETmZoneFlags Flags, const class FString& Name)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function Telemetry.TelemetryFunctionLibrary.Enter");
		
		UTelemetryFunctionLibrary_Enter_Params params {};
		params.capture_mask = capture_mask;
		params.Flags = Flags;
		params.Name = Name;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x039890B0
	 * 		Name   -> Function Telemetry.TelemetryFunctionLibrary.EndTimeSpan
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		int32_t                                            capture_mask                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		int32_t                                            time_span_id                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UTelemetryFunctionLibrary::STATIC_EndTimeSpan(int32_t capture_mask, int32_t time_span_id)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function Telemetry.TelemetryFunctionLibrary.EndTimeSpan");
		
		UTelemetryFunctionLibrary_EndTimeSpan_Params params {};
		params.capture_mask = capture_mask;
		params.time_span_id = time_span_id;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x039891C0
	 * 		Name   -> Function Telemetry.TelemetryFunctionLibrary.EmitAccumulationZone
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		int32_t                                            capture_mask                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		int32_t                                            Flags                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		int32_t                                            Count                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FTmAccumulator                              accumulated_clocks                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class FString                                      zone_name                                                  (Parm, ZeroConstructor)
	 */
	void UTelemetryFunctionLibrary::STATIC_EmitAccumulationZone(int32_t capture_mask, int32_t Flags, int32_t Count, const struct FTmAccumulator& accumulated_clocks, const class FString& zone_name)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function Telemetry.TelemetryFunctionLibrary.EmitAccumulationZone");
		
		UTelemetryFunctionLibrary_EmitAccumulationZone_Params params {};
		params.capture_mask = capture_mask;
		params.Flags = Flags;
		params.Count = Count;
		params.accumulated_clocks = accumulated_clocks;
		params.zone_name = zone_name;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x039893C0
	 * 		Name   -> Function Telemetry.TelemetryFunctionLibrary.BeginTimeSpan
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		int32_t                                            capture_mask                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		int32_t                                            time_span_id                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		int32_t                                            Flags                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class FString                                      time_span_name                                             (Parm, ZeroConstructor)
	 */
	void UTelemetryFunctionLibrary::STATIC_BeginTimeSpan(int32_t capture_mask, int32_t time_span_id, int32_t Flags, const class FString& time_span_name)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function Telemetry.TelemetryFunctionLibrary.BeginTimeSpan");
		
		UTelemetryFunctionLibrary_BeginTimeSpan_Params params {};
		params.capture_mask = capture_mask;
		params.time_span_id = time_span_id;
		params.Flags = Flags;
		params.time_span_name = time_span_name;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UTelemetryFunctionLibrary.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UTelemetryFunctionLibrary::StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Telemetry.TelemetryFunctionLibrary");
		return ptr;
	}

}


