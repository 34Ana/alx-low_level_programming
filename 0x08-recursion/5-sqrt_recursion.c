#include "main.h"
#include <stdio.h>
int _sqrt(int n, int i);
/**
 * _sqrt_recursion - returns natural square root of nr
 * @n: the nr
 * Return: the root
 */
int _sqrt_recursion(int n)
{
	return (_sqrt(n, 1));
}
/**
 * _sqrt - calculates the natural root
 * @n: nr
 * @i: iterate nr
 * Return: natural square root
 */
int _sqrt(int n, int i)
{
int sqrt = i * i;
if (sqrt > n)
return (-1);
if (sqrt == n)
return (i);
return (_sqrt(n, i + 1));
}
