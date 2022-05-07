typedef struct (uint version) {
	local uint64 p<hidden=true>;

	uint NameOffset;
	StringPtr Name(NameOffset);
	uint ID;
    uint Flags;
    uint CastCellCount;
    uint CastOffset;
    uint CellOffset;
    uint AnimationCount;
    uint AnimationOffset;
    uint field_20;
    uint field_24; p = FTell();
    if (CastCellCount)
    {
        if (CastOffset)
        {
            FSeek(CastOffset); SRS_CASTNODE Casts[CastCellCount];
        }
        if (CellOffset)
        {
            FSeek(CellOffset);

            local int i;
            for (i = 0; i < CastCellCount; i++)
                if ((Flags & 0xF) == 1)
				    SRS_CELL3D Cells(Casts[i].Name.Name);
                else
				    SRS_CELL Cells(Casts[i].Name.Name);
        }
    }
    if (AnimationOffset && AnimationCount)
    {
        FSeek(AnimationOffset); SRS_ANIMATION Animations(version)[AnimationCount];
    } FSeek(p);
} SRS_LAYER<optimize=false, read=Name.Name>;