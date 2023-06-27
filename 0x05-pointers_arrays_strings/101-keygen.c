#include "main.h"
#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - genetrate random numbers
 * Return: always 0
 */
int main(void)
{
	int N;
	srand(time(0));
	N = rand();
	printf("%i\n",N);
	return (0);
}
