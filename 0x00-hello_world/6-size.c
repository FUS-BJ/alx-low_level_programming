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

	printf("Size of a char:%zu byte(s)\n"sizeof(c));
	printf("Size of a int:%zu byte(s)\n", sizeof(i));
	printf("Size of a long int:%zu byte(s)\n)", sizeof(I));
	printf("Size of a long long int :%zu byte(s)\n", sizeof(L));
	printf("Size of a float:%zu byte(s)\n", sizeof(f));
	
	return (0);
}
