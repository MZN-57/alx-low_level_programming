#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * _strdup - new duplicated memory
 * @original_string: char
 * Return: 0
 *
 */
char *_strdup(char *original_string)
{
	char *new_string;
	int original_length = 0, i = 0;

	if (original_string == NULL)
		return NULL;

	while (original_string[original_length] != '\0')
		original_length++;

	new_string = malloc(sizeof(char) * (original_length + 1));

	if (new_string == NULL)
		return NULL;

	for (i = 0; original_string[i]; i++)
		new_string[i] = original_string[i];

	return new_string;
}
