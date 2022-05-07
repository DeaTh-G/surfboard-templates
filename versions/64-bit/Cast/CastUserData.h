typedef struct {
	local uint64 p<hidden=true>;

	uint64 NameOffset; 
	StringPtr Name(NameOffset);
    uint64 field_08;
    uint64 offset_10; p = FTell();

	if (offset_10)
	{
		FSeek(offset_10);
		switch (field_08)
		{
			case 5:
				string field_10;
				break;
			default:
				uint field_10;
				break;
		}
	} FSeek(p);
} SRS_CAST_DATA<optimize=false, read=Name.Name>;

typedef struct {
	local uint64 p<hidden=true>;

    uint64 DataCount;
    uint64 DataOffset; p = FTell();
    if (DataOffset)
    {
        FSeek(DataOffset); SRS_CAST_DATA Data[DataCount];
    } FSeek(p);
} SRS_CAST_USER_DATA<optimize=false>;