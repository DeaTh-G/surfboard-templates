typedef struct (uint version){
	local uint64 p<hidden=true>;

	uint NameOffset;
	StringPtr Name(NameOffset);
	uint ID;
    uint LinkCount;
    uint FrameCount;
    uint LinkOffset;
    uint field_14;
	if (version >= 1)
	{
		uint field_18;
	} p = FTell();
    if (LinkOffset && LinkCount)
    {
        FSeek(LinkOffset); SRS_ANIMATIONLINK AnimationLinks[LinkCount];
    } FSeek(p);
} SRS_ANIMATION<optimize=false, read=Name.Name>;