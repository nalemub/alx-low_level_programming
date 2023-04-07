#include <stdio.h>
#include "main.h"
#include <stdlib.h>

/**
 * main - multiplies two numbers
 * @argc: the argument count in int form
 * @argv: the argument vector or array
 *
 * Return: Always 0.
 */
int main(int argc, int *argv[])
{
    int temp;
    int temp2;
    int result;
    if (argc < 3)
    {
        printf("Error\n");
        return (1);
    }

    temp = atoi(argv[1]);
    temp2 = atoi(argv[2]);
    result = temp * temp2;
    printf("%d\n", result);

    return (0);
}
