#include "3-calc.h"
#include <stdlib.h>

/**
 * get_op_func - selects the correct function to perform
 *               the operation requested by the user
 * @operator: the operator passed as an argument
 *
 * Return: a pointer to the function corresponding
 *         to the operator given as a parameter
 **/
int (*get_op_func(char *operator))(int, int)
{
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL},
	};

	int i = 0;

	while (ops[i].op != NULL && *(ops[i].op) != *operator)
	{
		i++;
	}

	return (ops[i].f);
}
