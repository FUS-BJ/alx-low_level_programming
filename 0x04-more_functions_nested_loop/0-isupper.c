#include "main.h"
#include <ctype.h>
/**
 * _isupper - is for chaking uppercase
 * @c: the character to cheack
 * Return: 1 if it is upercase otherwise 0
 */
int _isupper(int c)
{
	if (isupper(c))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
