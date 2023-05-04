/**
 * looped_listint_len -  number of unique nodes
 *
 *
 * @head: Pointer to the listint_t to check.
 *
 * Return: If the list is not looped - 0.
 * Otherwise - unique nodes
 */
size_t looped_listint_len(const listint_t *head)
{
	const listint_t *slow = head, *fast = head;

	while (fast && fast->next)
	{
		slow = slow->next;
		fast = fast->next->next;

		if (slow == fast)
		{
			size_t count = 1;
			slow = slow->next;

			while (slow != fast)
			{
				count++;
				slow = slow->next;
			}

			return count;
		}
	}

	return 0;
}

/**
 * print_listint_safe - listint_t list safely.
 *
 * @head: Pointer to head of listint_t list.
 *
 * Return: The number of nodes in the list.
 */
size_t print_listint_safe(const listint_t *head)
{
	const listint_t *current = head;
	size_t count = 0;

	while (current)
	{
		printf("[%p] %d\n", (void *)current, current->n);

		current = current->next;
		count++;

		if (current && current >= current->next)
		{
			printf("-> [%p] %d\n", (void *)current->next, current->next->n);
			count++;
			break;
		}
	}

	return count;
}
