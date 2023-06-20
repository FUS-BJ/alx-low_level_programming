#include "main.h"
/**
 * times_table -print the 9  times table
 */
void times_table(void)
{
	int a;
	int b;
	int num;

	for (a = 0; a <= 9; a++)
{
	_putchar('0');
	for (b = 0; b <= 9; b++)
	{
		_putchar(',');
		_putchar(' ');
		num = a * b;
		if (num <= 9)
		{
			_putchar(' ');
			_putchar(num + '0');
		}
		else
		{
			_putchar((num / 10) + '0');
			_putchar((num % 10) + '0');
		}
	}
	_putchar('\n');
}
}


