#include <stdlib.h>
#include "main.h"

/**
 * count_words - helper function to count the number of words in a string
 * @s: string to evaluate
 *
 * Return: number of words
 */
int count_words(char *s)
{
	int flag, c, w;

	flag = 0;
	w = 0;

	for (c = 0; s[c] != '\0'; c++)
	{
		if (s[c] == ' ')
			flag = 0;
		else if (flag == 0)
		{
			flag = 1;
			w++;
		}
	}

	return (w);
}

/**
 * strtow - splits a string into words
 * @str: string to split
 *
 * Return: pointer to an array of strings (Success)
 * or NULL (Error)
 */
char **strtow(char *str)
{
	char **words_array, *tmp;
	int i, k = 0, len = 0, num_words, c = 0, start, end;

	while (*(str + len))
		len++;
	num_words = count_words(str);
	if (num_words == 0)
		return (NULL);

	words_array = (char **) malloc(sizeof(char *) * (num_words + 1));
	if (words_array == NULL)
		return (NULL);

	for (i = 0; i <= len; i++)
	{
		if (str[i] == ' ' || str[i] == '\0')
		{
			if (c)
			{
				end = i;
				tmp = (char *) malloc(sizeof(char) * (c + 1));
				if (tmp == NULL)
					return (NULL);
				while (start < end)
					*tmp++ = str[start++];
				*tmp = '\0';
				words_array[k] = tmp - c;
				k++;
				c = 0;
			}
		}
		else if (c++ == 0)
			start = i;
	}

	words_array[k] = NULL;

	return (words_array);
}
