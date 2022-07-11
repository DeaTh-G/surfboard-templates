struct SRS_LAYER;

typedef struct {
    local uint64 p<hidden=true>;
    
    size_t LayerOffset;
    size_t field_04;
    size_t field_08;
    
    p = FTell();
    if (LayerOffset.offset)
    {
        FSeek(LayerOffset.offset); SRS_LAYER Layer;
    } FSeek(p);
} SRS_REFERENCECAST;
