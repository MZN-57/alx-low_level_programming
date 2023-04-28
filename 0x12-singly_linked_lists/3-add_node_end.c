#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node_end - at the end of a linked list
 * @head: to the list_t list
 * @str: string 
 *
 * Return:new element's address.
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_node;
	list_t *temp_node = *head;
	unsigned int str_len = 0;

	while (str[str_len])
		str_len++;

	new_node = malloc(sizeof(list_t));
	if (!new_node)
		return (NULL);

	new_node->str = strdup(str);
	new_node->len = str_len;
	new_node->next = NULL;

	if (*head == NULL)
	{
		*head = new_node;
		return (new_node);
	}

	while (temp_node->next)
		temp_node = temp_node->next;

	temp_node->next = new_node;

	return (new_node);
}
