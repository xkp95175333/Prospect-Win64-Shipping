// WidgetBlueprintGeneratedClass WBP_DropdownBase_Btn.WBP_DropdownBase_Btn_C
// Size: 0x2f0 (Inherited: 0x2c8)
struct UWBP_DropdownBase_Btn_C : UYWidget_DropDown {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x2c8(0x08)
	struct TArray<struct FText> DefaultOptions; // 0x2d0(0x10)
	struct FMulticastInlineDelegate OnSelectedOptionDelegate; // 0x2e0(0x10)

	void GetSelectedOption(struct FString SelectedOption); // Function WBP_DropdownBase_Btn.WBP_DropdownBase_Btn_C.GetSelectedOption // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1e02480
	void GetSelectedIndex(int32_t SelectedIndex); // Function WBP_DropdownBase_Btn.WBP_DropdownBase_Btn_C.GetSelectedIndex // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1e02480
	void SetOptions(struct TArray<struct FString> Options); // Function WBP_DropdownBase_Btn.WBP_DropdownBase_Btn_C.SetOptions // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void SetSelectedIndex(int32_t Index); // Function WBP_DropdownBase_Btn.WBP_DropdownBase_Btn_C.SetSelectedIndex // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void SetSelectedOption(struct FString DesiredOption, bool returnResult); // Function WBP_DropdownBase_Btn.WBP_DropdownBase_Btn_C.SetSelectedOption // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void Construct(); // Function WBP_DropdownBase_Btn.WBP_DropdownBase_Btn_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1e02480
	void PreConstruct(bool IsDesignTime); // Function WBP_DropdownBase_Btn.WBP_DropdownBase_Btn_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1e02480
	void Base_OnSelectionChanged(struct FString SelectedItem, enum class ESelectInfo SelectionType); // Function WBP_DropdownBase_Btn.WBP_DropdownBase_Btn_C.Base_OnSelectionChanged // (BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void OnSelectionChanged(); // Function WBP_DropdownBase_Btn.WBP_DropdownBase_Btn_C.OnSelectionChanged // (BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void ExecuteUbergraph_WBP_DropdownBase_Btn(int32_t EntryPoint); // Function WBP_DropdownBase_Btn.WBP_DropdownBase_Btn_C.ExecuteUbergraph_WBP_DropdownBase_Btn // (Final|UbergraphFunction|HasDefaults) // @ game+0x1e02480
	void OnSelectedOptionDelegate__DelegateSignature(struct UWBP_DropdownBase_Btn_C* Dropdown, struct FString Option, int32_t Index); // Function WBP_DropdownBase_Btn.WBP_DropdownBase_Btn_C.OnSelectedOptionDelegate__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
};

