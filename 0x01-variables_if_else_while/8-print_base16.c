#include<stdio.h>
/**
 * main - print the 16 number in hex
 * return: always 0 (success)
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
