enum <ushort> GeometryType {
    Geometry2D,
    Geometry3D
};

typedef struct {
    local uint64 p<hidden=true>;

    size_t NameOffset;
    StringPtr Name(NameOffset.offset);
    uint ID;
    uint Flags;
    uint CastCount;
    size_t NodeOffset;
    size_t CellOffset;
    uint AnimationCount;
    size_t AnimationOffset;
    uint CurrentAnimationIndex;
    size_t UserDataOffset; p = FTell();
    if (CastCount)
    {
        if (NodeOffset.offset)
        {
            FSeek(NodeOffset.offset); SRS_CASTNODE Casts[CastCount];
        }
        if (CellOffset.offset)
        {
            FSeek(CellOffset.offset);

            local int i;
            for (i = 0; i < CastCount; i++)
                if ((Flags & 0xF) == 1)
				    SRS_TRS3D Transform3D(Casts[i].Name.Name);
                else
				    SRS_TRS2D Transform2D(Casts[i].Name.Name);
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