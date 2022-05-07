typedef struct (uint version){
	local uint64 p<hidden=true>;

	uint NameOffset;
	StringPtr Name(NameOffset);
	ushort SceneCount;
    short field_06;
    ushort TextureListCount;
    ushort FontCount;
    uint SceneOffset;
    uint TextureListOffset;
    uint FontOffset;
    SRS_CAMERA Camera;
    uint StartFrame;
    uint EndFrame;
    float FrameRate;
    uint field_5C; p = FTell();
    if (SceneOffset && SceneCount)
    {
        FSeek(SceneOffset); SRS_SCENE Scenes(version)[SceneCount];
    }
    if (TextureListOffset && TextureListCount);
    {
        FSeek(TextureListOffset); SRS_TEXTURE_LIST TextureLists[TextureListCount];
    }
    if (FontOffset && FontCount)
    { 
        FSeek(FontOffset); SRS_FONT FontLists[FontCount];
    } FSeek(p);
} SRS_PROJECT<read=Name.Name>;

typedef struct(uint version) {
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
        FSeek(o + ProjectOffset); SRS_PROJECT Project(version);
    } FSeek(p);
} SRS_PROJECT_CHUNK<bgcolor=0x90FF00>;