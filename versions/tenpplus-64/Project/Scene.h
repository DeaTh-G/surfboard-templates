typedef struct {
	local uint64 p<hidden=true>;

	uint64 NameOffset; 
	StringPtr Name(NameOffset);
	uint ID;
    uint Flags;
    uint64 LayerCount;
    uint64 LayerOffset;
    uint64 CameraCount;
    uint64 CameraOffset;
    SRS_COLOR BackgroundColor; // Always 0x4444CCFF
    SRS_VECTOR2 FrameSize;
    uint UserDataOffset; p = FTell();
    if (LayerOffset && LayerCount)
    {
        FSeek(LayerOffset); SRS_LAYER Layers[LayerCount];
    }
    if (CameraOffset && CameraCount);
    {
        FSeek(CameraOffset); SRS_CAMERA Cameras[CameraCount];
    } FSeek(p);
} SRS_SCENE<optimize=false, read=Name.Name>;