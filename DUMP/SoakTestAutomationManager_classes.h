// BlueprintGeneratedClass SoakTestAutomationManager.SoakTestAutomationManager_C
// Size: 0x260 (Inherited: 0x240)
struct ASoakTestAutomationManager_C : AActor {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x240(0x08)
	struct USceneComponent* DefaultSceneRoot; // 0x248(0x08)
	bool automationRunning; // 0x250(0x01)
	bool recordProfiles; // 0x251(0x01)
	char pad_252[0x6]; // 0x252(0x06)
	struct AYAIBotController* YAIBotController; // 0x258(0x08)

	void CliStartAutomation(); // Function SoakTestAutomationManager.SoakTestAutomationManager_C.CliStartAutomation // (Net|NetReliableNetMulticast|BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void AutoMeSeek(); // Function SoakTestAutomationManager.SoakTestAutomationManager_C.AutoMeSeek // (BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void AutoMeCollect(); // Function SoakTestAutomationManager.SoakTestAutomationManager_C.AutoMeCollect // (BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void requestAutomationStarted(); // Function SoakTestAutomationManager.SoakTestAutomationManager_C.requestAutomationStarted // (BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void requestSpottedPerformanceStarted(); // Function SoakTestAutomationManager.SoakTestAutomationManager_C.requestSpottedPerformanceStarted // (BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void CliStartSpottedPerformanceAutomation(); // Function SoakTestAutomationManager.SoakTestAutomationManager_C.CliStartSpottedPerformanceAutomation // (Net|NetReliableNetMulticast|BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void AutoMeSpottedPerformance(); // Function SoakTestAutomationManager.SoakTestAutomationManager_C.AutoMeSpottedPerformance // (BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void AutoMe(); // Function SoakTestAutomationManager.SoakTestAutomationManager_C.AutoMe // (BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void ReceiveBeginPlay(); // Function SoakTestAutomationManager.SoakTestAutomationManager_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x1e02480
	void InitPlayerBotWeapon(); // Function SoakTestAutomationManager.SoakTestAutomationManager_C.InitPlayerBotWeapon // (BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void ExecuteUbergraph_SoakTestAutomationManager(int32_t EntryPoint); // Function SoakTestAutomationManager.SoakTestAutomationManager_C.ExecuteUbergraph_SoakTestAutomationManager // (Final|UbergraphFunction|HasDefaults) // @ game+0x1e02480
};

