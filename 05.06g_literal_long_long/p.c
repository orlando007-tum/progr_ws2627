#include <stdio.h>

int main()
{
	long long int a = 0x75b2d0a5 + 0xfc892401;

	printf("a: %#llx\n", a);	// soll: 0x1723bf4a6
}