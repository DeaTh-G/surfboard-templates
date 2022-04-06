typedef struct {
	local uint64 p<hidden=true>;

	uint NameOffset; 
	StringPtr Name(NameOffset);
	uint field_04;
    uint field_08;
    ushort FontCount;
    ushort field_0E;
    uint FontOffset;
    uint field_14;
    uint field_18; p = FTell();
    if (FontOffset && FontCount)
    {
        FSeek(FontOffset); SRS_FONT_MAPPING FontMappings[FontCount];
    } FSeek(p);
    
} SRS_FONT_LIST<optimize=false, read=Name.Name>;