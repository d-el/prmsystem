typedef enum {
	value1 = 1,
	value2 = 2,
	value3 = 3,
	value4 = 4,
	value5 = 5,
	value6 = 6,
	value7 = 7,
	value8 = 8,
} maskdvalue_type;

typedef enum {
	mask0 = 1,
	mask1 = 2,
	mask2 = 8,
	mask3 = 16,
	mask4 = 32,
	mask5 = 64,
} maskdmask_type;

// Debug
extern Val<bool> d0;
extern Val<char> d1;
extern Val<int8_t> d2;
extern Val<uint8_t> d3;
extern Val<int16_t> d4;
extern Val<uint16_t> d5;
extern Val<int32_t> d6;
extern Val<uint32_t> d7;
extern Val<float> d8;
