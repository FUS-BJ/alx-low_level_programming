#include "main.h"

/**
 * print_triangle - prints a triangle, followed by a new line
 * @size: size of the triangle
 */
void print_triangle(int size)
{
	if (size <= 0)
	{
		_putchar('\n');
	} else
	{
		int f, h;

		for (f = 1; f <= size; f++)
		{
			for (h = i; h < size; h++)
			{
				_putchar(' ');
			}

			for (h = 1; h <= i; h++)
			{
				_putchar('#');
			}

			_putchar('\n');
		}
	}
}
