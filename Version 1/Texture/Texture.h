typedef struct {
	local uint64 p<hidden=true>;

	uint NameOffset;
	StringPtr Name(NameOffset);
	uint ID;
    ushort Width;
    ushort Height;
    uint Flags;
    uint SubImageCount;
    uint SubImageOffset;
    uint UserDataOffset; p = FTell();
    if (SubImageOffset && SubImageCount)
    {
        FSeek(SubImageOffset); SRS_SUBIMAGE SubImages[SubImageCount];
    } FSeek(p);
} SRS_TEXTURE<optimize=false, bgcolor=0x002D72, read=Name.Name>;