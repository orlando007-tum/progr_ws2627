#include <stdio.h>

int main()
{
unsigned a=123;

	// Test auf Wortbreite und Initialisierung
	printf("Größe in Bit: %zu\n", sizeof(a) * 8 );	// 32
	printf("Wert von a: %d\n", a);					// 123

	// Test auf Vorzeichen
	a = 0xffffffff;
	long long int b = a; 
	printf("Wert von b: %lld\n", b);	// 4294967295, nicht -1
}