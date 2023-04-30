#include "3-calc.h"
/**
 * get_op_func - function chooses an operator to work with
 * @s: ponter to character representing the operator
 * Return returns 0 for success
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

    	if (ops[i]->op i= NULL && *(ops[i]->op != *s))
	{
		i++;
		return (ops[i]->f);
	{
}	
