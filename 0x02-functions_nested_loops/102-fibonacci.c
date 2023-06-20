#include "main.h"
#include<stdio.h>
/**
 * main -prints the first 50 Fibonacci numbers, starting with 1 and 2
 * Return: alway 0
 */
int main(void)
{
	int F;
	unsigned long a = 0;
	unsigned long b = 1;
	unsigned long sum;

	for (F = 1; F  < 50; F++)
{
	sum = a + b;
	printf("%lu", sum);
	a = b;
	b = sum;
	if (F == 49)
	{
		printf("\n");
	}
	else
	{
		printf(", ");
}
return (0);
}
}
