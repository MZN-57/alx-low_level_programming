#include <stdlib.h>
#include "lists.h"

/**
 * list_len - returns the number of elements in a linked list
 * @head: pointer to the list_t list
 *
 * Return: number of elements in the list
 */
size_t list_len(const list_t *head)
{
	size_t element_count;

	for (element_count = 0; head != NULL; head = head->next, element_count++)
		;

	return (element_count);
}
