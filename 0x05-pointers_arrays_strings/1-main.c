#include "main.h"
#include <stdio.h>

/**
 * swap_int - swaps the values of two integers. 
 * @a: Pointer to the first integer.
 * @b: P1-swap.c:7: warning: No description found for parameter or member 'a'
1-swap.c:7: warning: No description found for parameter or member 'b'ointer to the second integer.
 * Return: Always 0.
 */
int main(void)
{
int a;
int b;

a = 98;
b = 42;
printf("a=%d, b=%d\n", a, b);
swap_int(&a, &b);
printf("a=%d, b=%d\n", a, b);
return (0);
}
