#include<stdio.h>
/**
 * main - is for printing the alphabet
 * Return: Always 0 (Success)
 */
int main(void)
{
	int F;

for (F = 'z'; F >= 'a'; F--)
{
	putchar(F);
}
putchar('\n');
return (0);
}
