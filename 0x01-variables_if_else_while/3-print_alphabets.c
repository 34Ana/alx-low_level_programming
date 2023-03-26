#include <stdio.h>
/**
 * main - prints the alphabet in lowercase, and then in uppercase
 * followed by a new line
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
	char upletter = 'A';
	while (upletter <= 'Z')
	{
		putchar(upletter);
		upletter++;
	}
	putchar('\n');
	return (0);
}
