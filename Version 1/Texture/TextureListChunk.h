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
        FSeek(o + TextureListOffset); SRS_TEXTURE_LIST TextureLists[TextureListCount];
    }
} SRS_TEXTURE_LIST_CHUNK<bgcolor=0x006AFF>;