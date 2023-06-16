#include <stdlib.h>
#include <time.h>
/* main-for comparing if number is positif
 * return (0) always succes
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0)
	{
		printf("is positive")
	}
	else if (n = 0)
	{
		printf("is zero")
	}
	else 
	{
		pirintf("is negative")
	}		

	return (0);
}
