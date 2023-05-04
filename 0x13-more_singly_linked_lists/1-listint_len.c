#include "lists.h"

/**
 * listint_len - num of elements in a linked list
 * @h: a pointer to the head of the linked list
 *
 * Return: the number of nodes in the list
 */
size_t listint_len(const listint_t *h)
{
	size_t count = 0;

	for (; h != NULL; h = h->next)
		count++;

	return (count);
}
