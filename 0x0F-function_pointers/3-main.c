#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>
#include "3-calc.h"

int main(int argc, char *argv[])
{
    int result;
    char *pointertoop;
    int (*func)(int, int);
    if (argc < 3)
    {
        printf("Error\n");
        exit(98);
    }
    if ((argv[2][0] == '/' && argv[3][0] == '0') || (argv[2][0] == '%' && argv[3][0] == '0'))
    {
        printf("Error\n");
        exit(100);
    }
    pointertoop = &argv[2][0];
    func =  get_op_func(pointertoop);
    result = func(atoi(argv[1]),atoi(argv[3]));
    if (argv[2][1] != NULL)
    {
        printf("Error\n");
        exit(99);
    }
    printf("%i",result);
    printf("\n");
    return (0);
}