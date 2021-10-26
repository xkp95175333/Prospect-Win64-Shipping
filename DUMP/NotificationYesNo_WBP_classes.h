// WidgetBlueprintGeneratedClass NotificationYesNo_WBP.NotificationYesNo_WBP_C
// Size: 0x428 (Inherited: 0x3b0)
struct UNotificationYesNo_WBP_C : UYWidget_Notification {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x3b0(0x08)
	struct UWidgetAnimation* NotificationWarning_Anim; // 0x3b8(0x08)
	struct UWidgetAnimation* NotificationIn_Anim; // 0x3c0(0x08)
	struct UWidgetAnimation* NotificationOut_Anim; // 0x3c8(0x08)
	struct UYButton* AcceptButton; // 0x3d0(0x08)
	struct UImage* checkNoIcon; // 0x3d8(0x08)
	struct UImage* checkYesIcon; // 0x3e0(0x08)
	struct UYButton* closeButton; // 0x3e8(0x08)
	struct UYButton* DeclineButton; // 0x3f0(0x08)
	struct UImage* Gfx_Backer; // 0x3f8(0x08)
	struct UImage* Gfx_BackerHighlight; // 0x400(0x08)
	struct UUI_ImageBase_WBP_C* Image; // 0x408(0x08)
	struct URichTextBlock* MesageText; // 0x410(0x08)
	struct UWBP_Generic_ToolTip_C* AcceptButton_ToolTipWidget; // 0x418(0x08)
	struct UWBP_Generic_ToolTip_C* DeclineButton_ToolTipWidget; // 0x420(0x08)

	struct UWidgetAnimation* BP_AnimateVisibility(enum class ESlateVisibility newVisibility); // Function NotificationYesNo_WBP.NotificationYesNo_WBP_C.BP_AnimateVisibility // (Event|Protected|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void BP_StartNotification(); // Function NotificationYesNo_WBP.NotificationYesNo_WBP_C.BP_StartNotification // (Event|Protected|BlueprintEvent) // @ game+0x1e02480
	void BndEvt__AcceptButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature(); // Function NotificationYesNo_WBP.NotificationYesNo_WBP_C.BndEvt__AcceptButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x1e02480
	void BndEvt__DeclineButton_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature(); // Function NotificationYesNo_WBP.NotificationYesNo_WBP_C.BndEvt__DeclineButton_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x1e02480
	void BndEvt__m_closeButton_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature(); // Function NotificationYesNo_WBP.NotificationYesNo_WBP_C.BndEvt__m_closeButton_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x1e02480
	void OnMouseEnter(struct FGeometry MyGeometry, struct FPointerEvent MouseEvent); // Function NotificationYesNo_WBP.NotificationYesNo_WBP_C.OnMouseEnter // (BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent) // @ game+0x1e02480
	void OnMouseLeave(struct FPointerEvent MouseEvent); // Function NotificationYesNo_WBP.NotificationYesNo_WBP_C.OnMouseLeave // (BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent) // @ game+0x1e02480
	void Construct(); // Function NotificationYesNo_WBP.NotificationYesNo_WBP_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1e02480
	void BndEvt__AcceptButton_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature(); // Function NotificationYesNo_WBP.NotificationYesNo_WBP_C.BndEvt__AcceptButton_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature // (BlueprintEvent) // @ game+0x1e02480
	void BndEvt__AcceptButton_K2Node_ComponentBoundEvent_4_OnButtonHoverEvent__DelegateSignature(); // Function NotificationYesNo_WBP.NotificationYesNo_WBP_C.BndEvt__AcceptButton_K2Node_ComponentBoundEvent_4_OnButtonHoverEvent__DelegateSignature // (BlueprintEvent) // @ game+0x1e02480
	void BndEvt__DeclineButton_K2Node_ComponentBoundEvent_5_OnButtonHoverEvent__DelegateSignature(); // Function NotificationYesNo_WBP.NotificationYesNo_WBP_C.BndEvt__DeclineButton_K2Node_ComponentBoundEvent_5_OnButtonHoverEvent__DelegateSignature // (BlueprintEvent) // @ game+0x1e02480
	void BndEvt__DeclineButton_K2Node_ComponentBoundEvent_6_OnButtonHoverEvent__DelegateSignature(); // Function NotificationYesNo_WBP.NotificationYesNo_WBP_C.BndEvt__DeclineButton_K2Node_ComponentBoundEvent_6_OnButtonHoverEvent__DelegateSignature // (BlueprintEvent) // @ game+0x1e02480
	void ExecuteUbergraph_NotificationYesNo_WBP(int32_t EntryPoint); // Function NotificationYesNo_WBP.NotificationYesNo_WBP_C.ExecuteUbergraph_NotificationYesNo_WBP // (Final|UbergraphFunction|HasDefaults) // @ game+0x1e02480
};

