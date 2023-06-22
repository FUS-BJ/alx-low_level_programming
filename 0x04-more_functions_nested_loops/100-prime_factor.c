#include <stdio.h>
#include <math.h>

/**
 * main - finds and prints the largest number
 * Return: Always 0 (Success)
 */
int main(void)
{
	long int n;
	long int M;
	long int a;

	n = 612852475143;
	M = -1;

	while (n % 2 == 0)
	{
		M = 2;
		n /= 2;
	}

	for (a = 3; a <= sqrt(n); a = a + 2)
	{
		while (n % a == 0)
		{
			M = a;
			n = n / a;
		}
	}

	if (n > 2)
		M = n;

	printf("%ld\n", M);

	return (0);
}
