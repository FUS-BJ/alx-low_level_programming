#include<stdio.h>
/**
 * main - print the 16 number in hex
 * Return: Always 0 (Success)
 */
int main(void)
{
	int a;
	int b;

	for (a = '0'; a <= '9'; a++)
{
	putchar(a);
}
for (b = 'a'; b <= 'f'; b++)
{
	putchar(b);
}
putchar('\n');
return (0);
}
