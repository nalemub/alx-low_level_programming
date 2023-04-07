#include <stdio.h>
#include "main.h"
#include <stdlib.h>

/**
 * main - prints the number of arguments
 * @argc: the argument count in int form
 * @argv: the argument vector or array
 * @i: placeholder variable
 *
 * Return: Always 0.
 */


int main(int argc, char *argv[])
{
    int i = argc-1;
    printf("%i\n", argc);
    sizeof(argv[i]);

    return (0);
}
