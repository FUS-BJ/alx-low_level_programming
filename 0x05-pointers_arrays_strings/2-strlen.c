#include "main.h"
#include "string.h"
/**
 *
 */
int _strlen(char *s)
{
	size_t length = 0;

	while (*s)
	length++;
	return (length);
}
