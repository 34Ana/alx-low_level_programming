#include <string.h>

int comparator(char *s, int n1, int n2);
int is_palindrome(char *s);

/**
 * is_palindrome - returns 1 if a string is a palindrome and 0 if not.
 * @s: the string
 * Return: 0 || 1
 */
int is_palindrome(char *s)
{
int len = strlen(s);
if (len == 0)
return (0);
else
return (comparator(s, 0, len - 1));
}

/**
 * comparator - compares each character of the string
 * @s: the string
 * @n1: smallest iterator
 * @n2: largest iterator
 * Return: .
 */
int comparator(char *s, int n1, int n2)
{
if (*(s + n1) == *(s + n2))
{
if (n1 == n2 || n1 == n2 + 1)
return (1);
return (comparator(s, n1 + 1, n2 - 1));
}
return (0);
}
