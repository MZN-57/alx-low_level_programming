#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * _strdup - make the new memory duplicated
 *
 * @str: assigned char
 *
 * Return: 0
 */
char *_strdup(char *str)
{
	char *q;
	int i, j = 0;

	if (str == NULL)
		return (NULL);
	i = 0;
	while (str[i] != '\0')
		i++;

	aaa = malloc(sizeof(char) * (i + 1));

	if (q == NULL)
		return (NULL);

	for (j = 0; str[j]; j++)
		q[j] = str[j];

	return (q);
}
