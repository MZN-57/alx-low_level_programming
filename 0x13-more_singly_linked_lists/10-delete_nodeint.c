#include "lists.h"

/**
 * delete_nodeint_at_index - Deletes a node in
 * a linked list at a certain index.
 *
 * @head: Pointer to a pointer to the first node in the list.
 * @index: Index of the node to delete.
 *
 * Return: 1 (Success), or -1 (Fail).
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	if (head == NULL || *head == NULL)
		return (-1);

	if (index == 0)
	{
		listint_t *temp = *head;
		*head = (*head)->next;
		free(temp);
		return (1);
	}

	listint_t *current = *head;

	for (unsigned int i = 0; current != NULL && i < index - 1; i++)
		current = current->next;

	if (current == NULL || current->next == NULL)
		return (-1);

	listint_t *temp = current->next;
	current->next = temp->next;
	free(temp);

	return (1);
}
