#include <stddef.h>
#include <string.h>
#include "3-calc.h"

/**
 * get_op_func - selects the function that matches an operator
 * @s: the operator given as a string
 *
 * Return: pointer to the matching function, or NULL if there is no match
 */
int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};
	int i;

	i = 0;
	while (ops[i].op != NULL && strcmp(ops[i].op, s) != 0)
		i++;
	return (ops[i].f);
}
