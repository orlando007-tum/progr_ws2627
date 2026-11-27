#include <stdio.h>

int main()
{
	// Definition von a und b hier angeben
_Decimal64 a, b;

	// Berechnung hier angeben
a= 1.1DD;
b= a*a;


	// Überprüfung
	if(b == 1.21DD) 	printf("Passt: 1.1 * 1.1  = 1.21\n");
	else 				printf("Passt nicht: 1.1 * 1.1 != 1.21\n");
}