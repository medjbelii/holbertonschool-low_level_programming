#include <stdlib.h>
#include <stdio.h>
#include "3-calc.h"

/**
* get_op_func - adittion
* @s: the operator
* Return: pointer to corresponding function.
*/

int (*get_op_func(char *s))(int a, int b)
{
	op_t ops[] = {
	{"+", op_add},
	{"-", op_sub},
	{"*", op_mul},
	{"/", op_div},
	{"%", op_mod},
	{NULL, NULL}
	};
	int i = 0;

	while (ops[i].op)
	{
		if (*(ops[i].op) == *s)
		return (ops[i].f);
		i++;
	}
	return (NULL);
}
