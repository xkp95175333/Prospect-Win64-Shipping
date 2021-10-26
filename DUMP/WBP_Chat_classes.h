// WidgetBlueprintGeneratedClass WBP_Chat.WBP_Chat_C
// Size: 0x339 (Inherited: 0x260)
struct UWBP_Chat_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x260(0x08)
	struct UWidgetAnimation* ChatPanel_Anim; // 0x268(0x08)
	struct USizeBox* ChatPanelOverride; // 0x270(0x08)
	struct UImage* Gfx_Arrow; // 0x278(0x08)
	struct UImage* Gfx_DecoGradient; // 0x280(0x08)
	struct UImage* Gfx_Edge; // 0x288(0x08)
	struct UImage* Gfx_Fill; // 0x290(0x08)
	struct UImage* Gfx_Shadow; // 0x298(0x08)
	struct UImage* Gfx_Stroke; // 0x2a0(0x08)
	struct UImage* Icn_Chat; // 0x2a8(0x08)
	struct UYEditableTextBox* m_inputEditableTextBox; // 0x2b0(0x08)
	struct URichTextBlock* RichTxt_Message_01; // 0x2b8(0x08)
	struct URichTextBlock* RichTxt_Message_02; // 0x2c0(0x08)
	struct URichTextBlock* RichTxt_Message_03; // 0x2c8(0x08)
	struct URichTextBlock* RichTxt_Message_04; // 0x2d0(0x08)
	struct URichTextBlock* RichTxt_Message_05; // 0x2d8(0x08)
	struct URichTextBlock* RichTxt_Message_06; // 0x2e0(0x08)
	struct URichTextBlock* RichTxt_Message_07; // 0x2e8(0x08)
	struct UUI_GenericChat_WBP_C* UI_GenericChat_WBP; // 0x2f0(0x08)
	struct UWBP_BlurBackerSimple_Panel_C* WBP_BlurBackerSimple_Panel; // 0x2f8(0x08)
	struct UWBP_Common_Empty_Btn_C* WBP_Common_Empty_ShowHide; // 0x300(0x08)
	struct UWBP_SelectionHighlight_C* WBP_Deco_SelectionHighlight; // 0x308(0x08)
	struct UWBP_Dummy_Btn_C* WBP_Dummy_Btn; // 0x310(0x08)
	struct UWBP_Footer_C_Panel_C* WBP_Footer_C_Panel; // 0x318(0x08)
	struct UWBP_HeaderSlim_Panel_C* WBP_HeaderSlim_Panel; // 0x320(0x08)
	struct UWBP_InputKey_C* WBP_InputKey; // 0x328(0x08)
	struct UWBP_SelectionBracket_C* WBP_SelectionBracket; // 0x330(0x08)
	bool ShowChatPanel; // 0x338(0x01)

	void PreConstruct(bool IsDesignTime); // Function WBP_Chat.WBP_Chat_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1e02480
	void BndEvt__WBP_Common_Empty_ShowHide_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature(struct UWBP_ButtonBase_Btn_C* Button); // Function WBP_Chat.WBP_Chat_C.BndEvt__WBP_Common_Empty_ShowHide_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature // (BlueprintEvent) // @ game+0x1e02480
	void BndEvt__WBP_Dummy_Btn_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature(struct UWBP_ButtonBase_Btn_C* Button); // Function WBP_Chat.WBP_Chat_C.BndEvt__WBP_Dummy_Btn_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature // (BlueprintEvent) // @ game+0x1e02480
	void ExecuteUbergraph_WBP_Chat(int32_t EntryPoint); // Function WBP_Chat.WBP_Chat_C.ExecuteUbergraph_WBP_Chat // (Final|UbergraphFunction) // @ game+0x1e02480
};

