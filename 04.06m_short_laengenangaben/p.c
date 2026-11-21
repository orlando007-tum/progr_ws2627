#include <stdio.h>

int main(void)
{
	short a = 0xffff;

	printf("Länge in Byte:       %zu\n", sizeof a);
	printf("Ohne Längenangabe:   %x\n",   a);
	printf("Mit Längenangabe h:    %hx\n",  a);
	printf("Mit Längenangabe hh:    %hhx\n",  a);
}