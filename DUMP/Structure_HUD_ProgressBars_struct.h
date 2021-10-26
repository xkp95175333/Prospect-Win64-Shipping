// UserDefinedStruct Structure_HUD_ProgressBars.Structure_HUD_ProgressBars
// Size: 0x22 (Inherited: 0x00)
struct FStructure_HUD_ProgressBars {
	float StartValue_7_C4C15954450AAA4F616FDE8A91A5AC08; // 0x00(0x04)
	float DesiredValue_3_2C117D094E4B9F91267EFF82B906EAFE; // 0x04(0x04)
	float Alpha_5_D86EF2224E857BC7B927459986D8A1C8; // 0x08(0x04)
	char pad_C[0x4]; // 0x0c(0x04)
	struct UProgressBar* ProgressBar_10_700A577046AAB0A82FA4BF9177426292; // 0x10(0x08)
	float Speed_13_7B8385DB490AC27EBC94CAB250DF4EC3; // 0x18(0x04)
	float Delay_15_34041B7E4CCFD62346ED32B285990076; // 0x1c(0x04)
	enum class EHorizonTweenLerpMode InterpolationMode_20_41F3AC9E428769FF838307B96C4C0791; // 0x20(0x01)
	bool IsDone_22_CABD3814486E24C2C224A4BA4916C019; // 0x21(0x01)
};

