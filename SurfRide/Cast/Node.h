typedef struct {
    local uint64 p<hidden=true>;

    size_t NameOffset;
    StringPtr Name(NameOffset.offset);
    uint Index;
    uint Flags;
    size_t DataOffset;    
    short ChildIndex;
    short SiblingIndex;
    size_t UserDataOffset;

    p = FTell();
    if (DataOffset.offset)
    {
        FSeek(DataOffset.offset);
        switch (Flags & 0xF)
        {
            case 1: 
                SRS_IMAGE_CAST ImageCast;
                break;
            case 2: 
                SRS_SLICE_CAST SliceCast;
                break;
            case 3:
                SRS_REFERENCE_CAST ReferenceCast;
                break;
        }
    }
    if (UserDataOffset.offset)
    {
        FSeek(UserDataOffset.offset); SRS_USERDATA UserData;
    } FSeek(p);
} SRS_NODE<optimize=false, read=Name.Name>;