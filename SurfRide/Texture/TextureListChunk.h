typedef struct {
    local uint64 p<hidden=true>;

    size_t NameOffset;
    StringPtr Name(NameOffset.offset);
    if (VERSION >= 3)
        uint field_08;
    uint TextureCount;
    size_t TextureOffset;
    size_t UserDataOffset; p = FTell();
    if (TextureOffset.offset && TextureCount)
    {
        FSeek(TextureOffset.offset); SRS_TEXTURE Textures[TextureCount];
    }
    if (UserDataOffset.offset)
    {
        FSeek(UserDataOffset.offset); SRS_USERDATA UserData;
    } FSeek(p); 
} SRS_TEXTURELIST<optimize=false, read=Name.Name>;

typedef struct {
    local uint64 o<hidden=true> = FTell();
    if (o % 16 != 0)
    {
        FSkip(16 - (o % 16)); o = FTell();
    }
    local uint64 p<hidden=true>;

    SRS_CHUNK_HEADER Header;
    uint TextureListOffset;
    uint TextureListCount; p = FTell();
    if (TextureListOffset && TextureListCount)
    { 
        FSeek(o + TextureListOffset); SRS_TEXTURELIST TextureLists[TextureListCount];
    }
} SRS_TEXTURELIST_CHUNK<bgcolor=0x006AFF>;