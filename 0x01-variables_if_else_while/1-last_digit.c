#include <stdlib.h>
#include <time.h>
#include <stdio.h>


/**
 * Main - n will ++a a different n every time
 * outputs Last gigit of(it should be a string)
 * n, is(is what) n>5 - and is greater than 5
 * n==0 and is 0
 * 0<n<6 and is less than 6 and not 0 \n
 *
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if ( n>5 )
	{
	printf( "%d Last digit of n is n and is greater than 5\n", n);
	}
	else if ( n==0 )
	{
	printf( "%d Last digit of n is n and is 0\n", n);
	}
	else ( 0<n<6 )
	{
	printf( "%d Last digit of n is n and is less than 6 and not 0\n", n);
	}

	return (0);
}
