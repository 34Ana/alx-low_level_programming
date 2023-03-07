#include "main.h"
/**
 * _strstr - locates a substring.
 * @haystack: main string where needle resides
 * @needle: substring in haystack
 * Return: pointer to the beginning of located substring
 */
char *_strstr(char *haystack, char *needle)
{
nt i, j;
if (*needle == '\0')
	return (haystack);
for (i = 0; haystack[i] != '\0'; i++)
{
	if (haystack[i] == needle[0])
	{
		for (j = 0; needle[j] != '\0'; j++)
		{
			if (haystack[i + j] != needle[j])
				break;
		}
		if (needle[j] == '\0')
			return (&haystack[i]);
	}
}
return (NULL);
}
