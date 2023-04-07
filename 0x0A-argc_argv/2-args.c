#include <stdio.h>
#include "main.h"

/**
 * main - prints all the arguments passed to it
 *
 * @argc: the argument count in integer form
 *
 * @argv: the argument vector or array
 *
 * Return: Always 0
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
