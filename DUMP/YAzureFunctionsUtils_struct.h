// ScriptStruct YAzureFunctionsUtils.YAzureFunctionResult
// Size: 0x48 (Inherited: 0x00)
struct FYAzureFunctionResult {
	struct FString m_jsonData; // 0x00(0x10)
	struct FString m_errorMessage; // 0x10(0x10)
	struct FString m_origin; // 0x20(0x10)
	struct FString m_sentJsonData; // 0x30(0x10)
	bool m_success; // 0x40(0x01)
	char pad_41[0x7]; // 0x41(0x07)
};

// ScriptStruct YAzureFunctionsUtils.YPlayfabRedeemCouponResult
// Size: 0x28 (Inherited: 0x00)
struct FYPlayfabRedeemCouponResult {
	struct FString UserId; // 0x00(0x10)
	bool SUCCESS; // 0x10(0x01)
	char pad_11[0x7]; // 0x11(0x07)
	struct TArray<struct FYCustomItemInfo> GrantedItems; // 0x18(0x10)
};

// ScriptStruct YAzureFunctionsUtils.YPlayfabStoreItemEntry
// Size: 0x80 (Inherited: 0x00)
struct FYPlayfabStoreItemEntry {
	struct FString ItemId; // 0x00(0x10)
	struct FString StoreId; // 0x10(0x10)
	struct FString Catalog; // 0x20(0x10)
	struct TMap<struct FString, int32_t> virtualCurrencyPrices; // 0x30(0x50)
};

// ScriptStruct YAzureFunctionsUtils.YPlayfabStoreItemsResult
// Size: 0x30 (Inherited: 0x00)
struct FYPlayfabStoreItemsResult {
	struct FString StoreId; // 0x00(0x10)
	struct FString CatalogVersion; // 0x10(0x10)
	struct TArray<struct FYPlayfabStoreItemEntry> storeItems; // 0x20(0x10)
};

// ScriptStruct YAzureFunctionsUtils.YPlayfabUserAccountInfo
// Size: 0x20 (Inherited: 0x00)
struct FYPlayfabUserAccountInfo {
	struct FString UserId; // 0x00(0x10)
	struct FString userDisplayName; // 0x10(0x10)
};

// ScriptStruct YAzureFunctionsUtils.YPendingDelegateExecution
// Size: 0x28 (Inherited: 0x00)
struct FYPendingDelegateExecution {
	char pad_0[0x28]; // 0x00(0x28)
};

// ScriptStruct YAzureFunctionsUtils.YPlayfabPurchaseItemResult
// Size: 0x38 (Inherited: 0x00)
struct FYPlayfabPurchaseItemResult {
	struct FString UserId; // 0x00(0x10)
	bool SUCCESS; // 0x10(0x01)
	char pad_11[0x7]; // 0x11(0x07)
	struct TArray<struct FString> grantedBundles; // 0x18(0x10)
	struct TArray<struct FYCustomItemInfo> GrantedItems; // 0x28(0x10)
};

// ScriptStruct YAzureFunctionsUtils.YPlayfabTitleDataRetrival
// Size: 0x50 (Inherited: 0x00)
struct FYPlayfabTitleDataRetrival {
	struct TMap<struct FString, struct FString> m_keyToData; // 0x00(0x50)
};

// ScriptStruct YAzureFunctionsUtils.YSetUserDataResult
// Size: 0x01 (Inherited: 0x00)
struct FYSetUserDataResult {
	bool m_success; // 0x00(0x01)
};

// ScriptStruct YAzureFunctionsUtils.YSetUserDataRequest
// Size: 0x68 (Inherited: 0x00)
struct FYSetUserDataRequest {
	struct TMap<struct FString, struct FString> m_keysValues; // 0x00(0x50)
	struct FString m_playfabId; // 0x50(0x10)
	bool m_readOnly; // 0x60(0x01)
	char pad_61[0x7]; // 0x61(0x07)
};

// ScriptStruct YAzureFunctionsUtils.YGetUserDataResult
// Size: 0x50 (Inherited: 0x00)
struct FYGetUserDataResult {
	struct TMap<struct FString, struct FString> m_keyPair; // 0x00(0x50)
};

// ScriptStruct YAzureFunctionsUtils.YGetUserDataRequest
// Size: 0x28 (Inherited: 0x00)
struct FYGetUserDataRequest {
	struct TArray<struct FString> m_keys; // 0x00(0x10)
	struct FString m_playfabId; // 0x10(0x10)
	bool m_readOnly; // 0x20(0x01)
	char pad_21[0x7]; // 0x21(0x07)
};

