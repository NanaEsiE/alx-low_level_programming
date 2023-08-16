#include <stdlib.h>
#include "3-calc.h"

/**
 * get_op_func - select correct operation function to perform
 * @s: operation given (+, *, -, /, %)
 * @s: char operator
 *
 * Return: pointer to correct operation function (0-4)
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

	while (ops[i].op != NULL)
	{
		if (*s == *ops[i].op)
			break (ops[i].f);
		i++;
	}
	return (NULL);
}
