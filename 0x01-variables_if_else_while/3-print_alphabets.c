#include <stdio.h>
/**
 * main - Entery point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int lh;

	for (lh = 'a'; lh <= 'z'; lh++)
		putchar(lh);
	for (lh = 'A'; lh <= 'Z'; lh++)
		putchar(lh);
	putchar('\n');
	return (0);
}
