typedef struct {
    local uint64 p<hidden=true>;

    size_t NameOffset;
    StringPtr Name(NameOffset.offset);
    uint DataType;
    size_t ValueOffset; p = FTell();
    if (ValueOffset.offset)
    {
        FSeek(ValueOffset.offset);
        switch (DataType)
        {
        case 5:
                string Value;
                break;
            default:
                uint Value;
                break;
        }
    } FSeek(p);
} SRS_DATA<optimize=false, read=Name.Name>;

typedef struct {
    local uint64 p<hidden=true>;

    uint DataCount;
    size_t DataOffset;
    
    p = FTell();
    if (DataOffset.offset)
    {
        FSeek(DataOffset.offset); SRS_DATA Data[DataCount];
    } FSeek(p);
} SRS_USERDATA<optimize=false>;