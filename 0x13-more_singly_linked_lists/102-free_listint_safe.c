#include "lists.h"

/**
 * free_listint_safe - Frees a linked list.
 *
 * @h: Pointer to a pointer to the first node in the linked list.
 *
 * Return: The number of elements in the freed list.
 */
size_t free_listint_safe(listint_t **h)
{
	size_t count = 0;
	listint_t *current = *h, *temp = NULL;

	while (current != NULL)
	{
		if (current < current->next)
		{
			temp = current->next;
			free(current);
			current = temp;
			count++;
		}
		else
		{
			free(current);
			count++;
			break;
		}
	}

	*h = NULL;

	return count;
}
