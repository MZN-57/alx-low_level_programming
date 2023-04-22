#include "function_pointers.h"

/**
 * int_index - returns the index of the first element
 * that satisfies a condition
 * @array: pointer to an integer array
 * @size: size of the array
 * @cmp: pointer to a function that takes an integer as
 * argument and returns an integer
 *
 * Return: index of the first element that satisfies
 * the condition, or -1 if no element satisfies the condition or if size <= 0
 **/
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array == NULL || size <= 0 || cmp == NULL)
		return (-1);

	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]))
			return (i);
	}

	return (-1);
}
