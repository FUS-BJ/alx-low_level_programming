#include "main.h"
#include<ctype.h>
/**
 * _islower - check if c is lowercase
 * Return : if c is lowercase 1
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
