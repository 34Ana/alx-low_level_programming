#include "main.h"
/**
 * is_prime_number - returns 1 if the input integer is a prime number
 * @n: nr
 * Return: 1
 */
int is_prime_number(int n)
{
if (n < 2)
{
        return (0);
    }
    for (int i = 2; i <= sqrt(n); i++)
    {
        if (n % i == 0)
	{
            return (0);
        }
    }
    return (1);
}
