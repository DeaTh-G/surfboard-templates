typedef struct (uint version) {
	local uint64 p<hidden=true>;

	uint NameOffset; 
	StringPtr Name(NameOffset);
	uint ID;
    uint Flags;
    uint LayerCount;
    uint LayerOffset;
    ushort CameraCount;
    short field_16;
    uint CameraOffset;
    SRS_COLOR BackgroundColor; // Always 0x4444CCFF
    SRS_VECTOR2 FrameSize;
    uint field_24; p = FTell();
    if (LayerOffset && LayerCount)
    {
        FSeek(LayerOffset); SRS_LAYER Layers(version)[LayerCount];
    }
    if (CameraOffset && CameraCount);
    {
        FSeek(CameraOffset); SRS_CAMERA Cameras[CameraCount];
    } FSeek(p);
} SRS_SCENE<optimize=false, read=Name.Name>;