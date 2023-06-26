#include "main.h"
/**
 * print_rev - print a string in revers
 * @s: string
 */
void print_rev(char *s)
{
	int rev = 0;
	int z;

	while (*s != '\0')
	{
		rev++;
		s++;
	}
	s--;
	for (z = rev; z > 0; z--)
	{
		_putchar(*s);
		s--;
	}
	_putchar('\n');
}
