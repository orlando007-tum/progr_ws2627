#include <stdio.h>

int main()
{
	printf("Größe in Bit: %ld\n", sizeof(float) * 8 );
	printf("Größe in Bit: %ld\n", sizeof(double) * 8 );
	printf("Größe in Bit: %ld\n", sizeof(long double) * 8 );
}