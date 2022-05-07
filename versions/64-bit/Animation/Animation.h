typedef struct (uint version){
	local uint64 p<hidden=true>;

	uint64 NameOffset;
	StringPtr Name(NameOffset);
	uint ID;
    uint LinkCount;
    uint64 FrameCount;
    uint64 LinkOffset;
    uint64 field_20;
	if (version >= 1)
	{
		uint64 field_28;
	} p = FTell();
    if (LinkOffset && LinkCount)
    {
        FSeek(LinkOffset); SRS_ANIMATIONLINK AnimationLinks[LinkCount];
    } FSeek(p);
} SRS_ANIMATION<optimize=false, read=Name.Name>;