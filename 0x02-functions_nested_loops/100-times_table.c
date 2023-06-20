#include "main.h"
/**
 * print_times_table -prints the n times table, starting with 0.
 * @n: the number of times table
 */
void print_times_table(int n)
{
	int a;
	int b;
	int num;


	if (n <= 15 && n >= 0)
	{
		for (a = 0; a <= n; a++)
		{
			_putchar(48);
			for (b = 1; b <= n; b++)
			{
				_putchar(',');
				_putchar(' ');

				num = a * b;

				if (num <= 9)
				{
					_putchar(' ');
				}
				if (num <= 99)
				{
					_putchar(' ');
				}
				if (num >= 100)
				{
					_putchar((num / 100) + 48);
					_putchar((num / 10) % 10 + 48);
				} else if (num <= 99 && num >= 10)
					_putchar((num / 10) + 48);
				_putchar((num % 10) + 48);
			}
			_putchar('\n');
		}
}
}
