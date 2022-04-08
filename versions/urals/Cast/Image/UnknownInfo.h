typedef struct {
	local uint64 p<hidden=true>;
	
	uint NameOffset; 
	StringPtr Name(NameOffset);
	uint offset_04;
	float field_08;
	float field_0C;
	float field_10;
	uint field_14;
	uint field_18;
	uint field_1C;
	uint field_20; p = FTell();
} SRS_UNKNOWN_INFO<optimize=false>;
