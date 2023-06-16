#include<stdio.h>
/**
 * main - is for printing the alphabet
 * Return: Always 0 (Success)
 */
int main(void)
{
char F;
char R;
char D;
for (F = 'a'; F <= 'd'; F++)
{
	putchar(F);
}
for (R = 'f'; R <= 'p'; R++)
{
	putchar(R);
}
for (D = 'r'; D <= 'z'; D++)
{
	putchar(D);
}
putchar('\n');
return (0);
}           
