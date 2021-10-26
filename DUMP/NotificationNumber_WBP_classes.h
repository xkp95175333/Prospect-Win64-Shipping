// WidgetBlueprintGeneratedClass NotificationNumber_WBP.NotificationNumber_WBP_C
// Size: 0x2e4 (Inherited: 0x2c8)
struct UNotificationNumber_WBP_C : UYWidget_NotificationNumber {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x2c8(0x08)
	struct UCanvasPanel* notificationCanvasPanel; // 0x2d0(0x08)
	struct UYTextBlock* notificationNumberText; // 0x2d8(0x08)
	int32_t upperThresholdValue; // 0x2e0(0x04)

	void SetValueAsText(int32_t NewValue); // Function NotificationNumber_WBP.NotificationNumber_WBP_C.SetValueAsText // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void BP_SetToDefault(); // Function NotificationNumber_WBP.NotificationNumber_WBP_C.BP_SetToDefault // (Event|Protected|BlueprintEvent) // @ game+0x1e02480
	void BP_SetValue(int32_t NewValue); // Function NotificationNumber_WBP.NotificationNumber_WBP_C.BP_SetValue // (Event|Protected|BlueprintEvent) // @ game+0x1e02480
	void ExecuteUbergraph_NotificationNumber_WBP(int32_t EntryPoint); // Function NotificationNumber_WBP.NotificationNumber_WBP_C.ExecuteUbergraph_NotificationNumber_WBP // (Final|UbergraphFunction) // @ game+0x1e02480
};

