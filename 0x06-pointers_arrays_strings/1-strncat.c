#include "main.h"
#include <stdio.h>
/**
 * _strncat - concatenates two strings.
 * @dest: 1st string.
 * @n: input value.
 * @src: 2nd string.
 * Return: 0
 */
char *_strncat(char *dest, char *src, int n)
{
int i;
int j;
i = 0;
while (dest[i] != '\0')
{
	i++;
}
j = 0;
while (j < n && src[j] != '\0')
{
	dest[i] = src[j];
	i++;
	j++;
}
dest[i] = '\0';
return (dest);
}
