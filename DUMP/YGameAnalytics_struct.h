// ScriptStruct YGameAnalytics.YBiEventWrapper
// Size: 0x20 (Inherited: 0x00)
struct FYBiEventWrapper {
	struct FString messageType; // 0x00(0x10)
	struct FString eventData; // 0x10(0x10)
};

// ScriptStruct YGameAnalytics.YTestBIEventData
// Size: 0x68 (Inherited: 0x00)
struct FYTestBIEventData {
	int32_t IntegerField; // 0x00(0x04)
	float FloatField; // 0x04(0x04)
	bool BooleanField; // 0x08(0x01)
	char pad_9[0x7]; // 0x09(0x07)
	struct FString StringField; // 0x10(0x10)
	struct TArray<struct FString> StringArray; // 0x20(0x10)
	struct TArray<uint32_t> Blob; // 0x30(0x10)
	struct FTestBIDataStruct DataStruct; // 0x40(0x18)
	struct TArray<struct FTestBIStructForArray> ArrayOfStructs; // 0x58(0x10)
};

// ScriptStruct YGameAnalytics.TestBIStructForArray
// Size: 0x38 (Inherited: 0x00)
struct FTestBIStructForArray {
	struct FTestBIDataStruct InternalDataStruct; // 0x00(0x18)
	struct FString InternalStringField; // 0x18(0x10)
	struct TArray<struct FString> InternalStringArray; // 0x28(0x10)
};

// ScriptStruct YGameAnalytics.TestBIDataStruct
// Size: 0x18 (Inherited: 0x00)
struct FTestBIDataStruct {
	uint16_t UInt16Field; // 0x00(0x02)
	char pad_2[0x6]; // 0x02(0x06)
	int64_t Int64Field; // 0x08(0x08)
	int8_t Int8Field; // 0x10(0x01)
	char pad_11[0x7]; // 0x11(0x07)
};

