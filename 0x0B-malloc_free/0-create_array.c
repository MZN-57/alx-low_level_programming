#include "main.h"
#include <stdlib.h>
/**
 * create_array - create an array
 *
 * @size: array size
 *
 * @c: assigned char
 *
 * Return: pointer to array, if fail Null
 *
 */
char *create_array(unsigned int size, char c)
{
	char *string1;
	unsigned int j;

	string1 = malloc(sizeof(char) * size);
	if (size == 0 || string1 == NULL)
		return (NULL);

	for (j = 0; j < size; j++)
		string1[j] = c;
	return (string1);
}
