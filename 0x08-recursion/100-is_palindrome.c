#include <string.h>
/**
 * is_palindrome -  returns 1 if a string is a palindrome and 0 if not.
 * @s: the string
 * Return: 0 || 1
 */
int is_palindrome(char *s)
{
	int len = strlen(s);
	if (len <= 1)
		return (1);
	return ((*s == *(s + len - 1)) && is_palindrome(s + 1));
}
