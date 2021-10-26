// BlueprintGeneratedClass WBP_BugReporter_Provider.WBP_BugReporter_Provider_C
// Size: 0xa8 (Inherited: 0x90)
struct UWBP_BugReporter_Provider_C : UYWidgetProvider_BugReporter {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x90(0x08)
	struct FString AdditionalFilePath; // 0x98(0x10)

	void AttachFile(); // Function WBP_BugReporter_Provider.WBP_BugReporter_Provider_C.AttachFile // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void ReportJiraBug(struct AYPlayerController* PlayerController, struct FText bugSummary, struct FText playerBehaviour, struct FText ReproSteps, struct TArray<struct FString> BugLabels); // Function WBP_BugReporter_Provider.WBP_BugReporter_Provider_C.ReportJiraBug // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void OnJiraTicketCreatedEvent(bool bSuccess, struct FString JiraKey); // Function WBP_BugReporter_Provider.WBP_BugReporter_Provider_C.OnJiraTicketCreatedEvent // (BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void ExecuteUbergraph_WBP_BugReporter_Provider(int32_t EntryPoint); // Function WBP_BugReporter_Provider.WBP_BugReporter_Provider_C.ExecuteUbergraph_WBP_BugReporter_Provider // (Final|UbergraphFunction) // @ game+0x1e02480
};

