#include "main.h"
/**
 * _sqrt_recursion - returns the natural square root of a number.
 * @n: the number in int form
 * Return: the nr
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0 || n == 1)
		return (n);
	return (_sqrt_helper(n, 1, n));
}
