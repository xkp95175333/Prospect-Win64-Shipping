// Class Backend.YBackendInstance
// Size: 0x48 (Inherited: 0x28)
struct UYBackendInstance : UObject {
	struct UYPlayfabInstance* m_playfabInstance; // 0x28(0x08)
	char pad_30[0x18]; // 0x30(0x18)

	void OnPlayfabServerLogin(bool succeded, struct FString playfabTitleId); // Function Backend.YBackendInstance.OnPlayfabServerLogin // (Final|Native|Public) // @ game+0x8da980
	bool IsUsingExperimentalBackendLogin(); // Function Backend.YBackendInstance.IsUsingExperimentalBackendLogin // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x8da950
};

// Class Backend.YInterfaceBackendInstanceRetrival
// Size: 0x28 (Inherited: 0x28)
struct UYInterfaceBackendInstanceRetrival : UInterface {
};

