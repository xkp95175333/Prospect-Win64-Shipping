// Class DatasmithC4DTranslator.DatasmithC4DImportOptions
// Size: 0x30 (Inherited: 0x28)
struct UDatasmithC4DImportOptions : UDatasmithOptionsBase {
	bool bImportEmptyMesh; // 0x28(0x01)
	bool bOptimizeEmptySingleChildActors; // 0x29(0x01)
	bool bAlwaysGenerateNormals; // 0x2a(0x01)
	char pad_2B[0x1]; // 0x2b(0x01)
	float ScaleVertices; // 0x2c(0x04)
};

