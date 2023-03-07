#include "main.h"
/**
 * _memcpy - copies memory area.
 * @dest: pointer is returned to here.
 * @src: memory area is here
 * @n: the amount of bytes that is copied by the function
 * Return: *dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
char *dest_ptr = dest;
char *src_ptr = src;
while (n--)
{
	*dest_ptr++ = *src_ptr++;
}
return (dest);
}
