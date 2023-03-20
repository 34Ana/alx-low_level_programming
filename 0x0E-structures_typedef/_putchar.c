#include <unistd.h> 
/**
 * _putchar - writes char c to stdout
 * @c: char to print
 * Return: 1, or -1 on err
 */
int_putchar(char c)
{
	return (write(1, &c, 1));
}
