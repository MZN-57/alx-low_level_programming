#include <stdio.h>
/**
 * main - Entery point
 *
 * Return: Aways 0 (Sucess)
 */
int main(void)
{
	int a;

	for (a = 48; a < 58; a++)
	{
		putchar(a);
		if (a != 57)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
