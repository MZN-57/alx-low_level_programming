#include <stdlib.h>
#include "main.h"

/**
 * _memset - Fills memory with a constant byte
 * @s: Memory area to be filled
 * @b: Char to copy
 * @n: Number of times to copy b
 *
 * Return: Pointer to the memory area s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}

	return (s);
}

/**
 * _calloc - Allocates memory for an array
 * @nmemb: Number of elements in the array
 * @size: Size of each element
 *
 * Return: Pointer to allocated memory
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *mem_ptr;

	if (nmemb == 0 || size == 0)
		return (NULL);

	mem_ptr = malloc(size * nmemb);

	if (mem_ptr == NULL)
		return (NULL);

	_memset(mem_ptr, 0, nmemb * size);

	return (mem_ptr);
}
