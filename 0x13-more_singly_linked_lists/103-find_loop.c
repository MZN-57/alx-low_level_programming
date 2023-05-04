#include "lists.h"

/**
 * find_listint_loop - Finds the loop in a linked list.
 *
 * @head: Pointer to the head of the linked list to search.
 *
 * Return: Address of the node where the loop starts, or NULL.
 */
listint_t *find_listint_loop(listint_t *head)
{
	if (!head)
		return NULL;

	listint_t *slow = head;
	listint_t *fast = head->next;

	while (fast && fast->next)
	{
		if (slow == fast)
		{
			listint_t *ptr1 = head;
			listint_t *ptr2 = slow;

			while (ptr1 != ptr2)
			{
				ptr1 = ptr1->next;
				ptr2 = ptr2->next;
			}

			return ptr1;
		}

		slow = slow->next;
		fast = fast->next->next;
	}

	return NULL;
}
