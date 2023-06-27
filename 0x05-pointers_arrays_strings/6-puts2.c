#include "main.h"
/**
 * puts2 - t prints every other character of a string,
 * @str: string
 */
void puts2(char *str)
{
	int L = 0;
	int t = 0;
	char *y = str;
	int a;

	while (*y != '\0')
	{
	y++;
	L++;
	}
	t = L - 1;
	for (a = 0; a <= t; a++)
	{
		if (a % 2 == 0)
	{
		_putchar(str[a]);
	}
	}
	_putchar ('\n');
		}
