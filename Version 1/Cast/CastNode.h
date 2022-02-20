typedef struct {
	local uint64 p<hidden=true>;

	uint NameOffset; 
	StringPtr Name(NameOffset);
	uint ID;
    uint Flags;
    uint CastOffset;
    short ChildIndex;
    short NextIndex;
    uint UserDataOffset; p = FTell();
    if (CastOffset)
    {
        FSeek(CastOffset);
        switch (Flags & 0xF)
        {
            case 1: 
                SRS_IMAGE_CAST ImageCast;
                break;
        }
    } FSeek(p);
} SRS_CASTNODE<optimize=false, read=Name.Name>;