typedef struct {
    local uint64 p<hidden=true>;

    size_t NameOffset;
    StringPtr Name(NameOffset.offset);
    if (VERSION >= 4)
        uint field_08;
    uint TextureCount;
    size_t TextureOffset;
    size_t UserDataOffset;
    if (VERSION == 0)
        uint field_14;
        
    p = FTell();
    if (TextureOffset.offset && TextureCount)
    {
        FSeek(TextureOffset.offset); SRS_TEXTURE Textures[TextureCount];
    }
    if (UserDataOffset.offset)
    {
        FSeek(UserDataOffset.offset); SRS_USERDATA UserData;
    } FSeek(p); 
} SRS_TEXLIST<optimize=false, read=Name.Name>;

typedef struct {
    local uint64 o<hidden=true> = FTell();
    local uint64 p<hidden=true>;

    SRS_CHUNK_HEADER Header;
    uint TexListOffset;
    uint TexListCount; p = FTell();
    if (TexListOffset && TexListCount)
    { 
        FSeek(o + TexListOffset); SRS_TEXLIST TexLists[TexListCount];
    }
} SRS_TEXTURELIST_CHUNK<bgcolor=0x006AFF>;