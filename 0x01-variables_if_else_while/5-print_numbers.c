#include<stdio.h>
/**
 * main - prints single digits numbers
 * Return: always 0 (success)
 */
int main(void)
{
	char a;

	for (a = '0'; a <= '9'; a++)
{
	putchar(a);
}
putchar('\n');
return (0);
}
