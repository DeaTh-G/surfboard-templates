typedef struct {
    float Left;
    float Top;
    float Right;
    float Bottom;
} SRS_RECTANGLE<optimize=false, bgcolor=0xFFFF00,
    read=Str("[%f, %f, %f, %f]", Left, Top, Right, Bottom)>;

typedef struct {
    local uint64 p<hidden=true>;

    size_t NameOffset;
    StringPtr Name(NameOffset.offset);
    if (VERSION >= 5)
    {
        size_t FileNameOffset;
        StringPtr FileName(FileNameOffset.offset);
    }
    uint ID;
    ushort Width;
    ushort Height;
    uint Flags;
    uint RectangleCount;
    size_t RectangleOffset;
    size_t UserDataOffset; p = FTell();
    if (CropOffset.offset && CropCount)
    {
        FSeek(CropOffset.offset); SRS_RECTANGLE Rectangles[CropCount];
    }
    if (UserDataOffset.offset)
    {
        FSeek(UserDataOffset.offset); SRS_USERDATA UserData;
    } FSeek(p);
} SRS_TEXTURE<optimize=false, bgcolor=0x002D72, read=Name.Name>;