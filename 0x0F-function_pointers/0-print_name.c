#include "function_pointers.h"
#include <stdio.h>

/**
 * print_name - prints a name using a function pointer
 * @name: pointer to a string
 * @print_func: pointer to a function that prints a string
 *
 * Return: nothing
 **/
void print_name(char *name, void (*print_func)(char *))
{
	if (name == NULL || print_func == NULL)
		return;

	print_func(name);
}
