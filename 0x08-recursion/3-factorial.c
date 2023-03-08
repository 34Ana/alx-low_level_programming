#include "main.h"
/**
 * factoria - returns the factorial of a given number.
 * @n: the int answer
 * Return: factorial given nr
 */
int factorial(int n)
{
if (n < 0)
return (-1);
if (n == 0)
return (1);
return (n * factorial(n - 1));
}
