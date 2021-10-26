// WidgetBlueprintGeneratedClass WBP_Friends_MiniWidget.WBP_Friends_MiniWidget_C
// Size: 0x340 (Inherited: 0x2c0)
struct UWBP_Friends_MiniWidget_C : UYWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x2c0(0x08)
	struct UWidgetAnimation* SquadActive_Anim; // 0x2c8(0x08)
	struct UWidgetAnimation* FadeIn; // 0x2d0(0x08)
	struct UImage* Gfx_Background; // 0x2d8(0x08)
	struct UWBP_SocialToggle_C* OutpostSocialToggle_WBP; // 0x2e0(0x08)
	struct UWBP_SquadOverview_C* OutpostSquadToggle_WBP; // 0x2e8(0x08)
	struct UOverlay* squad; // 0x2f0(0x08)
	struct UOverlay* SquadBacker; // 0x2f8(0x08)
	struct UWBP_Dummy_Btn_C* WBP_Dummy_Btn; // 0x300(0x08)
	struct UWBP_InputKey_C* WBP_InputKey; // 0x308(0x08)
	struct UWBP_SquadStatus_C* WBP_SquadStatus; // 0x310(0x08)
	struct FText headline; // 0x318(0x18)
	struct FMulticastInlineDelegate WidgetClicked; // 0x330(0x10)

	void UpdateSquadStatus(); // Function WBP_Friends_MiniWidget.WBP_Friends_MiniWidget_C.UpdateSquadStatus // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void OnMatchmakingSettingsUpdated(); // Function WBP_Friends_MiniWidget.WBP_Friends_MiniWidget_C.OnMatchmakingSettingsUpdated // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void OnSquadInfoUpdated(); // Function WBP_Friends_MiniWidget.WBP_Friends_MiniWidget_C.OnSquadInfoUpdated // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void BndEvt__WBP_Dummy_Btn_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature(struct UWBP_ButtonBase_Btn_C* Button); // Function WBP_Friends_MiniWidget.WBP_Friends_MiniWidget_C.BndEvt__WBP_Dummy_Btn_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature // (BlueprintEvent) // @ game+0x1e02480
	void BndEvt__OutpostSocialToggle_WBP_K2Node_ComponentBoundEvent_0_OnSocialToggleClicked__DelegateSignature(); // Function WBP_Friends_MiniWidget.WBP_Friends_MiniWidget_C.BndEvt__OutpostSocialToggle_WBP_K2Node_ComponentBoundEvent_0_OnSocialToggleClicked__DelegateSignature // (BlueprintEvent) // @ game+0x1e02480
	void BndEvt__OutpostSquadToggle_WBP_K2Node_ComponentBoundEvent_2_OnSquadToggleClicked__DelegateSignature(); // Function WBP_Friends_MiniWidget.WBP_Friends_MiniWidget_C.BndEvt__OutpostSquadToggle_WBP_K2Node_ComponentBoundEvent_2_OnSquadToggleClicked__DelegateSignature // (BlueprintEvent) // @ game+0x1e02480
	void Construct(); // Function WBP_Friends_MiniWidget.WBP_Friends_MiniWidget_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1e02480
	void OnSquadInfoUpdatedEvent(struct TArray<struct FYOutpostFriendInfo> squadMemberInfos); // Function WBP_Friends_MiniWidget.WBP_Friends_MiniWidget_C.OnSquadInfoUpdatedEvent // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void ExecuteUbergraph_WBP_Friends_MiniWidget(int32_t EntryPoint); // Function WBP_Friends_MiniWidget.WBP_Friends_MiniWidget_C.ExecuteUbergraph_WBP_Friends_MiniWidget // (Final|UbergraphFunction|HasDefaults) // @ game+0x1e02480
	void WidgetClicked__DelegateSignature(); // Function WBP_Friends_MiniWidget.WBP_Friends_MiniWidget_C.WidgetClicked__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
};

