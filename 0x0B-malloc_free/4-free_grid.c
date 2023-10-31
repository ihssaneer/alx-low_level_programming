#include "main.h"
/**
 * free_grid - frees a 2 dimensional grid previously created.
 * @grid: the pointer to a pointer to a grid.
 * @height:the height of the grid.
 * Return: a pointer to a 2 dimensional array of integers and NULL otherwise.
 */
void free_grid(int **grid, int height)
{
	int i = 0;

	if (grid == NULL || !height)
		return;
	for (; i < height; i++)
	{
		free(grid[i]);
	}
	free(grid);
}
