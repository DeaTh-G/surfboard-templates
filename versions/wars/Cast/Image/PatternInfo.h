typedef struct {
    ushort TextureListIndex;
    ushort TextureMapIndex;
    ushort SpriteIndex;
} SRS_PATTERN_INFO<optimize=false,
    read=Str("[%d, %d, %d]", TextureListIndex, TextureMapIndex, SpriteIndex)>;
