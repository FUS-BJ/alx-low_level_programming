#include <stdlib.h>
#include <time.h>
#include<stdio.h>
/**
 *main -> assign a random number to the variable n each time it is executed
 *and print the last digit of the number stored in the variable n
 *Return: always 0 (success)
 */
int main(void)
{
	int n;
	int a;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	a = (n % 10);
	if (a > 5)
	{
	printf("the last digit of %d is %d and is greater than 5", n, a);
	}
	else if (a == 0)
	{
	printf("if the last digit of %d is %x and is 0", n, a);
	}
	else
	{
	printf("the last digit of %d is %x and is less than 6 and not 0", n, a);
	}
	return (0);
}
