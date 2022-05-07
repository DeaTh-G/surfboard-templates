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
    uint FontOffset; p = FTell();
    if (CharacterListOffset)
    {
        FSeek(CharacterListOffset); string Characters;
    } 
    if (FontOffset)
    { 
        FSeek(FontOffset); SRS_FONT FontList;
    } FSeek(p);
} SRS_FONT_INFO<optimize=false>;