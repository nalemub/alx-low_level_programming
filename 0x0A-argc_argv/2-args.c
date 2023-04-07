#include <stdio.h>
#include "main.h"
#include <stdlib.h>

/**
 * main - prints all the arguments that are passed to it
 * @argc: the argument count in int form
 * @argv: the argument vector or array
 *
 * Return: Always 0.
 */


int main(int argc, char *argv[])
{
    int i = 0;

    while (i < argc)
    {
        printf("%s\n", argv[i]);
        i++;
    }

    return (0);
}
