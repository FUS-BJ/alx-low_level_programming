#include "main.h"
/**
 * print_last_digit -print last digit of a number x
 * @r: the number to find last digit of
 * Return: alway 0
 */
int print_last_digit(int r)
{
	int Lastdigit;

	Lastdigit = r % 10;
	_putchar(Lastdigit);
	return (0);
}
