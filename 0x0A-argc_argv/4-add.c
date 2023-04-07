#include<stdio.h>
#include"main.h"

/**
 * main - adds positive numbers
 *
 * @argc: the argument count in integer form
 *
 * @argv: the argument vector or array
 *
 * Return: Always 0
*/

int main(int argc, char *argv[])
{
    int i;
    int result = 0;

    for (i = 1; i < argc; i++)
    {
        if (atoi(argv[i]) < 0)
        {
            printf("Error\n");
            return (1);
        }
        result += atoi(argv[i]);
    }
    printf("%d\n", result);
    return (0);
}
