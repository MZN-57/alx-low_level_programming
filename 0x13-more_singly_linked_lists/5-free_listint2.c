#include "lists.h"

/**
 * free_listint2 - Frees a linked list.
 * @head: Pointer to a pointer to the first node in the list.
 *
 * Description: Sets the head to NULL after freeing all nodes.
 */
void free_listint2(listint_t **head)
{
	listint_t *current, *next;

	if (head == NULL)
		return;

	current = *head;

	while (current != NULL)
	{
		next = current->next;
		free(current);
		current = next;
	}

	*head = NULL;
}
