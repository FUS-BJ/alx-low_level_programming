#include "main.h"
#include<ctype.h>
/**
 * _islower - check if c is lowercase
 * @c: the charcter to check
 * Return: 1 for lowercase charecter or 0 for anything else
 */
int _islower(int c)
{

if (islower(c))
{
	return (1);
}
else
{
	return (0);
}
}
