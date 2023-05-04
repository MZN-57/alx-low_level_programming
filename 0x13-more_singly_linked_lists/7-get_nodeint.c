#include "llists.h"

/**
 * get_nodeint_at_index - Returns the node at a certain index in a linked list.
 *
 * @head: Pointer to the first node in the list.
 * @index: Index of the node to return.
 *
 * Return: Pointer to the node at the specified index, or NULL if it doesn't exist.
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *current = head;

	for (unsigned int i = 0; current != NULL && i < index; i++)
		current = current->next;

	return (current);
}
