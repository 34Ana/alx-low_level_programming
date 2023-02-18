#include <stdlib.h>
#include <time.h>
#include <stdio.h>


/**
 * Main function - n will ++a a different n every time
 * outputs Last gigit of(it should be a string)
 * n, is(is what) n>5 - and is greater than 5
 * n==0 and is 0
 * 0<n<6 and is less than 6 and not 0 \n
 * Return = Always(Sucess)
 *
 */
int main(void)
{
	int n, lastd;
	srand(time(0));

	n = rand() - RAND_MAX / 2;
	lastd = n % 10;

	if (lastd > 5)
	{
	printf("Last digit of %d is %d and is greater than 5\n", n, lastd);
	}
	else if (lastd == 0)
	{
	printf("Last digit of %d is %d and is 0\n", n, lastd);
	}
	else if (lastd > 0 && lastd < 6)
	{
	printf("Last digit of %d is %d and is less than 6 and not 0\n", n, lastd);
	}

	return (0);
}
