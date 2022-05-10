typedef struct (uint offset) {
    local uint64 p<hidden=true>;
    
    p = FTell();
    
    FSeek(offset); string Name;

    FSeek(p); 
} StringPtr<read=Name>;