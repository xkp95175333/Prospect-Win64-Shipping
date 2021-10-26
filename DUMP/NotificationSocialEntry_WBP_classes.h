// WidgetBlueprintGeneratedClass NotificationSocialEntry_WBP.NotificationSocialEntry_WBP_C
// Size: 0x3f0 (Inherited: 0x3b0)
struct UNotificationSocialEntry_WBP_C : UYWidget_Notification {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x3b0(0x08)
	struct UWidgetAnimation* NotificationOut_Anim; // 0x3b8(0x08)
	struct UWidgetAnimation* NotificationIn_Anim; // 0x3c0(0x08)
	struct UYButton* closeButton; // 0x3c8(0x08)
	struct UImage* Gfx_Backer; // 0x3d0(0x08)
	struct UImage* Gfx_BackerHighlight; // 0x3d8(0x08)
	struct UUI_ImageBase_WBP_C* Image; // 0x3e0(0x08)
	struct URichTextBlock* messageText; // 0x3e8(0x08)

	struct UWidgetAnimation* BP_AnimateVisibility(enum class ESlateVisibility newVisibility); // Function NotificationSocialEntry_WBP.NotificationSocialEntry_WBP_C.BP_AnimateVisibility // (Event|Protected|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void Construct(); // Function NotificationSocialEntry_WBP.NotificationSocialEntry_WBP_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1e02480
	void BP_StartNotification(); // Function NotificationSocialEntry_WBP.NotificationSocialEntry_WBP_C.BP_StartNotification // (Event|Protected|BlueprintEvent) // @ game+0x1e02480
	void BndEvt__m_closeButton_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature(); // Function NotificationSocialEntry_WBP.NotificationSocialEntry_WBP_C.BndEvt__m_closeButton_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x1e02480
	void OnMouseEnter(struct FGeometry MyGeometry, struct FPointerEvent MouseEvent); // Function NotificationSocialEntry_WBP.NotificationSocialEntry_WBP_C.OnMouseEnter // (BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent) // @ game+0x1e02480
	void OnMouseLeave(struct FPointerEvent MouseEvent); // Function NotificationSocialEntry_WBP.NotificationSocialEntry_WBP_C.OnMouseLeave // (BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent) // @ game+0x1e02480
	void ExecuteUbergraph_NotificationSocialEntry_WBP(int32_t EntryPoint); // Function NotificationSocialEntry_WBP.NotificationSocialEntry_WBP_C.ExecuteUbergraph_NotificationSocialEntry_WBP // (Final|UbergraphFunction|HasDefaults) // @ game+0x1e02480
};

