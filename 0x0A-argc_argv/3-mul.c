#include <stdio.h>
#include "main.h"
#include <stdlib.h>

/**
 * A program that multiplies two numbers
 * @argc: the arguement count in int form
 *
 * @argv: the arguement vector or array
 *
 * Return int
 */

int main(int argc, char *argv[])
{
    int result;
    if (argc < 3)
    {
        printf("Error\n");
        return (1);
    }
    result = atoi(argv[1]) * atoi(argv[2]);
    printf("%s\n", result);
    return (0);
}
