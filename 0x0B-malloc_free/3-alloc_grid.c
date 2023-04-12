#include "main.h"
#include <stdlib.h>
/**
 * alloc_grid -  loop for grid
 *
 * @width: input
 *
 * @height:  input
 * 
 * Return: pointer to 2 dim. array
 */
int **alloc_grid(int width, int height)
{
	int here;
	int x, y;

	if (width <= 0 || height <= 0)
		return (NULL);

	here = malloc(sizeof(int *) * height);

	if (here == NULL)
		return (NULL);

	for (x = 0; x < height; x++)
	{
		here[x] = malloc(sizeof(int) * width);

		if (here[x] == NULL)
		{
			for (; x >= 0; x--)
				free(here[x]);

			free(here);
			return (NULL);
		}
	}

	for (x = 0; x < height; x++)
	{
		for (y = 0; y < width; y++)
			here[x][y] = 0;
	}

	return (here);
}
