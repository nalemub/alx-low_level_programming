#include "3-calc.h"
#include <stddef.h>
#include <stdio.h>

int (*get_op_func(char *s))(int, int)
{
    int i;
    op_t operators[] = {
        {"+", op_add},
        {"-", op_sub},
        {"*", op_mul},
        {"/", op_div},
        {"%", op_mod},
        {NULL, NULL}
    };
    i = 0;
    while (operators[i].op != NULL)
    {
        
        if (*(operators[i].op) == *s)
            {
                return ((operators[i].f));
            }
            i++;
        
    }
    return (NULL);
}