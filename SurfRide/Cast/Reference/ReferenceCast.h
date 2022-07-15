struct SRS_LAYER;

typedef struct {
    local uint64 p<hidden=true>;
    
    size_t LayerOffset;
    int field_04;
    int field_08;
    int field_0C;
    int field_10;
    
    p = FTell();
    if (LayerOffset.offset)
    {
        FSeek(LayerOffset.offset); SRS_LAYER Layer;
    } FSeek(p);
} SRS_REFERENCECAST;
