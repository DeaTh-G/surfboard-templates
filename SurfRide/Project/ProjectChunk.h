typedef struct{
    local uint64 p<hidden=true>;

    size_t NameOffset;
    StringPtr Name(NameOffset.offset);
    short SceneCount;
    short field_06;
    short TextureListCount;
    short FontCount;
    size_t SceneOffset;
    size_t TextureListOffset;
    size_t FontOffset;
    SRS_CAMERA Camera;
    uint StartFrame;
    uint EndFrame;
    if (VERSION >= 1)
        float FrameRate;
    size_t UserDataOffset; p = FTell();
    if (SceneOffset.offset && SceneCount)
    {
        FSeek(SceneOffset.offset); SRS_SCENE Scenes[SceneCount];
    }
    if (TextureListOffset.offset && TextureListCount);
    {
        FSeek(TextureListOffset.offset); SRS_TEXLIST TexLists[TextureListCount];
    }
    if (FontOffset.offset && FontCount)
    { 
        FSeek(FontOffset.offset); SRS_FONT FontLists[FontCount];
    }
    if (UserDataOffset.offset)
    {
        FSeek(UserDataOffset.offset); SRS_USERDATA UserData;
    } FSeek(p);
} SRS_PROJECT<read=Name.Name>;

typedef struct {
    local uint64 o<hidden=true> = FTell();
    local uint64 p<hidden=true>;
    
    SRS_CHUNKHEADER Header;
    uint ProjectOffset;
    uint padding<hidden=true>; p = FTell();
    if (ProjectOffset)
    {
        FSeek(o + ProjectOffset); SRS_PROJECT Project;
    } FSeek(p);
} SRS_PROJECT_CHUNK<bgcolor=0x90FF00>;