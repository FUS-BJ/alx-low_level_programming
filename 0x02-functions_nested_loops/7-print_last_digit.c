#include "main.h"
/**
 * print_last_digit -print last digit of a number x
 * @x: the number to find last digit of
 * Return: alway 0
 */
int print_last_digit(int x)
{
	int Lastdigit;

	Lastdigit = x % 10;
	_putchar(Lastdigit);
	return (0);
}
