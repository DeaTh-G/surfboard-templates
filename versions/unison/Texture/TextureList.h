typedef struct {
	local uint64 p<hidden=true>;
	
    uint NameOffset;
	StringPtr Name(NameOffset);
	uint TextureCount;
	uint TextureOffset;
	uint UserDataOffset; p = FTell();
    if (TextureOffset && TextureCount)
    {
        FSeek(TextureOffset); SRS_TEXTURE Textures[TextureCount];
    } FSeek(p); 
} SRS_TEXTURE_LIST<optimize=false, read=Name.Name>;