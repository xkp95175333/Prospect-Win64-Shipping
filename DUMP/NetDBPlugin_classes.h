// Class NetDBPlugin.AsyncConnectToDatabase
// Size: 0x50 (Inherited: 0x30)
struct UAsyncConnectToDatabase : UBlueprintAsyncActionBase {
	struct FMulticastInlineDelegate onSuccess; // 0x30(0x10)
	struct FMulticastInlineDelegate OnFail; // 0x40(0x10)

	struct UAsyncConnectToDatabase* PostgresConnectAsync(struct FString database, struct FString Username, struct FString Password, struct FString ip, int32_t Port); // Function NetDBPlugin.AsyncConnectToDatabase.PostgresConnectAsync // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xd60bf0
};

// Class NetDBPlugin.AsyncExecutePreparedQuery
// Size: 0x50 (Inherited: 0x30)
struct UAsyncExecutePreparedQuery : UBlueprintAsyncActionBase {
	struct FMulticastInlineDelegate onSuccess; // 0x30(0x10)
	struct FMulticastInlineDelegate OnFail; // 0x40(0x10)

	struct UAsyncExecutePreparedQuery* ExecutePreparedQueryAsync(struct UDatabaseConnection* Connection, struct UPreparedQuery* Query); // Function NetDBPlugin.AsyncExecutePreparedQuery.ExecutePreparedQueryAsync // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xd5fd10
};

// Class NetDBPlugin.AsyncExecuteQuery
// Size: 0x50 (Inherited: 0x30)
struct UAsyncExecuteQuery : UBlueprintAsyncActionBase {
	struct FMulticastInlineDelegate onSuccess; // 0x30(0x10)
	struct FMulticastInlineDelegate OnFail; // 0x40(0x10)

	struct UAsyncExecuteQuery* ExecuteQueryAsync(struct UDatabaseConnection* Connection, struct FString Query); // Function NetDBPlugin.AsyncExecuteQuery.ExecuteQueryAsync // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xd5ffa0
};

// Class NetDBPlugin.DatabaseConnection
// Size: 0x68 (Inherited: 0x28)
struct UDatabaseConnection : UObject {
	char pad_28[0x40]; // 0x28(0x40)
};

// Class NetDBPlugin.NetDBPluginBPLibrary
// Size: 0x28 (Inherited: 0x28)
struct UNetDBPluginBPLibrary : UBlueprintFunctionLibrary {

	struct UPreparedQuery* PrepareQuery(struct FString Query, struct TArray<struct UDataObject*> arguements); // Function NetDBPlugin.NetDBPluginBPLibrary.PrepareQuery // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0xd60f10
	struct UDatabaseConnection* PostgresConnect(bool bWasSuccessful, struct FString database, struct FString Username, struct FString Password, struct FString ip, int32_t Port); // Function NetDBPlugin.NetDBPluginBPLibrary.PostgresConnect // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0xd60870
	enum class EDataType GetRowColumnType(struct UQueryRow* row, struct FString ColumnName); // Function NetDBPlugin.NetDBPluginBPLibrary.GetRowColumnType // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xd60740
	struct FString GetRowColumnAsString(struct UQueryRow* row, struct FString ColumnName); // Function NetDBPlugin.NetDBPluginBPLibrary.GetRowColumnAsString // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xd605d0
	int32_t GetRowColumnAsInt(struct UQueryRow* row, struct FString ColumnName); // Function NetDBPlugin.NetDBPluginBPLibrary.GetRowColumnAsInt // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xd604a0
	float GetRowColumnAsFloat(struct UQueryRow* row, struct FString ColumnName); // Function NetDBPlugin.NetDBPluginBPLibrary.GetRowColumnAsFloat // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xd60370
	struct FString GetRowColumnAsChar(struct UQueryRow* row, struct FString ColumnName); // Function NetDBPlugin.NetDBPluginBPLibrary.GetRowColumnAsChar // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xd60200
	bool GetRowColumnAsBool(struct UQueryRow* row, struct FString ColumnName); // Function NetDBPlugin.NetDBPluginBPLibrary.GetRowColumnAsBool // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xd600d0
	struct TArray<struct UQueryRow*> ExecuteQuery(bool bWasSuccessful, struct UDatabaseConnection* Connection, struct FString Query); // Function NetDBPlugin.NetDBPluginBPLibrary.ExecuteQuery // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0xd5fde0
	struct TArray<struct UQueryRow*> ExecutePreparedQuery(bool bWasSuccessful, struct UDatabaseConnection* Connection, struct UPreparedQuery* Query); // Function NetDBPlugin.NetDBPluginBPLibrary.ExecutePreparedQuery // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0xd5fbb0
	struct UDataObject* CreateDataObjectFromString(struct FString Value); // Function NetDBPlugin.NetDBPluginBPLibrary.CreateDataObjectFromString // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0xd5fab0
	struct UDataObject* CreateDataObjectFromInt(int32_t Value); // Function NetDBPlugin.NetDBPluginBPLibrary.CreateDataObjectFromInt // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0xd5fa20
	struct UDataObject* CreateDataObjectFromFloat(float Value); // Function NetDBPlugin.NetDBPluginBPLibrary.CreateDataObjectFromFloat // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0xd5f9a0
	struct UDataObject* CreateDataObjectFromBool(bool Value); // Function NetDBPlugin.NetDBPluginBPLibrary.CreateDataObjectFromBool // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0xd5f910
};

// Class NetDBPlugin.PreparedQuery
// Size: 0x48 (Inherited: 0x28)
struct UPreparedQuery : UObject {
	char pad_28[0x20]; // 0x28(0x20)
};

// Class NetDBPlugin.DataObject
// Size: 0x48 (Inherited: 0x28)
struct UDataObject : UObject {
	char pad_28[0x20]; // 0x28(0x20)
};

// Class NetDBPlugin.QueryRow
// Size: 0x38 (Inherited: 0x28)
struct UQueryRow : UObject {
	char pad_28[0x10]; // 0x28(0x10)
};

