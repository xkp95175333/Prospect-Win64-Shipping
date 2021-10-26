// ScriptStruct DirectLink.DirectLinkMsg_HaveListMessage
// Size: 0x40 (Inherited: 0x00)
struct FDirectLinkMsg_HaveListMessage {
	int32_t SourceStreamPort; // 0x00(0x04)
	int32_t SyncCycle; // 0x04(0x04)
	int32_t MessageCode; // 0x08(0x04)
	char Kind; // 0x0c(0x01)
	char pad_D[0x3]; // 0x0d(0x03)
	struct TArray<char> Payload; // 0x10(0x10)
	struct TArray<int32_t> NodeIds; // 0x20(0x10)
	struct TArray<int32_t> Hashes; // 0x30(0x10)
};

// ScriptStruct DirectLink.DirectLinkMsg_DeltaMessage
// Size: 0x20 (Inherited: 0x00)
struct FDirectLinkMsg_DeltaMessage {
	int32_t DestinationStreamPort; // 0x00(0x04)
	int8_t BatchCode; // 0x04(0x01)
	char pad_5[0x3]; // 0x05(0x03)
	int32_t MessageCode; // 0x08(0x04)
	char Kind; // 0x0c(0x01)
	bool CompressedPayload; // 0x0d(0x01)
	char pad_E[0x2]; // 0x0e(0x02)
	struct TArray<char> Payload; // 0x10(0x10)
};

// ScriptStruct DirectLink.DirectLinkMsg_CloseStreamRequest
// Size: 0x04 (Inherited: 0x00)
struct FDirectLinkMsg_CloseStreamRequest {
	int32_t RecipientStreamPort; // 0x00(0x04)
};

// ScriptStruct DirectLink.DirectLinkMsg_OpenStreamAnswer
// Size: 0x20 (Inherited: 0x00)
struct FDirectLinkMsg_OpenStreamAnswer {
	int32_t RecipientStreamPort; // 0x00(0x04)
	bool bAccepted; // 0x04(0x01)
	char pad_5[0x3]; // 0x05(0x03)
	struct FString Error; // 0x08(0x10)
	int32_t OpenedStreamPort; // 0x18(0x04)
	char pad_1C[0x4]; // 0x1c(0x04)
};

// ScriptStruct DirectLink.DirectLinkMsg_OpenStreamRequest
// Size: 0x28 (Inherited: 0x00)
struct FDirectLinkMsg_OpenStreamRequest {
	bool bRequestFromSource; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	int32_t RequestFromStreamPort; // 0x04(0x04)
	struct FGuid SourceGuid; // 0x08(0x10)
	struct FGuid DestinationGuid; // 0x18(0x10)
};

// ScriptStruct DirectLink.DirectLinkMsg_QueryEndpointState
// Size: 0x01 (Inherited: 0x00)
struct FDirectLinkMsg_QueryEndpointState {
	char pad_0[0x1]; // 0x00(0x01)
};

// ScriptStruct DirectLink.DirectLinkMsg_EndpointState
// Size: 0x78 (Inherited: 0x00)
struct FDirectLinkMsg_EndpointState {
	uint32_t StateRevision; // 0x00(0x04)
	uint32_t MinProtocolVersion; // 0x04(0x04)
	uint32_t ProtocolVersion; // 0x08(0x04)
	char pad_C[0x4]; // 0x0c(0x04)
	struct FString ComputerName; // 0x10(0x10)
	struct FString Username; // 0x20(0x10)
	uint32_t ProcessId; // 0x30(0x04)
	char pad_34[0x4]; // 0x34(0x04)
	struct FString ExecutableName; // 0x38(0x10)
	struct FString NiceName; // 0x48(0x10)
	struct TArray<struct FNamedId> Destinations; // 0x58(0x10)
	struct TArray<struct FNamedId> Sources; // 0x68(0x10)
};

// ScriptStruct DirectLink.NamedId
// Size: 0x28 (Inherited: 0x00)
struct FNamedId {
	struct FString Name; // 0x00(0x10)
	struct FGuid ID; // 0x10(0x10)
	bool bIsPublic; // 0x20(0x01)
	char pad_21[0x7]; // 0x21(0x07)
};

// ScriptStruct DirectLink.DirectLinkMsg_EndpointLifecycle
// Size: 0x08 (Inherited: 0x00)
struct FDirectLinkMsg_EndpointLifecycle {
	char LifecycleState; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	uint32_t EndpointStateRevision; // 0x04(0x04)
};

