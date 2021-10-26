// WidgetBlueprintGeneratedClass UI_GenericChat_WBP.UI_GenericChat_WBP_C
// Size: 0xc78 (Inherited: 0xc48)
struct UUI_GenericChat_WBP_C : UYWidget_Chat {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xc48(0x08)
	struct UWidgetAnimation* FadeIn; // 0xc50(0x08)
	struct UImage* ChatInputBackgroundImage; // 0xc58(0x08)
	struct UImage* DividerBottom; // 0xc60(0x08)
	struct UImage* DividerTop; // 0xc68(0x08)
	struct FVector2D MinSizeOverride; // 0xc70(0x08)

	struct UWidgetAnimation* BP_AnimateVisibility(enum class ESlateVisibility newVisibility); // Function UI_GenericChat_WBP.UI_GenericChat_WBP_C.BP_AnimateVisibility // (Event|Protected|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void ScrollToBottom(); // Function UI_GenericChat_WBP.UI_GenericChat_WBP_C.ScrollToBottom // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void SetDummyData(); // Function UI_GenericChat_WBP.UI_GenericChat_WBP_C.SetDummyData // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void SetSkin(struct FYChatWindowStyles Skin); // Function UI_GenericChat_WBP.UI_GenericChat_WBP_C.SetSkin // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	struct FEventReply OnMouseButtonDown(struct FGeometry MyGeometry, struct FPointerEvent MouseEvent); // Function UI_GenericChat_WBP.UI_GenericChat_WBP_C.OnMouseButtonDown // (BlueprintCosmetic|Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void PreConstruct(bool IsDesignTime); // Function UI_GenericChat_WBP.UI_GenericChat_WBP_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1e02480
	void BP_ChatMessageReceived(); // Function UI_GenericChat_WBP.UI_GenericChat_WBP_C.BP_ChatMessageReceived // (Event|Protected|BlueprintEvent) // @ game+0x1e02480
	void CreateTestMessages(); // Function UI_GenericChat_WBP.UI_GenericChat_WBP_C.CreateTestMessages // (BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void Construct(); // Function UI_GenericChat_WBP.UI_GenericChat_WBP_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1e02480
	void BP_OnWidgetShown(); // Function UI_GenericChat_WBP.UI_GenericChat_WBP_C.BP_OnWidgetShown // (Event|Protected|BlueprintEvent) // @ game+0x1e02480
	void ExecuteUbergraph_UI_GenericChat_WBP(int32_t EntryPoint); // Function UI_GenericChat_WBP.UI_GenericChat_WBP_C.ExecuteUbergraph_UI_GenericChat_WBP // (Final|UbergraphFunction) // @ game+0x1e02480
};

