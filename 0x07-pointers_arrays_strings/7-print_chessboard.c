#include "main.h"
/**
 * print_chessboard - prints the chessboard
 * @a: 2d array representing the chessboard
 * Return: chessboard
 */
void print_chessboard(char (*a)[8])
{
int row, col;
for (row = 0; row < 8; row++)
{
	for (col - 0; col < 8; col++)
	{
		putchar(a[row][col]);
	}
	putchar('\n');
}
}
