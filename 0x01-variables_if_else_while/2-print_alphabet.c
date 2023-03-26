#include <stdio.h>
/**
 * main - prints the alphabet a-z
 * Return: 0
 */
int main(void)
{
char letter = 'a';
while (letter <= 'z')
{
putchar(letter);
letter++;
}
putchar('\n');
return (0);
}
