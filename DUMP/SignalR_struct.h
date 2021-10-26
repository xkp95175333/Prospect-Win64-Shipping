// ScriptStruct SignalR.NegotiationResponse
// Size: 0x68 (Inherited: 0x00)
struct FNegotiationResponse {
	int32_t NegotiateVersion; // 0x00(0x04)
	char pad_4[0x4]; // 0x04(0x04)
	struct FString ConnectionId; // 0x08(0x10)
	struct FString ConnectionToken; // 0x18(0x10)
	struct FString URL; // 0x28(0x10)
	struct FString AccessToken; // 0x38(0x10)
	struct FString Error; // 0x48(0x10)
	struct TArray<struct FNegotiationTransport> AvailableTransports; // 0x58(0x10)
};

// ScriptStruct SignalR.NegotiationTransport
// Size: 0x20 (Inherited: 0x00)
struct FNegotiationTransport {
	struct FString Transport; // 0x00(0x10)
	struct TArray<struct FString> TransferFormats; // 0x10(0x10)
};

