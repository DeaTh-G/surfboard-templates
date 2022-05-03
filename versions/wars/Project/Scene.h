typedef struct {
	local uint64 p<hidden=true>;

	uint64 NameOffset; 
	StringPtr Name(NameOffset);
	uint ID;
    uint Flags;
    uint field_10;
    uint LayerCount;
    uint64 LayerOffset;
    ushort CameraCount;
    ushort field_22;
    uint field_24;
    uint64 CameraOffset;
    SRS_COLOR BackgroundColor; // Always 0x4444CCFF
    SRS_VECTOR2 FrameSize;
    uint field_3C;
    uint64 UserDataOffset; p = FTell();
    if (LayerOffset && LayerCount)
    {
        FSeek(LayerOffset); SRS_LAYER Layers[LayerCount];
    }
    if (CameraOffset && CameraCount);
    {
        FSeek(CameraOffset); SRS_SCENE_CAMERA Cameras[CameraCount];
    } FSeek(p);
} SRS_SCENE<optimize=false, read=Name.Name>;