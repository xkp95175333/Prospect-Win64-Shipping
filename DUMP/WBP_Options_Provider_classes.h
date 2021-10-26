// BlueprintGeneratedClass WBP_Options_Provider.WBP_Options_Provider_C
// Size: 0x98 (Inherited: 0x90)
struct UWBP_Options_Provider_C : UYWidgetProvider_Options {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x90(0x08)

	void IsCommandAvailableByName(struct FName Name, struct AYPlayerController* PlayerController, bool isAvailable); // Function WBP_Options_Provider.WBP_Options_Provider_C.IsCommandAvailableByName // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void BP_OnButtonAction(struct FName ActionName, struct UUserWidget* Widget); // Function WBP_Options_Provider.WBP_Options_Provider_C.BP_OnButtonAction // (Event|Public|BlueprintEvent) // @ game+0x1e02480
	void ExecuteUbergraph_WBP_Options_Provider(int32_t EntryPoint); // Function WBP_Options_Provider.WBP_Options_Provider_C.ExecuteUbergraph_WBP_Options_Provider // (Final|UbergraphFunction|HasDefaults) // @ game+0x1e02480
};

