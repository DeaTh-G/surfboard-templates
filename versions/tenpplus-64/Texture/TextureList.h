typedef struct {
	local uint64 p<hidden=true>;
	
    uint64 NameOffset;
	StringPtr Name(NameOffset);
	uint64 TextureCount;
	uint64 TextureOffset;
	uint64 UserDataOffset; p = FTell();
    if (TextureOffset && TextureCount)
    {
        FSeek(TextureOffset); SRS_TEXTURE Textures[TextureCount];
    } FSeek(p); 
} SRS_TEXTURE_LIST<optimize=false, read=Name.Name>;