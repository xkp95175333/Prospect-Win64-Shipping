// Class WindowsFileUtility.WFUFileListInterface
// Size: 0x28 (Inherited: 0x28)
struct UWFUFileListInterface : UInterface {

	void OnListFileFound(struct FString Filename, int32_t ByteCount, struct FString FilePath); // Function WindowsFileUtility.WFUFileListInterface.OnListFileFound // (Native|Event|Public|BlueprintEvent) // @ game+0x3b40790
	void OnListDone(struct FString DirectoryPath, struct TArray<struct FString> Files, struct TArray<struct FString> Folders); // Function WindowsFileUtility.WFUFileListInterface.OnListDone // (Native|Event|Public|HasOutParms|BlueprintEvent) // @ game+0x3b405d0
	void OnListDirectoryFound(struct FString DirectoryName, struct FString FilePath); // Function WindowsFileUtility.WFUFileListInterface.OnListDirectoryFound // (Native|Event|Public|BlueprintEvent) // @ game+0x938070
};

// Class WindowsFileUtility.WFUFileListLambdaDelegate
// Size: 0x70 (Inherited: 0x28)
struct UWFUFileListLambdaDelegate : UObject {
	char pad_28[0x48]; // 0x28(0x48)
};

// Class WindowsFileUtility.WFUFolderWatchInterface
// Size: 0x28 (Inherited: 0x28)
struct UWFUFolderWatchInterface : UInterface {

	void OnFileChanged(struct FString Filename, struct FString FilePath); // Function WindowsFileUtility.WFUFolderWatchInterface.OnFileChanged // (Native|Event|Public|BlueprintEvent) // @ game+0x938070
	void OnDirectoryChanged(struct FString DirectoryName, struct FString DirectoryPath); // Function WindowsFileUtility.WFUFolderWatchInterface.OnDirectoryChanged // (Native|Event|Public|BlueprintEvent) // @ game+0x3b404d0
};

// Class WindowsFileUtility.WFUFolderWatchLambdaDelegate
// Size: 0x70 (Inherited: 0x28)
struct UWFUFolderWatchLambdaDelegate : UObject {
	char pad_28[0x48]; // 0x28(0x48)
};

// Class WindowsFileUtility.WindowsFileUtilityFunctionLibrary
// Size: 0x28 (Inherited: 0x28)
struct UWindowsFileUtilityFunctionLibrary : UBlueprintFunctionLibrary {

	void WatchFolder(struct FString FullPath, struct UObject* WatcherDelegate); // Function WindowsFileUtility.WindowsFileUtilityFunctionLibrary.WatchFolder // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x3b409a0
	void StopWatchingFolder(struct FString FullPath, struct UObject* WatcherDelegate); // Function WindowsFileUtility.WindowsFileUtilityFunctionLibrary.StopWatchingFolder // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x3b408d0
	bool MoveFileTo(struct FString from, struct FString to); // Function WindowsFileUtility.WindowsFileUtilityFunctionLibrary.MoveFileTo // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x3b403e0
	void ListContentsOfFolder(struct FString FullPath, struct UObject* ListDelegate); // Function WindowsFileUtility.WindowsFileUtilityFunctionLibrary.ListContentsOfFolder // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x3b40310
	bool DoesFileExist(struct FString FullPath); // Function WindowsFileUtility.WindowsFileUtilityFunctionLibrary.DoesFileExist // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x3b40270
	bool DeleteFolderRecursively(struct FString FullPath); // Function WindowsFileUtility.WindowsFileUtilityFunctionLibrary.DeleteFolderRecursively // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x3b401d0
	bool DeleteFileAt(struct FString FullPath); // Function WindowsFileUtility.WindowsFileUtilityFunctionLibrary.DeleteFileAt // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x3b40130
	bool DeleteEmptyFolder(struct FString FullPath); // Function WindowsFileUtility.WindowsFileUtilityFunctionLibrary.DeleteEmptyFolder // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x3b40090
	bool CreateDirectoryAt(struct FString FullPath); // Function WindowsFileUtility.WindowsFileUtilityFunctionLibrary.CreateDirectoryAt // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x3b3fff0
};

