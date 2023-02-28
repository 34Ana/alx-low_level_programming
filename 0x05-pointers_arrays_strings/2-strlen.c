#include <stdio.h>

/**
 *int _strlen - returns the length of a string.
 *Return: nothing
 */
int _strlen(char *s)
{
int length = 0;
while (*s != '\0')
{
length++;
s++;
}
return (length);
}
