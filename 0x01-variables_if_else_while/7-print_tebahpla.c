#include <stdio.h>
/**
 * main - Entery point
 *
 * Return: Aways 0 (Sucess)
 */
int main(void)
{
	char lh;

	for (lh = 'z'; lh >= 'a'; lh--)
	{
		putchar(lh);
	}
	putchar('\n');
	return (0);
}
