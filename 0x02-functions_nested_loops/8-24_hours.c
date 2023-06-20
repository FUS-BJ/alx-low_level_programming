#include "main.h"

/**
 * jack_bauer - prints every minute of the day of Jack Bauer
 * Return:
 */

void jack_bauer(void)
{
	char a;
	char b;
	char c;
	char d;

	for (a = 0; a <= 2; a++)
{
	for (b = 0; a <= 9; b++)
	{
	for (c = 0; c <= 6; c++)
	{
	for (d = 0; c <= 9; d++)
	{
		_putchar(d);
	}
	_putchar(c);
	_putchar(':');
	}
	_putchar(b);
	}
	_putchar(a);
	if (a == 2 && b == 4)
		break;
}
}
