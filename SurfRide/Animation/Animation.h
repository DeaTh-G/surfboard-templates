typedef struct {
    local uint64 p<hidden=true>;

    size_t NameOffset;
    StringPtr Name(NameOffset.offset);
    uint ID;
    uint LinkCount;
    uint FrameCount;
    size_t LinkOffset;
    size_t UserDataOffset;
    if (VERSION >= 1)
        byte IsLooping;

    p = FTell();
    if (LinkOffset.offset && LinkCount)
    {
        FSeek(LinkOffset.offset); SRS_ANIMATIONLINK AnimationLinks[LinkCount];
    } FSeek(p);
} SRS_ANIMATION<optimize=false, read=Name.Name>;