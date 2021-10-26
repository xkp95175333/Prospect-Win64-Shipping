// BlueprintGeneratedClass YGameInstance_BP.YGameInstance_BP_C
// Size: 0x4e8 (Inherited: 0x4e0)
struct UYGameInstance_BP_C : UYGameInstance {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x4e0(0x08)

	void BP_OnFindReplaysComplete(struct TArray<struct FS_ReplayInfo> AllReplays); // Function YGameInstance_BP.YGameInstance_BP_C.BP_OnFindReplaysComplete // (Event|Protected|HasOutParms|BlueprintEvent) // @ game+0x1e02480
	void BP_OnInit(struct UWorld* World); // Function YGameInstance_BP.YGameInstance_BP_C.BP_OnInit // (Event|Public|BlueprintEvent) // @ game+0x1e02480
	void HandleNetworkError(enum class ENetworkFailure FailureType, bool bIsServer); // Function YGameInstance_BP.YGameInstance_BP_C.HandleNetworkError // (Event|Public|BlueprintEvent) // @ game+0x1e02480
	void HandleTravelError(enum class ETravelFailure FailureType); // Function YGameInstance_BP.YGameInstance_BP_C.HandleTravelError // (Event|Public|BlueprintEvent) // @ game+0x1e02480
	void logError(struct FString ErrorMessage); // Function YGameInstance_BP.YGameInstance_BP_C.logError // (BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void ExecuteUbergraph_YGameInstance_BP(int32_t EntryPoint); // Function YGameInstance_BP.YGameInstance_BP_C.ExecuteUbergraph_YGameInstance_BP // (Final|UbergraphFunction|HasDefaults) // @ game+0x1e02480
};

