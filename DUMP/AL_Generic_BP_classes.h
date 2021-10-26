// BlueprintGeneratedClass AL_Generic_BP.AL_Generic_BP_C
// Size: 0x4a8 (Inherited: 0x460)
struct AAL_Generic_BP_C : AAL_Base_BP_C {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x460(0x08)
	struct UArrowComponent* Arrow; // 0x468(0x08)
	struct UTextRenderComponent* TextRender; // 0x470(0x08)
	struct FText LocationName; // 0x478(0x18)
	struct FText LocationSpecificID; // 0x490(0x18)

	void ReceiveBeginPlay(); // Function AL_Generic_BP.AL_Generic_BP_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x1e02480
	void ExecuteUbergraph_AL_Generic_BP(int32_t EntryPoint); // Function AL_Generic_BP.AL_Generic_BP_C.ExecuteUbergraph_AL_Generic_BP // (Final|UbergraphFunction) // @ game+0x1e02480
};

