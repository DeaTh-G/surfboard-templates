typedef struct {
    local uint64 p<hidden=true>;

    size_t NameOffset;
    StringPtr Name(NameOffset.offset);
    uint field_04;
    size_t offset_08; p = FTell();
    if (offset_08.offset)
    {
        FSeek(offset_08.offset);
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
} SRS_CAST_DATA<optimize=false, read=Name.Name>;

typedef struct {
    local uint64 p<hidden=true>;

    uint DataCount;
    size_t DataOffset;
    
    p = FTell();
    if (DataOffset.offset)
    {
        FSeek(DataOffset.offset); SRS_CAST_DATA Data[DataCount];
    } FSeek(p);
} SRS_CAST_USER_DATA<optimize=false>;