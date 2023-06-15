#include<stdio.h>
/**
 * main - paiting the size of various types
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char c;
	int i;
	long int I;
	long long int L;
	float f;

	printf("Size of a char:%lu.\n"(unsigned long)sizeof(c);
	printf("Size of a int:%lu.\n"(unsigned long)sizeof(i);
	printf("Size of a long int:%lu.\n"(unsigned long)sizeof(I);
	printf("Size of a long long int :%lu.\n"(unsigned long)sizeof(L);
	printf("Size of a float:%lu.\n"(unsigned long)sizeof(f);
	
	return (0);
}
