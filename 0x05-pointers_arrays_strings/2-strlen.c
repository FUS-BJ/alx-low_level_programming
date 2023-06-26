#include "main.h"
#include "string.h"
/**
 * _strlen - find how length is a string
 * @s: the string
 * Return: a the length
 */
int _strlen(char *s)
{
	int a;

	a = 0;
	{
	while (s[a] != '\0')
		a++;
}
	return (a);
}
