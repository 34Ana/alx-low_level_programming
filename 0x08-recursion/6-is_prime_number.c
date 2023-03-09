#include <stdio.h>
#include "main.h"

int check_prime(int n, int i);

/**
 * is_prime_number - returns 1 if the input integer is a prime number
 * @n: number to check for primality
 * Return: 1 if prime, 0 otherwise
 */
int is_prime_number(int n)
{
        return check_prime(n, 2);
}

/**
 * check_prime - check if a number is prime
 * @n: number to check
 * @i: iteration times
 * Return: 1 if prime, 0 otherwise
 */
int check_prime(int n, int i)
{
        if (n <= 1)
                return 0;
        if (i * i > n)
                return 1;
        if (n % i == 0)
                return 0;
        return check_prime(n, i + 1);
}
