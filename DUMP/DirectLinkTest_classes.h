// Class DirectLinkTest.DirectLinkTestLibrary
// Size: 0x28 (Inherited: 0x28)
struct UDirectLinkTestLibrary : UBlueprintFunctionLibrary {

	bool TestParameters(); // Function DirectLinkTest.DirectLinkTestLibrary.TestParameters // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x10573e0
	bool StopSender(); // Function DirectLinkTest.DirectLinkTestLibrary.StopSender // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x10573b0
	bool StopReceiver(); // Function DirectLinkTest.DirectLinkTestLibrary.StopReceiver // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x1057380
	bool StartSender(); // Function DirectLinkTest.DirectLinkTestLibrary.StartSender // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x1057350
	bool StartReceiver(); // Function DirectLinkTest.DirectLinkTestLibrary.StartReceiver // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x1057320
	bool SetupSender(); // Function DirectLinkTest.DirectLinkTestLibrary.SetupSender // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x10572f0
	bool SetupReceiver(); // Function DirectLinkTest.DirectLinkTestLibrary.SetupReceiver // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x10572c0
	bool SendScene(struct FString InFilePath); // Function DirectLinkTest.DirectLinkTestLibrary.SendScene // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x1057220
	int32_t MakeEndpoint(struct FString NiceName, bool bVerbose); // Function DirectLinkTest.DirectLinkTestLibrary.MakeEndpoint // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x1057140
	bool DumpReceivedScene(); // Function DirectLinkTest.DirectLinkTestLibrary.DumpReceivedScene // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x1057110
	bool DeleteEndpoint(int32_t EndpointId); // Function DirectLinkTest.DirectLinkTestLibrary.DeleteEndpoint // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x1057080
	bool DeleteAllEndpoint(); // Function DirectLinkTest.DirectLinkTestLibrary.DeleteAllEndpoint // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x1057050
	bool AddPublicSource(int32_t EndpointId, struct FString SourceName); // Function DirectLinkTest.DirectLinkTestLibrary.AddPublicSource // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x1056f20
	bool AddPublicDestination(int32_t EndpointId, struct FString DestName); // Function DirectLinkTest.DirectLinkTestLibrary.AddPublicDestination // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x1056df0
};

