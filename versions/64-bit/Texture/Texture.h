typedef struct {
    float Left;
    float Top;
    float Right;
    float Bottom;
} SRS_IMAGE<optimize=false, bgcolor=0xFFFF00,
    read=Str("[%f, %f, %f, %f]", Left, Top, Right, Bottom)>;

typedef struct {
	local uint64 p<hidden=true>;

	uint64 NameOffset;
	StringPtr Name(NameOffset);
	uint ID;
    ushort Width;
    ushort Height;
    uint Flags;
    uint ImageCount;
    uint64 ImageOffset;
    uint64 field_20; p = FTell();
    if (ImageOffset && ImageCount)
    {
        FSeek(ImageOffset); SRS_IMAGE Images[ImageCount];
    } FSeek(p);
} SRS_TEXTURE<optimize=false, bgcolor=0x002D72, read=Name.Name>;