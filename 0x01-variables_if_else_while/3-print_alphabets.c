#include<stdio.h>
/**
 * main - is for printing the alphabet
 * Return: Always 0 (Success)
 */
int main(void)
{
char F;
char R;
for (F = 'a'; F <= 'z'; F++)
{
	putchar(F);
}
for (R = 'A'; R <= 'Z'; R++)
{
	putchar(R);
}
putchar('\n');
return (0);
}
