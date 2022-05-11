typedef struct {
    local uint64 p<hidden=true>;

    size_t NameOffset;
    StringPtr Name(NameOffset.offset);
    uint ID;
    uint Flags;
    if (VERSION >= 3)
        uint field_10;
    uint LayerCount;
    size_t LayerOffset;
    ushort CameraCount;
    short DefaultCameraIndex;
    size_t CameraOffset;
    SRS_COLOR BackgroundColor;
    SRS_VECTOR2 FrameSize;
    size_t UserDataOffset; p = FTell();
    if (LayerOffset.offset && LayerCount)
    {
        FSeek(LayerOffset.offset); SRS_LAYER Layers[LayerCount];
    }
    if (CameraOffset.offset && CameraCount);
    {
        FSeek(CameraOffset.offset); SRS_CAMERA Cameras(1)[CameraCount];
    } FSeek(p);
} SRS_SCENE<optimize=false, read=Name.Name>;