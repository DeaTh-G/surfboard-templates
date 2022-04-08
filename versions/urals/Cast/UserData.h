typedef struct {
	local uint64 p<hidden=true>;

	uint NameOffset; 
	StringPtr Name(NameOffset);
    uint field_04;
    uint offset_08; p = FTell();

	if (offset_08)
	{
		FSeek(offset_08);
		switch (field_04)
		{
			case 5:
				string field_08;
				break;
			default:
				uint field_08;
				break;
		}
	} FSeek(p);
} SRS_DATA<optimize=false, read=Name.Name>;

typedef struct {
	local uint64 p<hidden=true>;

    uint DataCount;
    uint DataOffset; p = FTell();
    if (DataOffset)
    {
        FSeek(DataOffset); SRS_DATA Data[DataCount];
    } FSeek(p);
} SRS_USER_DATA<optimize=false>;