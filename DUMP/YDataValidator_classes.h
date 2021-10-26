// Class YDataValidator.YAssetCheckerDataAsset
// Size: 0xa8 (Inherited: 0x30)
struct UYAssetCheckerDataAsset : UDataAsset {
	struct TMap<struct UObject*, struct FYAssetValidatorEntry> m_validationEntries; // 0x30(0x50)
	struct TSoftObjectPtr<struct UDataAsset> m_dataValidatorPath; // 0x80(0x28)
};

// Class YDataValidator.YAssetCheckerFunctions
// Size: 0x28 (Inherited: 0x28)
struct UYAssetCheckerFunctions : UObject {

	bool FindValidationEntryFromClass(struct UObject* InClass, struct FYAssetValidatorEntry outEntry); // Function YDataValidator.YAssetCheckerFunctions.FindValidationEntryFromClass // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0x130c4e0
	struct UYAssetCheckerDataAsset* FindDataValidationAsset(); // Function YDataValidator.YAssetCheckerFunctions.FindDataValidationAsset // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x130c4b0
};

