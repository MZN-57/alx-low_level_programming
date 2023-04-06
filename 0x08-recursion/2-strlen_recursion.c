#include "main.h"
/**
 * _strlen_recursion - prints the length of a string.
 *
 * @s: the measured string.
 *
 * Return: The string legnth.
 */
int _strlen_recursion(char *s)
{
	int count = 0;

	if (*s)
	{
		count++;
		count += _strlen_recursion(s + 1);
	}

	return (count);
}
