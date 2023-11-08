#include "main.h"
/**
 * alloc_grid - returns a pointer to a 2 dimensional array of integers.
 * @width: the width of the grid.
 * @height:the height of the grid.
 * Return: a pointer to a 2 dimensional array of integers and NULL otherwise.
 */
int **alloc_grid(int width, int height)
{
	int **matrice;
	int i = 0, j = 0;

	if (width <= 0 || height <= 0)
		return (NULL);
	matrice = (int **)malloc(height * sizeof(int *));
	if (matrice == NULL)
		return (NULL);
	for (; i < height; i++)
	{
		matrice[i] = (int *)malloc(sizeof(int) * width);
		if (matrice[i] == NULL)
		{
			for (j = 0; j < i; j++)
				free(matrice[j]);
			free(matrice);
			return (NULL);
		}
		for (j = 0; j < width; j++)
		{
			matrice[i][j] = 0;
		}
	}
	return (matrice);
}
