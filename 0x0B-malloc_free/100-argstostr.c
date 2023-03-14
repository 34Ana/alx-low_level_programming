#include <stdlib.h>

/**
 * argstostr - concatenates all the arguments of the program
 * @ac: the number of arguments
 * @av: the arguments
 *
 * Return: pointer to the new string, or NULL if it fails
 */
char *argstostr(int ac, char **av)
{
int i, j, k = 0, len = 0;
char *str;
if (ac == 0 || av == NULL)
return (NULL);
/* Calculate the total length of the concatenated string */
for (i = 0; i < ac; i++)
{
for (j = 0; av[i][j] != '\0'; j++)
len++;
len++; /* for the \n */
}
/* Allocate memory for the concatenated string */
str = malloc((len + 1) * sizeof(char));
if (str == NULL)
return (NULL);
/* Copy the arguments into the concatenated string */
for (i = 0; i < ac; i++)
{
for (j = 0; av[i][j] != '\0'; j++)
{
str[k] = av[i][j];
k++;
}
str[k] = '\n';
k++;
}
str[k] = '\0'; /* add the null terminator */
return (str);
}
