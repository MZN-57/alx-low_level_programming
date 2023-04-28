#include <stdio.h>
#include "lists.h"

/**
 * print_list - prints all the elements of a linked list
 * @head: pointer to the list_t list to print
 *
 * Return: the number of nodes printed
 */
size_t print_list(const list_t *head)
{
	size_t node_count = 0;

	for (; head != NULL; head = head->next, node_count++)
	{
		if (head->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%u] %s\n", head->len, head->str);
	}

	return (node_count);
}
