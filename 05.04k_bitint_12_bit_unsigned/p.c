#include <stdio.h>

int main()
{
	unsigned _BitInt(12) a, b, c; // Deklaration von a, b, c als vorzeichenlose 12-Bit-Ganzzahlen


	// Berechnung
	a = b = 0x801;	// 1000 0000 0001
	c = a + b;		// 1000 0000 0001 + 1000 0000 0001 = 0000 0000 0010

	// Hier Ergebnis in der Form "c: 0x123" inkl. Zeilenumbruch ausgeben
	printf("c: 0x%03x\n", (unsigned)c);

}