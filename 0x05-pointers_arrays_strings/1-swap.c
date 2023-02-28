#include <stdio.h>

/**
 * swap_int - Swaps the value of two integers *a and *b
 * Return : Always 0
 */
void swap_int(int *a, int *b)
{
int temp = *a;
*a = *b;
*b = temp;
}
