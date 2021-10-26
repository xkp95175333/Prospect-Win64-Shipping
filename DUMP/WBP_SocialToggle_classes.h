// WidgetBlueprintGeneratedClass WBP_SocialToggle.WBP_SocialToggle_C
// Size: 0x308 (Inherited: 0x2c0)
struct UWBP_SocialToggle_C : UYWidget_OutpostSocialToggle {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x2c0(0x08)
	struct UWidgetAnimation* HighlightBracket_Anim; // 0x2c8(0x08)
	struct UNotificationNumber_WBP_C* notificationNumber; // 0x2d0(0x08)
	struct UYTextBlock* onlineNumberYTextBlock; // 0x2d8(0x08)
	struct UYButton* socialYToggleButton; // 0x2e0(0x08)
	struct UWBP_Notification_C* WBP_Notification; // 0x2e8(0x08)
	struct UWBP_SelectionBracket_C* WBP_SelectionBracket; // 0x2f0(0x08)
	struct FMulticastInlineDelegate OnSocialToggleClicked; // 0x2f8(0x10)

	struct UWidget* Get_SocialButton_ToolTipWidget(); // Function WBP_SocialToggle.WBP_SocialToggle_C.Get_SocialButton_ToolTipWidget // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1e02480
	void BndEvt__SquadToggleButton_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature(); // Function WBP_SocialToggle.WBP_SocialToggle_C.BndEvt__SquadToggleButton_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature // (BlueprintEvent) // @ game+0x1e02480
	void BndEvt__SquadToggleButton_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature(); // Function WBP_SocialToggle.WBP_SocialToggle_C.BndEvt__SquadToggleButton_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x1e02480
	void BP_SetNumberOfOnlineFriends(int32_t numOfOnlineFriends); // Function WBP_SocialToggle.WBP_SocialToggle_C.BP_SetNumberOfOnlineFriends // (Event|Protected|BlueprintEvent) // @ game+0x1e02480
	void BndEvt__SquadToggleButton_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature(); // Function WBP_SocialToggle.WBP_SocialToggle_C.BndEvt__SquadToggleButton_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature // (BlueprintEvent) // @ game+0x1e02480
	void BP_SetNumberOfInvites(int32_t numOfInvites); // Function WBP_SocialToggle.WBP_SocialToggle_C.BP_SetNumberOfInvites // (Event|Protected|BlueprintEvent) // @ game+0x1e02480
	void ExecuteUbergraph_WBP_SocialToggle(int32_t EntryPoint); // Function WBP_SocialToggle.WBP_SocialToggle_C.ExecuteUbergraph_WBP_SocialToggle // (Final|UbergraphFunction|HasDefaults) // @ game+0x1e02480
	void OnSocialToggleClicked__DelegateSignature(); // Function WBP_SocialToggle.WBP_SocialToggle_C.OnSocialToggleClicked__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
};

