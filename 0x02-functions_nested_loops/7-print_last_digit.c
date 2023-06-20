#include "main.h"
/**
 * print_last_digit -print last digit of a number x
 * @x: the number to find last digit of
 * Return: Lastdigit
 */
int print_last_digit(int x)
{
	int Lastdigit = x % 10;

	if (Lastdigit < 0)
	{
		Lastdigit *= -1;
	}
	_putchar(Lastdigit + '0');
	return (Lastdigit);
}
