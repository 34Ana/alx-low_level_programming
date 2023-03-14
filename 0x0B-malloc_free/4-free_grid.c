#include <stdlib.h>
/**
 * free_grid -  frees a 2 dimensional grid previously created by your alloc_grid function.
 * @grid: g
 * @height: h
 * Return: 0
 */
void free_grid(int **grid, int height)
{
int i;
if (grid == NULL)
return();
for (i = 0; i < height; i++)
{
free(grid[i]);
}
free(grid);
}
