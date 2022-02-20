typedef struct {
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
			{
				switch (Casts[i].Flags & 0xF)
				{
					case 1:
						SRS_IMAGE_CELL Cells(Casts[i].Name.Name);
						break;
				}
			}
        }
    }
    if (AnimationOffset && AnimationCount)
    {
        FSeek(AnimationOffset); SRS_ANIMATION Animations[AnimationCount];
    } FSeek(p);
} SRS_LAYER<optimize=false, read=Name.Name>;