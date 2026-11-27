#include <complex.h>

int main()
{
	double _Complex z;

	z = 1.0 + _Complex_I * 2.0;	// Alternativ: z = 1.0 + I * 2.0
	z = 1.0 + I * 2.0;
}