typedef struct {
	local uint64 p<hidden=true>;

    uint field_00;
    uint FontListIndex;
    uint64 CharacterListOffset;
    SRS_VECTOR2 Scale;
    uint field_18;
    uint field_1C;
    short FontSpacing;
    ushort field_22;
    uint field_24;
    uint64 FontListOffset; p = FTell();
    if (CharacterListOffset)
    {
        FSeek(CharacterListOffset); string Characters;
    } 
    if (FontListOffset)
    { 
        FSeek(FontListOffset); SRS_FONT_LIST FontList;
    } FSeek(p);
} SRS_FONT_INFO<optimize=false>;