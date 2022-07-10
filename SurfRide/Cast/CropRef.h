typedef struct {
    ushort TextureListIndex;
    ushort TextureIndex;
    ushort CropIndex;
} SRS_CROPREF<optimize=false,
    read=Str("[%d, %d, %d]", TextureListIndex, TextureIndex, CropIndex)>;
