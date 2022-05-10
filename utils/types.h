typedef struct {
    if (VERSION >= 2)
    {
        if (FTell() % 8 != 0)
            FSkip(8 - (FTell() % 8));
    }
    else
    {
        if (FTell() % 4 != 0)
            FSkip(4 - (FTell() % 4));
    }
    
    local uint64 value;
    
    if (VERSION >= 2)
        uint64 offset;
    else
        int offset;
    
    value = offset;
} size_t<read=offset>;