typedef struct {
	local uint64 p<hidden=true>;

	uint64 NameOffset; 
	StringPtr Name(NameOffset);
	uint64 field_08;
    ushort field_10;
    ushort FontCount;
    uint field_14;
    uint64 FontOffset;
    uint field_20;
    uint field_24;
    uint64 field_28; p = FTell();
    if (FontOffset && FontCount)
    {
        FSeek(FontOffset); SRS_FONT_MAPPING FontMappings[FontCount];
    } FSeek(p);
    
} SRS_FONT_LIST<optimize=false, read=Name.Name>;