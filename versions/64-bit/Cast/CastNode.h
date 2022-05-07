typedef struct {
	local uint64 p<hidden=true>;

	uint64 NameOffset; 
	StringPtr Name(NameOffset);
	uint ID;
    uint Flags;
    uint64 CastOffset;
    short ChildIndex;
    short NextIndex;
    uint field_1C;
    uint64 UserDataOffset; p = FTell();
    if (CastOffset)
    {
        FSeek(CastOffset);
        switch (Flags & 0xF)
        {
            case 1: 
                SRS_IMAGE_CAST ImageCast;
                break;
            case 2: 
                SRS_SLICE_CAST SliceCast;
                break;
        }
    } 
	if (UserDataOffset)
	{
		FSeek(UserDataOffset); SRS_CAST_USER_DATA UserData;
	} FSeek(p);
} SRS_CASTNODE<optimize=false, read=Name.Name>;