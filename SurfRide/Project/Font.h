typedef struct {
    ushort Character;
    short TextureListIndex;
    short TextureIndex;
    short SpriteIndex;
} SRS_CHARACTER_MAPPING<optimize=false, read=Str("%c", Character)>;

typedef struct {
    local uint64 p<hidden=true>;

    size_t NameOffset;
    StringPtr Name(NameOffset.offset);
    int ID;
    uint field_08;
    ushort CharacterCount;
    ushort field_0E;
    size_t CharacterOffset;
    size_t field_14;
    size_t field_18; p = FTell();
    if (CharacterOffset.offset && CharacterCount)
    {
        FSeek(CharacterOffset.offset); SRS_CHARACTER_MAPPING CharacterMappings[CharacterCount];
    } FSeek(p);
} SRS_FONT<optimize=false, read=Name.Name>;