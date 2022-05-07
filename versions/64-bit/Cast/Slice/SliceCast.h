typedef struct {
	local uint64 p<hidden=true>;
	
    uint Flags;
    float Width;
    float Height;
    SRS_VECTOR2 AnchorPoint;
    SRS_COLOR GradientTopLeft;
    SRS_COLOR GradientBottomLeft;
    SRS_COLOR GradientTopRight;
    SRS_COLOR GradientBottomRight;
	float field_24;
	float field_28;
	short field_2C;
	short field_2E;
	short field_30;
	short field_32;
	short SliceInfoCount;
	short field_36;
	uint SliceInfoOffset;
	uint field_3C;
	uint field_40;
	
	local int i;
	for (i = 0; i < field_2E * 3; i++)
		SRS_SLICE Slice;
	
	p = FTell();
	if (SliceInfoOffset && SliceInfoCount)
	{
        FSeek(SliceInfoOffset); SRS_SLICE_INFO SliceInfo[SliceInfoCount];
	} FSeek(p);
} SRS_SLICE_CAST<optimize=false>;