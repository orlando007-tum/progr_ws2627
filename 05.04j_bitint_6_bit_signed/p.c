#include <stdio.h>

int main()
{
	signed  _BitInt(6) a, b, c ; // Deklaration von a, b, c als vorzeichenbehaftete 6-Bit-Ganzzahlen
	

	// Berechnung
	a = b = 16;		// 01 0000
	c = a + b;		// 01 0000 + 01 0000 = 10 0000

	printf("c: %d\n", (int)c); // Hier Ergebnis in der Form "c: 123" inkl. Zeilenumbruch ausgeben
}