#include <stdio.h>

int main()
{
	float _Complex x;
	double _Complex y;
	long double _Complex z;

	printf("sizeof(x): %ld Byte\n", sizeof(x));	// 8 Byte (2x4)
	printf("sizeof(y): %ld Byte\n", sizeof(y));	// 16 Byte (2x8)
	printf("sizeof(z): %ld Byte\n", sizeof(z));	// Laptop: 16 Byte (2x8)
												// Eikon:  32 Byte (2x16)
												
}
