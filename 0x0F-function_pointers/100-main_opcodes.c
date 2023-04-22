#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints the opcodes of its own main function
 * @argc: the number of arguments
 * @argv: an array of arguments
 *
 * Return: Always 0 (Success)
 **/
int main(int argc, char *argv[])
{
	int num_bytes, i;
	char *main_func;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}

	num_bytes = atoi(argv[1]);

	if (num_bytes < 0)
	{
		printf("Error\n");
		exit(2);
	}

	main_func = (char *)main;

	for (i = 0; i < num_bytes; i++)
	{
		if (i == num_bytes - 1)
		{
			printf("%02hhx\n", main_func[i]);
			break;
		}
		printf("%02hhx ", main_func[i]);
	}

	return (0);
}
