typedef struct {
	uint64 NameOffset; 
	StringPtr Name(NameOffset);
    uint64 field_08;
    uint64 offset_10;
    StringPtr field_10(offset_10);
} SRS_DATA<optimize=false, read=Name.Name>;

typedef struct {
	local uint64 p<hidden=true>;

    uint64 DataCount;
    uint64 DataOffset; p = FTell();
    if (DataOffset)
    {
        FSeek(DataOffset); SRS_DATA Data[DataCount];
    } FSeek(p);
} SRS_USER_DATA<optimize=false>;