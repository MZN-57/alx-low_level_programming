#include "lists.h"

/**
 * print_listint - elements of a linked list
 * @h: a pointer to the head of the linked list
 *
 * Return: the number of nodes in the list
 */
size_t print_listint(const listint_t *h)
{
	size_t count = 0;

	for (; h != NULL; h = h->next, count++)
		printf("%d\n", h->n);

	return (count);
}
