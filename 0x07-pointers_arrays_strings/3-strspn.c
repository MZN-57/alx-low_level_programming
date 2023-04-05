#include "main.h"
/**
 * _strspn - Entry point
 *
 * @s: an inputed data
 *
 * @accept: an inputed data
 *
 * Return: Always 0 (Success)
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int m = 0;
	int q;

	while (*s)
	{
		for (q = 0; accept[q]; r++)
		{
			if (*s == accept[q])
			{
				m++;
				break;
			}
			else if (accept[q + 1] == '\0')
				return (m);
		}
		s++;
	}
	return (m);
}
