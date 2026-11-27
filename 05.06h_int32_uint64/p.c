#include <stdio.h>
#include <stdint.h>

int main()
{
	int32_t  a = INT32_C(0x1234);
	uint64_t b = UINT64_C(0x1234);

	printf("sizeof(a): %zu\n", sizeof(a) );	// 4 => int hat 32 Bit
	printf("sizeof(b): %zu\n", sizeof(b) );	// 8 => long hat 64 Bit
}