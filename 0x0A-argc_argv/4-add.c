#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

/**
 * check_integer - checks if a string is composed entirely of digits
 * @str: string to be checked
 *
 * Return: 1 if the string is an integer, 0 otherwise
 */
int check_integer(char *str)
{
	unsigned int i = 0;

	while (i < strlen(str))
	{
		if (!isdigit(str[i]))
		{
			return (0);
		}

		i++;
	}

	return (1);
}

/**
 * main - adds together valid integers from command line arguments
 * @argc: number of arguments
 * @argv: array of arguments
 *
 * Return: 0 (Success), 1 (Error)
 */
int main(int argc, char **argv)
{
	int i = 1, num, sum = 0;

	while (i < argc)
	{
		if (check_integer(argv[i]))
		{
			num = atoi(argv[i]);
			sum += num;
		}
		else
		{
			printf("Error\n");
			return (1);
		}

		i++;
	}

	printf("%d\n", sum);

	return (0);
}
