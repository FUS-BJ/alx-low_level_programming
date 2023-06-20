#include "main.h"
/**
 * print_alphabet - print the alphabet
 * Return:void
 */
void print_alphabet(void)
{
	char C;
	int a;

	int A = 10;

for (a = 0; a <= A; a++)
{
	for (C = 'a'; C <= 'z'; C++)
{
	_putchar(C);
}
}
_putchar('\n');
}

