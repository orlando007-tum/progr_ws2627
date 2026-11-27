#include <stdio.h>

int main()
{
	char a;

	printf("Größe a in Bit: %zu\n", sizeof(a) * 8 );
	short b;

	printf("Größe b in Bit: %zu\n", sizeof(b) * 8 );
	int c;

	printf("Größe c in Bit: %zu\n", sizeof(c) * 8 );
	signed d;

	printf("Größe d in Bit: %zu\n", sizeof(d) * 8 );
	unsigned e;

	printf("Größe e in Bit: %zu\n", sizeof(e) * 8 );
	long f;

	printf("Größe f in Bit: %zu\n", sizeof(f) * 8 );
	long long g;

	printf("Größe g in Bit: %zu\n", sizeof(g) * 8 );
}