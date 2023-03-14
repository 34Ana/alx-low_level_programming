#include <stdlib.h>

/**
 * _strdup -  returns a pointer to a newly allocated space in memory
 * which contains a copy of the string given as a parameter.
 * @str: string tb cp
 * Return: 0
 */
char *_strdup(char *str)
{
char *str_dup;
int len = 0, i;
if (str == NULL)
return (NULL);
while (str[len])
len++;
str_dup = malloc(sizeof(char) * (len + 1));
if (str_dup == NULL)
return (NULL);
for (i = 0; i <= len; i++)
str_dup[i] = str[i];
return (str_dup);
}
