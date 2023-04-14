#include <stdlib.h>
#include "main.h"

/**
 * malloc_checked - Allocates memory using malloc
 * @size: Number of bytes to allocate
 *
 * Return: Pointer to allocated memory
 */
void *malloc_checked(unsigned int size)
{
	void *mem_ptr;

	mem_ptr = malloc(size);

	if (mem_ptr == NULL)
		exit(98);

	return (mem_ptr);
}
