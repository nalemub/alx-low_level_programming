#include <stdio.h>
#include "main.h"
#include <stdlib.h>

/**
 * main - adds positive numbers
 * @argc: the argument count in int form
 * @argv: the argument vector or array
 *
 * Return: Always 0.
 */
int main(int argc, char *argv[])
{
    int i;
    int result = 0;

    for (i = 1; i <= argc; i++)
    {
        if (sizeof(argv[i]) != sizeof(int))
        {
            printf("Error\n");
            return (1);
        }
        result += atoi(argv[i]);
    }

    printf("%i\n", result);

    return (0);
}
