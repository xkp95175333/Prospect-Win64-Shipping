// Class ScreenSystem.YWidget
// Size: 0x2c0 (Inherited: 0x260)
struct UYWidget : UUserWidget {
	char pad_260[0x30]; // 0x260(0x30)
	struct UYWidgetController* m_controllerClass; // 0x290(0x08)
	enum class ESlateVisibility m_shownVisibility; // 0x298(0x01)
	enum class ESlateVisibility m_hiddenVisibility; // 0x299(0x01)
	bool m_shouldOverrideRootZLayer; // 0x29a(0x01)
	enum class EYRootZLayer m_rootZLayerOverride; // 0x29b(0x01)
	char pad_29C[0x4]; // 0x29c(0x04)
	struct UYWidgetController* m_controller; // 0x2a0(0x08)
	char pad_2A8[0x8]; // 0x2a8(0x08)
	struct UYScreenSystemRoot* m_screenSystemRoot; // 0x2b0(0x08)
	bool m_shouldHandleInput; // 0x2b8(0x01)
	char pad_2B9[0x7]; // 0x2b9(0x07)

	void YAnimateVisibilityFinishedSignature__DelegateSignature(struct UYWidget* Widget, enum class ESlateVisibility newVisibility); // DelegateFunction ScreenSystem.YWidget.YAnimateVisibilityFinishedSignature__DelegateSignature // (MulticastDelegate|Public|Delegate) // @ game+0x1e02480
	void WidgetStatusChangeSignature__DelegateSignature(); // DelegateFunction ScreenSystem.YWidget.WidgetStatusChangeSignature__DelegateSignature // (MulticastDelegate|Public|Delegate) // @ game+0x1e02480
	bool TriggerEscMenu(bool forceEscapeMenu); // Function ScreenSystem.YWidget.TriggerEscMenu // (Native|Protected|BlueprintCallable) // @ game+0x1334550
	void ToggleVisibility(); // Function ScreenSystem.YWidget.ToggleVisibility // (Final|Native|Public|BlueprintCallable) // @ game+0x1334530
	void SetPendingVisibility(enum class ESlateVisibility newPendingVisibility, bool atConstruct); // Function ScreenSystem.YWidget.SetPendingVisibility // (Native|Event|Protected|BlueprintEvent) // @ game+0x13343a0
	void SetController(struct UYWidgetController* newController); // Function ScreenSystem.YWidget.SetController // (Final|Native|Public|BlueprintCallable) // @ game+0x1334310
	void RefreshConstructData(); // Function ScreenSystem.YWidget.RefreshConstructData // (Native|Event|Public|BlueprintEvent) // @ game+0x1334130
	void OnAnimateVisibilityFinished(); // Function ScreenSystem.YWidget.OnAnimateVisibilityFinished // (Native|Public) // @ game+0x1334090
	void HandleBackKey(); // Function ScreenSystem.YWidget.HandleBackKey // (Final|Native|Private|BlueprintCallable) // @ game+0x1334040
	enum class ESlateVisibility GetPendingVisibility(); // Function ScreenSystem.YWidget.GetPendingVisibility // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x1333fa0
	struct UYWidgetController* GetController(); // Function ScreenSystem.YWidget.GetController // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x1333f30
	void BP_OnWidgetShown(); // Function ScreenSystem.YWidget.BP_OnWidgetShown // (Event|Protected|BlueprintEvent) // @ game+0x1e02480
	void BP_OnWidgetHidden(); // Function ScreenSystem.YWidget.BP_OnWidgetHidden // (Event|Protected|BlueprintEvent) // @ game+0x1e02480
	bool BP_HandleTabKey(); // Function ScreenSystem.YWidget.BP_HandleTabKey // (Native|Event|Protected|BlueprintEvent) // @ game+0x1333de0
	bool BP_HandleConfirmInput(); // Function ScreenSystem.YWidget.BP_HandleConfirmInput // (Native|Event|Protected|BlueprintEvent) // @ game+0x1333db0
	bool BP_HandleBackKey(); // Function ScreenSystem.YWidget.BP_HandleBackKey // (Native|Event|Protected|BlueprintEvent) // @ game+0x1333d80
	void BP_ExecuteBackButtonLogic(); // Function ScreenSystem.YWidget.BP_ExecuteBackButtonLogic // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	struct UWidgetAnimation* BP_AnimateVisibility(enum class ESlateVisibility newVisibility); // Function ScreenSystem.YWidget.BP_AnimateVisibility // (Event|Protected|BlueprintEvent) // @ game+0x1e02480
	struct UWidgetAnimation* AnimateVisibility(enum class ESlateVisibility newVisibility); // Function ScreenSystem.YWidget.AnimateVisibility // (Native|Public|BlueprintCallable) // @ game+0x1333cf0
	void ActivateInputForUmg(bool isActivate, struct UYWidget* focusedWidget, bool isUIOnly); // Function ScreenSystem.YWidget.ActivateInputForUmg // (Final|Native|Public|BlueprintCallable) // @ game+0x1333be0
};

// Class ScreenSystem.YDialogContainerBase
// Size: 0x2c8 (Inherited: 0x2c0)
struct UYDialogContainerBase : UYWidget {
	struct UYWidget_ModalDialogOkCancel* m_modalDialogOkCancel; // 0x2c0(0x08)
};

// Class ScreenSystem.YLevelActorContainer
// Size: 0x28 (Inherited: 0x28)
struct UYLevelActorContainer : UObject {
};

// Class ScreenSystem.YScreenBase
// Size: 0xb0 (Inherited: 0x70)
struct UYScreenBase : UYHierarchicalStateBase {
	struct UYWidget* m_screenWidgetClass; // 0x70(0x08)
	struct UYWidget* m_alternativeWidgetClass; // 0x78(0x08)
	struct UYWidget* m_screenWidgetInstance; // 0x80(0x08)
	struct UYScreenSystemRoot* m_screenSystemRoot; // 0x88(0x08)
	bool m_isSubScreen; // 0x90(0x01)
	bool m_clearWidgetOnExit; // 0x91(0x01)
	enum class EYScreenType m_screenType; // 0x92(0x01)
	char pad_93[0x1d]; // 0x93(0x1d)

	void RequestScreenPop(); // Function ScreenSystem.YScreenBase.RequestScreenPop // (Final|Native|Public|BlueprintCallable) // @ game+0x13342f0
	void RequestScreenChange(struct UYScreenBase* nextScreen, bool emptyScreenStack); // Function ScreenSystem.YScreenBase.RequestScreenChange // (Final|Native|Public|BlueprintCallable) // @ game+0x1334220
	struct AHUD* GetHUD(); // Function ScreenSystem.YScreenBase.GetHUD // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x1333f50
	void BP_OnWidgetLoaded(); // Function ScreenSystem.YScreenBase.BP_OnWidgetLoaded // (Event|Protected|BlueprintEvent) // @ game+0x1e02480
};

// Class ScreenSystem.YScreenCommand
// Size: 0x28 (Inherited: 0x28)
struct UYScreenCommand : UObject {

	void Execute(struct UYScreenBase* consumingScreen); // Function ScreenSystem.YScreenCommand.Execute // (Native|Public) // @ game+0x1333ea0
};

// Class ScreenSystem.YScreenExternalFunctions
// Size: 0x28 (Inherited: 0x28)
struct UYScreenExternalFunctions : UObject {

	bool IsEnableAlternativeUI(); // Function ScreenSystem.YScreenExternalFunctions.IsEnableAlternativeUI // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x1334060
};

// Class ScreenSystem.YScreenManager
// Size: 0x78 (Inherited: 0x28)
struct UYScreenManager : UObject {
	struct TMap<struct UYScreenBase*, struct UYScreenBase*> m_activeScreens; // 0x28(0x50)

	struct UYScreenBase* RequestScreen(struct UYScreenBase* screenClass, bool clearRemainingScreen); // Function ScreenSystem.YScreenManager.RequestScreen // (Final|Native|Public|BlueprintCallable) // @ game+0x1334150
};

// Class ScreenSystem.YScreenSystemRoot
// Size: 0x98 (Inherited: 0x28)
struct UYScreenSystemRoot : UObject {
	struct FMulticastInlineDelegate OnLevelActorContainerSet; // 0x28(0x10)
	char pad_38[0x30]; // 0x38(0x30)
	struct UYWidgetManager* m_widgetManager; // 0x68(0x08)
	struct UYScreenManager* m_screenManager; // 0x70(0x08)
	struct UYHierarchicalStateMachine* m_stateMachine; // 0x78(0x08)
	struct UYWidgetRootContainer* m_widgetRootContainer; // 0x80(0x08)
	struct UYDialogContainerBase* m_dialogContainer; // 0x88(0x08)
	struct UYLevelActorContainer* m_levelActorContainer; // 0x90(0x08)

	void YOnLevelActorContainerSet__DelegateSignature(struct UYLevelActorContainer* LevelActorContainer); // DelegateFunction ScreenSystem.YScreenSystemRoot.YOnLevelActorContainerSet__DelegateSignature // (MulticastDelegate|Public|Delegate) // @ game+0x1e02480
	void ToggleEscMenuSignature__DelegateSignature(bool forced); // DelegateFunction ScreenSystem.YScreenSystemRoot.ToggleEscMenuSignature__DelegateSignature // (MulticastDelegate|Public|Delegate) // @ game+0x1e02480
	void ToggleChatInputSignature__DelegateSignature(); // DelegateFunction ScreenSystem.YScreenSystemRoot.ToggleChatInputSignature__DelegateSignature // (MulticastDelegate|Public|Delegate) // @ game+0x1e02480
	void OnRequestInputForUmgSignature__DelegateSignature(struct UYWidget* focusedWidget, struct FString contextString, bool isUmgHasInput, bool uiOnly); // DelegateFunction ScreenSystem.YScreenSystemRoot.OnRequestInputForUmgSignature__DelegateSignature // (MulticastDelegate|Public|Delegate) // @ game+0x1e02480
	struct UYWidgetRootContainer* GetWidgetContainer(); // Function ScreenSystem.YScreenSystemRoot.GetWidgetContainer // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x1334020
	struct UYHierarchicalStateMachine* GetStateMachine(); // Function ScreenSystem.YScreenSystemRoot.GetStateMachine // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x1333fc0
	struct UYLevelActorContainer* GetLevelActorContainer(); // Function ScreenSystem.YScreenSystemRoot.GetLevelActorContainer // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x1333f80
	void DispatchScreenCommand(struct UYScreenCommand* screenCommand); // Function ScreenSystem.YScreenSystemRoot.DispatchScreenCommand // (Final|Native|Public|BlueprintCallable) // @ game+0x1333e10
};

// Class ScreenSystem.YWidget_ModalDialogOkCancel
// Size: 0x338 (Inherited: 0x2c0)
struct UYWidget_ModalDialogOkCancel : UYWidget {
	char pad_2C0[0x20]; // 0x2c0(0x20)
	struct UTextBlock* m_msgHeadline; // 0x2e0(0x08)
	struct URichTextBlock* m_msgRichText; // 0x2e8(0x08)
	struct UTextBlock* m_okButtonText; // 0x2f0(0x08)
	struct UTextBlock* m_cancelButtonText; // 0x2f8(0x08)
	struct UButton* m_okButton; // 0x300(0x08)
	struct UButton* m_cancelButton; // 0x308(0x08)
	struct FDataTableRowHandle m_audioAnimateIn; // 0x310(0x10)
	struct FDataTableRowHandle m_audioAnimateOut; // 0x320(0x10)
	char pad_330[0x8]; // 0x330(0x08)

	void OnOKButtonClicked(); // Function ScreenSystem.YWidget_ModalDialogOkCancel.OnOKButtonClicked // (Native|Public) // @ game+0x13340d0
	void OnDeclined__DelegateSignature(); // DelegateFunction ScreenSystem.YWidget_ModalDialogOkCancel.OnDeclined__DelegateSignature // (MulticastDelegate|Public|Delegate) // @ game+0x1e02480
	void OnCancelButtonClicked(); // Function ScreenSystem.YWidget_ModalDialogOkCancel.OnCancelButtonClicked // (Final|Native|Public) // @ game+0x13340b0
	void OnAccepted__DelegateSignature(); // DelegateFunction ScreenSystem.YWidget_ModalDialogOkCancel.OnAccepted__DelegateSignature // (MulticastDelegate|Public|Delegate) // @ game+0x1e02480
	void BP_SetCurrencyType(int32_t buttonCurrencyType); // Function ScreenSystem.YWidget_ModalDialogOkCancel.BP_SetCurrencyType // (Event|Protected|BlueprintEvent) // @ game+0x1e02480
	void BP_SetButtonsLayout(enum class EYButtonsLayout layout); // Function ScreenSystem.YWidget_ModalDialogOkCancel.BP_SetButtonsLayout // (Event|Protected|BlueprintEvent) // @ game+0x1e02480
};

// Class ScreenSystem.YWidgetController
// Size: 0x30 (Inherited: 0x28)
struct UYWidgetController : UObject {
	struct UYWidget* m_ownerWidget; // 0x28(0x08)

	void OnWidgetShown(); // Function ScreenSystem.YWidgetController.OnWidgetShown // (Native|Protected) // @ game+0x1334110
	void OnWidgetHidden(); // Function ScreenSystem.YWidgetController.OnWidgetHidden // (Native|Protected) // @ game+0x13340f0
	void BP_OnWidgetShown(); // Function ScreenSystem.YWidgetController.BP_OnWidgetShown // (Event|Protected|BlueprintEvent) // @ game+0x1e02480
	void BP_OnWidgetInit(); // Function ScreenSystem.YWidgetController.BP_OnWidgetInit // (Event|Protected|BlueprintEvent) // @ game+0x1e02480
	void BP_OnWidgetHidden(); // Function ScreenSystem.YWidgetController.BP_OnWidgetHidden // (Event|Protected|BlueprintEvent) // @ game+0x1e02480
	void BP_OnWidgetClear(); // Function ScreenSystem.YWidgetController.BP_OnWidgetClear // (Event|Protected|BlueprintEvent) // @ game+0x1e02480
};

// Class ScreenSystem.YWidgetManager
// Size: 0x28 (Inherited: 0x28)
struct UYWidgetManager : UObject {
};

// Class ScreenSystem.YWidgetRootContainer
// Size: 0x2d8 (Inherited: 0x2c0)
struct UYWidgetRootContainer : UYWidget {
	struct UCanvasPanel* m_rootPanel; // 0x2c0(0x08)
	struct UCanvasPanel* m_backgroundPanel; // 0x2c8(0x08)
	struct TWeakObjectPtr<struct UCanvasPanel> m_subScreenPanel; // 0x2d0(0x08)

	void SetSubScreenPanel(struct UCanvasPanel* CanvasPanel); // Function ScreenSystem.YWidgetRootContainer.SetSubScreenPanel // (Final|Native|Public|BlueprintCallable) // @ game+0x1334480
	struct UCanvasPanel* GetSubScreenPanel(); // Function ScreenSystem.YWidgetRootContainer.GetSubScreenPanel // (Final|Native|Public|BlueprintCallable) // @ game+0x1333fe0
};

