#include <stdio.h>

/**
 *_strlen - returns the length of a *s.
 *@s: The string to get the lenght of
 *Return: lenght of @str.
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
