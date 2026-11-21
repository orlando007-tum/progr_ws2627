#include <stdio.h>

int main(void)
{
	char a = 0xff;

	printf("Ohne Längenangabe: %x\n",  a);
	printf("Mit Längenangabe: %hhx \n", a);
}