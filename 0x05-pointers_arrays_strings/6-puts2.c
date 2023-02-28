#include "main.h"

/**
 * puts2 - prints every other character of a string,
 * starting with the first character, followed by a new line.
 * @str: string.
 * return: 0.
 */

void puts2(char *str)
{
int len = 0; index = 0;
char tmp;
while (s[index++])
len++;
for (index = len - 1; index >= len / 2; index--)
{
tmp = s[index];
s[index] = s[len - index -1];
s[len - index -1] = tmp;
}
}
