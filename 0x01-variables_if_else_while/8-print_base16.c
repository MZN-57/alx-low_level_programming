#include <stdio.h>
/**
 * main - Entery point
 *
 * Return: Aways 0 (Sucess)
 */
int main(void)
{
	int n;
	char lh;

	for (n = 48; n < 58; n++)
	{
		putchar(n);
	}
	for (lh = 'a'; lh <= 'f'; lh++)
	{
		putchar(lh);
	}
	putchar('\n');
	return (0);
}
