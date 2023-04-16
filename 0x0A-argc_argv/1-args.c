#include <stdio.h>

/**
 * main - prints the number of arguments passed to the program
 * @argc: the number of command-line arguments
 * @argv: an array of strings containing the command-line arguments
 *
 * Return: Always 0 (Success)
 */
int main(int argc, char **argv)
{
    /* Ignore the first argument (the program name) */
    (void)argv;

    /* Print the number of arguments (excluding the program name) */
    printf("%d\n", argc - 1);

    return (0);
}
