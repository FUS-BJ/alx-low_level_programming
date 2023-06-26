#include "main.h"

/**
 * swap_int - swap betwen var
 * @a: variable number 1
 * @b: variable niumber 2
 */
void swap_int(int *a, int *b)
{
	int G = *a;
	*a = *b;
	*b = G;
}
