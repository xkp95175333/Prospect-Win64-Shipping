// WidgetBlueprintGeneratedClass MapCursor_WBP.MapCursor_WBP_C
// Size: 0x278 (Inherited: 0x260)
struct UMapCursor_WBP_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x260(0x08)
	struct UImage* CursorImage; // 0x268(0x08)
	struct UMaterialInstanceDynamic* CursorImage_MID; // 0x270(0x08)

	void OnMapCursorMoved(float MouseX, float MouseY, float MapTexWidth, float MapTexHeight); // Function MapCursor_WBP.MapCursor_WBP_C.OnMapCursorMoved // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void PreConstruct(bool IsDesignTime); // Function MapCursor_WBP.MapCursor_WBP_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1e02480
	void ExecuteUbergraph_MapCursor_WBP(int32_t EntryPoint); // Function MapCursor_WBP.MapCursor_WBP_C.ExecuteUbergraph_MapCursor_WBP // (Final|UbergraphFunction) // @ game+0x1e02480
};

