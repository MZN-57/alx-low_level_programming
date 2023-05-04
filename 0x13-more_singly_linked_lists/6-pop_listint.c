#include "lists.h"

/**
 * pop_listint - Deletes the head node of a linked list.
 *
 * @head: Pointer to a pointer to the first node in the list.
 *
 * Return: The integer value stored in the deleted node, or 0 if the list is empty.
 */
int pop_listint(listint_t **head)
{
	int num;
	listint_t *temp;

	if (head == NULL || *head == NULL)
		return (0);

	num = (*head)->n; /* Get value of head node */
	temp = (*head)->next; /* Store next node in temp variable */
	free(*head); /* Free head node */
	*head = temp; /* Set head pointer to next node */

	return (num);
}
