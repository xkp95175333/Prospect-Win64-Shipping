// Enum YPlayfabServices.EYPlayfabMessageExecutionType
enum class EYPlayfabMessageExecutionType : uint8 {
	RequestToPlayfab,
	Response,
	Notify,
	EYPlayfabMessageExecutionType_MAX,
};

// Enum YPlayfabServices.EYPlayfabMessageRequestResponse
enum class EYPlayfabMessageRequestResponse : uint8 {
	Invalid,
	NotLoggedIn,
	Pending,
	Ok,
	EYPlayfabMessageRequestResponse_MAX,
};

// ScriptStruct YPlayfabServices.YPendingPlayfabMessage
// Size: 0x60 (Inherited: 0x00)
struct FYPendingPlayfabMessage {
	struct FYPlayfabMessage m_message; // 0x00(0x40)
	bool m_isServer; // 0x40(0x01)
	char pad_41[0x1f]; // 0x41(0x1f)
};

