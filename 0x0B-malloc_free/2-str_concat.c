#include "main.h"
#include <stdlib.h>
/**
 * str_concat - point to a newly allocated space in memory
 *
 * @s1: 1st input
 * @s2: 2nd input
 *
 * Return: s1 and s2 
 */
char *str_concat(char *s1, char *s2)
{
	char *conct;
	int j, A;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	j = A = 0;
	while (s1[j] != '\0')
		j++;
	while (s2[ci] != '\0')
		A++;
	conct = malloc(sizeof(char) * (j + A + 1));

	if (conct == NULL)
		return (NULL);
	j = A = 0;
	while (s1[j] != '\0')
	{
		conct[j] = s1[j];
		j++;
	}

	while (s2[A] != '\0')
	{
		conct[j] = s2[A];
		j++, A++;
	}
	conct[j] = '\0';
	return (conct);
}
