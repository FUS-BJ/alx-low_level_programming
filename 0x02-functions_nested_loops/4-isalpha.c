#include "main.h"
#include<ctype.h>
/**
 * _isalpha - check if c is alphabetic
 * @c: the charcter to check
 * Return: 1 for a alpha charecter or 0 for anything else
 */
int _isalpha(int c)
{

if (isalpha(c))
{
	return (1);
}
else
{
	return (0);
}
}
