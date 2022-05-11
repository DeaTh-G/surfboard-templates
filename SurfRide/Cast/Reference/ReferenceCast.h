struct SRS_LAYER;

typedef struct {
    local uint64 p<hidden=true>;
    
    size_t LayerOffset;
    uint field_04;
    uint field_08;
    uint field_0C;
    uint field_10;
    
    p = FTell();
    if (LayerOffset.offset)
    {
        FSeek(LayerOffset.offset); SRS_LAYER Layer;
    } FSeek(p);
} SRS_REFERENCE_CAST;
