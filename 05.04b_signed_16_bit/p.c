#include <stdio.h>

int main()
{
	signed short a = 5;
	// Test auf Wortbreite und Initialisierung
	printf("Größe in Bit: %zu\n", sizeof(a) * 8 );	// 16
	printf("Wert von a: %hd\n", a);					// 5

	// Test auf Vorzeichen
	a = -1;
	int b = a; 
	printf("Wert von b: %d\n", b);	// -1, nicht 65535
}