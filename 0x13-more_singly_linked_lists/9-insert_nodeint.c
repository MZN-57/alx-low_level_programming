#include "lists.h"

/**
 * insert_nodeint_at_index - Inserts a new node at
 * a given position in a linked list.
 *
 * @head: Pointer to a pointer to the first node in the list.
 * @idx: Index where the new node is added.
 * @n: Integer value to store in the new node.
 *
 * Return: Pointer to the new node, or NULL if the insertion fails.
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *current;

	if (head == NULL)
		return (NULL);

	current = *head;

	for (unsigned int i = 0; i < idx - 1 && current != NULL; i++)
		current = current->next;

	if (idx == 0 || current == NULL)
		return (add_nodeint(head, n));

	return (add_nodeint(&current->next, n));
}
