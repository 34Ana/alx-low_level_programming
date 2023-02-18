#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * everytime a loop runs n=random output is negative(n<0)or is zero(n>0)is positive(n>0)int  main(void)
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0)
	{
	printf("%d is positive\n", n);
	}
	else if (n == 0)
	{
	printf("%d is zero\n", n);
	}
	else
	{
	printf("%d is negative\n",i n);
	}
	return (0);
}
