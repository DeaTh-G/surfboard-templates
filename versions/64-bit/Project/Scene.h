typedef struct (uint version) {
	local uint64 p<hidden=true>;

	uint64 NameOffset; 
	StringPtr Name(NameOffset);
	uint ID;
    uint Flags;
    uint64 LayerCount;
    uint64 LayerOffset;
    ushort CameraCount;
    short field_22;
    uint field_24;
    uint64 CameraOffset;
    SRS_COLOR BackgroundColor; // Always 0x4444CCFF
    SRS_VECTOR2 FrameSize;
    uint field_3C;
    uint64 field_40; p = FTell();
    if (LayerOffset && LayerCount)
    {
        FSeek(LayerOffset); SRS_LAYER Layers(version)[LayerCount];
    }
    if (CameraOffset && CameraCount);
    {
        FSeek(CameraOffset); SRS_CAMERA Cameras[CameraCount];
    } FSeek(p);
} SRS_SCENE<optimize=false, read=Name.Name>;