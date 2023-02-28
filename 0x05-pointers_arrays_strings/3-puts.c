#include <stdio.h>

/**
 * _puts -  prints a string, followed by a new line, to stdout.
 * @st: prints the string.
 * Return: string @str.
 */
void _puts(char *str)
{
while (*str != '\0')
{
putchar(*str);
str++;
}
putchar('\n');
}
