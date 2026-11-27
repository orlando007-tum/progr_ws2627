#include <stdio.h>

int main()
{
	printf("sizeof(int):  %zu\n", sizeof(int) );	// 4 => int hat 32 Bit
	printf("sizeof(long): %zu\n", sizeof(long) );	// 8 => long hat 64 Bit

	int a = 0x12345678  * 0x12345678  / 0x12345678;	// BERECHNUNG als 32
													// Bit int => Überlauf
	int b = 0x12345678L * 0x12345678L / 0x12345678L;// BERECHNUNG als 64
													// Bit long => ok
	printf("a: %#x\n", a);	// 0x1 (falsch)
	printf("b: %#x\n", b);	// 0x12345678 (ok)
}