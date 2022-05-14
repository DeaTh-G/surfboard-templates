typedef struct {
    local uint64 p<hidden=true>;

    size_t NameOffset;
    StringPtr Name(NameOffset.offset);
    uint ID;
    uint Flags;
    uint CastCellCount;
    size_t CastNodeOffset;
    size_t CastCellOffset;
    uint AnimationCount;
    size_t AnimationOffset;
    uint DefaultAnimationIndex;
    size_t UserDataOffset; p = FTell();
    if (CastCellCount)
    {
        if (CastNodeOffset.offset)
        {
            FSeek(CastNodeOffset.offset); SRS_CASTNODE Casts[CastCellCount];
        }
        if (CastCellOffset.offset)
        {
            FSeek(CastCellOffset.offset);

            local int i;
            for (i = 0; i < CastCellCount; i++)
                if ((Flags & 0xF) == 1)
				    SRS_CELL3D Cells(Casts[i].Name.Name);
                else
				    SRS_CELL Cells(Casts[i].Name.Name);
        }
    }
    if (AnimationOffset.offset && AnimationCount)
    {
        FSeek(AnimationOffset.offset); SRS_ANIMATION Animations[AnimationCount];
    }
    if (UserDataOffset.offset)
    {
        FSeek(UserDataOffset.offset); SRS_USERDATA UserData;
    } FSeek(p);
} SRS_LAYER<optimize=false, read=Name.Name>;