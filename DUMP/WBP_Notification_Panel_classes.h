// WidgetBlueprintGeneratedClass WBP_Notification_Panel.WBP_Notification_Panel_C
// Size: 0x290 (Inherited: 0x260)
struct UWBP_Notification_Panel_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x260(0x08)
	struct UWidgetAnimation* FadeIn; // 0x268(0x08)
	struct UVerticalBox* NotificationList; // 0x270(0x08)
	struct UWBP_Notification_Item_C* WBP_Notification_Item; // 0x278(0x08)
	struct UWBP_Notification_Item_C* WBP_Notification_Item_2; // 0x280(0x08)
	struct UWBP_Notification_Item_C* WBP_Notification_Item_3; // 0x288(0x08)

	void OnItemFadedOut(); // Function WBP_Notification_Panel.WBP_Notification_Panel_C.OnItemFadedOut // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void AddItem(struct FYInventoryItem Item); // Function WBP_Notification_Panel.WBP_Notification_Panel_C.AddItem // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void Construct(); // Function WBP_Notification_Panel.WBP_Notification_Panel_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1e02480
	void ExecuteUbergraph_WBP_Notification_Panel(int32_t EntryPoint); // Function WBP_Notification_Panel.WBP_Notification_Panel_C.ExecuteUbergraph_WBP_Notification_Panel // (Final|UbergraphFunction) // @ game+0x1e02480
};

