#include <stdio.h>

/**
 * swap_int - Swaps the values of two integers.
 * @a: The second integer to be sw.
 * @b: 
 * Return: nothing
 */
void swap_int(int *a, int *b)
{
int temp = *a;
*a = *b;
*b = temp;
}
