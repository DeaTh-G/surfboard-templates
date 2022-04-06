typedef struct {
    local uint64 o<hidden=true> = FTell();
	if (o % 16 != 0)
	{
		FSkip(16 - (o % 16)); o = FTell();
	}
	
    SRS_CHUNK_HEADER Header;
    uint OffsetCount;
    uint field_0C<hidden=true>;
    uint Offsets[OffsetCount]<optimize=false>;
} SRS_OFFSET_CHUNK<bgcolor=0xFF00B2>;