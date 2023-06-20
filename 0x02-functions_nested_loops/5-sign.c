#include "main.h"
/**
 * print_sign -print the sign of a number
 * @n: is the number to check
 * Return: 1 if n is positif and 0 if n is 0
 * and -1 if n is negative
 */
int print_sign(int n)
{
	int i = -1;

if (n < 0)
{
	_putchar('-');
	return (i);
}
else if (n == 0)
{
	_putchar('0');
	return (0);
}
else
{
	_putchar('+');
	return (1);
}
}
