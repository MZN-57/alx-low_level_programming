#include <stdio.h>

/**
 * _atoi - converts a string to an integer
 * @str: string to be converted
 *
 * Return: the int converted from the string
 */
int _atoi(char *str)
{
	int i = 0, digit, sign = 1, n = 0, len = 0;

	while (str[len] != '\0')
		len++;

	while (i < len)
	{
		if (str[i] == '-')
			sign = -1;

		if (str[i] >= '0' && str[i] <= '9')
		{
			digit = str[i] - '0';
			n = n * 10 + digit * sign;

			if (str[i + 1] < '0' || str[i + 1] > '9')
				break;
		}

		i++;
	}

	return (n);
}

/**
 * main - multiplies two numbers
 * @argc: the number of command-line arguments
 * @argv: an array of strings containing the command-line arguments
 *
 * Return: 0 (Success), 1 (Error)
 */
int main(int argc, char **argv)
{
	int result, num1, num2;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}

	num1 = _atoi(argv[1]);
	num2 = _atoi(argv[2]);

	result = num1 * num2;
	printf("%d\n", result);

	return (0);
}
