#include<stdio.h>
#include"main.h"

/**
 * main - multiplies two numbers
 *
 * @argc: the argument count in integer form
 *
 * @argv: the argument vector or array
 *
 * Return: Always 0
 */

int main(int argc, char *argv[])
{
    if (argc < 3)
    {
        printf("Error\n");
        return (1);
    }
    int result = atoi(argv[1]) * atoi(argv[2]);
    printf("%d\n", result);
    return (0);
}
