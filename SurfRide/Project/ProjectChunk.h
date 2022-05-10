typedef struct{
    local uint64 p<hidden=true>;

    size_t NameOffset;
    StringPtr Name(NameOffset.offset);
    ushort SceneCount;
    short field_06;
    ushort TextureListCount;
    ushort FontCount;
    size_t SceneOffset;
    size_t TextureListOffset;
    size_t FontOffset;
    SRS_CAMERA Camera;
    uint StartFrame;
    uint EndFrame;
    float FrameRate;
    uint UserDataOffset; p = FTell();
    if (SceneOffset.offset && SceneCount)
    {
        FSeek(SceneOffset.offset); SRS_SCENE Scenes[SceneCount];
    }
    if (TextureListOffset.offset && TextureListCount);
    {
        FSeek(TextureListOffset.offset); SRS_TEXTURE_LIST TextureLists[TextureListCount];
    }
    if (FontOffset.offset && FontCount)
    { 
        FSeek(FontOffset.offset); SRS_FONT FontLists[FontCount];
    } FSeek(p);
} SRS_PROJECT<read=Name.Name>;

typedef struct {
    local uint64 o<hidden=true> = FTell();
    if (o % 16 != 0)
    {
        FSkip(16 - (o % 16)); o = FTell();
    }
    local uint64 p<hidden=true>;
    
    SRS_CHUNK_HEADER Header;
    uint ProjectOffset;
    uint field_0C; p = FTell();
    if (ProjectOffset)
    {
        FSeek(o + ProjectOffset); SRS_PROJECT Project;
    } FSeek(p);
} SRS_PROJECT_CHUNK<bgcolor=0x90FF00>;