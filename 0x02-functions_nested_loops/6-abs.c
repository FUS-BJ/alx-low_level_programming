#include "main.h"
#include <stdlib.h>
/**
 * _abs -computes the absolute value of an integer
 * @n: is the number to compute it integer
 * return: absolute value of number  or zero
 */
int _abs(int n)
{
	if (n < 0)
	{
		int abs_I;

		abs_I = n * -1;
		return (abs_I);
	}
return (n);
}
