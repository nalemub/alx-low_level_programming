#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>
#include "3-calc.h"

int main(int argc, char *argv[])
{
    if (argc < 3)
    {
        printf("Error");
        exit(98);
    }
    if ((argv[2] == '/' && argv[3] == '0') || (argv[2] == '%' && argv[3] == '0'))
    {
        printf("Error");
        exit(100);
    }
    int result;
    int (*func)(int, int);
    func =  get_op_func("argv[2]");
    result = func(atoi(argv[1]),atoi(argv[3]));
    if (result == NULL)
    {
        printf("Error");
        exit(99);
    }
    printf("%i",result);
    printf("\n");
}