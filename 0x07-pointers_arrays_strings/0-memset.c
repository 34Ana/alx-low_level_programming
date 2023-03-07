#include "main.h"

/**
 * _memset -  fills memory with a constant byte.
 * @n: n amount of bytes get filled by the function
 * @s: location of n bytes are pointed by s
 * @b: constant byte
 * Returns: *s
 */
char *_memset(char *s, char b, unsigned int n)
{
char *p = s;
while (n--)
{
	*p++ = b;
}
return s;
}
