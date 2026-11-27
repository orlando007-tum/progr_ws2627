#include <stdio.h>

int main()
{
	_BitInt(8) b;
	short s;

	b = 6;				// 0110
	b = b + 4;			// 1010 = 0110 + 0100
	s = b;				// 1111 1111 1111 1010 = 1010

	printf("%hd\n", s);	// Ausgabe des Werts -6
}