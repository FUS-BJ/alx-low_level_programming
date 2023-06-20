#include "main.h"
/**
 * print_to_98 -count from n to 98
 * @n: the numeber to count from
 */
void print_to_98(int n)
{
	int F;

if (n < 98)
{
	for (F = n; n > 98; F++)
{
		_putchar(F + '0');
}
}
else
{
	for (F = n; n > 98; F--)
{
	_putchar(F + '0');
}
}
}
