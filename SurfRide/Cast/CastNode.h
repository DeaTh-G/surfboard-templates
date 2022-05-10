typedef struct {
    local uint64 p<hidden=true>;

    size_t NameOffset;
    StringPtr Name(NameOffset.offset);
    uint ID;
    uint Flags;
    size_t NodeOffset;    
    short ChildIndex;
    short SiblingIndex;
    size_t UserDataOffset;

    p = FTell();
    if (NodeOffset.offset)
    {
        FSeek(NodeOffset.offset);
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
    if (UserDataOffset.offset)
    {
        FSeek(UserDataOffset.offset); SRS_CAST_USER_DATA UserData;
    } FSeek(p);
} SRS_CASTNODE<optimize=false, read=Name.Name>;