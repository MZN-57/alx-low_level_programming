#include "lists.h"

/**
 * sum_listint - Calculates the sum of all the data in a listint_t list.
 *
 * @head: Pointer to the first node in the list.
 *
 * Return: The sum of the data in the list.
 */
int sum_listint(listint_t *head)
{
	int sum = 0;

	for (listint_t *current = head; current != NULL; current = current->next)
		sum += current->n;

	return (sum);
}
