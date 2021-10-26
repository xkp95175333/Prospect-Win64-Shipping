// Class ZipUtility.ZipFileFunctionInternalCallback
// Size: 0x70 (Inherited: 0x28)
struct UZipFileFunctionInternalCallback : UObject {
	char pad_28[0x8]; // 0x28(0x08)
	enum class EZipUtilityCompressionFormat CompressionFormat; // 0x30(0x01)
	char pad_31[0x7]; // 0x31(0x07)
	struct FString File; // 0x38(0x10)
	struct FString DestinationFolder; // 0x48(0x10)
	int32_t FileIndex; // 0x58(0x04)
	char pad_5C[0x4]; // 0x5c(0x04)
	struct UObject* Callback; // 0x60(0x08)
	bool bSingleFile; // 0x68(0x01)
	bool bFileFound; // 0x69(0x01)
	bool bUnzipto; // 0x6a(0x01)
	char pad_6B[0x5]; // 0x6b(0x05)
};

// Class ZipUtility.ZipFileFunctionLibrary
// Size: 0x28 (Inherited: 0x28)
struct UZipFileFunctionLibrary : UBlueprintFunctionLibrary {

	bool ZipSameThread(struct FString FileOrFolderPath, enum class EZipUtilityCompressionFormat Format, enum class ZipUtilityCompressionLevel Level); // Function ZipUtility.ZipFileFunctionLibrary.ZipSameThread // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x938ff0
	struct UZipOperation* Zip(struct FString FileOrFolderPath, struct UObject* ZipUtilityInterfaceDelegate, enum class EZipUtilityCompressionFormat Format, enum class ZipUtilityCompressionLevel Level); // Function ZipUtility.ZipFileFunctionLibrary.Zip // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x938e90
	struct UZipOperation* UnzipTo(struct FString ArchivePath, struct FString destinationPath, struct UObject* ZipUtilityInterfaceDelegate, enum class EZipUtilityCompressionFormat Format); // Function ZipUtility.ZipFileFunctionLibrary.UnzipTo // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x938d10
	struct UZipOperation* UnzipFilesTo(struct TArray<int32_t> fileIndices, struct FString ArchivePath, struct FString destinationPath, struct UObject* ZipUtilityInterfaceDelegate, enum class EZipUtilityCompressionFormat Format); // Function ZipUtility.ZipFileFunctionLibrary.UnzipFilesTo // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x938b00
	struct UZipOperation* UnzipFiles(struct TArray<int32_t> fileIndices, struct FString ArchivePath, struct UObject* ZipUtilityInterfaceDelegate, enum class EZipUtilityCompressionFormat Format); // Function ZipUtility.ZipFileFunctionLibrary.UnzipFiles // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x938950
	bool UnzipFileNamedTo(struct FString ArchivePath, struct FString Name, struct FString destinationPath, struct UObject* ZipUtilityInterfaceDelegate, enum class EZipUtilityCompressionFormat Format); // Function ZipUtility.ZipFileFunctionLibrary.UnzipFileNamedTo // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x938790
	bool UnzipFileNamed(struct FString ArchivePath, struct FString Name, struct UObject* ZipUtilityInterfaceDelegate, enum class EZipUtilityCompressionFormat Format); // Function ZipUtility.ZipFileFunctionLibrary.UnzipFileNamed // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x938610
	struct UZipOperation* Unzip(struct FString ArchivePath, struct UObject* ZipUtilityInterfaceDelegate, enum class EZipUtilityCompressionFormat Format); // Function ZipUtility.ZipFileFunctionLibrary.Unzip // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x9384e0
	bool ListFilesInArchive(struct FString ArchivePath, struct UObject* ZipUtilityInterfaceDelegate, enum class EZipUtilityCompressionFormat Format); // Function ZipUtility.ZipFileFunctionLibrary.ListFilesInArchive // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x937e60
};

// Class ZipUtility.ZipOperation
// Size: 0x38 (Inherited: 0x28)
struct UZipOperation : UObject {
	char pad_28[0x10]; // 0x28(0x10)

	void StopOperation(); // Function ZipUtility.ZipOperation.StopOperation // (Final|Native|Public|BlueprintCallable) // @ game+0x9384c0
};

// Class ZipUtility.ZipUtilityInterface
// Size: 0x28 (Inherited: 0x28)
struct UZipUtilityInterface : UInterface {

	void OnStartProcess(struct FString archive, int32_t Bytes); // Function ZipUtility.ZipUtilityInterface.OnStartProcess // (Native|Event|Public|BlueprintEvent) // @ game+0x9383e0
	void OnProgress(struct FString archive, float percentage, int32_t Bytes); // Function ZipUtility.ZipUtilityInterface.OnProgress // (Native|Event|Public|BlueprintEvent) // @ game+0x9382b0
	void OnFileFound(struct FString archive, struct FString File, int32_t Size); // Function ZipUtility.ZipUtilityInterface.OnFileFound // (Native|Event|Public|BlueprintEvent) // @ game+0x938170
	void OnFileDone(struct FString archive, struct FString File); // Function ZipUtility.ZipUtilityInterface.OnFileDone // (Native|Event|Public|BlueprintEvent) // @ game+0x938070
	void OnDone(struct FString archive, enum class EZipUtilityCompletionState CompletionState); // Function ZipUtility.ZipUtilityInterface.OnDone // (Native|Event|Public|BlueprintEvent) // @ game+0x937f90
};

// Class ZipUtility.ZULambdaDelegate
// Size: 0xb0 (Inherited: 0x28)
struct UZULambdaDelegate : UObject {
	char pad_28[0x88]; // 0x28(0x88)
};

