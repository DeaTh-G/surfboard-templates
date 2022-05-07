typedef struct {
	local uint64 p<hidden=true>;

	uint64 NameOffset;
	StringPtr Name(NameOffset);
	ushort SceneCount;
    ushort field_06;
    ushort TextureListCount;
    ushort FontListCount;
    uint64 SceneOffset;
    uint64 TextureListOffset;
    uint64 FontListOffset;
    SRS_CAMERA Camera;
    uint StartFrame;
    uint EndFrame;
    float FrameRate;
    uint64 UserDataOffset; p = FTell();
    if (SceneOffset && SceneCount)
    {
        FSeek(SceneOffset); SRS_SCENE Scenes[SceneCount];
    }
    if (TextureListOffset && TextureListCount);
    {
        FSeek(TextureListOffset); SRS_TEXTURE_LIST TextureLists[TextureListCount];
    }
    if (FontListOffset && FontListCount)
    { 
        FSeek(FontListOffset); SRS_FONT_LIST FontLists[FontListCount];
    } FSeek(p);
} SRS_PROJECT<read=Name.Name>;