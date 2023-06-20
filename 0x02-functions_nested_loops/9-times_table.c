#include "main.h"
/**
 * times_table -print the 9  times table
 */
void times_table(void)
{
	int a;
	int b;
	int c;

	for (a = 0; a <= 9; a++)
{
	_putchar(a);
	for (b = 0; a <= 9; a++)
	{
		_putchar(',');
		_putchar(' ');
		c = a * b;
		if (c <= 9)
		{
			_putchar(' ');
		}
		else
		{
			_putchar(c % 10 + '0');
			_putchar(c / 10 + '0');
		}
	}
	_putchar('\n');
}
}


