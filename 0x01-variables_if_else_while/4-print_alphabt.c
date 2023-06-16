#include<stdio.h>
/**
 * main - is for printing the alphabet
 * Return: Always 0 (Success)
 */
int main(void)
{
char F;
for (F = 'a'; F <= 'z'; F++)
{
	if (F == 'q' || F == 'e')
	{
	continue;
	}
	putchar(F);
}
putchar('\n');
return (0);
}
