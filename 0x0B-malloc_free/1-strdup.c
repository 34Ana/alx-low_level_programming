#include <stdlib.h>

char *_strdup(char *str)
{
    char *str_dup;
    int len = 0, i;

    if (str == NULL)
        return NULL;

    while (str[len])
        len++;

    str_dup = malloc(sizeof(char) * (len + 1));

    if (str_dup == NULL)
        return NULL;

    for (i = 0; i <= len; i++)
        str_dup[i] = str[i];

    return str_dup;
}

