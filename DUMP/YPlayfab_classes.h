// Class YPlayfab.YPlayfabInstance
// Size: 0x278 (Inherited: 0x28)
struct UYPlayfabInstance : UObject {
	char pad_28[0x78]; // 0x28(0x78)
	struct FYPlayfabAuthenticationContext m_authContext; // 0xa0(0x68)
	struct TArray<struct FYPlayfabMessage> m_completedMessages; // 0x108(0x10)
	struct TArray<struct FYPlayfabMessage> m_notifyMessages; // 0x118(0x10)
	struct TMap<int32_t, struct FYPendingPlayfabMessage> m_pendingMessages; // 0x128(0x50)
	struct FMulticastInlineDelegate OnLoginCompleted; // 0x178(0x10)
	struct TMap<struct FString, struct UYPlayfabService*> m_serviceToExchange; // 0x188(0x50)
	char pad_1D8[0xa0]; // 0x1d8(0xa0)

	void OnRequestPendingMessage(struct FYPlayfabMessage Message, enum class EYPlayfabMessageExecutionType Type); // Function YPlayfab.YPlayfabInstance.OnRequestPendingMessage // (Final|Native|Protected|HasOutParms) // @ game+0x96c380
	void OnRequestMessage(struct FYPlayfabMessage Message); // Function YPlayfab.YPlayfabInstance.OnRequestMessage // (Final|Native|Protected|HasOutParms) // @ game+0x96c2b0
	void OnPendingMessageRequestCompleted(int32_t RequestID); // Function YPlayfab.YPlayfabInstance.OnPendingMessageRequestCompleted // (Native|Protected) // @ game+0x96c220
	void OnNotifyMessage(struct FYPlayfabMessage Message); // Function YPlayfab.YPlayfabInstance.OnNotifyMessage // (Final|Native|Protected|HasOutParms) // @ game+0x96c150
};

// Class YPlayfab.YPlayfabAdminInstance
// Size: 0x278 (Inherited: 0x278)
struct UYPlayfabAdminInstance : UYPlayfabInstance {
};

// Class YPlayfab.YPlayfabClientInstance
// Size: 0x280 (Inherited: 0x278)
struct UYPlayfabClientInstance : UYPlayfabInstance {
	char pad_278[0x8]; // 0x278(0x08)
};

// Class YPlayfab.YPlayfabCommonFunctions
// Size: 0x28 (Inherited: 0x28)
struct UYPlayfabCommonFunctions : UObject {
};

// Class YPlayfab.YPlayfabServerInstance
// Size: 0x300 (Inherited: 0x278)
struct UYPlayfabServerInstance : UYPlayfabInstance {
	char pad_278[0x88]; // 0x278(0x88)
};

