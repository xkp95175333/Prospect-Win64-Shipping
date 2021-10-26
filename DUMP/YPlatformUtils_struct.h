// Enum YPlatformUtils.EYAccountLinkingResultCode
enum class EYAccountLinkingResultCode : uint8 {
	Success,
	Failure_InvalidTargetPlatform,
	Failure_WontLoginToCurrentPlatform,
	Failure_NoPlayFabAccountExists,
	Failure_TooManyPlayFabAccountsExist,
	Failure_PlatformAccountAlreadyLinked,
	Failure_CouldNotMergeAccountData,
	Failure_Internal,
	Failure_Azure,
	Failure_PlayFab,
	Failure_Timeout,
	Failure_Unknown,
	EYAccountLinkingResultCode_MAX,
};

// Enum YPlatformUtils.EYFriendsImportResultCode
enum class EYFriendsImportResultCode : uint8 {
	Success,
	Failure_NoUsersToImport,
	Failure_UnsupportedPlatform,
	Failure_Internal,
	Failure_Azure,
	Failure_PlayFab,
	Failure_Unknown,
	EYFriendsImportResultCode_MAX,
};

// Enum YPlatformUtils.EYGamePlatform
enum class EYGamePlatform : uint8 {
	NONE,
	EGS,
	STEAM,
	ALL,
	EYGamePlatform_MAX,
};

// ScriptStruct YPlatformUtils.YLocallyAcceptedLegalAgreements
// Size: 0x20 (Inherited: 0x00)
struct FYLocallyAcceptedLegalAgreements {
	struct FString m_userIdPlatform; // 0x00(0x10)
	int32_t m_NDAVersion; // 0x10(0x04)
	int32_t m_EULAVersion; // 0x14(0x04)
	bool m_hasAcceptedNDA; // 0x18(0x01)
	bool m_hasAcceptedEULA; // 0x19(0x01)
	char pad_1A[0x6]; // 0x1a(0x06)
};

// ScriptStruct YPlatformUtils.YFriendsImportResponse
// Size: 0x08 (Inherited: 0x00)
struct FYFriendsImportResponse {
	enum class EYFriendsImportResultCode resultCode; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	int32_t numOfImportedFriends; // 0x04(0x04)
};

// ScriptStruct YPlatformUtils.YFriendsImportRequest
// Size: 0x20 (Inherited: 0x00)
struct FYFriendsImportRequest {
	struct FString loginIdentityProviderString; // 0x00(0x10)
	struct TArray<struct FString> userIdsPlatform; // 0x10(0x10)
};

// ScriptStruct YPlatformUtils.YFinalizeAccountLinkingResponse
// Size: 0x01 (Inherited: 0x00)
struct FYFinalizeAccountLinkingResponse {
	enum class EYAccountLinkingResultCode resultCode; // 0x00(0x01)
};

// ScriptStruct YPlatformUtils.YFinalizeAccountLinkingRequest
// Size: 0x30 (Inherited: 0x00)
struct FYFinalizeAccountLinkingRequest {
	struct FString targetUserIdPlayFabMaster; // 0x00(0x10)
	struct FString targetUserIdPlatform; // 0x10(0x10)
	struct FString targetPlayFabPlatformName; // 0x20(0x10)
};

