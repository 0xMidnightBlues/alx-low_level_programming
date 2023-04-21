#include "3-calc.h"

/**
 * get_op_func - returns a pointer to the function that 
 * corresponds to the operator given as a parameter
 * @s: operator passed as argument
 *
 * Return: pointer to the function that corresponds to the
 * operator given as a parameter
 */
int (*get_op_func(char *s))(int, int)
{
	op_t operations[] = {
	{ "+", op_add },
	{ "-", op_sub },
	{ "*", op_mul },
	{ "/", op_div },
	{ "%", op_mod },
	{ NULL, NULL }
	};
	int i = 0;

	while (operations[i].op)
	{
		if (strcmp(s, operations[i].op) == 0)
			return (operations[i].f);	
		i++;
	}
	return (NULL);
}
