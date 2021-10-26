// Enum Backend.EYLoginResult
enum class EYLoginResult : uint8 {
	OK,
	InvalidToken,
	AlreadyConnected,
	InvalidVersion,
	BadResponse,
	ServerUnavailable,
	SteamUnavailable,
	NotLoggedInToSteam,
	SteamAuthorizationFailed,
	EpicAuthorizationFailed,
	AuthorizationFailed,
	LegalAgreementsNotAccepted,
	AcceptingLegalAgreementsFailed,
	EYLoginResult_MAX,
};

// ScriptStruct Backend.YBackendInitializationData
// Size: 0xc8 (Inherited: 0x00)
struct FYBackendInitializationData {
	struct FString m_token; // 0x00(0x10)
	struct FString m_jwt; // 0x10(0x10)
	struct FString m_commandLine; // 0x20(0x10)
	struct FString m_host; // 0x30(0x10)
	struct FString m_region; // 0x40(0x10)
	struct FString m_port; // 0x50(0x10)
	struct FString m_loginAuth; // 0x60(0x10)
	struct FString m_loginName; // 0x70(0x10)
	struct FString m_networkAdress; // 0x80(0x10)
	struct FString m_loginPassword; // 0x90(0x10)
	bool m_isDevelopment; // 0xa0(0x01)
	char pad_A1[0x3]; // 0xa1(0x03)
	int32_t m_instanceType; // 0xa4(0x04)
	struct FString m_playfabId; // 0xa8(0x10)
	struct FString m_userId; // 0xb8(0x10)
};

// ScriptStruct Backend.YEmptyResponseData
// Size: 0x01 (Inherited: 0x00)
struct FYEmptyResponseData {
	char pad_0[0x1]; // 0x00(0x01)
};

// ScriptStruct Backend.YTestResponseData
// Size: 0x68 (Inherited: 0x00)
struct FYTestResponseData {
	int32_t IntegerField; // 0x00(0x04)
	float FloatField; // 0x04(0x04)
	bool BooleanField; // 0x08(0x01)
	char pad_9[0x7]; // 0x09(0x07)
	struct FString StringField; // 0x10(0x10)
	struct TArray<struct FString> StringArray; // 0x20(0x10)
	struct TArray<uint32_t> SGD; // 0x30(0x10)
	struct FTestDataStruct DataStruct; // 0x40(0x18)
	struct TArray<struct FTestStructForArray> ArrayOfStructs; // 0x58(0x10)
};

// ScriptStruct Backend.TestStructForArray
// Size: 0x38 (Inherited: 0x00)
struct FTestStructForArray {
	struct FTestDataStruct InternalDataStruct; // 0x00(0x18)
	struct FString InternalStringField; // 0x18(0x10)
	struct TArray<struct FString> InternalStringArray; // 0x28(0x10)
};

// ScriptStruct Backend.TestDataStruct
// Size: 0x18 (Inherited: 0x00)
struct FTestDataStruct {
	uint16_t UInt16Field; // 0x00(0x02)
	char pad_2[0x6]; // 0x02(0x06)
	int64_t Int64Field; // 0x08(0x08)
	int8_t Int8Field; // 0x10(0x01)
	char pad_11[0x7]; // 0x11(0x07)
};

// ScriptStruct Backend.YTestRequestData
// Size: 0x68 (Inherited: 0x00)
struct FYTestRequestData {
	int32_t IntegerField; // 0x00(0x04)
	float FloatField; // 0x04(0x04)
	bool BooleanField; // 0x08(0x01)
	char pad_9[0x7]; // 0x09(0x07)
	struct FString StringField; // 0x10(0x10)
	struct TArray<struct FString> StringArray; // 0x20(0x10)
	struct TArray<uint32_t> SGD; // 0x30(0x10)
	struct FTestDataStruct DataStruct; // 0x40(0x18)
	struct TArray<struct FTestStructForArray> ArrayOfStructs; // 0x58(0x10)
};

