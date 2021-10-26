// BlueprintGeneratedClass YBugReporterComponent_BP.YBugReporterComponent_BP_C
// Size: 0x108 (Inherited: 0xb0)
struct UYBugReporterComponent_BP_C : UYBugReportingComponent {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xb0(0x08)
	struct AYPlayerController* PlayerControllerOwner; // 0xb8(0x08)
	struct FGuid perkId; // 0xc0(0x10)
	struct FDataTableRowHandle perk; // 0xd0(0x10)
	bool IsRequestingToeTrap; // 0xe0(0x01)
	char pad_E1[0x3]; // 0xe1(0x03)
	float LastTimeToeTrapReported; // 0xe4(0x04)
	float ToeTrapCooldown; // 0xe8(0x04)
	char pad_EC[0x4]; // 0xec(0x04)
	struct FString ScreenShotPath; // 0xf0(0x10)
	struct UWBP_Bug_Form_Menu_C* BugReportForm; // 0x100(0x08)

	void ReceiveBeginPlay(); // Function YBugReporterComponent_BP.YBugReporterComponent_BP_C.ReceiveBeginPlay // (Event|Public|BlueprintEvent) // @ game+0x1e02480
	void OnBugItDataPrepared(); // Function YBugReporterComponent_BP.YBugReporterComponent_BP_C.OnBugItDataPrepared // (BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void BP_RequestBugReporter(); // Function YBugReporterComponent_BP.YBugReporterComponent_BP_C.BP_RequestBugReporter // (Event|Public|BlueprintEvent) // @ game+0x1e02480
	void ExecuteUbergraph_YBugReporterComponent_BP(int32_t EntryPoint); // Function YBugReporterComponent_BP.YBugReporterComponent_BP_C.ExecuteUbergraph_YBugReporterComponent_BP // (Final|UbergraphFunction) // @ game+0x1e02480
};

