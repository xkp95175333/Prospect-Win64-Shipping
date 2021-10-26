// WidgetBlueprintGeneratedClass WBP_Notification.WBP_Notification_C
// Size: 0x2d1 (Inherited: 0x260)
struct UWBP_Notification_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x260(0x08)
	struct UImage* Gfx_NotifBacker; // 0x268(0x08)
	struct UImage* Gfx_NotifBackerLarge; // 0x270(0x08)
	struct UImage* Gfx_Pulse; // 0x278(0x08)
	struct UImage* Gfx_Pulse_Large; // 0x280(0x08)
	struct USizeBox* NotificationSimple; // 0x288(0x08)
	struct USizeBox* NotificationValue; // 0x290(0x08)
	struct UTextBlock* Txt_NotificationValue; // 0x298(0x08)
	bool UseValueVariant; // 0x2a0(0x01)
	char pad_2A1[0x7]; // 0x2a1(0x07)
	struct FText Value; // 0x2a8(0x18)
	struct FLinearColor SetColor; // 0x2c0(0x10)
	bool ShowPulse; // 0x2d0(0x01)

	void EnablePulse(bool Enabled); // Function WBP_Notification.WBP_Notification_C.EnablePulse // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void SetNotifColor(struct FLinearColor Color); // Function WBP_Notification.WBP_Notification_C.SetNotifColor // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void PreConstruct(bool IsDesignTime); // Function WBP_Notification.WBP_Notification_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1e02480
	void ExecuteUbergraph_WBP_Notification(int32_t EntryPoint); // Function WBP_Notification.WBP_Notification_C.ExecuteUbergraph_WBP_Notification // (Final|UbergraphFunction|HasDefaults) // @ game+0x1e02480
};

