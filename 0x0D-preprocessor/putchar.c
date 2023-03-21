#include <unistd.h>
/**
 * _putchar - writes the char c to stdout
 * @c: char to print
 * Return: 1, -1 on error
 */
int _purchar(char c)
{return (write(1, &c, 1));
}
