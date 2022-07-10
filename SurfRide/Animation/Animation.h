typedef struct {
    local uint64 p<hidden=true>;

    size_t NameOffset;
    StringPtr Name(NameOffset.offset);
    uint ID;
    int MotionCount;
    uint EndFrame;
    size_t MotionOffset;
    if (VERSION >= 1)
        size_t UserDataOffset;
    if (VERSION >= 2)
        byte IsLooping;

    p = FTell();
    if (MotionOffset.offset && MotionCount)
    {
        FSeek(MotionOffset.offset); SRS_MOTION Motions[MotionCount];
    }
    if (UserDataOffset.offset)
    {
        FSeek(UserDataOffset.offset); SRS_USERDATA UserData;
    } FSeek(p);
} SRS_ANIMATION<optimize=false, read=Name.Name>;