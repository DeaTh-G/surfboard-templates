typedef struct {
    local uint64 p<hidden=true>;

    size_t NameOffset;
    StringPtr Name(NameOffset.offset);
    uint ID;
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
            // case 0: SRS_NULLCAST NullCast;
            case 1: 
                SRS_IMAGECAST ImageCast;
                break;
            case 2: 
                SRS_SLICECAST SliceCast;
                break;
            case 3:
                SRS_REFERENCECAST ReferenceCast;
                break;
        }
    }
    if (UserDataOffset.offset)
    {
        FSeek(UserDataOffset.offset); SRS_USERDATA UserData;
    } FSeek(p);
} SRS_CASTNODE<optimize=false, read=Name.Name>;