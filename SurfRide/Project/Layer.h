typedef struct {
    local uint64 p<hidden=true>;

    size_t NameOffset;
    StringPtr Name(NameOffset.offset);
    uint Index;
    uint Flags;
    uint CastCount;
    size_t NodeOffset;
    size_t TransformOffset;
    uint AnimationCount;
    size_t AnimationOffset;
    uint DefaultAnimationIndex;
    size_t UserDataOffset; p = FTell();
    if (CastCount)
    {
        if (NodeOffset.offset)
        {
            FSeek(NodeOffset.offset); SRS_NODE Casts[CastCount];
        }
        if (TransformOffset.offset)
        {
            FSeek(TransformOffset.offset);

            local int i;
            for (i = 0; i < CastCount; i++)
                if ((Flags & 0xF) == 1)
				    SRS_TRS3D Transforms(Casts[i].Name.Name);
                else
				    SRS_TRS2D Transforms(Casts[i].Name.Name);
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