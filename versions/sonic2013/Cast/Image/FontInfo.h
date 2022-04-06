typedef struct {
	local uint64 p<hidden=true>;

    uint field_00;
    uint FontListIndex;
    uint CharacterListOffset;
    SRS_VECTOR2 Scale;
    uint field_14;
    uint field_18;
    short FontSpacing;
    ushort field_1E;
    uint FontListOffset; p = FTell();
    if (CharacterListOffset)
    {
        FSeek(CharacterListOffset); string Characters;
    } 
    if (FontListOffset)
    { 
        FSeek(FontListOffset); SRS_FONT_LIST FontList;
    } FSeek(p);
} SRS_FONT_INFO<optimize=false>;