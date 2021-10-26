// WidgetBlueprintGeneratedClass WBP_VirtualCursor.WBP_VirtualCursor_C
// Size: 0x2b2 (Inherited: 0x260)
struct UWBP_VirtualCursor_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x260(0x08)
	struct UWidgetAnimation* WidgetIn_Anim; // 0x268(0x08)
	struct UWidgetAnimation* Hover_Anim; // 0x270(0x08)
	struct UWidgetAnimation* Idle_Anim; // 0x278(0x08)
	struct UImage* Gfx_BackerDark; // 0x280(0x08)
	struct UImage* Gfx_BackerLight; // 0x288(0x08)
	struct UImage* Gfx_CenterDot; // 0x290(0x08)
	struct UImage* Gfx_Flash; // 0x298(0x08)
	struct UImage* Gfx_VirtualCursor_Main; // 0x2a0(0x08)
	struct UImage* Gfx_VirtualCursor_Secondary; // 0x2a8(0x08)
	enum class EYVirtualCursorState State; // 0x2b0(0x01)
	bool isSpawning; // 0x2b1(0x01)

	void IsGamepadActive(bool IsGamepadActive); // Function WBP_VirtualCursor.WBP_VirtualCursor_C.IsGamepadActive // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1e02480
	void OnSpawn(); // Function WBP_VirtualCursor.WBP_VirtualCursor_C.OnSpawn // (Event|Public|BlueprintEvent) // @ game+0x1e02480
	void ChangeState(enum class EYVirtualCursorState State); // Function WBP_VirtualCursor.WBP_VirtualCursor_C.ChangeState // (Event|Public|BlueprintEvent) // @ game+0x1e02480
	void OnInitialized(); // Function WBP_VirtualCursor.WBP_VirtualCursor_C.OnInitialized // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1e02480
	void OnSpawnAnimFinished(); // Function WBP_VirtualCursor.WBP_VirtualCursor_C.OnSpawnAnimFinished // (BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void OnKeybindingDataChanged(); // Function WBP_VirtualCursor.WBP_VirtualCursor_C.OnKeybindingDataChanged // (BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void ExecuteUbergraph_WBP_VirtualCursor(int32_t EntryPoint); // Function WBP_VirtualCursor.WBP_VirtualCursor_C.ExecuteUbergraph_WBP_VirtualCursor // (Final|UbergraphFunction) // @ game+0x1e02480
};

